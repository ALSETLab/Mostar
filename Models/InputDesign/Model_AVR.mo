within Mostar.Models.InputDesign;
model Model_AVR
  Data2Model.IG_Lim_Capacitive.init machineData
    annotation (Placement(transformation(extent={{-108,76},{-88,96}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30000000,
                                                       fn=50) annotation (Placement(transformation(extent={{-64,74},
            {-4,94}})));
  Modelica.Blocks.Interfaces.RealOutput Efd annotation (Placement(
        transformation(extent={{-18,34},{-10,42}}),iconTransformation(extent={{42,
            66},{50,74}})));
  Modelica.Blocks.Sources.Constant const1(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,
            -26},{-148,-16}})));
  Modelica.Blocks.Sources.Constant const2(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-158,-8},
            {-148,2}})));
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
                     annotation (Placement(transformation(extent={{-88,20},{-56,
            52}})));
  Modelica.Blocks.Sources.Constant const4(k=0)    annotation (Placement(transformation(extent={{-106,44},
            {-96,54}})));
  Modelica.Blocks.Sources.Constant const3(k=0.91) annotation (Placement(transformation(extent={{-158,8},
            {-148,18}})));
  Modelica.Blocks.Interfaces.RealInput XADIFD1
    annotation (Placement(transformation(extent={{-128,-42},{-88,-2}})));
  Modelica.Blocks.Interfaces.RealInput ECOMP1
    annotation (Placement(transformation(extent={{-168,16},{-128,56}})));
equation
      Efd = sT5B.EFD;

  connect(sT5B.VOEL,const2. y) annotation (Line(points={{-72,18.4},{-134,18.4},{
          -134,-3},{-147.5,-3}},       color={0,0,127}));
  connect(sT5B.VUEL,const1. y) annotation (Line(points={{-78.4,18.4},{-132,18.4},
          {-132,-21},{-147.5,-21}}, color={0,0,127}));
  connect(sT5B.VOTHSG, const4.y) annotation (Line(points={{-89.6,42.4},{-94,42.4},
          {-94,49},{-95.5,49}},      color={0,0,127}));
  connect(const3.y, sT5B.EFD0) annotation (Line(points={{-147.5,13},{-136,13},{-136,
          22},{-112,22},{-112,29.6},{-89.6,29.6}}, color={0,0,127}));
  connect(sT5B.XADIFD, XADIFD1) annotation (Line(points={{-59.2,18.4},{-59.2,
          -22},{-108,-22}}, color={0,0,127}));
  connect(sT5B.ECOMP, ECOMP1)
    annotation (Line(points={{-89.6,36},{-148,36}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-180,
            -40},{0,100}})),                                     Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-180,-40},{0,100}})),
    experiment(
      StopTime=4.5,
      __Dymola_NumberOfIntervals=5000,
      Tolerance=1e-06,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput,
    __Dymola_experimentFlags(
      Advanced(GenerateVariableDependencies=false, OutputModelicaCode=false),
      Evaluate=false,
      OutputCPUtime=false,
      OutputFlatModelica=false),
    __Dymola_Commands(file="Plot_Efd_Ifd.mos" "Plot_Efd_Ifd"));
end Model_AVR;
