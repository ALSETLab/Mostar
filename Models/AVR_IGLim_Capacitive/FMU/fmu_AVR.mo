within Mostar.Models.AVR_IGLim_Capacitive.FMU;
model fmu_AVR "System with the original generator parameters"

  Data2Model.IG_Lim_Capacitive.avr_pso
                                    machineData
    annotation (Placement(transformation(extent={{-40,58},{-20,78}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000, fn=50)
                                                              annotation (Placement(transformation(extent={{6,60},{
            66,80}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-36},
            {-80,-26}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-90,-18},
            {-80,-8}})));
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
                     annotation (Placement(transformation(extent={{-20,10},{12,
            42}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-38,34},
            {-28,44}})));
  Modelica.Blocks.Sources.Constant const3(k=0.332057384)
                                                  annotation (Placement(transformation(extent={{-90,-2},
            {-80,8}})));
  Modelica.Blocks.Interfaces.RealOutput Efd annotation (Placement(
        transformation(extent={{48,22},{56,30}}),  iconTransformation(extent={{42,
            66},{50,74}})));
  Modelica.Blocks.Interfaces.RealInput V
    annotation (Placement(transformation(extent={{-140,20},{-100,60}})));
  Modelica.Blocks.Interfaces.RealInput Ifd
    annotation (Placement(transformation(extent={{-140,-40},{-100,0}})));
equation

  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-4,8.4},{-66,8.4},{-66,
          -13},{-79.5,-13}},           color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-10.4,8.4},{-64,8.4},{
          -64,-31},{-79.5,-31}},    color={0,0,127}));
  connect(sT5B.VOTHSG,const4. y) annotation (Line(points={{-21.6,32.4},{-26,
          32.4},{-26,39},{-27.5,39}},color={0,0,127}));
  connect(const3.y,sT5B. EFD0) annotation (Line(points={{-79.5,3},{-68,3},{-68,
          12},{-44,12},{-44,19.6},{-21.6,19.6}},   color={0,0,127}));
  connect(Efd, sT5B.EFD)
    annotation (Line(points={{52,26},{13.6,26}}, color={0,0,127}));
  connect(sT5B.ECOMP, V) annotation (Line(points={{-21.6,26},{-58,26},{-58,40},
          {-120,40}}, color={0,0,127}));
  connect(sT5B.XADIFD, Ifd) annotation (Line(points={{8.8,8.4},{8.8,-20},{-120,
          -20}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -40},{80,80}})),
    Icon(coordinateSystem(extent={{-100,-40},{80,80}})),
    experiment(
      StopTime=20,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=0.01));
end fmu_AVR;
