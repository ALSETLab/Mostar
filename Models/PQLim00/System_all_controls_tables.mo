within Mostar.Models.PQLim00;
model System_all_controls_tables
  "System with the original generator parameters"

  OpenIPSL.Electrical.Buses.Bus bus(
    V_0=machineData.data.V_0,
    angle_0=machineData.data.A_0,
    P_0=machineData.data.P_0,
    Q_0=machineData.data.Q_0)       annotation (Placement(transformation(extent={{-18,-10},{2,10}})));
  Modelica.Blocks.Sources.Constant const(k=-Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-74},
            {-70,-64}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_C1=1.071137,
    T_B1=10.7561,
    T_C2=3.414283,
    T_B2=1.701033,
    K_R=358.6086,
    T_1=0.004361481) annotation (Placement(transformation(extent={{-54,-38},{-74,
            -20}})));
  Modelica.Blocks.Sources.Constant const1(k=Modelica.Constants.inf)
                                                  annotation (Placement(transformation(extent={{-80,-56},
            {-70,-46}})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=30, fn=50) annotation (Placement(transformation(extent={{80,40},
            {140,60}})));
  VoltageSource voltageSource
    annotation (Placement(transformation(extent={{66,-10},{46,10}})));
  Data2Model.PQLim00.init          machineData
    annotation (Placement(transformation(extent={{-48,30},{-28,50}})));
  Modelica.Blocks.Sources.CombiTimeTable Pout_real(
    tableOnFile=false,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,0.168197867; 0.5,0.168610369; 1,0.168816621; 1.5,0.170054128; 2,
        0.168197867; 2.5,0.167682239; 3,0.170260379; 3.5,0.170879133; 4,
        0.165413475; 4.5,0.160979074; 5,0.16201033; 5.5,0.171085384; 6,
        0.173972901; 6.5,0.167063485; 7,0.166754108; 7.5,0.165000973; 8,
        0.163866591; 8.5,0.168610369; 9,0.171601012; 9.5,0.171704138; 10,
        0.169435374; 10.5,0.164485345; 11,0.168816621; 11.5,0.172322891; 12,
        0.169951002; 12.5,0.169022872; 13,0.170672881; 13.5,0.169332249; 14,
        0.170879133; 14.5,0.174179152; 15,0.171394761; 15.5,0.169125997; 16,
        0.1695385; 16.5,0.168507244; 17,0.169744751; 17.5,0.172941645; 18,
        0.169744751; 18.5,0.163763466; 19,0.166444732; 19.5,0.164691596; 20,
        0.17211664; 20.5,0.168919746; 21,0.17046663; 21.5,0.167579113; 22,
        0.169229123; 22.5,0.164279094; 23,0.165722852; 23.5,0.167372862; 24,
        0.171704138; 24.5,0.164279094; 25,0.162835335; 25.5,0.165929104; 26,
        0.165413475; 26.5,0.168610369; 27,0.17046663; 27.5,0.169229123; 28,
        0.169229123; 28.5,0.169125997; 29,0.173251022; 29.5,0.172838519; 30,
        0.169435374; 30.5,0.167063485; 31,0.171807263; 31.5,0.163350963; 32,
        0.1695385; 32.5,0.171291635; 33,0.168507244; 33.5,0.167991616; 34,
        0.170569756; 34.5,0.166857234; 35,0.169435374; 35.5,0.172735394; 36,
        0.173663524; 36.5,0.170569756; 37,0.167475988; 37.5,0.170982258; 38,
        0.171910389; 38.5,0.171394761; 39,0.171291635; 39.5,0.170157253; 40,
        0.164382219; 40.5,0.169125997; 41,0.173147896; 41.5,0.166547857; 42,
        0.167785364; 42.5,0.166341606; 43,0.163557215; 43.5,0.16623848; 44,
        0.172941645; 44.5,0.168610369; 45,0.170879133; 45.5,0.162629084; 46,
        0.166135355; 46.5,0.167475988; 47,0.167372862; 47.5,0.163041586; 48,
        0.161907205; 48.5,0.156029045; 49,0.155410291; 49.5,0.149222755; 50,
        0.146644615; 50.5,0.135919552; 51,0.134372667; 51.5,0.127772628; 52,
        0.122925725; 52.5,0.126122619; 53,0.118285073; 53.5,0.103641236; 54,
        0.116635063; 54.5,0.108385014; 55,0.100650594; 55.5,0.090956786; 56,
        0.093844303; 56.5,0.083531743; 57,0.078169211; 57.5,0.07373481; 58,
        0.067134771; 58.5,0.068372278; 59,0.055997205; 59.5,0.054450321; 60,
        0.053728442; 60.5,0.051872181; 61,0.0467159; 61.5,0.044344012; 62,
        0.04743778; 62.5,0.051356553; 63,0.051872181; 63.5,0.054037819; 64,
        0.052490935; 64.5,0.051356553; 65,0.048469036; 65.5,0.047025277; 66,
        0.048056533; 66.5,0.052078432; 67,0.053419065; 67.5,0.045581519; 68,
        0.047644031; 68.5,0.04836591; 69,0.05424407; 69.5,0.05589408; 70,
        0.057440964; 70.5,0.060225355; 71,0.057750341; 71.5,0.051769055; 72,
        0.053934693; 72.5,0.051459678; 73,0.05166593; 73.5,0.051253427; 74,
        0.051253427; 74.5,0.052490935; 75,0.063112872; 75.5,0.056615959; 76,
        0.056409708; 76.5,0.057440964; 77,0.058369094; 77.5,0.060019104; 78,
        0.058987848; 78.5,0.056512833; 79,0.054140944; 79.5,0.055378452; 80,
        0.055275326; 80.5,0.049397166; 81,0.058369094; 81.5,0.058265969; 82,
        0.0551722; 82.5,0.055997205; 83,0.058575345; 83.5,0.049809669; 84,
        0.055275326; 84.5,0.056306582; 85,0.05682221; 85.5,0.05847222; 86,
        0.060431606; 86.5,0.056925336; 87,0.060328481; 87.5,0.058575345; 88,
        0.063525375; 88.5,0.058884722; 89,0.057440964; 89.5,0.055069075; 90,
        0.05847222; 90.5,0.059606602; 91,0.055481577; 91.5,0.060019104; 92,
        0.053315939; 92.5,0.058678471; 93,0.061772239; 93.5,0.056306582; 94,
        0.059090973; 94.5,0.0551722; 95,0.053625316; 95.5,0.052387809; 96,
        0.053419065; 96.5,0.061772239; 97,0.060637858; 97.5,0.053625316; 98,
        0.062597244; 98.5,0.060225355; 99,0.060534732; 99.5,0.066309766; 100,
        0.05682221; 100.5,0.059194099; 101,0.059503476; 101.5,0.063937877; 102,
        0.051769055; 102.5,0.063525375; 103,0.054347195; 103.5,0.06012223; 104,
        0.0551722; 104.5,0.061359737; 105,0.05940035; 105.5,0.060534732; 106,
        0.058575345; 106.5,0.060431606; 107,0.054347195; 107.5,0.057853466; 108,
        0.054759698; 108.5,0.047953408; 109,0.051047176; 109.5,0.055275326; 110,
        0.057234713; 110.5,0.064041003; 111,0.063319123; 111.5,0.069197283; 112,
        0.068475404; 112.5,0.065587887; 113,0.064453505; 113.5,0.069300409; 114,
        0.05940035; 114.5,0.065381636; 115,0.064041003; 115.5,0.061875365; 116,
        0.069403534; 116.5,0.064247254; 117,0.068681655; 117.5,0.056925336; 118,
        0.055378452; 118.5,0.066619143; 119,0.060225355; 119.5,0.056203456; 120,
        0.051562804; 120.5,0.061875365; 121,0.050325297; 121.5,0.061669114; 122,
        0.060225355; 122.5,0.057440964; 123,0.063009747; 123.5,0.057647215; 124,
        0.061772239; 124.5,0.061669114; 125,0.057750341; 125.5,0.058059717; 126,
        0.064969133; 126.5,0.051459678])           annotation (
      Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=180,
        origin={10,30})));
  Modelica.Blocks.Sources.CombiTimeTable Qout_real(
    tableOnFile=false,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,-0.179129181; 0.5,-0.180057312; 1,-0.180057312; 1.5,-0.180366689;
        2,-0.179541684; 2.5,-0.178819805; 3,-0.179851061; 3.5,-0.179747935; 4,-0.179644809;
        4.5,-0.178716679; 5,-0.178819805; 5.5,-0.179232307; 6,-0.178407302; 6.5,
        -0.179438558; 7,-0.178097925; 7.5,-0.177891674; 8,-0.178097925; 8.5,-0.179644809;
        9,-0.178819805; 9.5,-0.179644809; 10,-0.178201051; 10.5,-0.179026056;
        11,-0.179335433; 11.5,-0.179541684; 12,-0.180366689; 12.5,-0.178613553;
        13,-0.179541684; 13.5,-0.178097925; 14,-0.178407302; 14.5,-0.178097925;
        15,-0.178407302; 15.5,-0.176860418; 16,-0.178510428; 16.5,-0.177891674;
        17,-0.178716679; 17.5,-0.179541684; 18,-0.178613553; 18.5,-0.178304176;
        19,-0.177685423; 19.5,-0.177479172; 20,-0.177066669; 20.5,-0.176654167;
        21,-0.177169795; 21.5,-0.177066669; 22,-0.177066669; 22.5,-0.176757292;
        23,-0.176654167; 23.5,-0.176757292; 24,-0.178613553; 24.5,-0.178304176;
        25,-0.178304176; 25.5,-0.179129181; 26,-0.179335433; 26.5,-0.179541684;
        27,-0.17892293; 27.5,-0.178716679; 28,-0.177685423; 28.5,-0.178716679;
        29,-0.177479172; 29.5,-0.178304176; 30,-0.177685423; 30.5,-0.178097925;
        31,-0.177066669; 31.5,-0.177066669; 32,-0.177169795; 32.5,-0.177582297;
        33,-0.177685423; 33.5,-0.178407302; 34,-0.178407302; 34.5,-0.178201051;
        35,-0.178613553; 35.5,-0.17892293; 36,-0.179438558; 36.5,-0.179232307;
        37,-0.179232307; 37.5,-0.179644809; 38,-0.179129181; 38.5,-0.180366689;
        39,-0.17892293; 39.5,-0.17892293; 40,-0.179644809; 40.5,-0.179954186;
        41,-0.179232307; 41.5,-0.178304176; 42,-0.176963544; 42.5,-0.177376046;
        43,-0.177376046; 43.5,-0.177891674; 44,-0.178613553; 44.5,-0.177788548;
        45,-0.177788548; 45.5,-0.177376046; 46,-0.177169795; 46.5,-0.176241664;
        47,-0.177479172; 47.5,-0.176138539; 48,-0.176654167; 48.5,-0.175932287;
        49,-0.176447916; 49.5,-0.175622911; 50,-0.17634479; 50.5,-0.175829162;
        51,-0.175932287; 51.5,-0.175210408; 52,-0.173972901; 52.5,-0.174488529;
        53,-0.173560399; 53.5,-0.172838519; 54,-0.173869775; 54.5,-0.17304477;
        55,-0.173147896; 55.5,-0.172426017; 56,-0.173457273; 56.5,-0.173560399;
        57,-0.172941645; 57.5,-0.172219766; 58,-0.171704138; 58.5,-0.171910389;
        59,-0.171394761; 59.5,-0.170157253; 60,-0.170982258; 60.5,-0.171601012;
        61,-0.17046663; 61.5,-0.170672881; 62,-0.170363505; 62.5,-0.170363505;
        63,-0.170776007; 63.5,-0.170054128; 64,-0.169332249; 64.5,-0.168713495;
        65,-0.166857234; 65.5,-0.167166611; 66,-0.168300992; 66.5,-0.168404118;
        67,-0.168404118; 67.5,-0.166032229; 68,-0.167475988; 68.5,-0.16788849;
        69,-0.169022872; 69.5,-0.1695385; 70,-0.168713495; 70.5,-0.169847877;
        71,-0.169022872; 71.5,-0.168610369; 72,-0.1695385; 72.5,-0.167785364;
        73,-0.168197867; 73.5,-0.168197867; 74,-0.166857234; 74.5,-0.166754108;
        75,-0.167579113; 75.5,-0.167991616; 76,-0.168197867; 76.5,-0.167682239;
        77,-0.167785364; 77.5,-0.16696036; 78,-0.16788849; 78.5,-0.168300992;
        79,-0.170157253; 79.5,-0.171704138; 80,-0.170054128; 80.5,-0.1695385;
        81,-0.170672881; 81.5,-0.171601012; 82,-0.171291635; 82.5,-0.172322891;
        83,-0.172735394; 83.5,-0.171394761; 84,-0.172013514; 84.5,-0.171910389;
        85,-0.172426017; 85.5,-0.173972901; 86,-0.17376665; 86.5,-0.17376665;
        87,-0.173560399; 87.5,-0.172632268; 88,-0.173354147; 88.5,-0.174282278;
        89,-0.174282278; 89.5,-0.173147896; 90,-0.172838519; 90.5,-0.173457273;
        91,-0.172941645; 91.5,-0.174488529; 92,-0.173251022; 92.5,-0.17304477;
        93,-0.173147896; 93.5,-0.172838519; 94,-0.173457273; 94.5,-0.173147896;
        95,-0.172735394; 95.5,-0.17304477; 96,-0.172941645; 96.5,-0.17304477;
        97,-0.173354147; 97.5,-0.171910389; 98,-0.173972901; 98.5,-0.173663524;
        99,-0.173354147; 99.5,-0.173869775; 100,-0.172838519; 100.5,-0.17376665;
        101,-0.175210408; 101.5,-0.174488529; 102,-0.173560399; 102.5,-0.173869775;
        103,-0.172735394; 103.5,-0.17376665; 104,-0.174282278; 104.5,-0.174488529;
        105,-0.173869775; 105.5,-0.174076027; 106,-0.17376665; 106.5,-0.174282278;
        107,-0.174591655; 107.5,-0.175416659; 108,-0.175004157; 108.5,-0.174797906;
        109,-0.17469478; 109.5,-0.173663524; 110,-0.17304477; 110.5,-0.174076027;
        111,-0.174591655; 111.5,-0.173972901; 112,-0.174179152; 112.5,-0.174179152;
        113,-0.174385403; 113.5,-0.175622911; 114,-0.176035413; 114.5,-0.175210408;
        115,-0.174901031; 115.5,-0.175313534; 116,-0.175416659; 116.5,-0.174797906;
        117,-0.17469478; 117.5,-0.347120797; 118,-0.404974263; 118.5,-0.399921108;
        119,-0.394042949; 119.5,-0.390330427; 120,-0.387752287; 120.5,-0.387855412;
        121,-0.387236659; 121.5,-0.387133533; 122,-0.386927282; 122.5,-0.386824156;
        123,-0.38744291; 123.5,-0.387339784; 124,-0.387236659; 124.5,-0.387030407;
        125,-0.386411654; 125.5,-0.386927282; 126,-0.38744291; 126.5,-0.387030407])
    annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=180,
        origin={48,30})));
  Modelica.Blocks.Sources.CombiTimeTable Vim_input(
    tableOnFile=false,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,-0.701665558949569; 0.5,-0.702639394648118; 1,-0.702237930368056;
        1.5,-0.700399460294949; 2,-0.702502053405784; 2.5,-0.702106498045159; 3,
        -0.698974332225026; 3.5,-0.697544664205317; 4,-0.707979398385445; 4.5,-0.715074313404174;
        5,-0.713415278350924; 5.5,-0.696312461577528; 6,-0.689142636575071; 6.5,
        -0.704612691008621; 7,-0.702762397959366; 7.5,-0.705842911752586; 8,-0.708507270969126;
        8.5,-0.701885949570445; 9,-0.694426079943447; 9.5,-0.695796978109677;
        10,-0.697371951149144; 10.5,-0.708767445660607; 11,-0.700715136153862;
        11.5,-0.69436977332992; 12,-0.700518806852267; 12.5,-0.699103269464049;
        13,-0.697724861667523; 13.5,-0.697582415400577; 14,-0.695260161379594;
        14.5,-0.688200457524692; 15,-0.694217132572565; 15.5,-0.695673552016988;
        16,-0.69806575435486; 16.5,-0.698814906748382; 17,-0.6979652781424;
        17.5,-0.693175221149869; 18,-0.697613705826068; 18.5,-0.708883566966602;
        19,-0.702408804259462; 19.5,-0.705576001560523; 20,-0.690131965871361;
        20.5,-0.695731295255693; 21,-0.693667006535529; 21.5,-0.699144114053448;
        22,-0.695938274284264; 22.5,-0.705023377437479; 23,-0.701924616463534;
        23.5,-0.698892849989316; 24,-0.693881475710439; 24.5,-0.707822171899993;
        25,-0.710764694955888; 25.5,-0.70615285119747; 26,-0.707622601503651;
        26.5,-0.701737501843156; 27,-0.697021540742557; 27.5,-0.699011649645249;
        28,-0.697136131528152; 28.5,-0.699253251718363; 29,-0.688707985800482;
        29.5,-0.691142585794682; 30,-0.696491789903203; 30.5,-0.70191136242762;
        31,-0.690536281622477; 31.5,-0.707318530893549; 32,-0.695364812376601;
        32.5,-0.692752288191701; 33,-0.698511695992896; 33.5,-0.700942050969685;
        34,-0.695862665724965; 34.5,-0.702789873622172; 35,-0.698458242263088;
        35.5,-0.692500773898823; 36,-0.69167136428538; 36.5,-0.697193351251763;
        37,-0.70330696045907; 37.5,-0.697154712714138; 38,-0.694401890575043;
        38.5,-0.697885475809039; 39,-0.695258209281044; 39.5,-0.69758357605385;
        40,-0.710251933608967; 40.5,-0.701447663371103; 41,-0.692241246712207;
        41.5,-0.703386313291188; 42,-0.698344214910924; 42.5,-0.702080421149181;
        43,-0.707557242178018; 43.5,-0.703236567039747; 44,-0.691483432776807;
        44.5,-0.698380773560206; 45,-0.694063415413202; 45.5,-0.709608279613089;
        46,-0.702186535394234; 46.5,-0.697843255913362; 47,-0.700439190342452;
        47.5,-0.706468474624309; 48,-0.70980997825157; 48.5,-0.72022994175482;
        49,-0.722495785097665; 49.5,-0.733612831049474; 50,-0.740224176446691;
        50.5,-0.761594262521395; 51,-0.765003813007002; 51.5,-0.777723183123297;
        52,-0.786121443324388; 52.5,-0.780062878397273; 53,-0.795219643338411;
        53.5,-0.825517931532107; 54,-0.799270558616801; 54.5,-0.815662646416701;
        55,-0.832269971236341; 55.5,-0.85146385416299; 56,-0.846793404519682;
        56.5,-0.867633665984822; 57,-0.877373563279605; 57.5,-0.885122734752733;
        58,-0.896780732887916; 58.5,-0.894569251691548; 59,-0.915121973931672;
        59.5,-0.916764485119957; 60,-0.918394465301951; 60.5,-0.921330247836794;
        61,-0.928330408510316; 61.5,-0.931520295658897; 62,-0.927228555624506;
        62.5,-0.921595044924464; 63,-0.920903969507457; 63.5,-0.917304117538416;
        64,-0.91934563460838; 64.5,-0.920788523445564; 65,-0.924297321167116;
        65.5,-0.926754240705493; 66,-0.925619589463264; 66.5,-0.919696758989887;
        67,-0.917505239671952; 67.5,-0.928161721360707; 68,-0.925930624901462;
        68.5,-0.925048861235852; 69,-0.916570131919024; 69.5,-0.914054540060774;
        70,-0.911090807134564; 70.5,-0.90716297166536; 71,-0.91065008368307;
        71.5,-0.920163929680189; 72,-0.917261990652495; 72.5,-0.920091440660427;
        73,-0.92023362041872; 73.5,-0.920812275418952; 74,-0.920181792555872;
        74.5,-0.918303639385878; 75,-0.90094820660995; 75.5,-0.912517915857643;
        76,-0.912812508463762; 76.5,-0.910821686296549; 77,-0.909275681753318;
        77.5,-0.905913542446998; 78,-0.908240529894341; 78.5,-0.912490529792289;
        79,-0.917247336601239; 79.5,-0.916038628085153; 80,-0.915151041785328;
        80.5,-0.923972797974615; 81,-0.910612650056845; 81.5,-0.911399064764497;
        82,-0.916152949395643; 82.5,-0.91554380125172; 83,-0.911573176899918;
        83.5,-0.924424159704146; 84,-0.916617338100326; 84.5,-0.914952934284689;
        85,-0.914512625138309; 85.5,-0.912718456997334; 86,-0.909357595995193;
        86.5,-0.914883572597897; 87,-0.909199514840229; 87.5,-0.911517004544059;
        88,-0.903683665863497; 88.5,-0.911915039427076; 89,-0.914133710821363;
        89.5,-0.917230462437368; 90,-0.911794505463421; 90.5,-0.910362729236356;
        91,-0.916601176522147; 91.5,-0.910426503993576; 92,-0.920087691104786;
        92.5,-0.911680863490405; 93,-0.906644224279131; 93.5,-0.915270175901926;
        94,-0.911139610742333; 94.5,-0.917125302346836; 95,-0.919173128203482;
        95.5,-0.921213381867887; 96,-0.919526256699917; 96.5,-0.906478959876379;
        97,-0.908682857049211; 97.5,-0.919048849875603; 98,-0.905870665841633;
        98.5,-0.909634136445159; 99,-0.908903482784277; 99.5,-0.899579658175576;
        100,-0.914463373345959; 100.5,-0.911195629684934; 101,-0.911432527084945;
        101.5,-0.903637038176853; 102,-0.922241551441981; 102.5,-0.903948650889194;
        103,-0.91808006115309; 103.5,-0.909649818310932; 104,-0.91772699738261;
        104.5,-0.907997665724109; 105,-0.911078747115338; 105.5,-0.909312561836191;
        106,-0.912287306629532; 106.5,-0.909647592691631; 107,-0.919220071470363;
        107.5,-0.914231535801995; 108,-0.918690146371608; 108.5,-0.928315342008236;
        109,-0.923922187286838; 109.5,-0.917060504891671; 110,-0.913764138439585;
        110.5,-0.903417834386448; 111,-0.904835208333626; 111.5,-0.89430381730437;
        112,-0.895819443648888; 112.5,-0.900862805221689; 113,-0.902915686291786;
        113.5,-0.895423331193101; 114,-0.912140361533395; 114.5,-0.901868139439976;
        115,-0.904029003999969; 115.5,-0.907736072186122; 116,-0.895101496999191;
        116.5,-0.903569100010479; 117,-0.895864767731555; 117.5,-0.927151031825366;
        118,-0.923579507473475; 118.5,-0.920323148584303; 119,-0.923279447047747;
        119.5,-0.924905008825376; 120,-0.92639949306131; 120.5,-0.923212304985204;
        121,-0.926980502327065; 121.5,-0.923082107981659; 122,-0.923654160719724;
        122.5,-0.924691922658846; 123,-0.922763398253236; 123.5,-0.924646894622219;
        124,-0.923104634520864; 124.5,-0.923021364831736; 125,-0.924179513248535;
        125.5,-0.924207708368942; 126,-0.921795109537231; 126.5,-0.926401723365401])
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={122,18})));
  Modelica.Blocks.Sources.CombiTimeTable Vreal_input(
    tableOnFile=false,
    startTime=0,
    columns={2},
    smoothness=Modelica.Blocks.Types.Smoothness.ContinuousDerivative,
    extrapolation=Modelica.Blocks.Types.Extrapolation.HoldLastPoint,
    table=[0,0.65884659162641; 0.5,0.657969877977274; 1,0.658398335651976; 1.5,
        0.660353750088123; 2,0.658116512630978; 2.5,0.658376680416699; 3,
        0.661701043375578; 3.5,0.663127659564938; 4,0.651893773982335; 4.5,
        0.644103289391304; 5,0.646352593174313; 5.5,0.664661895318775; 6,
        0.672013658318502; 6.5,0.656018712182966; 7,0.658000461306077; 7.5,
        0.65469487472657; 8,0.6518923294161; 8.5,0.658773552165307; 9,
        0.666392730254283; 9.5,0.665041316887297; 10,0.663068352835163; 10.5,
        0.651200503597385; 11,0.659615111136737; 11.5,0.666451400574067; 12,
        0.660065746088998; 12.5,0.661564816581435; 13,0.663259414934098; 13.5,
        0.66324859912114; 14,0.665922595399067; 14.5,0.673057656891077; 15,
        0.66692998652813; 15.5,0.665250508858373; 16,0.66298099343917; 16.5,
        0.661949889809272; 17,0.662926051490289; 17.5,0.667693765303533; 18,
        0.662974689214279; 18.5,0.651074094399751; 19,0.657973193329464; 19.5,
        0.654738448950512; 20,0.670838819034729; 20.5,0.665270203780943; 21,
        0.667422327526538; 21.5,0.661682693608743; 22,0.665133785395034; 22.5,
        0.655252184414825; 23,0.65848969942126; 23.5,0.661787104851372; 24,
        0.667039643184461; 24.5,0.652146167977822; 25,0.649102055856027; 25.5,
        0.654116259741295; 26,0.652689273643202; 26.5,0.659012528404895; 27,
        0.664078735396248; 27.5,0.66190312565202; 28,0.663958439348858; 28.5,
        0.661728407298571; 29,0.67230064832337; 29.5,0.669956608007786; 30,
        0.664153226065025; 30.5,0.658422934283239; 31,0.670025302999036; 31.5,
        0.652529150865804; 32,0.665413126673824; 32.5,0.668212282975187; 33,
        0.662430709318955; 33.5,0.66002000223484; 34,0.66529297720234; 34.5,
        0.658052091936344; 35,0.662567490056194; 35.5,0.668552622208445; 36,
        0.669410676894131; 36.5,0.663497010100057; 37,0.657175204859466; 37.5,
        0.663537608566272; 38,0.666417936288622; 38.5,0.663170760603481; 39,
        0.665604545012326; 39.5,0.663408010584443; 40,0.649909059691686; 40.5,
        0.659240210233055; 41,0.668741687248581; 41.5,0.657009194903983; 42,
        0.662124727204399; 42.5,0.658404488253792; 43,0.652433598523879; 43.5,
        0.657169474863144; 44,0.669525242323957; 44.5,0.662327474166063; 45,
        0.667089956057388; 45.5,0.650611777152212; 46,0.658453148483584; 46.5,
        0.663134846214497; 47,0.660553633553006; 47.5,0.65393832159439; 48,
        0.650555555023067; 48.5,0.638750236859083; 49,0.636353677355428; 49.5,
        0.623333978062532; 50,0.615554842128974; 50.5,0.588728000464897; 51,
        0.584290719866105; 51.5,0.567156575334205; 52,0.555457475292067; 52.5,
        0.563839776585787; 53,0.541958961291152; 53.5,0.495015227272058; 54,
        0.536165483381547; 54.5,0.510882861996645; 55,0.483797198282448; 55.5,
        0.449157365676656; 56,0.458134360455134; 56.5,0.417577701035315; 57,
        0.396570757690117; 57.5,0.378959733772215; 58,0.350633187067643; 58.5,
        0.355788489123287; 59,0.298983892362127; 59.5,0.293364635453896; 60,
        0.288590783273531; 60.5,0.278503074192622; 61,0.254406334723266; 61.5,
        0.242026424625372; 62,0.258187128936054; 62.5,0.277817392693351; 63,
        0.27971902042369; 63.5,0.291490212289911; 64,0.284985950601543; 64.5,
        0.280288927724032; 65,0.268491806200938; 65.5,0.260703226675454; 66,
        0.264300690197285; 66.5,0.284413265497909; 67,0.29103962906582; 67.5,
        0.254812101193171; 68,0.263411298082055; 68.5,0.2664913477281; 69,
        0.29415246473699; 69.5,0.301348882917568; 70,0.310194120828019; 70.5,
        0.321665557299849; 71,0.311143410605257; 71.5,0.282521278893766; 72,
        0.291805364954929; 72.5,0.282191534101518; 73,0.282671395685417; 73.5,
        0.280590863491088; 74,0.282651636976624; 74.5,0.289064042999574; 75,
        0.339310954834827; 75.5,0.307533662340398; 76,0.3061363855535; 76.5,
        0.312009643984891; 77,0.316318399143405; 77.5,0.325658851712675; 78,
        0.319111538407706; 78.5,0.306400005795766; 79,0.291851424547132; 79.5,
        0.295443090576882; 80,0.29746571146996; 80.5,0.269211050475476; 81,
        0.311424023883191; 81.5,0.309459420053986; 82,0.29508839561632; 82.5,
        0.297510641956279; 83,0.309118543068589; 83.5,0.268650343463338; 84,
        0.294548497978756; 84.5,0.299678644904011; 85,0.301373477955245; 85.5,
        0.306764295524443; 86,0.316251363275339; 86.5,0.299712601762281; 87,
        0.316031917259236; 87.5,0.309284142722001; 88,0.331153564819845; 88.5,
        0.308108570765195; 89,0.301285490280752; 89.5,0.291721899573346; 90,
        0.3084650876825; 90.5,0.312835708406561; 91,0.294055713148236; 91.5,
        0.313160889949085; 92,0.283146030812988; 92.5,0.309145656985627; 93,
        0.323454370535003; 93.5,0.298172742452023; 94,0.310394169160066; 94.5,
        0.292234683614868; 95,0.285355237957892; 95.5,0.27888939201999; 96,
        0.284027787962; 96.5,0.323588138248588; 97,0.317849806343452; 97.5,
        0.286685902351229; 98,0.325941608010153; 98.5,0.315455068086308; 99,
        0.317386285222313; 99.5,0.343078126327491; 100,0.300638018297139; 100.5,
        0.31040135901761; 101,0.30953300160695; 101.5,0.331119954593668; 102,
        0.275083336262008; 102.5,0.330268311605511; 103,0.288852648861871;
        103.5,0.314733440484397; 104,0.290523041275561; 104.5,0.319301780379186;
        105,0.311258218722676; 105.5,0.316212365272946; 106,0.307524739211728;
        106.5,0.315416263496333; 107,0.286136427723958; 107.5,0.3015190425708;
        108,0.287462857073075; 108.5,0.254670581396899; 109,0.269977262656252;
        109.5,0.291890992432076; 110,0.302228308970458; 110.5,0.332359287141796;
        111,0.328156416474816; 111.5,0.355707089887469; 112,0.352175318403851;
        112.5,0.339223651010674; 113,0.333721055202; 113.5,0.353332049483136;
        114,0.307787255989283; 114.5,0.336541733370438; 115,0.331015339510772;
        115.5,0.320377437546737; 116,0.354146564725271; 116.5,0.332108288956989;
        117,0.352211296204693; 117.5,0.152046159335724; 118,0.126295441700214;
        118.5,0.153308085558085; 119,0.141113633942107; 119.5,0.133176545746706;
        120,0.123191421657352; 120.5,0.147281942126028; 121,0.120470435865471;
        121.5,0.147043980683743; 122,0.143767065064625; 122.5,0.137310958006815;
        123,0.150068788882462; 123.5,0.13761384844829; 124,0.147254240476314;
        124.5,0.147073482451842; 125,0.138121305304412; 125.5,0.138680420051433;
        126,0.15457304166509; 126.5,0.123174648608497])
                                         annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={120,-20})));
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
    annotation (Placement(transformation(extent={{48,-54},{56,-46}}),  iconTransformation(
          extent={{48,-54},{56,-46}})));
  Modelica.Blocks.Interfaces.RealOutput Qout
    annotation (Placement(transformation(extent={{64,-54},{72,-46}})));
  Modelica.Blocks.Sources.Constant const3(k=0.983690311612942)
    annotation (Placement(transformation(extent={{164,-26},{144,-6}})));
  Modelica.Blocks.Sources.Constant const2(k=0)
    annotation (Placement(transformation(extent={{164,4},{144,24}})));
  Modelica.Blocks.Sources.Constant const4(k=0)
    annotation (Placement(transformation(extent={{-44,-22},{-50,-16}})));
