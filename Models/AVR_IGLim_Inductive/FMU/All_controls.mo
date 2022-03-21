within Mostar.Models.AVR_IGLim_Inductive.FMU;
model All_controls "System with the original generator parameters"

  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{44,-66},{52,-58}}),  iconTransformation(
          extent={{44,-66},{52,-58}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{60,-66},{68,-58}})));
  Data2Model.IG_Lim_Inductive.init machineData
    annotation (Placement(transformation(extent={{-30,34},{-10,54}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{14,38},
            {74,58}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-40,2},
            {-20,22}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-92,-62},
            {-82,-52}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-92,-44},
            {-82,-34}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen(
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
    annotation (Placement(transformation(extent={{-84,0},{-60,24}})));
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
                     annotation (Placement(transformation(extent={{-62,-26},{
            -82,-8}})));
  OpenIPSL.Electrical.Buses.Bus bus1(P_0=-machineData.data.P_0, Q_0=-
        machineData.data.Q_0)       annotation (Placement(transformation(extent={{4,2},{
            24,22}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0)
                 annotation (Placement(transformation(extent={{-24,-20},{-12,-8}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-18,-36},
            {-28,-26}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-12,2},{8,22}})));
  Modelica.Blocks.Math.Add  add3_1 annotation (Placement(transformation(extent={{4,-54},
            {-4,-46}})));
  Modelica.Blocks.Sources.Step step(startTime=1.36, height=-0.05)
                                                                 annotation (Placement(transformation(extent={{24,-50},
            {16,-42}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{50,2},{30,22}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-60,12},{-30,12}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-86.4,18},{-94,18},{
          -94,28},{-52,28},{-52,18},{-58.8,18}}, color={0,0,127}));
  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-72,-26.9},{-68,-26.9},
          {-68,-39},{-81.5,-39}},      color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-68,-26.9},{-66,-26.9},
          {-66,-57},{-81.5,-57}},   color={0,0,127}));
  connect(Gen.EFD0, sT5B.EFD0) annotation (Line(points={{-58.8,6},{-54,6},{-54,
          -20.6},{-61,-20.6}}, color={0,0,127}));
  connect(sT5B.VOTHSG,const4. y) annotation (Line(points={{-61,-13.4},{-46,
          -13.4},{-46,-31},{-28.5,-31}},color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{14,12},{7,12}},    color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-11,12},{-30,12}},  color={0,0,255}));
  connect(sT5B.ECOMP,add3_1. y) annotation (Line(points={{-61,-17},{-30,-17},{
          -30,-50},{-4.4,-50}},   color={0,0,127}));
  connect(add3_1.u2,step. y) annotation (Line(points={{4.8,-52.4},{10,-52.4},{
          10,-46},{15.6,-46}},   color={0,0,127}));
  connect(add3_1.u1, Gen.ETERM) annotation (Line(points={{4.8,-47.6},{4.8,-46},
          {6,-46},{6,8.4},{-58.8,8.4}}, color={0,0,127}));
  connect(Gen.XADIFD, sT5B.XADIFD) annotation (Line(points={{-58.8,1.2},{-58,
          1.2},{-58,-30},{-80,-30},{-80,-26.9}}, color={0,0,127}));
  connect(infiniteBus.p,bus1. p)
    annotation (Line(points={{30,12},{14,12}},   color={0,0,255}));
  connect(constantLoad.p,bus. p)
    annotation (Line(points={{-18,-8},{-18,12},{-30,12}},  color={0,0,255}));
  connect(Gen.EFD, sT5B.EFD) annotation (Line(points={{-86.4,6},{-94,6},{-94,
          -17},{-83,-17}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{100,60}}),
        graphics={
        Rectangle(extent={{40,-54},{74,-70}}, lineColor={28,108,200})}),
      experiment(StopTime=6, Interval=0.005),
    Icon(coordinateSystem(extent={{-100,-80},{100,60}})));
end All_controls;
