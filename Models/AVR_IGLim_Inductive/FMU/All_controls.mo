within Mostar.Models.AVR_IGLim_Inductive.FMU;
model All_controls "System with the original generator parameters"

  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{44,-66},{52,-58}}),  iconTransformation(
          extent={{44,-66},{52,-58}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{60,-66},{68,-58}})));
  Data2Model.IG_Lim_Inductive.init machineData
    annotation (Placement(transformation(extent={{-30,34},{-10,54}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-38,-10},
            {-18,10}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-74},
            {-80,-64}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-56},
            {-80,-46}})));
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
    annotation (Placement(transformation(extent={{-82,-12},{-58,12}})));
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
                     annotation (Placement(transformation(extent={{-60,-38},{
            -80,-20}})));
  OpenIPSL.Electrical.Buses.Bus bus1(P_0=-machineData.data.P_0, Q_0=-
        machineData.data.Q_0)       annotation (Placement(transformation(extent={{6,-10},
            {26,10}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{14,38},
            {74,58}})));
  OpenIPSL.Electrical.Loads.PSSE.Load constantLoad(
    Q_0=machineData.data.Q_0,
    v_0=machineData.data.V_0,
    PQBRAK=0.7,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0)
                 annotation (Placement(transformation(extent={{-22,-32},{-10,
            -20}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-16,-48},
            {-26,-38}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Modelica.Blocks.Math.Add3 add3_1 annotation (Placement(transformation(extent={{6,-66},
            {-2,-58}})));
  Modelica.Blocks.Sources.Step step1(startTime=31.5, height=0.05)  annotation (Placement(transformation(extent={{24,-74},
            {16,-66}})));
  Modelica.Blocks.Sources.Step step(startTime=17.7, height=-0.05)
                                                                 annotation (Placement(transformation(extent={{26,-62},
            {18,-54}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{52,-10},{32,10}})));
  Modelica.Blocks.Interfaces.RealOutput Efd "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{74,-38},{94,-18}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-58,0},{-28,0}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-84.4,6},{-92,6},{
          -92,16},{-50,16},{-50,6},{-56.8,6}}, color={0,0,127}));
  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-70,-38.9},{-66,-38.9},
          {-66,-51},{-79.5,-51}},      color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-66,-38.9},{-64,-38.9},
          {-64,-69},{-79.5,-69}},   color={0,0,127}));
  connect(Gen.EFD0, sT5B.EFD0) annotation (Line(points={{-56.8,-6},{-52,-6},{
          -52,-32.6},{-59,-32.6}}, color={0,0,127}));
  connect(sT5B.VOTHSG,const4. y) annotation (Line(points={{-59,-25.4},{-44,
          -25.4},{-44,-43},{-26.5,-43}},color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{16,0},{9,0}},      color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-9,0},{-28,0}},     color={0,0,255}));
  connect(sT5B.EFD, Gen.EFD) annotation (Line(points={{-81,-29},{-88,-29},{-88,
          -6},{-84.4,-6}}, color={0,0,127}));
  connect(sT5B.ECOMP,add3_1. y) annotation (Line(points={{-59,-29},{-28,-29},{
          -28,-62},{-2.4,-62}},   color={0,0,127}));
  connect(step1.y,add3_1. u3) annotation (Line(points={{15.6,-70},{12,-70},{12,
          -65.2},{6.8,-65.2}},       color={0,0,127}));
  connect(add3_1.u2,step. y) annotation (Line(points={{6.8,-62},{12,-62},{12,
          -58},{17.6,-58}},      color={0,0,127}));
  connect(add3_1.u1, Gen.ETERM) annotation (Line(points={{6.8,-58.8},{6.8,-58},
          {8,-58},{8,-3.6},{-56.8,-3.6}}, color={0,0,127}));
  connect(Gen.XADIFD, sT5B.XADIFD) annotation (Line(points={{-56.8,-10.8},{-56,
          -10.8},{-56,-42},{-78,-42},{-78,-38.9}}, color={0,0,127}));
  connect(infiniteBus.p, bus1.p)
    annotation (Line(points={{32,0},{16,0}}, color={0,0,255}));
  connect(constantLoad.p, bus.p)
    annotation (Line(points={{-16,-20},{-16,0},{-28,0}}, color={0,0,255}));
  connect(sT5B.EFD, Efd) annotation (Line(points={{-81,-29},{1.5,-29},{1.5,-28},
          {84,-28}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{100,60}}),
        graphics={
        Rectangle(extent={{40,-54},{74,-70}}, lineColor={28,108,200})}),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{100,60}})));
end All_controls;