equation
  Pout = Gen.P;
  Qout = Gen.Q;
  connect(const.y, sT5B.VUEL) annotation (Line(points={{-69.5,-69},{-57.5,-69},{
          -57.5,-38}},                                                                          color={0,0,127}));
  connect(const1.y, sT5B.VOEL) annotation (Line(points={{-69.5,-51},{-60.5,-51},
          {-60.5,-38}},                                                                          color={0,0,127}));
  connect(Gen.p, bus.p)
    annotation (Line(points={{-48,0},{-8,0}}, color={0,0,255}));
  connect(sT5B.ECOMP, Gen.ETERM) annotation (Line(points={{-54,-28},{-40,
          -28},{-40,-3.6},{-46.8,-3.6}},
                               color={0,0,127}));
  connect(sT5B.XADIFD, Gen.XADIFD) annotation (Line(points={{-54,-31},{
          -42,-31},{-42,-10.8},{-47.04,-10.8}},
                                       color={0,0,127}));
  connect(sT5B.EFD0, Gen.EFD0) annotation (Line(points={{-54,-34.5},{-34,
          -34.5},{-34,-6},{-46.8,-6}},
                                color={0,0,127}));
  connect(Gen.PMECH, Gen.PMECH0) annotation (Line(points={{-74.4,6},{-86,
          6},{-86,16},{-36,16},{-36,6},{-46.8,6}},
                                           color={0,0,127}));
  connect(Vreal_input.y[1], voltageSource.u2) annotation (Line(points={{109,-20},
          {100,-20},{100,-4},{68,-4}}, color={0,0,127}));
  connect(Vim_input.y[1], voltageSource.u1) annotation (Line(points={{111,18},{
          100,18},{100,4},{68,4}},
                               color={0,0,127}));
  connect(Gen.EFD, sT5B.EFD) annotation (Line(points={{-74.4,-6},{-80,-6},
          {-80,-28},{-74.5,-28}}, color={0,0,127}));
  connect(sT5B.VOTHSG, const4.y) annotation (Line(points={{-54,-23.5},{
          -52,-23.5},{-52,-19},{-50.3,-19}}, color={0,0,127}));
  connect(voltageSource.p, bus.p)
    annotation (Line(points={{45,0},{-8,0}}, color={0,0,255}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -80},{140,60}}),
        graphics={
        Rectangle(extent={{42,-42},{76,-58}}, lineColor={28,108,200})}),
      experiment(StopTime=213.5, __Dymola_NumberOfIntervals=5000),
    Icon(coordinateSystem(extent={{-100,-80},{140,60}})));
end System_all_controls_tables;
