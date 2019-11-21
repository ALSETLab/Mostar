n = 2;
referencedata = {'AVR_MR_Ifmax_short2.mat'};
model = {'Ifmax.mdl'};
fmu = {'Ifmax.fmu'};

%% ==========Reference data settings==========

% Create a rapidSettings (optional but recommended - will work with just a structure)
rapidSettings=RaPIdClass();

%Output data
rapidSettings.experimentData.pathToReferenceData = 'AVR_MR_Ifmax_short2.mat'; %Data file name
rapidSettings.experimentData.expressionReferenceTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionReferenceData = 'signal'; %Data variable name

%Input data
rapidSettings.experimentData.pathToInData = 'AVR_MR_Ifmax_short2.mat';
rapidSettings.experimentData.expressionInDataTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionInData = 'signal_in'; %Data variable name

%% ==========Experiment settings==========
%General settings 
rapidSettings.experimentSettings.tf = 70; %Simulation length
rapidSettings.experimentSettings.ts = 0.05; %Sampling time
rapidSettings.experimentSettings.t_fitness_start = 0; %Start calculating fintess function after t_fintess_start
rapidSettings.experimentSettings.timeOut = 500; %Seconds before simulation timeout
rapidSettings.experimentSettings.integrationMethod = 'ode23s'; %Solver selection
rapidSettings.experimentSettings.solverMode = 'Simulink';
rapidSettings.experimentSettings.optimizationAlgorithm = 'pso'; % %Selection of optimization algorithm
rapidSettings.experimentSettings.maxIterations = 1000; %Maximum number of estimation iterations
rapidSettings.experimentSettings.verbose = 1; %Can trigger more data for debugging
rapidSettings.experimentSettings.saveHist = 0; %Don't save history

%Model related settings
rapidSettings.experimentSettings.pathToSimulinkModel = 'Mostar.mdl'; %Simulink model file name
rapidSettings.experimentSettings.pathToFMUModel = 'Ifmax.fmu'; %FMU file name
rapidSettings.experimentSettings.modelName = 'Mostar'; %Simulink model name
rapidSettings.experimentSettings.blockName = 'Mostar/FMUme'; %FMU name
rapidSettings.experimentSettings.scopeName = 'simout'; %Result sink name
rapidSettings.experimentSettings.displayMode = 'Show';


% %Estimation parameter settings
x=19;
p_0 =[0.638725     0.017637/(10.5^2/30)      2.48769     0.5760927     0.7374009      1.643226      1.610766     0.3053918      13.18433      4.996813     0.9492813 ...
      0.3781603      16.90188      5.998681        119.82      2.169126      54.04706      167.4166      27.39111]; %Maximum values of parameters
p_min = [0.01,0.000001,1,0.1,0.01,0.1,0.1,0.1,1,0.1,0.1,0.01,...
         0.1,0.01,0.1,0.01,1,1,1];%Minimum values of parameters
p_max =[2,0.1,15,2,1,2,2,2,20,10,10,1,...
        30,30,500,10,200,200,200]; %Maximum values of parameters

rapidSettings.experimentSettings.p_0 = p_0(1:x);
rapidSettings.experimentSettings.p_min = p_min(1:x);
rapidSettings.experimentSettings.p_max = p_max(1:x);

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
              'machineData.data.T_R','machineData.data.T_C1','machineData.data.T_B1','machineData.data.T_C2','machineData.data.T_B2','machineData.data.K_R','machineData.data.T_1','machineData.data.K_C','machineData.data.T_UC1','machineData.data.T_UB1'};

rapidSettings.parameterNames = parameters(1:x);
rapidSettings.fmuInputNames = {'Vim','Vreal'}; %Input variable names
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


