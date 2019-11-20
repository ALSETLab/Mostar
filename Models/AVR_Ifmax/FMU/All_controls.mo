within Mostar.Models.AVR_Ifmax.FMU;
model All_controls "System with the original generator parameters"

  OpenIPSL.Electrical.Buses.Bus bus annotation (Placement(transformation(extent={{-28,-10},
            {-8,10}})));
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-76},
            {-70,-66}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-56},
            {-70,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{40,40},
            {100,60}})));
  VoltageSource voltageSource
    annotation (Placement(transformation(extent={{96,-10},{76,10}})));
  Data2Model.Ifmax.Ifmax
    machineData annotation (Placement(transformation(extent={{-70,38},{
            -50,58}})));
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
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{44,-66},{52,-58}}),  iconTransformation(
          extent={{44,-66},{52,-58}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{60,-66},{68,-58}})));
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
                     annotation (Placement(transformation(extent={{-50,-38},
            {-70,-20}})));
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
    annotation (Placement(transformation(extent={{-10,-42},{-30,-36}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)
    annotation (Placement(transformation(extent={{2,-44},{16,-32}})));
  OpenIPSL.Electrical.Buses.Bus bus1(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=-machineData.data.P_0,
    Q_0=-machineData.data.Q_0)      annotation (Placement(transformation(extent={{34,-10},
            {54,10}})));
  Modelica.Blocks.Interfaces.RealInput Vreal "Real Part"
    annotation (Placement(transformation(extent={{160,2},{120,42}})));
  Modelica.Blocks.Interfaces.RealInput Vim "Imaginary Part"
    annotation (Placement(transformation(extent={{160,-40},{120,0}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-48,0},{-18,0}},color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-74.4,6},{-82,
          6},{-82,16},{-40,16},{-40,6},{-46.8,6}},
                                           color={0,0,127}));
  connect(sT5B.EFD, Gen.EFD) annotation (Line(points={{-70.5,-28},{-82,
          -28},{-82,-6},{-74.4,-6}}, color={0,0,127}));
  connect(sT5B.VOEL, const1.y) annotation (Line(points={{-56.5,-38},{-56,
          -38},{-56,-51},{-69.5,-51}}, color={0,0,127}));
  connect(sT5B.VUEL, const.y) annotation (Line(points={{-53.5,-38},{-54,
          -38},{-54,-71},{-69.5,-71}}, color={0,0,127}));
  connect(sT5B.ECOMP, Gen.ETERM) annotation (Line(points={{-50,-28},{-40,
          -28},{-40,-3.6},{-46.8,-3.6}}, color={0,0,127}));
  connect(sT5B.EFD0, Gen.EFD0) annotation (Line(points={{-50,-34.5},{-44,
          -34.5},{-44,-34},{-42,-34},{-42,-6},{-46.8,-6}}, color={0,0,127}));
  connect(sT5B.XADIFD, Gen.XADIFD) annotation (Line(points={{-50,-31},{-44,-31},
          {-44,-20},{-47.04,-20},{-47.04,-10.8}},             color={0,0,
          127}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-50,-23.5},{-40,
          -23.5},{-40,-39},{-30.3333,-39}}, color={0,0,127}));
  connect(pSS2B.V_S1, Gen.ETERM) annotation (Line(points={{-10,-37.5},{-4,-37.5},
          {-4,-20},{-40,-20},{-40,-3.6},{-46.8,-3.6}}, color={0,0,127}));
  connect(pSS2B.V_S2, Gen.ETERM) annotation (Line(points={{-10,-40.5},{-8,-40.5},
          {-8,-40},{-4,-40},{-4,-20},{-40,-20},{-40,-3.6},{-46.8,-3.6}}, color=
          {0,0,127}));
  connect(load.p, bus.p) annotation (Line(points={{9,-32},{10,-32},{10,0},{-18,
          0}}, color={0,0,255}));
  connect(voltageSource.p, bus1.p)
    annotation (Line(points={{75,0},{44,0}}, color={0,0,255}));
  connect(bus1.p, bus.p)
    annotation (Line(points={{44,0},{-18,0}}, color={0,0,255}));
  connect(voltageSource.u1, Vreal) annotation (Line(points={{98,4},{114,4},{114,
          22},{140,22}}, color={0,0,127}));
  connect(voltageSource.u2, Vim) annotation (Line(points={{98,-4},{114,-4},{114,
          -20},{140,-20}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{140,60}}),
        graphics={
        Rectangle(extent={{40,-54},{74,-70}}, lineColor={28,108,200})}),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{140,60}})));
end All_controls;
