within Mostar.Models.Qizb_capacitive;
model fmu
  Data2Model.Qizb_capacitive.init
                          machineData
    annotation (Placement(transformation(extent={{-108,76},{-88,96}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,
            -18},{-148,-8}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,-2},
            {-148,8}})));
  inner OpenIPSL.Electrical.SystemBase SysData(        fn=50, S_b=30000000)
                                                              annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(
    angle_0=machineData.data.A_0,
    P_0=0,
    v_0=machineData.data.V_0)       annotation (Placement(transformation(extent={{-104,44},
            {-84,64}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen1(
    Tpd0=machineData.data.Tpd0,
    Tppd0=machineData.data.Tppd0,
    Tppq0=machineData.data.Tppq0,
    D=machineData.data.D,
    Xd=machineData.data.Xd,
    Xq=machineData.data.Xq,
    Xpd=machineData.data.Xpd,
    Xppd=machineData.data.Xppd,
    Xppq=machineData.data.Xppq,
    Xl=machineData.data.Xl,
    S10=machineData.data.S10,
    S12=machineData.data.S12,
    R_a=machineData.data.R_a,
    H=machineData.data.H,
    angle_0=machineData.data.A_0,
    Q_0=machineData.data.Q_0,
    P_0=machineData.data.P_0,
    v_0=machineData.data.V_0,
    M_b=30000000)
    annotation (Placement(transformation(extent={{-148,42},{-124,66}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_R=machineData.data.T_R,
    T_C1=machineData.data.T_C1,
    T_B1=machineData.data.T_B1,
    T_C2=machineData.data.T_C2,
    T_B2=machineData.data.T_B2,
    K_R=machineData.data.K_R,
    V_RMAX=machineData.data.V_RMAX,
    V_RMIN=machineData.data.V_RMIN,
    T_1=machineData.data.T_1_AVR,
    K_C=machineData.data.K_C,
    T_UC1=machineData.data.T_UC1,
    T_UB1=machineData.data.T_UB1,
    T_UC2=machineData.data.T_UC2,
    T_UB2=machineData.data.T_UB2,
    T_OC1=machineData.data.T_OC1,
    T_OB1=machineData.data.T_OB1,
    T_OC2=machineData.data.T_OC2,
    T_OB2=machineData.data.T_OB2)
                     annotation (Placement(transformation(extent={{-126,16},{-146,
            34}})));
  OpenIPSL.Electrical.Buses.Bus bus1(P_0=0)
                                    annotation (Placement(transformation(extent={{-56,44},
            {-36,64}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-76,44},{-56,64}})));
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
    annotation (Placement(transformation(extent={{-82,10},{-102,16}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    v_0=machineData.data.V_0)
                 annotation (Placement(transformation(extent={{-84,20},{-72,32}})));
  Modelica.Blocks.Interfaces.RealOutput Efd annotation (Placement(
        transformation(extent={{-42,10},{-34,18}}),iconTransformation(extent={{42,
            66},{50,74}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{-14,44},{-34,64}})));
  Modelica.Blocks.Math.Add3 add3_1 annotation (Placement(transformation(extent={{-84,-12},
            {-92,-4}})));
  Modelica.Blocks.Sources.Step step1(startTime=8.45, height=-0.76) annotation (Placement(transformation(extent={{-66,-20},
            {-74,-12}})));
  Modelica.Blocks.Sources.Step step(startTime(displayUnit="s") = 8.44, height=0.7)
                                                                 annotation (Placement(transformation(extent={{-64,-8},
            {-72,0}})));
equation

      Efd = sT5B.EFD;

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-124,54},{-94,54}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-150.4,60},{-158,60},
          {-158,70},{-116,70},{-116,60},{-122.8,60}},     color={0,0,127}));
  connect(Gen1.EFD0,sT5B. EFD0) annotation (Line(points={{-122.8,48},{-118,48},{
          -118,21.4},{-125,21.4}},color={0,0,127}));
  connect(sT5B.XADIFD,Gen1. XADIFD) annotation (Line(points={{-144,15.1},{-124,15.1},
          {-124,24},{-122.8,24},{-122.8,43.2}},   color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-46,54},{-57,54}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-75,54},{-94,54}},  color={0,0,255}));
  connect(pSS2B.V_S1,Gen1. ETERM) annotation (Line(points={{-81,14.2},{-74,14.2},
          {-74,14},{-64,14},{-64,50.4},{-122.8,50.4}}, color={0,0,127}));
  connect(pSS2B.V_S2,Gen1. ETERM) annotation (Line(points={{-81,11.8},{-74,11.8},
          {-74,12},{-64,12},{-64,50.4},{-122.8,50.4}}, color={0,0,127}));
  connect(constantLoad.p, bus.p)
    annotation (Line(points={{-78,32},{-78,54},{-94,54}}, color={0,0,255}));
  connect(sT5B.EFD, Gen1.EFD) annotation (Line(points={{-147,25},{-156,25},{-156,
          48},{-150.4,48}}, color={0,0,127}));
  connect(sT5B.VOEL, const2.y) annotation (Line(points={{-136,15.1},{-132,15.1},
          {-132,2},{-147.5,2},{-147.5,3}},
                                     color={0,0,127}));
  connect(const1.y, sT5B.VUEL) annotation (Line(points={{-147.5,-13},{-132,-13},
          {-132,15.1}}, color={0,0,127}));
  connect(bus1.p, infiniteBus.p)
    annotation (Line(points={{-46,54},{-34,54}}, color={0,0,255}));
  connect(step1.y, add3_1.u3) annotation (Line(points={{-74.4,-16},{-78,-16},{
          -78,-11.2},{-83.2,-11.2}}, color={0,0,127}));
  connect(add3_1.u2, step.y) annotation (Line(points={{-83.2,-8},{-78,-8},{-78,
          -4},{-72.4,-4}}, color={0,0,127}));
  connect(add3_1.u1, Gen1.ETERM) annotation (Line(points={{-83.2,-4.8},{-83.2,
          -4},{-82,-4},{-82,50.4},{-122.8,50.4}}, color={0,0,127}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-125,28.6},{-114,
          28.6},{-114,13},{-103,13}},     color={0,0,127}));
  connect(add3_1.y, sT5B.ECOMP) annotation (Line(points={{-92.4,-8},{-110,-8},{-110,
          25},{-125,25}},      color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},
            {0,100}})),                                          Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},{0,100}})),
    experiment(
      StopTime=20,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end fmu;
