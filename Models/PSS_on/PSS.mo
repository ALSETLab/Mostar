within Mostar.Models.PSS_on;
model PSS
  Data2Model.PSS_on.init  machineData
    annotation (Placement(transformation(extent={{-92,76},{-72,96}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  Modelica.Blocks.Interfaces.RealInput V_S1 "PSS input signal 1"
    annotation (Placement(transformation(extent={{-140,60},{-100,100}})));
  Modelica.Blocks.Interfaces.RealOutput VOTHSG1
                                               "PSS output"
    annotation (Placement(transformation(extent={{-24,50},{-4,70}})));
  Modelica.Blocks.Interfaces.RealInput V_S2 "PSS input signal 2"
    annotation (Placement(transformation(extent={{-140,30},{-100,70}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(
    T_w1=machineData.data.T_w1,
    T_w2=machineData.data.T_w2,
    T_6=machineData.data.T_6,
    T_w3=machineData.data.T_w3,
    T_w4=machineData.data.T_w4,
    T_7=machineData.data.T_7,
    K_S2=machineData.data.K_S2,
    K_S3=machineData.data.K_S3,
    T_8=machineData.data.T_8,
    T_9=machineData.data.T_9,
    K_S1=machineData.data.K_S1,
    T_1=machineData.data.T_1,
    T_2=machineData.data.T_2,
    T_3=machineData.data.T_3,
    T_4=machineData.data.T_4,
    T_10=machineData.data.T_10,
    T_11=machineData.data.T_11,
    V_S1MAX=machineData.data.V_S1MAX,
    V_S1MIN=machineData.data.V_S1MIN,
    V_S2MAX=machineData.data.V_S2MAX,
    V_S2MIN=machineData.data.V_S2MIN,
    V_STMAX=machineData.data.V_STMAX,
    V_STMIN=machineData.data.V_STMIN,
    M=machineData.data.M,
    N=machineData.data.N)
    annotation (Placement(transformation(extent={{-86,52},{-52,68}})));
equation

  connect(pSS2B.V_S1, V_S1) annotation (Line(points={{-87.7,63.2},{-96,63.2},{
          -96,80},{-120,80}}, color={0,0,127}));
  connect(pSS2B.V_S2, V_S2) annotation (Line(points={{-87.7,56.8},{-94,56.8},{
          -94,50},{-120,50}}, color={0,0,127}));
  connect(pSS2B.VOTHSG, VOTHSG1)
    annotation (Line(points={{-50.3,60},{-14,60}},    color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-120,40},
            {0,100}})),                                          Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-120,40},{0,100}})),
    experiment(
      StopTime=25,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end PSS;
