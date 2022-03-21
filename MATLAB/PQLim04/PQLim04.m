%% ==========Reference data settings==========

% Create a rapidSettings (optional but recommended - will work with just a structure)
rapidSettings=RaPIdClass();

%Output data
rapidSettings.experimentData.pathToReferenceData = 'PQLim4_simulation.mat'; %Data file name
rapidSettings.experimentData.expressionReferenceTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionReferenceData = 'Efd'; %Data variable name

%Input data
rapidSettings.experimentData.pathToInData = 'PQLim4_simulation.mat';
rapidSettings.experimentData.expressionInDataTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionInData = 'signal_in'; %Data variable name

%% ==========Experiment settings==========
%General settings 
rapidSettings.experimentSettings.tf = 7.5; %Simulation length
rapidSettings.experimentSettings.ts = 0.005; %Sampling time
rapidSettings.experimentSettings.t_fitness_start = 0; %Start calculating fintess function after t_fintess_start
rapidSettings.experimentSettings.timeOut = 500; %Seconds before simulation timeout
rapidSettings.experimentSettings.integrationMethod = 'ode45'; %Solver selection
rapidSettings.experimentSettings.solverMode = 'Simulink';
rapidSettings.experimentSettings.optimizationAlgorithm = 'pso'; % %Selection of optimization algorithm
rapidSettings.experimentSettings.maxIterations = 100; %Maximum number of estimation iterations
rapidSettings.experimentSettings.verbose = 1; %Can trigger more data for debugging
rapidSettings.experimentSettings.saveHist = 0; %Don't save history

%Model related settings
rapidSettings.experimentSettings.pathToSimulinkModel = 'Mostar_Efd2020a.slx'; %Simulink model file name
rapidSettings.experimentSettings.pathToFMUModel = 'fmu_AVR.fmu'; %FMU file name
rapidSettings.experimentSettings.modelName = 'Mostar_Efd2020a'; %Simulink model name
rapidSettings.experimentSettings.blockName = 'Mostar_Efd2020a/fmu_AVR'; %FMU name
rapidSettings.experimentSettings.scopeName = 'simout'; %Result sink name
rapidSettings.experimentSettings.displayMode = 'Show';


% %Estimation parameter settings
x=13;
y = 20;
p_0 =[1.7216     0.201002      9.84703      1.97195     0.563883      1.87382      1.46865      1.01967      13.1416       8.8876      2.06749     0.401413...
      0.01 2 20 0.02 0.005 500 0.005 1  4.35 -3.825]; %Maximum values of parameters

p_min = [0.01,0.0001,1,0.1,0.01,0.1,0.1,0.1,1,0.1,0.1,0.01,...
        0.005, 1.5,15,0.01,0.005,300,0.005,0.75,1e-4,-5];%Minimum values of parameters
p_max =[2,0.5,15,2,1,2,2,2,20,10,10,1,...
       0.025, 2.5,25,0.05,0.01,600,0.01,1.5,6,0]; %Maximum values of parameters

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
rapidSettings.fmuInputNames = {'V','Ifd'}; %Input variable names
rapidSettings.fmuOutputNames = {'Efd'}; %Output variable names

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



