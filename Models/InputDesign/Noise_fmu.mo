within Mostar.Models.InputDesign;
model Noise_fmu
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{10,84},{18,92}}),    iconTransformation(
          extent={{10,84},{18,92}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{26,84},{34,92}})));
  Data2Model.PQLim04.pso_gen
                          machineData
    annotation (Placement(transformation(extent={{-108,78},{-88,98}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,80},
            {-4,100}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-92,36},
            {-72,56}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-144,
            -28},{-134,-18}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-144,
            -12},{-134,-2}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen1(
    v_0=machineData.data.V_0,
    M_b=30000000,
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
    P_0=machineData.data.P_0)
    annotation (Placement(transformation(extent={{-136,34},{-112,58}})));
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
                     annotation (Placement(transformation(extent={{-114,8},{
            -134,26}})));
  OpenIPSL.Electrical.Buses.Bus bus1
                                    annotation (Placement(transformation(extent={{-48,36},
            {-28,56}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-64,36},{-44,56}})));
  Modelica.Blocks.Math.Add  add3_1 annotation (Placement(transformation(extent={{-62,-44},
            {-70,-36}})));
  Modelica.Blocks.Sources.Step step1(
    offset=0,
    startTime=4.135,
    height=0.028)                                                  annotation (Placement(transformation(extent={{-28,-42},
            {-38,-32}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    PQBRAK=0.7)  annotation (Placement(transformation(extent={{-76,20},{-64,32}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{6,36},{-14,56}})));
  Modelica.Blocks.Math.Add add(k1=1)
                               annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={-127,-53})));
  inner Modelica.Blocks.Noise.GlobalSeed globalSeed
    annotation (Placement(transformation(extent={{-140,70},{-120,90}})));
  Modelica.Blocks.Math.Add  add3_2 annotation (Placement(transformation(extent={{-86,-44},
            {-94,-36}})));
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
    annotation (Placement(transformation(extent={{-56,0},{-76,6}})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=Gen1.SPEED)
    annotation (Placement(transformation(extent={{12,10},{-8,30}})));
  Modelica.Blocks.Sources.RealExpression realExpression1(y=add.y)
    annotation (Placement(transformation(extent={{-168,-8},{-148,12}})));
  Modelica.Blocks.Sources.RealExpression realExpression2(y=Gen1.XADIFD)
    annotation (Placement(transformation(extent={{-166,-84},{-146,-64}})));
  Modelica.Blocks.Sources.RealExpression realExpression3(y=Gen1.ETERM)
    annotation (Placement(transformation(extent={{-18,-34},{-38,-14}})));
  Modelica.Blocks.Math.Add  add3_3 annotation (Placement(transformation(extent={{-18,8},
            {-26,16}})));
  Modelica.Blocks.Sources.RealExpression realExpression4(y=Gen1.PELEC)
    annotation (Placement(transformation(extent={{-18,-18},{-38,2}})));
  Modelica.Blocks.Interfaces.RealInput r1
               "Connector of Real input signal 1"
    annotation (Placement(transformation(extent={{-192,-70},{-152,-30}})));
  Modelica.Blocks.Interfaces.RealInput r2
               "Connector of Real input signal 2"
    annotation (Placement(transformation(extent={{54,-80},{14,-40}})));
  Modelica.Blocks.Interfaces.RealInput r3
               "Connector of Real input signal 2"
    annotation (Placement(transformation(extent={{54,-20},{14,20}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-100,-22},{-80,-2}})));
equation
      Pout = Gen1.P;
      Qout = Gen1.Q;

  connect(Gen1.p,bus. p)
    annotation (Line(points={{-112,46},{-82,46}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-138.4,52},{-146,
          52},{-146,62},{-104,62},{-104,52},{-110.8,52}}, color={0,0,127}));
  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-124,7.1},{-124,-7},{-133.5,
          -7}},                        color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-120,7.1},{-120,-23},{-133.5,
          -23}},                    color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-38,46},{-45,46}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-63,46},{-82,46}}, color={0,0,255}));
  connect(add3_1.u2,step1. y) annotation (Line(points={{-61.2,-42.4},{-44,-42.4},
          {-44,-37},{-38.5,-37}}, color={0,0,127}));
  connect(constantLoad.p,bus. p)
    annotation (Line(points={{-70,32},{-70,46},{-82,46}}, color={0,0,255}));
  connect(sT5B.EFD0,Gen1. EFD0) annotation (Line(points={{-113,13.4},{-104,13.4},
          {-104,40},{-110.8,40}}, color={0,0,127}));
  connect(infiniteBus.p,bus1. p) annotation (Line(points={{-14,46},{-38,46}},
                             color={0,0,255}));
  connect(sT5B.EFD, Gen1.EFD) annotation (Line(points={{-135,17},{-148,17},{
          -148,40},{-138.4,40}}, color={0,0,127}));
  connect(add3_1.y, add3_2.u1) annotation (Line(points={{-70.4,-40},{-78,-40},{-78,
          -37.6},{-85.2,-37.6}}, color={0,0,127}));
  connect(add3_2.y, sT5B.ECOMP) annotation (Line(points={{-94.4,-40},{-102,-40},
          {-102,17},{-113,17}}, color={0,0,127}));
  connect(realExpression1.y, sT5B.XADIFD)
    annotation (Line(points={{-147,2},{-132,2},{-132,7.1}}, color={0,0,127}));
  connect(realExpression2.y, add.u2) annotation (Line(points={{-145,-74},{-138,-74},
          {-138,-56},{-133,-56}}, color={0,0,127}));
  connect(realExpression3.y, add3_1.u1) annotation (Line(points={{-39,-24},{-50,
          -24},{-50,-37.6},{-61.2,-37.6}}, color={0,0,127}));
  connect(pSS2B.V_S1, add3_3.y) annotation (Line(points={{-55,4.2},{-46,4.2},{-46,
          12},{-26.4,12}}, color={0,0,127}));
  connect(realExpression.y, add3_3.u1) annotation (Line(points={{-9,20},{-12,20},
          {-12,14.4},{-17.2,14.4}}, color={0,0,127}));
  connect(realExpression4.y, pSS2B.V_S2) annotation (Line(points={{-39,-8},{-50,
          -8},{-50,1.8},{-55,1.8}}, color={0,0,127}));
  connect(add.u1, r1) annotation (Line(points={{-133,-50},{-172,-50}},
                       color={0,0,127}));
  connect(add3_2.u2,r2)  annotation (Line(points={{-85.2,-42.4},{-80,-42.4},{
          -80,-60},{34,-60}},
        color={0,0,127}));
  connect(add3_3.u2, r3) annotation (Line(points={{-17.2,9.6},{0.4,9.6},{0.4,0},
          {34,0}}, color={0,0,127}));
  connect(const.y, sT5B.VOTHSG) annotation (Line(points={{-79,-12},{-76,-12},{
          -76,20.6},{-113,20.6}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,
            -80},{40,100}})),                                    Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-80},{40,100}})),
    experiment(
      StopTime=9,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end Noise_fmu;
