within Mostar.Models.PSS_off.FMU;
model Model_AVR
  Data2Model.PSS_off.init machineData
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
    P_0=0)                          annotation (Placement(transformation(extent={{-104,44},
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
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    v_0=machineData.data.V_0)
                 annotation (Placement(transformation(extent={{-84,20},{-72,32}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{-14,44},{-34,64}})));
  Modelica.Blocks.Sources.Constant const3(k=0)    annotation (Placement(transformation(extent={{-98,26},
            {-108,36}})));
  Modelica.Blocks.Math.Add3 add3_1 annotation (Placement(transformation(extent={{-84,-12},
            {-92,-4}})));
  Modelica.Blocks.Sources.Constant const4(k=0.464073425)
                                                  annotation (Placement(transformation(extent={{-106,4},
            {-116,14}})));
  Modelica.Blocks.Interfaces.RealOutput Efd annotation (Placement(
        transformation(extent={{-38,12},{-30,20}}),iconTransformation(extent={{42,
            66},{50,74}})));
  Modelica.Blocks.Sources.Step step1(height=-0.025, startTime=2.67)
                                                                   annotation (Placement(transformation(extent={{-66,-20},
            {-74,-12}})));
  Modelica.Blocks.Sources.Step step(height=0.025, startTime=11.83)
                                                                 annotation (Placement(transformation(extent={{-64,-8},
            {-72,0}})));
equation

  Efd = sT5B.EFD;
  connect(Gen1.p,bus. p)
    annotation (Line(points={{-124,54},{-94,54}},  color={0,0,255}));
  connect(Gen1.PMECH,Gen1. PMECH0) annotation (Line(points={{-150.4,60},{-158,60},
          {-158,70},{-116,70},{-116,60},{-122.8,60}},     color={0,0,127}));
  connect(sT5B.XADIFD,Gen1. XADIFD) annotation (Line(points={{-144,15.1},{-124,15.1},
          {-124,24},{-122.8,24},{-122.8,43.2}},   color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{-46,54},{-57,54}}, color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-75,54},{-94,54}},  color={0,0,255}));
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
  connect(const3.y, sT5B.VOTHSG) annotation (Line(points={{-108.5,31},{-117.25,31},
          {-117.25,28.6},{-125,28.6}},     color={0,0,127}));
  connect(sT5B.ECOMP, add3_1.y) annotation (Line(points={{-125,25},{-118,25},{-118,
          -8},{-92.4,-8}},      color={0,0,127}));
  connect(add3_1.u1, Gen1.ETERM) annotation (Line(points={{-83.2,-4.8},{-83.2,
          -4},{-82,-4},{-82,50.4},{-122.8,50.4}}, color={0,0,127}));
  connect(const4.y, sT5B.EFD0) annotation (Line(points={{-116.5,9},{-116.5,15.5},
          {-125,15.5},{-125,21.4}}, color={0,0,127}));
  connect(step1.y, add3_1.u3) annotation (Line(points={{-74.4,-16},{-78,-16},{
          -78,-11.2},{-83.2,-11.2}}, color={0,0,127}));
  connect(add3_1.u2,step. y) annotation (Line(points={{-83.2,-8},{-78,-8},{-78,
          -4},{-72.4,-4}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},
            {0,100}})),                                          Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},{0,100}})),
    experiment(
      StopTime=15,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false));
end Model_AVR;
