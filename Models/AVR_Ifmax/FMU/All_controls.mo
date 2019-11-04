within Mostar.Models.AVR_Ifmax.FMU;
model All_controls "System with the original generator parameters"

  OpenIPSL.Electrical.Branches.PwLine pwLine(
    G=0,
    B=0,
    R=0,
    X=0.1169) annotation (Placement(transformation(extent={{14,-4},{26,4}})));
  OpenIPSL.Electrical.Buses.Bus bus(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)       annotation (Placement(transformation(extent={{-18,-10},{2,10}})));
  OpenIPSL.Electrical.Buses.Bus bus1(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)        annotation (Placement(transformation(extent={{40,-10},{60,10}})));
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-76},
            {-70,-66}})));
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
                     annotation (Placement(transformation(extent={{-54,-38},{-74,
            -20}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-56},
            {-70,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{40,80},{100,100}})));
  VoltageSource voltageSource
    annotation (Placement(transformation(extent={{88,-10},{68,10}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(M=1, N=1)
    annotation (Placement(transformation(extent={{-24,-48},{-44,-42}})));
  Data2Model.Ifmax.Ifmax
    machineData annotation (Placement(transformation(extent={{10,60},{30,80}})));
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
    annotation (Placement(transformation(extent={{-74,-12},{-50,12}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{62,-76},{70,-68}})));
  Modelica.Blocks.Interfaces.RealInput Vr "Real Part"
    annotation (Placement(transformation(extent={{154,0},{114,40}})));
  Modelica.Blocks.Interfaces.RealInput Vim "Imaginary Part"
    annotation (Placement(transformation(extent={{154,-36},{114,4}})));
equation
  Qout = Gen.Q;
  connect(bus.p, pwLine.p) annotation (Line(points={{-8,0},{14.6,0}},    color={0,0,255}));
  connect(pwLine.n, bus1.p) annotation (Line(points={{25.4,0},{25.4,0},{50,0}},
                                                                            color={0,0,255}));
  connect(const.y, sT5B.VUEL) annotation (Line(points={{-69.5,-71},{-57.5,-71},{
          -57.5,-38}},                                                                          color={0,0,127}));
  connect(const1.y, sT5B.VOEL) annotation (Line(points={{-69.5,-51},{-60.5,-51},
          {-60.5,-38}},                                                                          color={0,0,127}));
  connect(bus1.p, voltageSource.p)
    annotation (Line(points={{50,0},{67,0}}, color={0,0,255}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-54,
          -23.5},{-46,-23.5},{-46,-45},{-44.3333,-45}},
                                                color={0,0,127}));
  connect(Gen.p, bus.p)
    annotation (Line(points={{-50,0},{-8,0}}, color={0,0,255}));
  connect(sT5B.EFD, Gen.EFD) annotation (Line(points={{-74.5,-28},{-86,-28},{-86,
          -6},{-76.4,-6}}, color={0,0,127}));
  connect(sT5B.ECOMP, Gen.ETERM) annotation (Line(points={{-54,-28},{-40,-28},{-40,
          -3.6},{-48.8,-3.6}}, color={0,0,127}));
  connect(sT5B.XADIFD, Gen.XADIFD) annotation (Line(points={{-54,-31},{-42,-31},
          {-42,-10.8},{-49.04,-10.8}}, color={0,0,127}));
  connect(sT5B.EFD0, Gen.EFD0) annotation (Line(points={{-54,-34.5},{-34,-34.5},
          {-34,-6},{-48.8,-6}}, color={0,0,127}));
  connect(pSS2B.V_S1, Gen.ETERM) annotation (Line(points={{-24,-43.5},{-20,-43.5},
          {-20,-28},{-40,-28},{-40,-3.6},{-48.8,-3.6}}, color={0,0,127}));
  connect(pSS2B.V_S2, Gen.ETERM) annotation (Line(points={{-24,-46.5},{-20,-46.5},
          {-20,-28},{-40,-28},{-40,-3.6},{-48.8,-3.6}}, color={0,0,127}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-76.4,6},{-86,6},{-86,
          16},{-36,16},{-36,6},{-48.8,6}}, color={0,0,127}));
  connect(voltageSource.u1, Vr) annotation (Line(points={{90,4},{108,4},{108,20},
          {134,20}}, color={0,0,127}));
  connect(voltageSource.u2, Vim) annotation (Line(points={{90,-4},{106,-4},{106,
          -16},{134,-16}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}),
        graphics={
        Rectangle(extent={{40,-64},{74,-80}}, lineColor={28,108,200})}),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000));
end All_controls;
