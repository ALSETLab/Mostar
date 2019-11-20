within Mostar.Models.Synchronizing;
model System_generator_only
  "System with the original generator parameters"

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
  Modelica.Blocks.Sources.CombiTimeTable Pout_real(
    tableOnFile=false,
    tableName="P",
    fileName=machineData.data.P_file,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,0.174488529; 0.5,0.177376046; 1,0.177788548; 1.5,0.173354147; 2,0.180985442;
        2.5,0.173147896; 3,0.170569756; 3.5,0.176138539; 4,0.179644809; 4.5,0.179644809;
        5,0.176860418; 5.5,0.179129181; 6,0.174901031; 6.5,0.175829162; 7,0.178304176;
        7.5,0.182532326; 8,0.180469814; 8.5,0.174591655; 9,0.179954186; 9.5,0.177891674;
        10,0.178201051; 10.5,0.181810447; 11,0.175313534; 11.5,0.17046663; 12,0.167579113;
        12.5,0.179335433; 13,0.180676065; 13.5,0.172426017; 14,0.173560399; 14.5,
        0.175210408; 15,0.175726036; 15.5,0.177788548; 16,0.179851061; 16.5,0.17634479;
        17,0.172838519; 17.5,0.171497886; 18,0.176963544; 18.5,0.177788548; 19,0.175622911;
        19.5,0.174591655; 20,0.17376665; 20.5,0.169847877; 21,0.176447916; 21.5,
        0.18057294; 22,0.177891674; 22.5,0.174488529; 23,0.173147896; 23.5,0.175932287;
        24,0.171601012; 24.5,0.178407302; 25,0.172529142; 25.5,0.179129181; 26,0.182016698;
        26.5,0.17634479; 27,0.176241664; 27.5,0.174591655; 28,0.178819805; 28.5,
        0.175519785; 29,0.179026056; 29.5,0.175210408; 30,0.173869775; 30.5,0.17634479;
        31,0.175313534; 31.5,0.179438558; 32,0.168300992; 32.5,0.17469478; 33,0.17304477;
        33.5,0.1779948; 34,0.180160437; 34.5,0.1779948; 35,0.17118851; 35.5,0.164485345;
        36,0.175829162; 36.5,0.174797906; 37,0.178510428; 37.5,0.177891674; 38,0.172735394;
        38.5,0.171085384; 39,0.171601012; 39.5,0.181604196; 40,0.178613553; 40.5,
        0.172426017; 41,0.172426017; 41.5,0.175519785; 42,0.172735394; 42.5,0.175210408;
        43,0.173972901; 43.5,0.17892293; 44,0.176138539; 44.5,0.168713495; 45,0.174385403;
        45.5,0.175829162; 46,0.172735394; 46.5,0.174901031; 47,0.17727292; 47.5,
        0.169951002; 48,0.174385403; 48.5,0.180057312; 49,0.1779948; 49.5,0.170054128;
        50,0.168816621; 50.5,0.166650983; 51,0.173663524; 51.5,0.171807263; 52,0.172529142;
        52.5,0.186760476; 53,0.186038597; 53.5,0.176035413; 54,0.180057312; 54.5,
        0.176860418; 55,0.176963544; 55.5,0.179129181; 56,0.177479172; 56.5,0.176138539;
        57,0.177376046; 57.5,0.179747935; 58,0.177685423; 58.5,0.179438558; 59,0.178097925;
        59.5,0.182326075; 60,0.179747935; 60.5,0.181707322; 61,0.180057312; 61.5,
        0.174179152; 62,0.172941645; 62.5,0.17892293; 63,0.177891674; 63.5,0.177891674;
        64,0.180263563; 64.5,0.177685423; 65,0.175210408; 65.5,0.173251022; 66,0.180676065;
        66.5,0.176241664; 67,0.172735394; 67.5,0.178201051; 68,0.17469478; 68.5,
        0.179747935; 69,0.177066669; 69.5,0.181913573; 70,0.180985442; 70.5,0.175829162;
        71,0.171291635; 71.5,0.185110467; 72,0.183666708; 72.5,0.177066669; 73,0.179851061;
        73.5,0.180469814; 74,0.181088568; 74.5,0.186554225; 75,0.18315108; 75.5,
        0.179438558; 76,0.166857234; 76.5,0.170982258; 77,0.166650983; 77.5,0.176138539;
        78,0.175829162; 78.5,0.170982258; 79,0.176551041; 79.5,0.173251022; 80,0.177479172;
        80.5,0.178407302; 81,0.178201051; 81.5,0.170363505; 82,0.171910389; 82.5,
        0.174488529; 83,0.170569756; 83.5,0.176241664; 84,0.175829162; 84.5,0.167475988;
        85,0.170982258; 85.5,0.168300992; 86,0.177479172; 86.5,0.175829162; 87,0.173147896;
        87.5,0.173457273; 88,0.172219766; 88.5,0.171497886; 89,0.172735394; 89.5,
        0.175726036; 90,0.174385403; 90.5,0.172941645; 91,0.167991616; 91.5,0.174488529;
        92,0.175107283; 92.5,0.170157253; 93,0.174179152; 93.5,0.168713495; 94,0.171601012;
        94.5,0.17211664; 95,0.171910389; 95.5,0.17469478])
                                                   annotation (
      Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=180,
        origin={30,30})));
  Modelica.Blocks.Sources.CombiTimeTable Qout_real(
    tableOnFile=false,
    tableName="Q",
    fileName=machineData.data.Q_file,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,0; 0.5,0; 1,0; 1.5,0; 2,0; 2.5,0; 3,0; 3.5,0; 4,0; 4.5,0; 5,
        -0.000515628; 5.5,0; 6,0.000206251; 6.5,-0.000309377; 7,-0.000309377;
        7.5,-0.001546884; 8,0; 8.5,0; 9,-0.000412502; 9.5,0.000721879; 10,
        -0.000618754; 10.5,-0.001134382; 11,-0.001546884; 11.5,
        0.239457662; 12,0.363002141; 12.5,0.386927282; 13,0.393424195;
        13.5,0.398580475; 14,0.403014877; 14.5,0.406727399; 15,
        0.408480534; 15.5,0.411677428; 16,0.413636814; 16.5,0.415493075;
        17,0.417143085; 17.5,0.417246211; 18,0.418586843; 18.5,
        0.418793095; 19,0.418277467; 19.5,0.419411848; 20,0.417658713;
        20.5,0.419308723; 21,0.420649356; 21.5,0.420649356; 22,
        0.419721225; 22.5,0.417864964; 23,0.4196181; 23.5,0.419927476; 24,
        0.420236853; 24.5,0.418689969; 25,0.4196181; 25.5,0.419721225; 26,
        0.419721225; 26.5,0.420443104; 27,0.421371235; 27.5,0.420133728;
        28,0.419927476; 28.5,0.42054623; 29,0.4196181; 29.5,0.419205597;
        30,0.419411848; 30.5,0.421680612; 31,0.4196181; 31.5,0.419927476;
        32,0.419514974; 32.5,0.417761839; 33,0.418999346; 33.5,
        0.419514974; 34,0.419514974; 34.5,0.418277467; 35,0.135919552;
        35.5,0.050737799; 36,0.027843914; 36.5,0.02041887; 37,0.013303203;
        37.5,0.010518812; 38,0.009075054; 38.5,0.008043797; 39,
        0.007837546; 39.5,0.004434401; 40,0.004846904; 40.5,0.004950029;
        41,0.004846904; 41.5,0.00422815; 42,0.003403145; 42.5,0.003300019;
        43,0.001546884; 43.5,0.002268763; 44,0.000825005; 44.5,-0.000825005;
        45,-0.000618754; 45.5,-0.000618754; 46,-0.000412502; 46.5,-0.000515628;
        47,-0.000721879; 47.5,-0.000412502; 48,-0.000412502; 48.5,-0.000515628;
        49,-0.001443759; 49.5,-0.001237507; 50,-0.00092813; 50.5,-0.000721879;
        51,-0.001031256; 51.5,-0.00165001; 52,-0.00165001; 52.5,-0.001031256;
        53,-0.000515628; 53.5,-0.000412502; 54,-0.000309377; 54.5,-0.000721879;
        55,-0.00165001; 55.5,-0.002268763; 56,-0.002268763; 56.5,-0.001856261;
        57,-0.002062512; 57.5,-0.002784391; 58,-0.002887517; 58.5,-0.002681266;
        59,-0.002371889; 59.5,-0.001753135; 60,-0.001443759; 60.5,-0.001753135;
        61,-0.002062512; 61.5,-0.002475015; 62,-0.001443759; 62.5,
        0.000206251; 63,-0.000825005; 63.5,-0.001134382; 64,-0.00165001;
        64.5,-0.002371889; 65,-0.002784391; 65.5,-0.003403145; 66,-0.003403145;
        66.5,-0.003300019; 67,-0.003196894; 67.5,-0.002681266; 68,-0.001959387;
        68.5,-0.002165638; 69,-0.00257814; 69.5,-0.002990643; 70,-0.003815648;
        70.5,-0.00422815; 71,-0.004950029; 71.5,-0.004743778; 72,-0.00515628;
        72.5,-0.004331276; 73,-0.004846904; 73.5,0.182841703; 74,
        0.349905188; 74.5,0.379502238; 75,0.388886668; 75.5,0.3942492; 76,
        0.398580475; 76.5,0.402396123; 77,0.404664886; 77.5,0.406521147;
        78,0.408274283; 78.5,0.410749297; 79,0.410955548; 79.5,
        0.413121186; 80,0.413327437; 80.5,0.412914935; 81,0.412708684;
        81.5,0.413533689; 82,0.413636814; 82.5,0.414049317; 83,
        0.414049317; 83.5,0.413430563; 84,0.414255568; 84.5,0.414255568;
        85,0.414771196; 85.5,0.415596201; 86,0.416008703; 86.5,
        0.416111829; 87,0.416008703; 87.5,0.416111829; 88,0.415596201;
        88.5,0.414564945; 89,0.258639025; 89.5,0.247192083; 90,
        0.246985831; 90.5,0.245748324; 91,0.246263952; 91.5,0.247192083;
        92,0.247192083; 92.5,0.246676455; 93,0.24677958; 93.5,0.247088957;
        94,0.247192083; 94.5,0.246882706; 95,0.246676455; 95.5,
        0.246573329])
    annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=180,
        origin={70,30})));
  Modelica.Blocks.Sources.CombiTimeTable Vim_input(
    tableOnFile=false,
    tableName="vim",
    fileName=machineData.data.Vim_file,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,-0.00454622978962459; 0.5,0.000588526423637061; 1,0.00702925141182845;
        1.5,0.00230670052488226; 2,0.000587637024807671; 2.5,-0.0069607545823268;
        3,-0.0110730087785099; 3.5,-0.0141508199677669; 4,-0.0143832892327142; 4.5,
        -0.00421878990477075; 5,-0.0122232466338771; 5.5,-0.0028879658043162; 6,
        0; 6.5,0.00115457641950176; 7,-0.00171894682228166; 7.5,-0.0017908163074532;
        8,-0.00873835402578939; 8.5,0; 9,0; 9.5,-0.00238498808959784; 10,0.00420124494002945;
        10.5,-0.00364679438729173; 11,-0.00638663972199588; 11.5,-0.00885798528685819;
        12,0.820394534701945; 12.5,0.912368247266216; 13,0.927206310614632; 13.5,
        0.940359267281932; 14,0.939090539845891; 14.5,0.943716700885482; 15,0.945854463758214;
        15.5,0.944201296646762; 16,0.947394293676173; 16.5,0.948951962502906; 17,
        0.9490773392127; 17.5,0.947959398867352; 18,0.949183882166379; 18.5,0.94829974901107;
        19,0.949420395191216; 19.5,0.946315425698543; 20,0.948523209227825; 20.5,
        0.946690473376616; 21,0.94890945605786; 21.5,0.953825649163447; 22,0.954834798626663;
        22.5,0.950081705177845; 23,0.949756979785316; 23.5,0.950331098508827; 24,
        0.948753920877409; 24.5,0.950944565390868; 25,0.952381261076688; 25.5,0.954101772211289;
        26,0.948429853817883; 26.5,0.952012337262788; 27,0.955147526854125; 27.5,
        0.951164838414378; 28,0.954095303825982; 28.5,0.949783810132597; 29,0.951908053818013;
        29.5,0.947477194970163; 30,0.947567071906569; 30.5,0.952343316621839; 31,
        0.956440228240789; 31.5,0.945189346584901; 32,0.94619171043265; 32.5,0.951173852066728;
        33,0.948294034321451; 33.5,0.94829310994615; 34,0.947933161557807; 34.5,
        0.943579950900412; 35,0.945642407616151; 35.5,0.604503557204571; 36,0.288511799425879;
        36.5,0.15864815687459; 37,0.120383017468087; 37.5,0.0743506996278921; 38,
        0.0588774983541191; 38.5,0.0520231166052879; 39,0.0447573041513605; 39.5,
        0.0446444165350197; 40,0.0245114250874534; 40.5,0.0266376784305861; 41,0.0273456662064935;
        41.5,0.0279879197816274; 42,0.0241964127667876; 42.5,0.0192030638858728;
        43,0.0191238073134535; 43.5,0.00864816210358111; 44,0.012725274557929; 44.5,
        0.00484170470002204; 45,-0.00474799322025655; 45.5,-0.00361713516203504;
        46,-0.00342988756873306; 46.5,-0.00230534920875959; 47,-0.00292990593256742;
        47.5,-0.00408701404216055; 48,-0.00235373924340234; 48.5,-0.00236946011531716;
        49,-0.00293356513197378; 49.5,-0.00809830905287879; 50,-0.00699492255615029;
        50.5,-0.00528696448395063; 51,-0.00422798608045333; 51.5,-0.0058119332399525;
        52,-0.00927146308499775; 52.5,-0.00954115341863833; 53,-0.00582882020989078;
        53.5,-0.00300725204286491; 54,-0.00237102084514041; 54.5,-0.00177186645745457;
        55,-0.00413680447597701; 55.5,-0.00929936542303616; 56,-0.0126067126195629;
        56.5,-0.012938213343795; 57,-0.0107206688621664; 57.5,-0.0117551642173284;
        58,-0.0154622289006474; 58.5,-0.016034756945188; 59,-0.0150384655410878;
        59.5,-0.0136477886436664; 60,-0.0100220175629882; 60.5,-0.00823383619265817;
        61,-0.0100466570045617; 61.5,-0.0115611538792284; 62,-0.0135778539247954;
        62.5,-0.00823829696267342; 63,0.0011961212771932; 63.5,-0.00454437191438212;
        64,-0.00647230582175719; 64.5,-0.00924811468572887; 65,-0.0134268749247997;
        65.5,-0.0158554998163735; 66,-0.0191944250536392; 66.5,-0.0191809266655592;
        67,-0.0185889128461673; 67.5,-0.0179235440794098; 68,-0.0155630819648308;
        68.5,-0.0116146459017081; 69,-0.0126252173167774; 69.5,-0.0146534005484506;
        70,-0.0176611325716497; 70.5,-0.0223386109772179; 71,-0.0242582424814757;
        71.5,-0.0283641855303714; 72,-0.0270517807714747; 72.5,-0.0289352477651381;
        73,-0.0243790427833045; 73.5,-0.0272646479449643; 74,0.706821775004703;
        74.5,0.912752508127323; 75,0.933425168685677; 75.5,0.933772805457629; 76,
        0.932041056312245; 76.5,0.936945729636057; 77,0.944169455616107; 77.5,0.943771077061759;
        78,0.940554341481319; 78.5,0.941828673703938; 79,0.951489764697314; 79.5,
        0.944590937849951; 80,0.95242511508998; 80.5,0.951277298253563; 81,0.950691899967315;
        81.5,0.948308634744591; 82,0.948381145062; 82.5,0.950228818052408; 83,0.952744081352676;
        83.5,0.95245778065417; 84,0.943688228635629; 84.5,0.945038203630348; 85,
        0.945572483651722; 85.5,0.94834101566488; 86,0.954791568719925; 86.5,0.960082251849418;
        87,0.955958526945743; 87.5,0.955478331837709; 88,0.959514106922156; 88.5,
        0.956369606152309; 89,0.95276917474075; 89.5,0.833672398607797; 90,0.831213397031014;
        90.5,0.82626417152042; 91,0.813391444927685; 91.5,0.817007989861855; 92,
        0.832931095881053; 92.5,0.833952657255874; 93,0.827311697844683; 93.5,0.827961190801277;
        94,0.831932653202514; 94.5,0.834486220829993; 95,0.829633184319202; 95.5,
        0.823859439655825])
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={120,18})));
  Modelica.Blocks.Sources.CombiTimeTable Vreal_input(
    tableOnFile=false,
    tableName="vr",
    fileName=machineData.data.Vr_file,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,0.983690311612942; 0.5,0.98342391589928; 1,0.983509662905442; 1.5,0.983808802785531;
        2,0.983700641480524; 2.5,0.983786882003036; 3,0.983749190486174; 3.5,0.9837650820997;
        4,0.983817061622818; 4.5,0.983581079394889; 5,0.983680221675061; 5.5,0.983641232482462;
        6,0.983645472; 6.5,0.983700139432622; 7,0.983810005299516; 7.5,0.983754532009852;
        8,0.983938740130341; 8.5,0.983645472; 9,0.983756162; 9.5,0.983808616112618;
        10,0.983691845502148; 10.5,0.984026129525152; 11,0.984122852602829; 11.5,
        0.983826975926686; 12,0.593920418243779; 12.5,0.471217464629391; 13,0.446304529089946;
        13.5,0.421004883734082; 14,0.424230811429687; 14.5,0.415351259966593; 15,
        0.411293205814844; 15.5,0.415486710308154; 16,0.408433261974159; 16.5,0.404801000540895;
        17,0.404930241564353; 17.5,0.407540518770187; 18,0.405385503654841; 18.5,
        0.406747934679411; 19,0.404690151583118; 19.5,0.412729780168053; 20,0.407209620418677;
        20.5,0.411868794606416; 21,0.406308746656225; 21.5,0.394484890720178; 22,
        0.39232731521; 22.5,0.403843083466505; 23,0.405029630558663; 23.5,0.403114150254383;
        24,0.406109549499608; 24.5,0.401380282976326; 25,0.399249484245965; 25.5,
        0.394396456140089; 26,0.408267592177022; 26.5,0.399985527755989; 27,0.391711225932861;
        27.5,0.400858014978785; 28,0.394846508978161; 28.5,0.404684408351236; 29,
        0.400090829076894; 29.5,0.41075197154994; 30,0.410962053318707; 30.5,0.399483082086049;
        31,0.38898510522142; 31.5,0.416264268641599; 32,0.413842690760378; 32.5,
        0.402401721405189; 33,0.409421443515362; 33.5,0.408445222655463; 34,0.409419510592808;
        34.5,0.418673012250709; 35,0.415234005306943; 35.5,0.79622016179324; 36,
        0.946459446029146; 36.5,0.974804793599831; 37,0.978872029841631; 37.5,0.983273624072722;
        38,0.983600562056426; 38.5,0.983709789149618; 39,0.983513119365748; 39.5,
        0.983352044119058; 40,0.984447267369006; 40.5,0.983893741329331; 41,0.983874318538157;
        41.5,0.98374552325709; 42,0.983790719615675; 42.5,0.984011564177454; 43,
        0.983680975956244; 43.5,0.98416092453917; 44,0.983895253849609; 44.5,0.984076320357475;
        45,0.984021432316357; 45.5,0.983860202873157; 46,0.983805528128846; 46.5,
        0.983808805952984; 47,0.983862489434177; 47.5,0.983803017692988; 48,0.98386403652942;
        48.5,0.983919343954609; 49,0.983917823776419; 49.5,0.983944216178359; 50,
        0.983952678851374; 50.5,0.983963338324608; 51,0.983913112974418; 51.5,0.983960377552052;
        52,0.983933861157662; 52.5,0.983931282941956; 53,0.983904931690185; 53.5,
        0.983972946577045; 54,0.98397468535553; 54.5,0.983975946682448; 55,0.983968846056159;
        55.5,0.983988945314064; 56,0.983896780133612; 56.5,0.983892476745214; 57,
        0.983919138150849; 57.5,0.983907322502778; 58,0.983856047721305; 58.5,0.983846883275071;
        59,0.983862616280612; 59.5,0.983827539569027; 60,0.983926502501243; 60.5,
        0.983943091393966; 61,0.983981599106705; 61.5,0.983854272476513; 62,0.983828507226795;
        62.5,0.983887707115229; 63,0.983810779875633; 63.5,0.983856356968991; 64,
        0.983790216744892; 64.5,0.983768038553993; 65,0.983664528842392; 65.5,0.983628379724042;
        66,0.983568889463179; 66.5,0.983458441744415; 67,0.983469809859611; 67.5,
        0.9834821610755; 68,0.983466994063162; 68.5,0.983576898156255; 69,0.983564445511227;
        69.5,0.98353631983698; 70,0.983542262316548; 70.5,0.983502502656998; 71,
        0.983346303322392; 71.5,0.983291803253575; 72,0.983273418609084; 72.5,0.983219795377856;
        73,0.983287953859319; 73.5,0.983267539156328; 74,0.716788240319297; 74.5,
        0.467809200550777; 75,0.43196278944011; 75.5,0.433581592397331; 76,0.438593214639228;
        76.5,0.429079932644058; 77,0.413769802585888; 77.5,0.415365099159393; 78,
        0.423273314161704; 78.5,0.420837313484913; 79,0.398942483467151; 79.5,0.41528816076572;
        80,0.39727967205563; 80.5,0.400163054769468; 81,0.401978369250286; 81.5,
        0.407568928253164; 82,0.407259932265398; 82.5,0.403213525006415; 83,0.397233771037688;
        83.5,0.398063300242109; 84,0.418292338610121; 84.5,0.415233364608988; 85,
        0.41429115454966; 85.5,0.407913962233557; 86,0.392578072335581; 86.5,0.379606145941203;
        87,0.389727824689363; 87.5,0.391049758651265; 88,0.381189867220138; 88.5,
        0.388717968462296; 89,0.397461170733955; 89.5,0.578052753579928; 90,0.579456647138311;
        90.5,0.586492315532169; 91,0.604496957616285; 91.5,0.599412896134307; 92,
        0.577179202198831; 92.5,0.575799600472907; 93,0.585205431063176; 93.5,0.584382136085476;
        94,0.578811241790325; 94.5,0.575123587007443; 95,0.582198726663406; 95.5,
        0.590340750365498])              annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={120,-20})));
  Data2Model.Ifmax.Ifmax
    machineData
    annotation (Placement(transformation(extent={{-24,26},{-4,46}})));
  Modelica.Blocks.Interfaces.RealOutput Pout
    annotation (Placement(transformation(extent={{-54,-34},{-46,-26}}),iconTransformation(
          extent={{-54,-34},{-46,-26}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{-38,-34},{-30,-26}})));
equation
      Pout = Gen.P;
      Qout = Gen.Q;
  connect(Gen.p, bus.p)
    annotation (Line(points={{-48,0},{-48,0},{-8,0}}, color={0,0,255}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-74.4,6},{-80,6},{-80,
          16},{-42,16},{-42,6},{-46.8,6}}, color={0,0,127}));
  connect(Gen.EFD, Gen.EFD0) annotation (Line(points={{-74.4,-6},{-80,-6},{-80,-16},
          {-42,-16},{-42,-6},{-46.8,-6}}, color={0,0,127}));
  connect(voltageSource.u2, Vreal_input.y[1]) annotation (Line(points={{90,-4},{
          100,-4},{100,-20},{109,-20}}, color={0,0,127}));
  connect(voltageSource.u1, Vim_input.y[1]) annotation (Line(points={{90,4},{100,
          4},{100,18},{109,18}}, color={0,0,127}));
  connect(bus.p, voltageSource.p)
    annotation (Line(points={{-8,0},{67,0}}, color={0,0,255}));
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
