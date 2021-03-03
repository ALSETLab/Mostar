%% ==========Reference data settings==========

% Create a rapidSettings (optional but recommended - will work with just a structure)
rapidSettings=RaPIdClass();

%Output data
rapidSettings.experimentData.pathToReferenceData = 'IG_Lim_Inductive.mat'; %Data file name
rapidSettings.experimentData.expressionReferenceTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionReferenceData = 'signal'; %Data variable name

%Input data
rapidSettings.experimentData.pathToInData = '';
rapidSettings.experimentData.expressionInDataTime = ''; %Time variable name
rapidSettings.experimentData.expressionInData = ''; %Data variable name

%% ==========Experiment settings==========
%General settings 
rapidSettings.experimentSettings.tf = 6; %Simulation length
rapidSettings.experimentSettings.ts = 0.005; %Sampling time
rapidSettings.experimentSettings.t_fitness_start = 1.25; %Start calculating fintess function after t_fintess_start
rapidSettings.experimentSettings.timeOut = 500; %Seconds before simulation timeout
rapidSettings.experimentSettings.integrationMethod = 'ode45'; %Solver selection
rapidSettings.experimentSettings.solverMode = 'Simulink';
rapidSettings.experimentSettings.optimizationAlgorithm = 'pso'; % %Selection of optimization algorithm
rapidSettings.experimentSettings.maxIterations = 1000; %Maximum number of estimation iterations
rapidSettings.experimentSettings.verbose = 1; %Can trigger more data for debugging
rapidSettings.experimentSettings.saveHist = 0; %Don't save history

%Model related settings
rapidSettings.experimentSettings.pathToSimulinkModel = 'Mostar.mdl'; %Simulink model file name
rapidSettings.experimentSettings.pathToFMUModel = 'fmu.fmu'; %FMU file name
rapidSettings.experimentSettings.modelName = 'Mostar'; %Simulink model name
rapidSettings.experimentSettings.blockName = 'Mostar/fmu'; %FMU name
rapidSettings.experimentSettings.scopeName = 'simout'; %Result sink name
rapidSettings.experimentSettings.displayMode = 'Show';


% %Estimation parameter settings
x=13;
y = 18;
p_0 =[1.7216     0.201002      9.84703      1.97195     0.563883      1.87382      1.46865      1.01967      13.1416       8.8876      2.06749     0.401413...
      0.5      1.071137      3.414283       1.701033      358.6086    10        -10]; %Maximum values of parameters
p_min = [0.01,0.0001,1,0.1,0.01,0.1,0.1,0.1,1,0.1,0.1,0.01,...
         0, 0.5,3,1,1,300,1e-6,1e-4,-11];%Minimum values of parameters
p_max =[2,0.5,15,2,1,2,2,2,20,10,10,1,...
        1, 1.5,15,5,2,500,0.5,11,0]; %Maximum values of parameters

rapidSettings.experimentSettings.p_0 = p_0(x:y);
rapidSettings.experimentSettings.p_min = p_min(x:y);
rapidSettings.experimentSettings.p_max = p_max(x:y);

%Fitness function settings
rapidSettings.experimentSettings.cost_type = 1; %Fitness function selection
rapidSettings.experimentSettings.objective_weights = [1,1,1]; %Weights of the output signals for fitness function

%% ==========Optimization Algorithm settings==========
switch lower(rapidSettings.experimentSettings.optimizationAlgorithm) % use lower to add robustness
    case 'pso'
        rapidSettings.psoSettings.w = 0.25; %Particle inertia weight
        rapidSettings.psoSettings.self_coeff = 0.25; %Self recognition coefficient
        rapidSettings.psoSettings.social_coeff = 0.25; %Social coefficient
        rapidSettings.psoSettings.limit = 0.25; %Iteration limit
        rapidSettings.psoSettings.nRandMin = 25; %Minimum number of random particles 
        rapidSettings.psoSettings.nb_particles = 50; %Number of particles
        rapidSettings.psoSettings.fitnessStopRatio = 1e-2; %Fitness stop ratio
        rapidSettings.psoSettings.kick_multiplier = 0.002; %Kick multiplier
        rapidSettings.psoSettings.method = 'PSO';
end
switch lower(rapidSettings.experimentSettings.optimizationAlgorithm) % use lower to add robustness
    case 'fmincon'
       rapidSettings.fminconSettings = 'optimset(''FinDiffRelStep'',1e-12)';
end

%% ==========FMU parameters, inputs and outputs==========

parameters = {'machineData.data.Xd','machineData.data.R_a','machineData.data.H','machineData.data.Xpd','machineData.data.D','machineData.data.Xq','machineData.data.Xppd','machineData.data.Xppq','machineData.data.Tpd0','machineData.data.Tppd0','machineData.data.Tppq0','machineData.data.Xl',...
              'machineData.data.T_R','machineData.data.T_C1','machineData.data.T_B1','machineData.data.T_C2','machineData.data.T_B2','machineData.data.K_R','machineData.data.T_1','machineData.data.K_C','machineData.data.V_RMAX','machineData.data.V_RMIN'};

rapidSettings.parameterNames = parameters(x:y);
rapidSettings.fmuInputNames = {}; %Input variable names
rapidSettings.fmuOutputNames = {'Pout','Qout'}; %Output variable names

%% ==========Running the computation==========

%Opening simulink model
open_system(rapidSettings.experimentSettings.pathToSimulinkModel); %Opening the simulink model

pause(1); %Waiting one second for scope to initialize
%%
% Create the object which carries out the work
rapidObject=Rapid(rapidSettings);
%Starting the estimation process
[sol, hist] = rapidObject.runIdentification();
sprintf('Vector of estimated parameters is: %s',mat2str(sol,3)) 



