within Mostar;
package Records
  record systemData
  extends Modelica.Icons.Record;
    replaceable record Machine =
      Mostar.Records.Generator constrainedby Mostar.Records.Generator;
      Machine data;
    annotation(choicesAllMatching);
  end systemData;

  record Generator
    parameter Real Xd = 1.6698;
    parameter Real R_a = 0.0011;
    parameter Real H = 2.588;
    parameter Real D = 0.999;
    parameter Real Xpd = 0.663;
    parameter Real Xppd;
    parameter Real Xppq;
    parameter Real Xq;
    parameter Real Tpd0;
    parameter Real Tppd0;
    parameter Real Tppq0;
    parameter Real Xl;
    parameter Real S10;
    parameter Real S12;
    //powerflow parameters
    parameter Real V_0 = 0.9973;
    parameter Real A_0 = 1.155;
    parameter Real P_0 = 623.3;
    parameter Real Q_0 = 22.655;


    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Generator;

  record AVR
    parameter Real Xd = 1.6698;
    parameter Real R_a = 0.0011;
    parameter Real H = 2.588;
    parameter Real D = 0.999;
    parameter Real Xpd = 0.663;
    parameter Real Xppd;
    parameter Real Xppq;
    parameter Real Xq;
    parameter Real Tpd0;
    parameter Real Tppd0;
    parameter Real Tppq0;
    parameter Real Xl;
    parameter Real S10;
    parameter Real S12;
    //powerflow parameters
    parameter Real V_0 = 0.9973;
    parameter Real A_0 = 1.155;
    parameter Real P_0 = 623.3;
    parameter Real Q_0 = 22.655;


    //AVR parameters

    parameter Real T_R;
    parameter Real T_C1;
    parameter Real T_B1;
    parameter Real T_C2;
    parameter Real T_B2;
    parameter Real K_R;
    parameter Real V_RMAX = 10;
    parameter Real V_RMIN = -10;
    parameter Real T_1_AVR;
    parameter Real K_C;
    parameter Real T_UC1;
    parameter Real T_UB1;
    parameter Real T_UC2;
    parameter Real T_UB2;
    parameter Real T_OC1;
    parameter Real T_OB1;
    parameter Real T_OC2;
    parameter Real T_OB2;
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end AVR;

  record PSS
    parameter Real Xd = 1.6698;
    parameter Real R_a = 0.0011;
    parameter Real H = 2.588;
    parameter Real D = 0.999;
    parameter Real Xpd = 0.663;
    parameter Real Xppd;
    parameter Real Xppq;
    parameter Real Xq;
    parameter Real Tpd0;
    parameter Real Tppd0;
    parameter Real Tppq0;
    parameter Real Xl;
    parameter Real S10;
    parameter Real S12;
    //powerflow parameters
    parameter Real V_0 = 0.9973;
    parameter Real A_0 = 1.155;
    parameter Real P_0 = 623.3;
    parameter Real Q_0 = 22.655;


    //AVR parameters
    parameter Real T_R;
    parameter Real T_C1;
    parameter Real T_B1;
    parameter Real T_C2;
    parameter Real T_B2;
    parameter Real K_R;
    parameter Real V_RMAX = 10;
    parameter Real V_RMIN = -10;
    parameter Real T_1_AVR;
    parameter Real K_C;
    parameter Real T_UC1;
    parameter Real T_UB1;
    parameter Real T_UC2;
    parameter Real T_UB2;
    parameter Real T_OC1;
    parameter Real T_OB1;
    parameter Real T_OC2;
    parameter Real T_OB2;

    //PSS parameters
    parameter Real T_w1;
    parameter Real T_w2;
    parameter Real T_6;
    parameter Real T_w3;
    parameter Real T_w4;
    parameter Real T_7;
    parameter Real K_S2;
    parameter Real K_S3;
    parameter Real T_8;
    parameter Real T_9;
    parameter Real K_S1;
    parameter Real T_1;
    parameter Real T_2;
    parameter Real T_3;
    parameter Real T_4;
    parameter Real T_10;
    parameter Real T_11;
    parameter Real V_S1MAX;
    parameter Real V_S1MIN;
    parameter Real V_S2MAX;
    parameter Real V_S2MIN;
    parameter Real V_STMAX;
    parameter Real V_STMIN;
    parameter Real M;
    parameter Real N;

    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PSS;
end Records;
