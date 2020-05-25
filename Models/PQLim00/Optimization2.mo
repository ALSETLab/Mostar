within Mostar.Models.PQLim00;
function Optimization2
  import Optimization;

/* This function needs Optimization library 2.2.3 or higher */

    input Boolean interactive=true annotation(Dialog(tab="Advanced"));
    output Boolean runOK annotation(Dialog(tab="Advanced", group="Output"));
protected
    Optimization.Internal.Version.V22.ModelOptimizationSetup setup=
      Optimization.Internal.Version.V22.ModelOptimizationSetup(
    modelName="Mostar.Models.PQLim00.Model",
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
          Value=9.9291948971494843,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_C1",
          active=true,
          Value=8.5674174449124099,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_B1",
          active=true,
          Value=11.6620887505340907,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_C2",
          active=true,
          Value=9.9633766709393878,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_B2",
          active=true,
          Value=9.0978453274735998,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_w1",
          active=true,
          Value=17.293685672146907,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_w2",
          active=true,
          Value=14.793383343884146,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_6",
          active=true,
          Value=0.06329498306223655,
          scaleToBounds=false,
          min=0.0,
          max=0.1,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_w3",
          active=true,
          Value=15.645189523366456,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_w4",
          active=true,
          Value=0.05063859396673608,
          scaleToBounds=false,
          min=0.0,
          max=0.1,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_7",
          active=true,
          Value=12.195535946819499,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.K_S2",
          active=true,
          Value=0.38454201108267716,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit=""),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.K_S3",
          active=true,
          Value=0.9710227520866531,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit=""),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_8",
          active=true,
          Value=1.4406068832060386,
          scaleToBounds=false,
          min=0.0,
          max=3.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.T_9",
          active=true,
          Value=0.5999990167096249,
          scaleToBounds=false,
          min=0.0,
          max=1.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.V22.TunerParameter(
          name="machineData.data.K_S1",
          active=true,
          Value=19.751205891139065,
          scaleToBounds=false,
          min=0.0,
          max=30.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="1")},
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
          OptTol=0.0001,
          maxEval=10,
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
          startTime=0.0,
          stopTime=30,
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
    annotation(__Dymola_interactive=true, __Dymola_Commands(file=
          "Mostar/Plot_Power.mos" "Plot_Power"));
end Optimization2;