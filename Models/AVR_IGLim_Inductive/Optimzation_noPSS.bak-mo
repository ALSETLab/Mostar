within Mostar.Models.AVR_IGLim_Inductive;
function Optimzation_noPSS
  import Optimization;

/* This function needs Optimization library 2.2.3 or higher */

    input Boolean interactive=true annotation(Dialog(tab="Advanced"));
    output Boolean runOK annotation(Dialog(tab="Advanced", group="Output"));
protected
    Optimization.Internal.Version.V22.ModelOptimizationSetup setup=
    Optimization.Internal.Version.V22.ModelOptimizationSetup(
    modelName="Mostar.Models.AVR_IGLim_Inductive.Model",
    plotScript="",
    saveSetup=true,
    saveSetupFilename="OptimizationLastRunModel.mo",
    convertSetup=false,
    askForTunerReUse=true,
    tuner=Optimization.Internal.Version.V22.Tuner(
        UseTunerMatrixForDiscreteValues=false,
        tunerParameters={Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_R",
          active=true,
          Value=0.575562549359689,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_C1",
          active=true,
          Value=1.071137,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_B1",
          active=true,
          Value=10.7561,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_C2",
          active=true,
          Value=3.414283,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_B2",
          active=true,
          Value=1.701033,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s")},
        tunerMatrix=fill(
          0.0,
          0,
          18)),
   criteria={Optimization.Internal.Version.V22.Criterion(
        name="feedback.y",
        active=false,
        usage=Optimization.Internal.Version.V22.Types.CriterionUsage.Minimize,
        demand=1.0,
        unit="1"),Optimization.Internal.Version.V22.Criterion(
        name="feedback1.y",
        active=true,
        usage=Optimization.Internal.Version.V22.Types.CriterionUsage.Minimize,
        demand=1.0,
        unit="1"),Optimization.Internal.Version.V22.Criterion(
        name="Efd_error.y",
        active=true,
        usage=Optimization.Internal.Version.V22.Types.CriterionUsage.Minimize,
        demand=1.0,
        unit="1"),Optimization.Internal.Version.V22.Criterion(
        name="Ifd_error.y",
        active=true,
        usage=Optimization.Internal.Version.V22.Types.CriterionUsage.Minimize,
        demand=1.0,
        unit="1")},
    preferences=Optimization.Internal.Version.V22.Preferences(
        optimizationOptions=
          Optimization.Internal.Version.V22.OptimizationOptions(
          method=Optimization.Internal.Version.V22.Types.OptimizationMethod.ga,
          ObjectiveFunctionType=Optimization.Internal.Version.V22.Types.ObjectiveFunctionType.SumAbs,
          OptTol=1E-09,
          maxEval=100,
          GridBlock=50,
          evalBestFinal=true,
          saveBest=true,
          saveHistory=true,
          listFilename="OptimizationLog.log",
          listOn=true,
          listOnline=true,
          listIncrement=100,
          numberOfShownDigits=3,
          onPlace=true,
          listTuners=true,
          GaPopSize=10,
          GaNGen=100),
        simulationOptions=
          Optimization.Internal.Version.V22.SimulationOptions(
          startTime=10.0,
          stopTime=38,
          outputInterval=0.0,
          numberOfIntervals=5000,
          integrationMethod=Optimization.Internal.Version.V22.Types.IntegrationMethod.Dassl,
          integrationTolerance=0.001,
          fixedStepSize=0.0,
          autoLoadResults=true,
          useDsFinal=true,
          translateModel=false,
          setCriteriaSimulationFailed=true,
          CriteriaSimulationFailedValue=1000000.0,
          simulationMode=Optimization.Internal.Version.V22.Types.SimulationMode.Single,
          parallelizationMode=Optimization.Internal.Version.V22.Types.ParallelizationMode.None,
          numberOfThreads=0,
          copyFiles=fill("", 0)),
        sensitivityOptions=
          Optimization.Internal.Version.V22.SensitivityOptions(
          TypeOfSensitivityComputation=Optimization.Internal.Version.V22.Types.SensitivityMethod.ExternalDifferencesSymmetric,
          automaticSensitivityTolerance=true,
          sensitivityTolerance=1E-06)));
algorithm
    runOK := Optimization.Tasks.ModelOptimization.run22(setup, interactive);
end Optimzation_noPSS;
