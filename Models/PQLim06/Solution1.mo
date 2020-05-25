within Mostar.Models.PQLim06;
record Solution1
  extends Optimization.Internal.Version.Current.ModelOptimizationSetup(
    modelName="Mostar.Models.PQLim06.Model",
    plotScript="",
    saveSetup=true,
    saveSetupFilename="OptimizationLastRunModel.mo",
    convertSetup=false,
    askForTunerReUse=true,
    tuner=Optimization.Internal.Version.Current.Tuner(
        UseTunerMatrixForDiscreteValues=false,
        tunerParameters={Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.K_C",
          active=true,
          Value=9.99882029494769,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="1"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_R",
          active=true,
          Value=7.8415877051523415,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_C1",
          active=true,
          Value=2.7057630341174206,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_B1",
          active=true,
          Value=4.413208026554166,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_C2",
          active=true,
          Value=1.7354687297818918,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_B2",
          active=true,
          Value=9.292557298191968,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.K_R",
          active=true,
          Value=537.2276115118975,
          scaleToBounds=false,
          min=100.0,
          max=1000.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="1"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_w1",
          active=true,
          Value=4.1237868522248675,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_w2",
          active=true,
          Value=19.345663187450405,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_6",
          active=true,
          Value=0.05937862418376978,
          scaleToBounds=false,
          min=0.0,
          max=0.1,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_w3",
          active=true,
          Value=17.11650431431484,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_w4",
          active=true,
          Value=0.053514896371677306,
          scaleToBounds=false,
          min=0.0,
          max=0.1,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_7",
          active=true,
          Value=17.88815462589505,
          scaleToBounds=false,
          min=0.0,
          max=20.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.K_S2",
          active=true,
          Value=7.575868983434768,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit=""),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.K_S3",
          active=true,
          Value=6.64005478330753,
          scaleToBounds=false,
          min=0.0,
          max=10.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit=""),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_8",
          active=true,
          Value=2.190459972216414,
          scaleToBounds=false,
          min=0.0,
          max=3.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.T_9",
          active=true,
          Value=0.9953437807377418,
          scaleToBounds=false,
          min=0.0,
          max=1.0,
          equidistant=0,
          discreteValues=fill(0.0, 0),
          unit="s"),Optimization.Internal.Version.Current.TunerParameter(
          name="machineData.data.K_S1",
          active=true,
          Value=7.729082117751941,
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
    criteria={Optimization.Internal.Version.Current.Criterion(
        name="feedback.y",
        active=true,
        usage=Optimization.Internal.Version.Current.Types.CriterionUsage.Minimize,
        demand=1.0,
        unit="1"),Optimization.Internal.Version.Current.Criterion(
        name="feedback1.y",
        active=true,
        usage=Optimization.Internal.Version.Current.Types.CriterionUsage.Minimize,
        demand=0.5,
        unit="1")},
    preferences=Optimization.Internal.Version.Current.Preferences(
        optimizationOptions=
          Optimization.Internal.Version.Current.OptimizationOptions(
          method=Optimization.Internal.Version.Current.Types.OptimizationMethod.ga,
          ObjectiveFunctionType=Optimization.Internal.Version.Current.Types.ObjectiveFunctionType.SumAbs,
          OptTol=0.0001,
          maxEval=10,
          GridBlock=50,
          evalBestFinal=false,
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
          Optimization.Internal.Version.Current.SimulationOptions(
          startTime=48.0,
          stopTime=65.0,
          outputInterval=0.0,
          numberOfIntervals=5000,
          integrationMethod=Optimization.Internal.Version.Current.Types.IntegrationMethod.Dassl,
          integrationTolerance=0.001,
          fixedStepSize=0.0,
          autoLoadResults=true,
          useDsFinal=true,
          translateModel=false,
          setCriteriaSimulationFailed=true,
          CriteriaSimulationFailedValue=1000000.0,
          simulationMode=Optimization.Internal.Version.Current.Types.SimulationMode.Single,
          parallelizationMode=Optimization.Internal.Version.Current.Types.ParallelizationMode.None,
          numberOfThreads=0,
          copyFiles=fill("", 0)),
        sensitivityOptions=
          Optimization.Internal.Version.Current.SensitivityOptions(
          TypeOfSensitivityComputation=Optimization.Internal.Version.Current.Types.SensitivityMethod.ExternalDifferencesSymmetric,
          automaticSensitivityTolerance=true,
          sensitivityTolerance=1E-06)));
end Solution1;