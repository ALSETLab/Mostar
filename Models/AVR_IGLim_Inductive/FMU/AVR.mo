within Mostar.Models.AVR_IGLim_Inductive.FMU;
model AVR "System with the original generator parameters"

  Data2Model.IG_Lim_Inductive.init machineData
    annotation (Placement(transformation(extent={{-30,34},{-10,54}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-74},
            {-80,-64}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-56},
            {-80,-46}})));
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
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{14,38},
            {74,58}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-16,-48},
            {-26,-38}})));
  Modelica.Blocks.Sources.Constant const3(k=0)    annotation (Placement(transformation(extent={{-40,-60},
            {-50,-50}})));
  Modelica.Blocks.Interfaces.RealInput ECOMP1
    annotation (Placement(transformation(extent={{72,-48},{32,-8}})));
  Modelica.Blocks.Interfaces.RealOutput EFD1 "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{-84,-38},{-104,-18}})));
equation

  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-70,-38.9},{-66,-38.9},
          {-66,-51},{-79.5,-51}},      color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-66,-38.9},{-64,-38.9},
          {-64,-69},{-79.5,-69}},   color={0,0,127}));
  connect(sT5B.VOTHSG,const4. y) annotation (Line(points={{-59,-25.4},{-44,
          -25.4},{-44,-43},{-26.5,-43}},color={0,0,127}));
  connect(const3.y, sT5B.XADIFD) annotation (Line(points={{-50.5,-55},{-64.25,
          -55},{-64.25,-38.9},{-78,-38.9}}, color={0,0,127}));
  connect(sT5B.EFD0, sT5B.XADIFD) annotation (Line(points={{-59,-32.6},{-59,-56},
          {-56,-56},{-56,-55},{-64.25,-55},{-64.25,-38.9},{-78,-38.9}}, color={
          0,0,127}));
  connect(sT5B.ECOMP, ECOMP1) annotation (Line(points={{-59,-29},{-3.5,-29},{
          -3.5,-28},{52,-28}}, color={0,0,127}));
  connect(sT5B.EFD, EFD1)
    annotation (Line(points={{-81,-29},{-94,-29},{-94,-28}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{100,60}})),
      experiment(StopTime=95, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{100,60}})));
end AVR;
