%% ==========Reference data settings==========

% Create a rapidSettings (optional but recommended - will work with just a structure)
rapidSettings=RaPIdClass();

%Output data
rapidSettings.experimentData.pathToReferenceData = 'PSS_ON.mat'; %Data file name
rapidSettings.experimentData.expressionReferenceTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionReferenceData = 'signal'; %Data variable name

%Input data
rapidSettings.experimentData.pathToInData = 'PSS_ON.mat';
rapidSettings.experimentData.expressionInDataTime = 'time'; %Time variable name
rapidSettings.experimentData.expressionInData = 'signal_in'; %Data variable name

%% ==========Experiment settings==========
%General settings 
rapidSettings.experimentSettings.tf = 16.5; %Simulation length
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
rapidSettings.experimentSettings.pathToSimulinkModel = 'Mostar.slx'; %Simulink model file name
rapidSettings.experimentSettings.pathToFMUModel = 'fmu.fmu'; %FMU file name
rapidSettings.experimentSettings.modelName = 'Mostar'; %Simulink model name
rapidSettings.experimentSettings.blockName = 'Mostar/fmu'; %FMU name
rapidSettings.experimentSettings.scopeName = 'simout'; %Result sink name
rapidSettings.experimentSettings.displayMode = 'Show';


% %Estimation parameter settings
x=1;
y=17;

p_0 =[0.2983    5.3757    0.0049    1.7817    2.7628   23.8306    2.8201    8.3397    0.7341...
    0.0918    0.0928    0.2457    0.1118    0.2457    0.0340...
      0.8 -0.8 1.25 -1.25 0.1 -0.1]; %Maximum values of parameters

p_min = [1  1  0.001   1   1  1   1   0.1  0.1  ...
        0.1   0.01   0.1   0.01    0.1    0.1    0.005    0.005...
        0.1 -1 1 -2 0.05 -0.15];%Minimum values of parameters
p_max = [3  3  0.03  3   3  3   8   0.75  3  ...
      1   0.5   0.5   0.1    0.5    0.25    0.1    0.1...
      1 -0 2 -0.5 0.5 -1]; %Maximum values of parameters

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
parameters = {'machineData.data.T_w1','machineData.data.T_w2','machineData.data.T_6','machineData.data.T_w3','machineData.data.T_w3','machineData.data.T_7','machineData.data.K_S1','machineData.data.K_S2','machineData.data.K_S3',...
              'machineData.data.T_8','machineData.data.T_9','machineData.data.T_1','machineData.data.T_2','machineData.data.T_3','machineData.data.T_4','machineData.data.T_10','machineData.data.T_11',...
              'machineData.data.V_S1MAX','machineData.data.V_S1MIN','machineData.data.V_S2MAX','machineData.data.V_S2MIN','machineData.data.V_STMAX','machineData.data.V_STMIN'};

rapidSettings.parameterNames = parameters(x:y);
rapidSettings.fmuInputNames = {'w','V'}; %Input variable names
rapidSettings.fmuOutputNames = {'V_PSS'}; %Output variable names

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



