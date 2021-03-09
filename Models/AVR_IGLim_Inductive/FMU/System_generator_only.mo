within Mostar.Models.AVR_IGLim_Inductive.FMU;
model System_generator_only "System with the original generator parameters"

  Data2Model.IG_Lim_Inductive.init machineData
    annotation (Placement(transformation(extent={{-30,34},{-10,54}})));
  OpenIPSL.Electrical.Buses.Bus bus(v_0=machineData.data.V_0, angle_0=
        machineData.data.A_0)       annotation (Placement(transformation(extent={{-38,-10},
            {-18,10}})));
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
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0,
    X=0.1169,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{52,-10},{32,10}})));
  Modelica.Blocks.Interfaces.RealInput EFD1
                "Generator main field voltage (pu)"
    annotation (Placement(transformation(extent={{-114,-52},{-74,-12}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{84,-14},{92,-6}}),   iconTransformation(
          extent={{84,-14},{92,-6}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{100,-14},{108,-6}})));
equation
      Pout = Gen.P;
      Qout = Gen.Q;
  connect(Gen.p,bus. p)
    annotation (Line(points={{-58,0},{-28,0}}, color={0,0,255}));
  connect(Gen.PMECH,Gen. PMECH0) annotation (Line(points={{-84.4,6},{-92,6},{
          -92,16},{-50,16},{-50,6},{-56.8,6}}, color={0,0,127}));
  connect(bus1.p,pwLine. n)
    annotation (Line(points={{16,0},{9,0}},      color={0,0,255}));
  connect(pwLine.p,bus. p)
    annotation (Line(points={{-9,0},{-28,0}},     color={0,0,255}));
  connect(infiniteBus.p,bus1. p)
    annotation (Line(points={{32,0},{16,0}}, color={0,0,255}));
  connect(constantLoad.p,bus. p)
    annotation (Line(points={{-16,-20},{-16,0},{-28,0}}, color={0,0,255}));
  connect(Gen.EFD, EFD1) annotation (Line(points={{-84.4,-6},{-90,-6},{-90,-32},
          {-94,-32}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -40},{140,60}}), graphics={
        Rectangle(extent={{80,-2},{114,-18}}, lineColor={28,108,200})}),
    Icon(coordinateSystem(extent={{-100,-40},{140,60}})),
    experiment(
      StopTime=96,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=0.01));
end System_generator_only;
