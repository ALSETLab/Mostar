within Mostar.Models.AVR_Ifmax.FMU;
model All_controls "System with the original generator parameters"

  OpenIPSL.Electrical.Buses.Bus bus annotation (Placement(transformation(extent={{-18,-10},
            {2,10}})));
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-70,-76},
            {-60,-66}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-70,-56},
            {-60,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{60,40},
            {120,60}})));
  Data2Model.Ifmax.Ifmax
    machineData annotation (Placement(transformation(extent={{22,38},{42,58}})));
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
    annotation (Placement(transformation(extent={{-62,-12},{-38,12}})));
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
                     annotation (Placement(transformation(extent={{-40,-38},{
            -60,-20}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load(
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0,
    PQBRAK=0.7)
    annotation (Placement(transformation(extent={{12,-44},{26,-32}})));
  OpenIPSL.Electrical.Buses.Bus bus1(
    v_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=-machineData.data.P_0,
    Q_0=-machineData.data.Q_0)      annotation (Placement(transformation(extent={{44,-10},
            {64,10}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{90,-10},{70,10}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    G=0,
    B=0,
    R=0,
    X=0.1169) annotation (Placement(transformation(extent={{30,-4},{42,4}})));
  Modelica.Blocks.Sources.RealExpression XadIfd(y=Gen.XADIFD)
    annotation (Placement(transformation(extent={{-86,-46},{-74,-36}})));
  Modelica.Blocks.Sources.Constant const2(k=0)    annotation (Placement(transformation(extent={{-10,-30},
            {-20,-20}})));
  Modelica.Blocks.Sources.RealExpression EFD(y=Gen.EFD)
    annotation (Placement(transformation(extent={{-8,-54},{-20,-44}})));
  Modelica.Blocks.Sources.Step     step1(height=0.03, startTime=34.9)
                                                  annotation (Placement(transformation(extent={{10,-38},
            {0,-28}})));
  Modelica.Blocks.Sources.Step step(height=-0.03, startTime=11.7)
    annotation (Placement(transformation(extent={{10,-54},{0,-44}})));
  Modelica.Blocks.Math.Add3 add3_1 annotation (Placement(transformation(extent={{-10,-42},
            {-18,-34}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{54,-66},{62,-58}}),  iconTransformation(
          extent={{44,-66},{52,-58}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{70,-66},{78,-58}})));
  Modelica.Blocks.Interfaces.RealOutput Efd "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{-84,-22},{-104,-2}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(Gen.p,bus. p)
    annotation (Line(points={{-38,0},{-8,0}}, color={0,0,255}));
  connect(Gen.PMECH,Gen. PMECH0) annotation (Line(points={{-64.4,6},{-72,6},{
          -72,16},{-30,16},{-30,6},{-36.8,6}},
                                           color={0,0,127}));
  connect(sT5B.EFD,Gen. EFD) annotation (Line(points={{-61,-29},{-72,-29},{-72,
          -6},{-64.4,-6}},           color={0,0,127}));
  connect(sT5B.VOEL,const1. y) annotation (Line(points={{-50,-38.9},{-50,-51},{
          -59.5,-51}},                 color={0,0,127}));
  connect(sT5B.VUEL,const. y) annotation (Line(points={{-46,-38.9},{-46,-71},{
          -59.5,-71}},                 color={0,0,127}));
  connect(pwLine.p, bus.p)
    annotation (Line(points={{30.6,0},{-8,0}}, color={0,0,255}));
  connect(bus1.p, pwLine.n)
    annotation (Line(points={{54,0},{41.4,0}}, color={0,0,255}));
  connect(infiniteBus.p, bus1.p)
    annotation (Line(points={{70,0},{54,0}}, color={0,0,255}));
  connect(XadIfd.y, sT5B.XADIFD) annotation (Line(points={{-73.4,-41},{-58,-41},
          {-58,-38.9}}, color={0,0,127}));
  connect(sT5B.VOTHSG, const2.y) annotation (Line(points={{-39,-25.4},{-29.5,
          -25.4},{-29.5,-25},{-20.5,-25}}, color={0,0,127}));
  connect(EFD.y, sT5B.EFD0) annotation (Line(points={{-20.6,-49},{-39,-49},{-39,
          -32.6}}, color={0,0,127}));
  connect(load.p, bus.p) annotation (Line(points={{19,-32},{18,-32},{18,0},{-8,
          0}}, color={0,0,255}));
  connect(sT5B.ECOMP, add3_1.y) annotation (Line(points={{-39,-29},{-28,-29},{
          -28,-38},{-18.4,-38}}, color={0,0,127}));
  connect(add3_1.u1, Gen.ETERM) annotation (Line(points={{-9.2,-34.8},{-4,-34.8},
          {-4,-3.6},{-36.8,-3.6}}, color={0,0,127}));
  connect(step1.y, add3_1.u2) annotation (Line(points={{-0.5,-33},{-2.25,-33},{
          -2.25,-38},{-9.2,-38}}, color={0,0,127}));
  connect(add3_1.u3, step.y) annotation (Line(points={{-9.2,-41.2},{-4.6,-41.2},
          {-4.6,-49},{-0.5,-49}}, color={0,0,127}));
  connect(sT5B.EFD, Efd) annotation (Line(points={{-61,-29},{-72,-29},{-72,-20},
          {-80,-20},{-80,-12},{-94,-12}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{120,60}}), graphics={
        Rectangle(extent={{50,-54},{84,-70}}, lineColor={28,108,200})}),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{120,60}})));
end All_controls;
