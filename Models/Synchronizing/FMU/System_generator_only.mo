within Mostar.Models.Synchronizing.FMU;
model System_generator_only "System with the original generator parameters"

  OpenIPSL.Electrical.Buses.Bus bus(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)       annotation (Placement(transformation(extent={{-18,-10},{2,10}})));
  OpenIPSL.Electrical.Machines.PSSE.GENSAL Gen(
    M_b=30,
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
    V_0=machineData.data.V_0,
    P_0=machineData.data.P_0)
    annotation (Placement(transformation(extent={{-72,-12},{-48,12}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{-100,40},
            {-40,60}})));
  VoltageSource voltageSource(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)
    annotation (Placement(transformation(extent={{88,-10},{68,10}})));
  Data2Model.IG_Lim_Capacitive.init
    machineData
    annotation (Placement(transformation(extent={{-24,26},{-4,46}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{-54,-34},{-46,-26}}),iconTransformation(
          extent={{-54,-34},{-46,-26}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{-38,-34},{-30,-26}})));
  Modelica.Blocks.Interfaces.RealInput Vr "Real Part"
    annotation (Placement(transformation(extent={{160,0},{120,40}})));
  Modelica.Blocks.Interfaces.RealInput Vim "Imaginary Part"
    annotation (Placement(transformation(extent={{160,-40},{120,0}})));
equation
      Pout = Gen.P;
      Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-48,0},{-48,0},{-8,0}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-74.4,6},{-80,6},{-80,
          16},{-42,16},{-42,6},{-46.8,6}}, color={0,0,127}));
  connect(Gen.EFD, Gen.EFD0) annotation (Line(points={{-74.4,-6},{-80,-6},{-80,-16},
          {-42,-16},{-42,-6},{-46.8,-6}}, color={0,0,127}));
  connect(bus.p, voltageSource.p)
    annotation (Line(points={{-8,0},{67,0}}, color={0,0,255}));
  connect(voltageSource.u1, Vr) annotation (Line(points={{90,4},{100,4},
          {100,20},{140,20}}, color={0,0,127}));
  connect(voltageSource.u2, Vim) annotation (Line(points={{90,-4},{100,
          -4},{100,-20},{140,-20}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -40},{140,60}}), graphics={
        Rectangle(extent={{-60,-22},{-26,-38}},
                                              lineColor={28,108,200})}),
    Icon(coordinateSystem(extent={{-100,-40},{140,60}})),
    experiment(
      StopTime=96,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=0.01));
end System_generator_only;
