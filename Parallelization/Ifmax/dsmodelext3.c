#include <moutil.c>
PreNonAliasDef(16)
PreNonAliasDef(17)
PreNonAliasDef(18)
PreNonAliasDef(19)
PreNonAliasDef(20)
StartNonAlias(15)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.geo.C", \
"Circumference [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.geo.V", \
"Total volume [m3]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.geo.Aheat", \
"Heat transfer area [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.N", \
"Number of nodes (always 2) [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,517)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.pstart", \
"pressure start value [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Tstart", \
"temperature start value [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Xstart[1]", \
"Gas composition start value (homogeneous) [kg/kg]", 635, 0.0, 0.0,1.0,0.1,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Xstart[2]", \
"Gas composition start value (homogeneous) [kg/kg]", 636, 0.0, 0.0,1.0,0.1,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Xstart[3]", \
"Gas composition start value (homogeneous) [kg/kg]", 637, 0.0, 0.0,1.0,0.1,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Xstart[4]", \
"Gas composition start value (homogeneous) [kg/kg]", 638, 0.77, 0.0,1.0,0.1,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Xstart[5]", \
"Gas composition start value (homogeneous) [kg/kg]", 639, 0.23, 0.0,1.0,0.1,0,560)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.positiveFlow", \
"only flow in design direction correct if true [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.C_Re", \
"Reynolds multiplier coefficient", 640, 1.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.n_Re", \
"Reynolds Exponent coefficient", 641, 0.8, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.n_Pr", \
"Prandl Exponent coefficient", 642, 0.3333333333333333, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.linearFriction", \
"Linear friction if true [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.FFtype", \
"Friction Factor Type [:#(type=FuelCell.Internal.Choices.OneDFrictionTypes)]", 2,\
 1.0,5.0,0.0,0,517)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Kfnom", \
"Nominal hydraulic resistance coefficient [Pa.kg/(m3.kg2/s2)]", 643, 0, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.m_flow_nom", \
"Nominal mass flowrate [kg/s]", 644, 0.021, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.dpnom", \
"Nominal pressure drop (only friction) [Pa|bar]", 1000, 0.0,100000000.0,100000.0,\
0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.rhonom", \
"Nominal inlet density [kg/m3|g/cm3]", 1, 1E-08,100000.0,1.0,0,513)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Cfnom", \
"Nominal Fanning friction factor", 645, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.e", \
"Relative roughness (ratio roughness/diameter)", 646, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.Kfc", \
"Friction factor correction coefficient", 647, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.wnf", \
"Fraction of nominal flow where linear friction = turbulent", 648, 0.01, \
0.0,0.0,0.0,0,560)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.m_flow", \
"Mass flowrate side [kg/s]", "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 0)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Q", \
"Total heat flow to secondary side [W]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.dp", \
"Pressure drop on side [Pa|bar]", 1000, 0.0,100000000.0,1000.0,0,512)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.capacityFlow", \
"heat capacity flow (inlet conditions) [W/K]", "preprocessor.steamGeneratorHX.steamGenerator.heat.capacityFlow", 1,\
 5, 12647, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.kc", \
"coefficient of heat transfer [W/(m2.K)]", "preprocessor.steamGeneratorHX.steamGenerator.heat.kc", 1,\
 5, 12646, 0)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Re", \
"Reynolds Number [1]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Nu", \
"Nusselt number [1]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Pr", \
"Prandl Number [1]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.p", 1,\
 5, 12684, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.T", \
"Temperature of medium [K|degC]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.T", 1,\
 5, 12685, 0)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Xi[1]", \
"Structurally independent mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[1]", 1,\
 5, 12675, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Xi[2]", \
"Structurally independent mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[2]", 1,\
 5, 12676, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Xi[3]", \
"Structurally independent mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[3]", 1,\
 5, 12677, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Xi[4]", \
"Structurally independent mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[4]", 1,\
 5, 12678, 0)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Xi[5]", \
"Structurally independent mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[5]", 1,\
 5, 12679, 0)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.d", \
"Density of medium [kg/m3|g/cm3]", 1, 1E-08,100000.0,1.0,0,512)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h", \
"Specific enthalpy of medium [J/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.hi", 1,\
 5, 12747, 0)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u", \
"Specific internal energy of medium [J/kg]", 0.0, -100000000.0,100000000.0,\
1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Rg", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 1000.0, 0.0,1000000.0,\
1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("preprocessor.steamGeneratorHX.staticHXChannel.fluid.assertlevel",\
 "[:#(type=AssertionLevel)]", 649, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.p", \
"Absolute pressure of medium [Pa|bar]", 0.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Z[1]", \
"Component mole fractions [mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Z[2]", \
"Component mole fractions [mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Z[3]", \
"Component mole fractions [mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Z[4]", \
"Component mole fractions [mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.Z[5]", \
"Component mole fractions [mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dUZT[1]", \
"Derivative of inner energy by moles at constant temperature [J/mol]", 0.0, \
-100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dUZT[2]", \
"Derivative of inner energy by moles at constant temperature [J/mol]", 0.0, \
-100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dUZT[3]", \
"Derivative of inner energy by moles at constant temperature [J/mol]", 0.0, \
-100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dUZT[4]", \
"Derivative of inner energy by moles at constant temperature [J/mol]", 0.0, \
-100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dUZT[5]", \
"Derivative of inner energy by moles at constant temperature [J/mol]", 0.0, \
-100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h_component[1]",\
 "Specific enthalpies of the component gases [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h_component[2]",\
 "Specific enthalpies of the component gases [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h_component[3]",\
 "Specific enthalpies of the component gases [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h_component[4]",\
 "Specific enthalpies of the component gases [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.h_component[5]",\
 "Specific enthalpies of the component gases [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.s_component[1]",\
 "Component specific entropy [J/(kg.K)]", 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.s_component[2]",\
 "Component specific entropy [J/(kg.K)]", 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.s_component[3]",\
 "Component specific entropy [J/(kg.K)]", 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.s_component[4]",\
 "Component specific entropy [J/(kg.K)]", 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.s_component[5]",\
 "Component specific entropy [J/(kg.K)]", 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u_comp[1]",\
 "Specific internal energy per component [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u_comp[2]",\
 "Specific internal energy per component [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u_comp[3]",\
 "Specific internal energy per component [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u_comp[4]",\
 "Specific internal energy per component [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.u_comp[5]",\
 "Specific internal energy per component [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.cp", \
"Specific heat capacity [J/(kg.K)]", 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.g_formation[1]",\
 "Component Gibbs energy of formation, molar base! [J/mol]", 0.0, -100000000.0,\
100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.g_formation[2]",\
 "Component Gibbs energy of formation, molar base! [J/mol]", 0.0, -100000000.0,\
100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.g_formation[3]",\
 "Component Gibbs energy of formation, molar base! [J/mol]", 0.0, -100000000.0,\
100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.g_formation[4]",\
 "Component Gibbs energy of formation, molar base! [J/mol]", 0.0, -100000000.0,\
100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.g_formation[5]",\
 "Component Gibbs energy of formation, molar base! [J/mol]", 0.0, -100000000.0,\
100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddTp", \
"Derivative of density by temperature at constant pressure [kg/(m3.K)]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddpT", \
"Derivative of density by pressure at constant temperature [s2/(m2)]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.dupT", \
"Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.duTp", \
"Derivative of specific inner energy by temperature at constant p [J/(kg.K)]", \
1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddx[1]", \
"Derivative vector of density by change in mass composition [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddx[2]", \
"Derivative vector of density by change in mass composition [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddx[3]", \
"Derivative vector of density by change in mass composition [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddx[4]", \
"Derivative vector of density by change in mass composition [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.fluid.ddx[5]", \
"Derivative vector of density by change in mass composition [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.T", \
"Temperature of medium [K|degC]", 300, 0.0,10000.0,300.0,0,576)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.state.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.v_in", \
"velocity at inlet [m/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.eta", "[Pa.s]", \
0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.lambda", \
"[W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.cp_1", \
"inlet specific heat capacity [J/(kg.K)]", 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.cp_est", \
"estimated average heat capacity [J/(kg.K)]", 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.p", \
"inlet pressure [Pa|bar]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.p", 1,\
 5, 12684, 1024)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.X[1]", \
"medium mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[1]", 1,\
 5, 12675, 1024)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.X[2]", \
"medium mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[2]", 1,\
 5, 12676, 1024)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.X[3]", \
"medium mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[3]", 1,\
 5, 12677, 1024)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.X[4]", \
"medium mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[4]", 1,\
 5, 12678, 1024)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.X[5]", \
"medium mass fractions [kg/kg]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.X[5]", 1,\
 5, 12679, 1024)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.nonlinear", "", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.linear", "[kg/s]", \
"preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 1024)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.hi", \
"specific enthalpy at feed boundary [J/kg]", 0.0, -10000000000.0,10000000000.0,\
1000000.0,0,2560)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.ho", \
"specific enthalpy at drain boundary [J/kg]", 0.0, -10000000000.0,10000000000.0,\
1000000.0,0,2560)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.omega_hyd", \
"Wet perimeter [m]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Kf", \
"Friction coefficient", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Kfl", \
"Linear friction coefficient", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.Cf", \
"Fanning friction factor", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("preprocessor.steamGeneratorHX.staticHXChannel.h_start", \
"[J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.p", \
"Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.feed_SteamHeat.m_flow", 1,\
 5, 13051, 132)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_SteamHeat.h_outflow", 1,\
 5, 13052, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1,\
 5, 13244, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1,\
 5, 13245, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1,\
 5, 13246, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1,\
 5, 13247, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.feed.X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1,\
 5, 13248, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.p", \
"Pressure [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.feed_SteamHeat.m_flow", -1,\
 5, 13051, 132)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_SteamHeat.h_outflow", 1,\
 5, 13052, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[1]", 1,\
 5, 14724, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[2]", 1,\
 5, 14725, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[3]", 1,\
 5, 14726, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[4]", 1,\
 5, 14727, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.drain.X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[5]", 1,\
 5, 14728, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.heat.T1", \
"temperature 1 [K|degC]", "preprocessor.steamGeneratorHX.staticHXChannel.fluid.state.T", 1,\
 5, 12685, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.heat.T2", \
"temperature 2 [K|degC]", "preprocessor.steamGeneratorHX.staticHXChannel.state.T", 1,\
 5, 12735, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.heat.kc", \
"coefficient of heat transfer [W/(m2.K)]", "preprocessor.steamGeneratorHX.steamGenerator.heat.kc", 1,\
 5, 12646, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.heat.capacityFlow",\
 "capacity flow [W/K]", "preprocessor.steamGeneratorHX.steamGenerator.heat.capacityFlow", 1,\
 5, 12647, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.staticHXChannel.heat.Q", \
"heat flow [W]", "preprocessor.steamGeneratorHX.steamGenerator.Q_flow", -1, 5, 12641,\
 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 132)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_SteamHeat.h_outflow", 1,\
 5, 13052, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1,\
 5, 13244, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1,\
 5, 13245, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1,\
 5, 13246, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1,\
 5, 13247, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_gas.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1,\
 5, 13248, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.p", "Pressure [Pa|bar]", \
"preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", -1, 5, 13051, 132)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_SteamHeat.h_outflow", 1,\
 5, 13052, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[1]", 1,\
 5, 14724, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[2]", 1,\
 5, 14725, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[3]", 1,\
 5, 14726, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[4]", 1,\
 5, 14727, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_gas.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "metalBurner.gas_out.X_outflow[5]", 1,\
 5, 14728, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_water.p", "Pressure [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_water.m_flow", \
"Mass flow rate into the component [kg/s]", "WaterSource.massFlowBoundary.m_flow", 1,\
 5, 11797, 132)
DeclareAlias2("preprocessor.steamGeneratorHX.feed_water.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "WaterSource.fluidPort.h_outflow", 1,\
 5, 11794, 4)
DeclareVariable("preprocessor.steamGeneratorHX.feed_water.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 1.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_steam.p", "Pressure [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("preprocessor.steamGeneratorHX.drain_steam.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.steamMix_TZ.feed_steam.m_flow", -1,\
 5, 12595, 132)
DeclareVariable("preprocessor.steamGeneratorHX.drain_steam.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", 0.0, -10000000000.0,10000000000.0,\
1000000.0,0,520)
DeclareVariable("preprocessor.steamGeneratorHX.drain_steam.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 1.0, 0.0,1.0,0.1,0,521)
DeclareParameter("preprocessor.steamGeneratorHX.T_start", "start value of wall temperature [K|degC]",\
 650, 1073.15, 0.0,10000.0,300.0,0,560)
DeclareVariable("preprocessor.steamGeneratorHX.pstart", "pressure start value [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.m_flow_nom", "Nominal mass flowrate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.steamGeneratorHX.positiveFlow", "only gas flow in design direction correct if true  [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.drain_Reformate.p", "Pressure [Pa|bar]", \
"preprocessor.reformer.p", 1, 5, 12075, 4)
DeclareAlias2("preprocessor.drain_Reformate.m_flow", "Mass flow rate into the component [kg/s]",\
 "summary.dmFuelStkIn", -1, 5, 11764, 132)
DeclareVariable("preprocessor.drain_Reformate.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[1])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[2])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[3])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[4])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[5])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[6])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("preprocessor.drain_Reformate.der(X_outflow[7])", \
"der(Mass fractions of exiting fluid) [s-1]", 0.0, 0.0,0.0,0.0,0,520)
DeclareParameter("preprocessor.AirHeater.n_channels_prim", "Number of parallel channels [1]",\
 651, 1.0, 1.0,1E+100,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.L_prim", "Length of primary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.Dhyd_prim", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.A_prim", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.V_prim", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.A_heat_prim", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.n_channels_sec", "Number of parallel channels [1]",\
 652, 1.0, 1.0,1E+100,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.L_sec", "Length of secondary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.Dhyd_sec", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.A_sec", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.V_sec", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.A_heat_sec", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.dp_smooth", "Pressure drop smoothing region around zero [Pa|kPa]",\
 653, 10, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.mflow_smooth", "Smoothing interval around zero mass flow rate [kg/s]",\
 654, 0.0001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.from_dp_prim", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 655, true, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.AirHeater.positiveFlow_prim", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.AirHeater.generateEventForReversal_prim", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", 656, \
false, 0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.AirHeater.from_dp_sec", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 657, true, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.AirHeater.positiveFlow_sec", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.AirHeater.generateEventForReversal_sec", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", 658, \
false, 0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.AirHeater.dp_prim_start", "Pressure drop start value [Pa|kPa]",\
 659, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.T_prim_start", "Temperature inlet start value [K|degC]",\
 660, 673.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("preprocessor.AirHeater.dp_sec_start", "Pressure drop start value [Pa|kPa]",\
 661, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.T_sec_start", "Temperature inlet start value [K|degC]",\
 662, 673.15, 0.0,1E+100,300.0,0,560)
DeclareAlias2("preprocessor.AirHeater.drain_prim.p", "Pressure [Pa|bar]", \
"fuelMix.p", 1, 1, 305, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", -1, 5, 13053, 132)
DeclareAlias2("preprocessor.AirHeater.drain_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.drain_ATRHeat.h_outflow", 1, 5, 13055, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[1]", 1, 5, 14103, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[2]", 1, 5, 14104, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[3]", 1, 5, 14105, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[4]", 1, 5, 14106, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[5]", 1, 5, 14107, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[6]", 1, 5, 14108, 4)
DeclareAlias2("preprocessor.AirHeater.drain_prim.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[7]", 1, 5, 14109, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.p", "Pressure [Pa|bar]", \
"anVolume.p", 1, 1, 283, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", 1, 5, 13053, 132)
DeclareAlias2("preprocessor.AirHeater.feed_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_ATRHeat.h_outflow", 1, 5, 13054, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("preprocessor.AirHeater.feed_prim.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("preprocessor.AirHeater.feed_sec.p", "Pressure [Pa|bar]", \
"ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 4)
DeclareAlias2("preprocessor.AirHeater.feed_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 132)
DeclareAlias2("preprocessor.AirHeater.feed_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_ATRAir.h_outflow", 1, 5, 13057, 4)
DeclareVariable("preprocessor.AirHeater.feed_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.feed_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.feed_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.feed_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.feed_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,521)
DeclareAlias2("preprocessor.AirHeater.drain_sec.p", "Pressure [Pa|bar]", \
"preprocessor.reformer.p", 1, 5, 12075, 4)
DeclareAlias2("preprocessor.AirHeater.drain_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", -1, 5, 11892, 132)
DeclareVariable("preprocessor.AirHeater.drain_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.AirHeater.drain_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 4)
DeclareAlias2("preprocessor.AirHeater.drain_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 4)
DeclareAlias2("preprocessor.AirHeater.drain_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 4)
DeclareAlias2("preprocessor.AirHeater.drain_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 4)
DeclareAlias2("preprocessor.AirHeater.drain_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 4)
DeclareVariable("preprocessor.AirHeater.summary.Q_flow", "Total heat flow, from wall to primary side [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.summary.m_flow", "Mass flow rate of primary medium [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", 1, 5, 13053, 0)
DeclareVariable("preprocessor.AirHeater.summary.T_in", "Inlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.T_out", "Outlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.h_in", "Inlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.h_out", "Outlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.summary.p_in", "Inlet pressure, primary side [Pa|bar]",\
 "anVolume.p", 1, 1, 283, 0)
DeclareAlias2("preprocessor.AirHeater.summary.p_out", "Outlet pressure, primary side [Pa|bar]",\
 "fuelMix.p", 1, 1, 305, 0)
DeclareVariable("preprocessor.AirHeater.summary.dp", "Primary side pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.summary.Q_flow_sec", "Total heat flow, from wall to secondary side [W]",\
 "preprocessor.AirHeater.summary.Q_flow", -1, 5, 12793, 0)
DeclareAlias2("preprocessor.AirHeater.summary.m_flow_sec", "Mass flow rate of secondary medium [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 0)
DeclareVariable("preprocessor.AirHeater.summary.T_sec_in", "Inlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.T_sec_out", "Outlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.h_sec_in", "Inlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.h_sec_out", "Outlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.summary.p_sec_in", "Inlet pressure, secondary side [Pa|bar]",\
 "ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.summary.p_sec_out", "Outlet pressure, secondary side [Pa|bar]",\
 "anVolume.p", 1, 1, 283, 0)
DeclareVariable("preprocessor.AirHeater.summary.dp_sec", "Secondary side pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.Tpinch_prim_in", \
"Temperature difference at inflow of primary side [K,]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.Tpinch_prim_out", \
"Temperature difference at outflow of primary side [K,]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.lmtd", "log-mean temperature difference [K,]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.summary.effectiveness", "Heat exchanger effectiveness [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.A", \
"Flow cross sectional area (single channel) [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.L", \
"Flow path length (one segment in case of discretized channels) [m]", \
"preprocessor.AirHeater.heatExchanger.L_prim", 1, 5, 12866, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.Dhyd", \
"Hydraulic diameter (single channel) [m]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.n_channels",\
 "Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.lengthFraction",\
 "Fraction of total channel length (used for discretization, all correlations)",\
 663, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.flowFraction0",\
 "Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 664, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.dpFraction0",\
 "Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 665, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.F_user", \
"Calibration factor for pressure loss", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.from_dp", \
"if true, then massflow rate is computed from pressure [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.positiveFlow",\
 "Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.mflow_smooth",\
 "Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.useFixedDensity",\
 "Assume fixed upstream density in flow model [:#(type=Boolean)]", 666, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.reference_d",\
 "Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 667, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.dp", \
"Pressure drop over component [Pa|bar]", "preprocessor.AirHeater.summary.dp", 1,\
 5, 12798, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.p", 1,\
 5, 12911, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 12912, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.p", 1,\
 5, 12911, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 12912, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[1]", 1, 5, 12816,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[2]", 1, 5, 12817,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[3]", 1, 5, 12818,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[4]", 1, 5, 12819,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[5]", 1, 5, 12820,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[6]", 1, 5, 12821,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_outflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[7]", 1, 5, 12822,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.p", 1,\
 5, 12920, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 12921, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.p", 1,\
 5, 12920, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 12921, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[1]", 1, 5, 12823,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[2]", 1, 5, 12824,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[3]", 1, 5, 12825,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[4]", 1, 5, 12826,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[5]", 1, 5, 12827,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[6]", 1, 5, 12828,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_prim.stateA_outflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[7]", 1, 5, 12829,\
 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.dp_from_isothermal",\
 "Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.m_flow", \
"Mass flow rate (single channel) [kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.dA", \
"Density from stateA [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.dB", \
"Density from stateB [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.d0", \
"Nominal density [kg/m3|g/cm3]", 668, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_prim.dp0", \
"Nominal pressure drop [Pa|kPa]", 669, 100, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_prim.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.A", \
"Flow cross sectional area (single channel) [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.L", \
"Flow path length (one segment in case of discretized channels) [m]", \
"preprocessor.AirHeater.heatExchanger.L_sec", 1, 5, 12872, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.Dhyd", \
"Hydraulic diameter (single channel) [m]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.n_channels", \
"Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.lengthFraction",\
 "Fraction of total channel length (used for discretization, all correlations)",\
 670, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.flowFraction0",\
 "Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 671, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.dpFraction0",\
 "Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 672, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.F_user", \
"Calibration factor for pressure loss", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.from_dp", \
"if true, then massflow rate is computed from pressure [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.positiveFlow",\
 "Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.mflow_smooth",\
 "Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.useFixedDensity",\
 "Assume fixed upstream density in flow model [:#(type=Boolean)]", 673, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.reference_d",\
 "Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 674, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.dp", \
"Pressure drop over component [Pa|bar]", "preprocessor.AirHeater.summary.dp_sec", 1,\
 5, 12803, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 12949, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 12949, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 12950, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateB_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 12950, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.stateA_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.dp_from_isothermal",\
 "Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.m_flow", \
"Mass flow rate (single channel) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.dA", \
"Density from stateA [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.dB", \
"Density from stateB [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.d0", \
"Nominal density [kg/m3|g/cm3]", 675, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.friction_sec.dp0", \
"Nominal pressure drop [Pa|kPa]", 676, 100, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.friction_sec.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CF_Friction", \
"Calibration factor for pressure drop", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CF_Friction_sec", \
"Calibration factor for pressure drop", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.effectivenessStreamChoice",\
 "Stream used for the effectiveness calculation [:#(type=Modelon.Types.EffectivenessStreamChoice)]",\
 677, 3, 1.0,3.0,0.0,0,564)
DeclareVariable("preprocessor.AirHeater.heatExchanger.n_channels_prim", \
"Number of parallel channels [1]", 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.L_prim", "Length of primary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Dhyd_prim", \
"Hydraulic diameter, single channel [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.A_prim", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.V_prim", "Total volume [m3]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.A_heat_prim", \
"Heat transfer area, single channel [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.n_channels_sec", \
"Number of parallel channels [1]", 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.L_sec", "Length of secondary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Dhyd_sec", \
"Hydraulic diameter, single channel [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.A_sec", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.V_sec", "Total volume [m3]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.A_heat_sec", \
"Heat transfer area, single channel [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.m_flow", \
"Initial mass flow rate [kg/s]", 678, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.p_in", \
"Initial inlet pressure [Pa|bar]", 679, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.dp", \
"Initial pressure drop [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.p_out", \
"Initial outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.initFromEnthalpy",\
 "Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 680, false, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.T_in", \
"Initial inlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.dT", \
"Initial temperature increase [K,]", 681, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.T_out", \
"Initial outlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.h_in", \
"Initial inlet specific enthalpy [J/kg]", 682, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_prim.dh", \
"Initial specific enthalpy increase [J/kg]", 683, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.h_out", \
"Initial outlet specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[1]", \
"Initial mass fractions [1]", 0.03175579711384599, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[2]", \
"Initial mass fractions [1]", 0.15495406709770243, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[3]", \
"Initial mass fractions [1]", 0.028713975871231152, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[4]", \
"Initial mass fractions [1]", 0.1837200588299551, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[5]", \
"Initial mass fractions [1]", 0.2516776970663578, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[6]", \
"Initial mass fractions [1]", 0.32785651294517304, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_prim.X[7]", \
"Initial mass fractions [1]", 0.021321891075734414, 0.0,1.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.m_flow", \
"Initial mass flow rate [kg/s]", 684, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.p_in", \
"Initial inlet pressure [Pa|bar]", 685, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_sec.dp", \
"Initial pressure drop [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_sec.p_out", \
"Initial outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.initFromEnthalpy",\
 "Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 686, false, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_sec.T_in", \
"Initial inlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.dT", \
"Initial temperature increase [K,]", 687, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_sec.T_out", \
"Initial outlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.h_in", \
"Initial inlet specific enthalpy [J/kg]", 688, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.dh", \
"Initial specific enthalpy increase [J/kg]", 689, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.init_sec.h_out", \
"Initial outlet specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.X[1]", \
"Initial mass fractions [1]", 690, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.X[2]", \
"Initial mass fractions [1]", 691, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.X[3]", \
"Initial mass fractions [1]", 692, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.X[4]", \
"Initial mass fractions [1]", 693, 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.AirHeater.heatExchanger.init_sec.X[5]", \
"Initial mass fractions [1]", 694, 0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.mflow_smooth", \
"Smoothing interval around zero mass flow rate [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.from_dp_prim", \
"if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.positiveFlow_prim", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.generateEventForReversal_prim",\
 "flag for switching events for flow reversal on/off [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.from_dp_sec", \
"if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.positiveFlow_sec", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.generateEventForReversal_sec",\
 "flag for switching events for flow reversal on/off [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.Q_flow", \
"Total heat flow, from wall to primary side [W]", "preprocessor.AirHeater.summary.Q_flow", 1,\
 5, 12793, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.m_flow", \
"Mass flow rate of primary medium [kg/s]", "preprocessor.feed_ATRHeat.m_flow", 1,\
 5, 13053, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.T_in", \
"Inlet temperature, primary side [K|degC]", "preprocessor.AirHeater.summary.T_in", 1,\
 5, 12794, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.T_out", \
"Outlet temperature, primary side [K|degC]", "preprocessor.AirHeater.summary.T_out", 1,\
 5, 12795, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.h_in", \
"Inlet specific enthalpy, primary side [J/kg]", "preprocessor.AirHeater.summary.h_in", 1,\
 5, 12796, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.h_out", \
"Outlet specific enthalpy, primary side [J/kg]", "preprocessor.AirHeater.summary.h_out", 1,\
 5, 12797, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.p_in", \
"Inlet pressure, primary side [Pa|bar]", "anVolume.p", 1, 1, 283, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.p_out", \
"Outlet pressure, primary side [Pa|bar]", "fuelMix.p", 1, 1, 305, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.dp", \
"Primary side pressure drop [Pa|bar]", "preprocessor.AirHeater.summary.dp", 1, 5,\
 12798, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.Q_flow_sec", \
"Total heat flow, from wall to secondary side [W]", "preprocessor.AirHeater.summary.Q_flow", -1,\
 5, 12793, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.m_flow_sec", \
"Mass flow rate of secondary medium [kg/s]", "ATRAirSource.massFlowBoundary.m_flow", 1,\
 5, 11892, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.T_sec_in", \
"Inlet temperature, secondary side [K|degC]", "preprocessor.AirHeater.summary.T_sec_in", 1,\
 5, 12799, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.T_sec_out", \
"Outlet temperature, secondary side [K|degC]", "preprocessor.AirHeater.summary.T_sec_out", 1,\
 5, 12800, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.h_sec_in", \
"Inlet specific enthalpy, secondary side [J/kg]", "preprocessor.AirHeater.summary.h_sec_in", 1,\
 5, 12801, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.h_sec_out", \
"Outlet specific enthalpy, secondary side [J/kg]", "preprocessor.AirHeater.summary.h_sec_out", 1,\
 5, 12802, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.p_sec_in", \
"Inlet pressure, secondary side [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.p_sec_out", \
"Outlet pressure, secondary side [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.dp_sec", \
"Secondary side pressure drop [Pa|bar]", "preprocessor.AirHeater.summary.dp_sec", 1,\
 5, 12803, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.Tpinch_prim_in", \
"Temperature difference at inflow of primary side [K,]", "preprocessor.AirHeater.summary.Tpinch_prim_in", 1,\
 5, 12804, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.Tpinch_prim_out", \
"Temperature difference at outflow of primary side [K,]", "preprocessor.AirHeater.summary.Tpinch_prim_out", 1,\
 5, 12805, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.lmtd", \
"log-mean temperature difference [K,]", "preprocessor.AirHeater.summary.lmtd", 1,\
 5, 12806, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.summary.effectiveness", \
"Heat exchanger effectiveness [1]", "preprocessor.AirHeater.summary.effectiveness", 1,\
 5, 12807, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.p", \
"Pressure [Pa|bar]", "anVolume.p", 1, 1, 283, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.feed_ATRHeat.m_flow", 1,\
 5, 13053, 132)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_ATRHeat.h_outflow", 1,\
 5, 13054, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[1]", 1, 5,\
 14826, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[2]", 1, 5,\
 14827, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[3]", 1, 5,\
 14828, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[4]", 1, 5,\
 14829, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[5]", 1, 5,\
 14830, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[6]", 1, 5,\
 14831, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_prim.X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "fuelMix.drain[1].X_outflow[7]", 1, 5,\
 14832, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.p", \
"Pressure [Pa|bar]", "fuelMix.p", 1, 1, 305, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.feed_ATRHeat.m_flow", -1,\
 5, 13053, 132)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.drain_ATRHeat.h_outflow", 1,\
 5, 13055, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[1]", 1, 5,\
 14103, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[2]", 1, 5,\
 14104, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[3]", 1, 5,\
 14105, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[4]", 1, 5,\
 14106, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[5]", 1, 5,\
 14107, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[6]", 1, 5,\
 14108, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_prim.X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "anVolume.drain[1].X_outflow[7]", 1, 5,\
 14109, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_sec.p", \
"Pressure [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_sec.m_flow", \
"Mass flow rate into the component [kg/s]", "ATRAirSource.massFlowBoundary.m_flow", 1,\
 5, 11892, 132)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portA_sec.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_ATRAir.h_outflow", 1,\
 5, 13057, 4)
DeclareVariable("preprocessor.AirHeater.heatExchanger.portA_sec.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.heatExchanger.portA_sec.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.heatExchanger.portA_sec.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.heatExchanger.portA_sec.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", 0.77, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.AirHeater.heatExchanger.portA_sec.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", 0.23, 0.0,1.0,0.1,0,521)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.p", \
"Pressure [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.m_flow", \
"Mass flow rate into the component [kg/s]", "ATRAirSource.massFlowBoundary.m_flow", -1,\
 5, 11892, 132)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.AirHeater.drain_sec.h_outflow", 1,\
 5, 12792, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "ATRAirSource.massFlowBoundary.X[1]", 1,\
 5, 11896, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "ATRAirSource.massFlowBoundary.X[2]", 1,\
 5, 11897, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "ATRAirSource.massFlowBoundary.X[3]", 1,\
 5, 11898, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "ATRAirSource.massFlowBoundary.X[4]", 1,\
 5, 11899, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.portB_sec.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "ATRAirSource.massFlowBoundary.X[5]", 1,\
 5, 11900, 4)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.m_flow_prim", \
"Mass flowrate primary side, positive flow from portA_prim to portB_prim [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", 1, 5, 13053, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.Tprim_in", "Inlet temperature on primary side [K|degC]",\
 "preprocessor.AirHeater.summary.T_in", 1, 5, 12794, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hprim_in", "Inlet specific enthalpy on primary side [J/kg]",\
 "preprocessor.AirHeater.summary.h_in", 1, 5, 12796, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.pAprim", "Pressure at portA_prim [Pa|bar]",\
 "anVolume.p", 1, 1, 283, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.pBprim", "Pressure at portB_prim [Pa|bar]",\
 "fuelMix.p", 1, 1, 305, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.pprim_out", \
"Primary side outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.dp_prim", "Pressure drop over the primary side [Pa|bar]",\
 "preprocessor.AirHeater.summary.dp", 1, 5, 12798, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.m_flow_sec", \
"Mass flowrate secondary side, positive flow from portA_sec to portB_sec [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.Tsec_in", "Inlet temperature on secondary side [K|degC]",\
 "preprocessor.AirHeater.summary.T_sec_in", 1, 5, 12799, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hsec_in", "Inlet specific enthalpy on secondary side [J/kg]",\
 "preprocessor.AirHeater.summary.h_sec_in", 1, 5, 12801, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.pAsec", "Pressure at portA_sec [Pa|bar]",\
 "ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.pBsec", "Pressure at portB_sec [Pa|bar]",\
 "preprocessor.reformer.p", 1, 5, 12075, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.psec_out", \
"Secondary side outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.dp_sec", "Pressure drop over the secondary side [Pa|bar]",\
 "preprocessor.AirHeater.summary.dp_sec", 1, 5, 12803, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.C", "Ratio of the heat capacity flows [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.Q_flow", "Total heat flow from primary to secondary side [W]",\
 "preprocessor.AirHeater.summary.Q_flow", -1, 5, 12793, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.eps", "Heat exchanger effectiveness [1]",\
 "preprocessor.AirHeater.summary.effectiveness", 1, 5, 12807, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Q_max", "Maximum transferable heat [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_inflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_inflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAprim_outflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBprim_outflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TAprim_in", "Temperature of fluid connected to portA_prim [K|degC]",\
 "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", 1, 5, 12912, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TBprim_in", "Temperature of fluid connected to portB_prim [K|degC]",\
 "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", 1, 5, 12921, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TAprim_out", \
"Temperature of outgoing fluid portA_prim [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAprim_outflow.T", 1,\
 5, 12930, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TBprim_out", \
"Temperature of outgoing fluid portB_prim [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBprim_outflow.T", 1,\
 5, 12939, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hAprim_in", "Specific enthalpy inflow portA_prim [J/kg]",\
 "anVolume.feed[1].h_outflow", 1, 5, 14102, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hBprim_in", "Specific enthalpy inflow portB_prim [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hAprim_out", \
"Specific enthalpy outflow portA_prim [J/kg]", "preprocessor.feed_ATRHeat.h_outflow", 1,\
 5, 13054, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hBprim_out", \
"Specific enthalpy outflow portB_prim [J/kg]", "preprocessor.drain_ATRHeat.h_outflow", 1,\
 5, 13055, 1024)
DeclareVariable("preprocessor.AirHeater.heatExchanger.TAsec_out", \
"Temperature of outgoing fluid portA_sec [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.TBsec_out", \
"Temperature of outgoing fluid portB_sec [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hAsec_in", "Specific enthalpy inflow portA_sec [J/kg]",\
 "ATRAirSource.fluidPort.h_outflow", 1, 5, 11884, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hBsec_in", "Specific enthalpy inflow portB_sec [J/kg]",\
 "preprocessor.drain_Reformate.h_outflow", 1, 5, 12760, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hAsec_out", "Specific enthalpy outflow portA_sec [J/kg]",\
 "preprocessor.feed_ATRAir.h_outflow", 1, 5, 13057, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.hBsec_out", "Specific enthalpy outflow portB_sec [J/kg]",\
 "preprocessor.AirHeater.drain_sec.h_outflow", 1, 5, 12792, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 1024)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075, 1024)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateBsec_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,2561)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.TAsec_out", 1,\
 5, 12947, 1024)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.stateAsec_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,2561)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.TBsec_out", 1,\
 5, 12948, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.stateBsec_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TAsec_in", "Temperature of fluid connected to portA_sec [K|degC]",\
 "preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", 1, 5, 12949, 1024)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.TBsec_in", "Temperature of fluid connected to portB_sec [K|degC]",\
 "preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", 1, 5, 12950, 1024)
DeclareVariable("preprocessor.AirHeater.heatExchanger.hprim_Tsec_in", \
"Specific enthalpy of primary side fluid at the secondary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.hsec_Tprim_in", \
"Specific enthalpy of secondary side fluid at the primary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[1]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[2]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[3]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[4]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[5]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[6]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAprim_in[7]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[1]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[2]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[3]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[4]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[5]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[6]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBprim_in[7]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[1]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[2]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[3]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[4]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[5]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[6]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xprim[7]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAsec_in[1]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAsec_in[2]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAsec_in[3]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAsec_in[4]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XAsec_in[5]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBsec_in[1]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBsec_in[2]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBsec_in[3]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBsec_in[4]", \
"Mass fractions inflow portB_sec [1]", 0.77, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.XBsec_in[5]", \
"Mass fractions inflow portB_sec [1]", 0.23, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xsec[1]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xsec[2]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xsec[3]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xsec[4]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Xsec[5]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CAprim", "Primary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CBprim", "Primary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CAsec", "Secondary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CBsec", "Secondary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Cprim", "Primary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Csec", "Secondary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Cmin", "Smaller heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Cmax", "Larger heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Q_max_prim", \
"Maximum transferable heat for primary side [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.Q_max_sec", \
"Maximum transferable heat for secondary side [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.A_heat", "Wall heat transfer area [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.U", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.NTU", "Number of transfer units [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CF_HeatTransfer", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.CF_HeatTransfer_sec", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.thickness_wall", \
"Wall thickness [m|mm]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.heatFlowDynamics", \
"If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.AirHeater.heatExchanger.order", "Order of filter [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("preprocessor.AirHeater.heatExchanger.riseTime", \
"Filter rise time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.wall.c", "Specific heat capacity of the material [J/(kg.K)]",\
 500, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.wall.rho", \
"Density of the material [kg/m3|g/cm3]", 7880, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.wall.lambda", \
"Thermal conductivity of the material [W/(m.K)]", 21, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.A", \
"Flow cross sectional area [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.L", \
"Channel length (total length in case of discretized channel) [m]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.Dhyd", \
"Hydraulic diameter [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.F_user", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.m_flow", \
"Mass flow rate [kg/s]", "preprocessor.AirHeater.heatExchanger.friction_prim.m_flow", 1,\
 5, 12831, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.p", 1,\
 5, 12911, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 12912, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[1]", 1, 5, 12816,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[2]", 1, 5, 12817,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[3]", 1, 5, 12818,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[4]", 1, 5, 12819,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[5]", 1, 5, 12820,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[6]", 1, 5, 12821,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[7]", 1, 5, 12822,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.p", 1,\
 5, 12911, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 12912, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[1]", 1, 5, 12816,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[2]", 1, 5, 12817,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[3]", 1, 5, 12818,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[4]", 1, 5, 12819,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[5]", 1, 5, 12820,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[6]", 1, 5, 12821,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateA_inflow.X[7]", 1, 5, 12822,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.p", 1,\
 5, 12920, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 12921, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[1]", 1, 5, 12823,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[2]", 1, 5, 12824,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[3]", 1, 5, 12825,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[4]", 1, 5, 12826,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[5]", 1, 5, 12827,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[6]", 1, 5, 12828,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateB.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[7]", 1, 5, 12829,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.p", 1,\
 5, 12920, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 12921, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[1]", 1, 5, 12823,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[2]", 1, 5, 12824,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[3]", 1, 5, 12825,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[4]", 1, 5, 12826,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[5]", 1, 5, 12827,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[6]", 1, 5, 12828,\
 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.AirHeater.heatExchanger.friction_prim.stateB_inflow.X[7]", 1, 5, 12829,\
 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.ht_from_isothermal",\
 "Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.alphaA", \
"Heat transfer coefficient, positive flow [W/(m2.K)]", "preprocessor.AirHeater.heatExchanger.htcoeff_prim.alpha", 1,\
 7, 695, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_prim.alphaB", \
"Heat transfer coefficient, negative flow [W/(m2.K)]", "preprocessor.AirHeater.heatExchanger.htcoeff_prim.alpha", 1,\
 7, 695, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_prim.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.htcoeff_prim.alpha", \
"Heat transfer coefficient [W/(m2.K)]", 695, 1000, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.A", \
"Flow cross sectional area [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.L", \
"Channel length (total length in case of discretized channel) [m]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.Dhyd", \
"Hydraulic diameter [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.F_user", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.m_flow", \
"Mass flow rate [kg/s]", "preprocessor.AirHeater.heatExchanger.friction_sec.m_flow", 1,\
 5, 12859, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.p", \
"Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 12949, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.p", \
"Absolute pressure of medium [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 12949, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 12950, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.reformer.p", 1, 5, 12075, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.T", \
"Temperature of medium [K|degC]", "preprocessor.AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 12950, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.77, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.23, 0.0,1.0,\
0.1,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.ht_from_isothermal",\
 "Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.alphaA", \
"Heat transfer coefficient, positive flow [W/(m2.K)]", "preprocessor.AirHeater.heatExchanger.htcoeff_sec.alpha", 1,\
 7, 696, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.htcoeff_sec.alphaB", \
"Heat transfer coefficient, negative flow [W/(m2.K)]", "preprocessor.AirHeater.heatExchanger.htcoeff_sec.alpha", 1,\
 7, 696, 0)
DeclareVariable("preprocessor.AirHeater.heatExchanger.htcoeff_sec.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.heatExchanger.htcoeff_sec.alpha", \
"Heat transfer coefficient [W/(m2.K)]", 696, 500, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatExchanger.kc_prim", "Heat transfer coefficient primary side [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.AirHeater.heatExchanger.kc_sec", "Heat transfer coefficient secondary side [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.AirHeater.heatExchanger.kc_wall", "Heat transfer coefficient wall [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.kc_tot", "Total heat transfer coefficient [W/(m2.K)]",\
 "preprocessor.AirHeater.heatExchanger.U", 1, 5, 13010, 0)
DeclareAlias2("preprocessor.AirHeater.heatExchanger.Q_flow_internal", \
"Needed to connect to conditional connector [W]", "preprocessor.AirHeater.summary.Q_flow", -1,\
 5, 12793, 1024)
DeclareVariable("preprocessor.AirHeater.A_heat", "Heat transfer area [m2]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.AirHeater.thickness_wall", "Wall thickness [m]", 697,\
 0.002, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.AirHeater.heatFlowDynamics", "If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.AirHeater.order", "Order of filter [:#(type=Integer)]",\
 698, 1, 0.0,0.0,0.0,0,564)
DeclareParameter("preprocessor.AirHeater.riseTime", "Filter rise time [s]", 699,\
 10, 0.0,0.0,0.0,0,560)
DeclareAlias2("preprocessor.feed_NG.p", "Pressure [Pa|bar]", "NGSource.fluidPort.p", 1,\
 5, 11817, 4)
DeclareAlias2("preprocessor.feed_NG.m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 132)
DeclareVariable("preprocessor.feed_NG.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.feed_NG.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 4)
DeclareAlias2("preprocessor.feed_NG.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 4)
DeclareAlias2("preprocessor.drain_NGHeat.p", "Pressure [Pa|bar]", "exhVol.p", 1,\
 1, 275, 4)
DeclareVariable("preprocessor.drain_NGHeat.m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.0,0,776)
DeclareVariable("preprocessor.drain_NGHeat.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.drain_NGHeat.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 4)
DeclareAlias2("preprocessor.drain_NGHeat.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 4)
DeclareAlias2("preprocessor.drain_NGHeat.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 4)
DeclareAlias2("preprocessor.drain_NGHeat.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 4)
DeclareAlias2("preprocessor.drain_NGHeat.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 4)
DeclareAlias2("preprocessor.feed_SteamHeat.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareVariable("preprocessor.feed_SteamHeat.m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.0001,0,776)
DeclareVariable("preprocessor.feed_SteamHeat.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.feed_SteamHeat.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 4)
DeclareAlias2("preprocessor.feed_SteamHeat.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 4)
DeclareAlias2("preprocessor.feed_SteamHeat.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 4)
DeclareAlias2("preprocessor.feed_SteamHeat.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 4)
DeclareAlias2("preprocessor.feed_SteamHeat.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.p", "Pressure [Pa|bar]", "anVolume.p", 1,\
 1, 283, 4)
DeclareVariable("preprocessor.feed_ATRHeat.m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.0,0,776)
DeclareVariable("preprocessor.feed_ATRHeat.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("preprocessor.feed_ATRHeat.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.p", "Pressure [Pa|bar]", "fuelMix.p", 1,\
 1, 305, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", -1, 5, 13053, 132)
DeclareVariable("preprocessor.drain_ATRHeat.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[1]", 1, 5, 14103, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[2]", 1, 5, 14104, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[3]", 1, 5, 14105, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[4]", 1, 5, 14106, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[5]", 1, 5, 14107, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[6]", 1, 5, 14108, 4)
DeclareAlias2("preprocessor.drain_ATRHeat.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[7]", 1, 5, 14109, 4)
DeclareAlias2("preprocessor.feed_Water.p", "Pressure [Pa|bar]", "preprocessor.steamMix_TZ.state_water.p", 1,\
 5, 12607, 4)
DeclareAlias2("preprocessor.feed_Water.m_flow", "Mass flow rate into the component [kg/s]",\
 "WaterSource.massFlowBoundary.m_flow", 1, 5, 11797, 132)
DeclareAlias2("preprocessor.feed_Water.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "WaterSource.fluidPort.h_outflow", 1, 5, 11794, 4)
DeclareVariable("preprocessor.feed_Water.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("preprocessor.feed_ATRAir.p", "Pressure [Pa|bar]", \
"ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 4)
DeclareAlias2("preprocessor.feed_ATRAir.m_flow", "Mass flow rate into the component [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 132)
DeclareVariable("preprocessor.feed_ATRAir.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("preprocessor.feed_ATRAir.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.feed_ATRAir.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.feed_ATRAir.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.feed_ATRAir.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.feed_ATRAir.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,521)
DeclareParameter("preprocessor.Geometry_Record.ATR_V_tot", "Total volume of ATR unit [m3]",\
 700, 0.0024, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.ATR_m_flow_nom", "ATR unit nominal mass flowrate (total) [kg/s]",\
 701, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.ATR_scale_cat", "ATR reactivity of catalyst",\
 702, 5, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.Steam_V_tot", "Steam mixing total volume [m3]",\
 703, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.Hotgas_V_tot", "Total volume of hotgas channel [m3]",\
 704, 0.001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.Hotgas_m_flow_nom", \
"Nominal mass flowrate (total) of hotgas channel [kg/s]", 705, 0.001, 0.0,0.0,\
0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.steamGen_Apipe", "Steam generator pipe outside wall area [m2]",\
 706, 0.03, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.Geometry_Record.steamGen_dp_nom_gas", \
"Nominal pressure drop in steam generator gas channel [Pa|kPa]", 1000, 0.0,0.0,\
0.0,0,513)
DeclareParameter("preprocessor.Geometry_Record.steamGen_mflow_nom_gas", \
"Nominal pressure mass flow rate in steam generator gas channel [kg/s]", 707, \
0.0005, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_m_flow_nom_prim", \
"Nominal mass flowrate in NG HX hot gas channel [kg/s]", 708, 0.02, 0.0,0.0,0.0,\
0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_m_flow_nom_sec", \
"Nominal mass flowrate in NG HX natural gas channel [kg/s]", 709, 0.00025, \
0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_length", \
"Length of each side of NG HX [m]", 710, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_Dhyd", "Hydraulic diameter of NG HX [m]",\
 711, 0.01, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_Across", \
"Cross section area of NG HX [m2]", 712, 0.0001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_Aheat", "Heat transfer area of NG HX [m2]",\
 713, 0.02, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.FuelHeat_kc", "Heat transfer coefficient of NG HX [W/(m2.K)]",\
 714, 150.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_m_flow_nom_prim", \
"Nominal mass flowrate in ATR HX air channel [kg/s]", 715, 0.0005, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_m_flow_nom_sec", \
"Nominal mass flowrate in ATR HX exhaust channel [kg/s]", 716, 0.0005, 0.0,0.0,\
0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_length", "Length of each side of ATR HX [m]",\
 717, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_Dhyd", "Hydraulic diameter of ATR HX [m]",\
 718, 0.01, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_Across", "Cross section area of ATR HX [m2]",\
 719, 0.0001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_Aheat", "Heat transfer area of ATR HX [m2]",\
 720, 0.02, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Geometry_Record.AirHeat_kc", "Heat transfer coefficient of ATR HX [W/(m2.K)]",\
 721, 55, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.Tstart", "Overall temperature start value [K|degC]",\
 722, 1073.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.ATR_pstart", \
"ATR pressure start value [Pa|bar]", 723, 154500, 0.0,1E+100,100000.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.steamMix_pstart", \
"Steam mixer pressure start value [Pa|bar]", 724, 155000, 0.0,1E+100,100000.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.steamMix_m_flow_start", \
"Nominal mass flow rate (total) in steam mixer volume [kg/s]", 725, 0.0006, \
0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.steamGen_pstart", \
"Pressure start value for steam generator channel [Pa|bar]", 726, 102400, 0.0,\
1E+100,100000.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.FuelHeat_pstart_prim", \
"Pressure start value of HX NG hot gas channel [Pa|bar]", 727, 122000, 0.0,0.0,\
0.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.FuelHeat_pstart_sec", \
"Pressure start value of HX NG natural gas channel [Pa|bar]", 728, 155500, \
0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.Initialization_Record.AirHeat_pstart_prim", \
"Pressure start value of ATR HX air channel [Pa|bar]", 729, 150000, 0.0,0.0,0.0,\
0,560)
DeclareParameter("preprocessor.Initialization_Record.AirHeat_pstart_sec", \
"Pressure start value of ATR HX exhaust channel [Pa|bar]", 730, 155000, 0.0,0.0,\
0.0,0,560)
DeclareVariable("preprocessor.summary.fuel_nS", "Number of components in medium [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareAlias2("preprocessor.summary.m_flow_outlet", "Outlet mass flow rate [kg/s]",\
 "summary.dmFuelStkIn", 1, 5, 11764, 0)
DeclareVariable("preprocessor.summary.T_outlet", "Temperature of outlet flow [degC]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.summary.Y_outlet[1]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[1]", 1, 5, 12109, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[2]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[2]", 1, 5, 12110, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[3]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[3]", 1, 5, 12111, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[4]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[4]", 1, 5, 12112, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[5]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[5]", 1, 5, 12113, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[6]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[6]", 1, 5, 12114, 0)
DeclareAlias2("preprocessor.summary.Y_outlet[7]", "Mole fractions in outlet flow [1]",\
 "preprocessor.reformer.X_mole[7]", 1, 5, 12115, 0)
DeclareAlias2("preprocessor.summary.utilization_CH4", "Methane utilization [1]",\
 "summary.ATRutilCH4", 1, 5, 11786, 0)
DeclareAlias2("preprocessor.summary.utilization_O2", "Oxygen utilization [1]", \
"summary.ATRutilO2", 1, 5, 11787, 0)
DeclareAlias2("preprocessor.summary.steam_carb_ratio", "Steam carbon ratio at ATR inlet",\
 "summary.ATRinletSteamCarb", 1, 5, 11789, 0)
DeclareAlias2("preprocessor.summary.oxygen_carb_ratio", "Oxygen carbon ratio at ATR inlet",\
 "summary.ATRinletOxCarb", 1, 5, 11790, 0)
DeclareAlias2("preprocessor.summary.therm_eff", "Reforming efficiency", \
"summary.ATRthermEff", 1, 5, 11788, 0)
DeclareAlias2("preprocessor.summary.tSteamMix", "Temperature in steam mixing volume [degC]",\
 "summary.tSteamMix", 1, 5, 11791, 0)
DeclareAlias2("preprocessor.summary.tGenSteam", "Temperature of generated steam [degC]",\
 "summary.tGenSteam", 1, 5, 11792, 0)
DeclareAlias2("preprocessor.summary.tSteamGenLiq", "Temperature of liquid in steam generator [degC]",\
 "summary.tSteamGenLiq", 1, 5, 11793, 0)
DeclareParameter("preprocessor.FuelHeater.n_channels_prim", "Number of parallel channels [1]",\
 731, 1.0, 1.0,1E+100,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.L_prim", "Length of primary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.Dhyd_prim", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.A_prim", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.V_prim", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.A_heat_prim", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.n_channels_sec", "Number of parallel channels [1]",\
 732, 1.0, 1.0,1E+100,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.L_sec", "Length of secondary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.Dhyd_sec", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.A_sec", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.V_sec", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.A_heat_sec", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.dp_smooth", "Pressure drop smoothing region around zero [Pa|bar]",\
 733, 10, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.mflow_smooth", "Smoothing interval around zero mass flow rate [kg/s]",\
 734, 0.0001, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.from_dp_prim", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 735, true, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.FuelHeater.positiveFlow_prim", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.FuelHeater.generateEventForReversal_prim", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", 736, \
false, 0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.FuelHeater.from_dp_sec", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 737, true, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.FuelHeater.positiveFlow_sec", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.FuelHeater.generateEventForReversal_sec", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", 738, \
false, 0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.FuelHeater.dp_prim_start", "Pressure drop start value [Pa|kPa]",\
 739, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.T_prim_start", "Temperature inlet start value [K|degC]",\
 740, 673.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("preprocessor.FuelHeater.dp_sec_start", "Pressure drop start value [Pa|kPa]",\
 741, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.T_sec_start", "Temperature inlet start value [K|degC]",\
 742, 673.15, 0.0,1E+100,300.0,0,560)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.p", "Pressure [Pa|bar]", \
"exhVol.p", 1, 1, 275, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", 1, 5, 13049, 132)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.drain_NGHeat.h_outflow", 1, 5, 13050, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1,\
 5, 13244, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1,\
 5, 13245, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1,\
 5, 13246, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1,\
 5, 13247, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1,\
 5, 13248, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.p", "Pressure [Pa|bar]", \
"preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", -1, 5, 13049, 132)
DeclareVariable("preprocessor.FuelHeater.feed_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_prim.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.p", "Pressure [Pa|bar]", \
"NGSource.fluidPort.p", 1, 5, 11817, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 132)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_NG.h_outflow", 1, 5, 13048, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 4)
DeclareAlias2("preprocessor.FuelHeater.feed_sec.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_sec.p", "Pressure [Pa|bar]", \
"preprocessor.NGMix.p", 1, 1, 269, 4)
DeclareAlias2("preprocessor.FuelHeater.drain_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", -1, 5, 11835, 132)
DeclareVariable("preprocessor.FuelHeater.drain_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", 0.9469822574910066, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", 0.05301774250899336, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.drain_sec.X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.summary.Q_flow", "Total heat flow, from wall to primary side [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.summary.m_flow", "Mass flow rate of primary medium [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", -1, 5, 13049, 0)
DeclareVariable("preprocessor.FuelHeater.summary.T_in", "Inlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.T_out", "Outlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.h_in", "Inlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.h_out", "Outlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.summary.p_in", "Inlet pressure, primary side [Pa|bar]",\
 "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.summary.p_out", "Outlet pressure, primary side [Pa|bar]",\
 "exhVol.p", 1, 1, 275, 0)
DeclareVariable("preprocessor.FuelHeater.summary.dp", "Primary side pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.summary.Q_flow_sec", "Total heat flow, from wall to secondary side [W]",\
 "preprocessor.FuelHeater.summary.Q_flow", -1, 5, 13087, 0)
DeclareAlias2("preprocessor.FuelHeater.summary.m_flow_sec", "Mass flow rate of secondary medium [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 0)
DeclareVariable("preprocessor.FuelHeater.summary.T_sec_in", "Inlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.T_sec_out", "Outlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.h_sec_in", "Inlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.h_sec_out", "Outlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.summary.p_sec_in", "Inlet pressure, secondary side [Pa|bar]",\
 "NGSource.fluidPort.p", 1, 5, 11817, 0)
DeclareAlias2("preprocessor.FuelHeater.summary.p_sec_out", "Outlet pressure, secondary side [Pa|bar]",\
 "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareVariable("preprocessor.FuelHeater.summary.dp_sec", "Secondary side pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.Tpinch_prim_in", \
"Temperature difference at inflow of primary side [K,]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.Tpinch_prim_out", \
"Temperature difference at outflow of primary side [K,]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.lmtd", "log-mean temperature difference [K,]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.summary.effectiveness", \
"Heat exchanger effectiveness [1]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.A", \
"Flow cross sectional area (single channel) [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.L", \
"Flow path length (one segment in case of discretized channels) [m]", \
"preprocessor.FuelHeater.heatExchanger.L_prim", 1, 5, 13155, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.Dhyd", \
"Hydraulic diameter (single channel) [m]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.n_channels",\
 "Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.lengthFraction",\
 "Fraction of total channel length (used for discretization, all correlations)",\
 743, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.flowFraction0",\
 "Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 744, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.dpFraction0",\
 "Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 745, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.F_user", \
"Calibration factor for pressure loss", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.from_dp", \
"if true, then massflow rate is computed from pressure [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.positiveFlow",\
 "Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.dp_smooth",\
 "Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.mflow_smooth",\
 "Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.useFixedDensity",\
 "Assume fixed upstream density in flow model [:#(type=Boolean)]", 746, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.reference_d",\
 "Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 747, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.dp", \
"Pressure drop over component [Pa|bar]", "preprocessor.FuelHeater.summary.dp", 1,\
 5, 13092, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 13202, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 13202, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 13203, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.stateB_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 13203, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_prim.stateA_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.dp_from_isothermal",\
 "Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.m_flow", \
"Mass flow rate (single channel) [kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.dA", \
"Density from stateA [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.dB", \
"Density from stateB [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.d0", \
"Nominal density [kg/m3|g/cm3]", 748, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_prim.dp0", \
"Nominal pressure drop [Pa|kPa]", 749, 100, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_prim.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.A", \
"Flow cross sectional area (single channel) [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.L", \
"Flow path length (one segment in case of discretized channels) [m]", \
"preprocessor.FuelHeater.heatExchanger.L_sec", 1, 5, 13161, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.Dhyd", \
"Hydraulic diameter (single channel) [m]", 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.n_channels",\
 "Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.lengthFraction",\
 "Fraction of total channel length (used for discretization, all correlations)",\
 750, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.flowFraction0",\
 "Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 751, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.dpFraction0",\
 "Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 752, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.F_user", \
"Calibration factor for pressure loss", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.from_dp", \
"if true, then massflow rate is computed from pressure [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.positiveFlow",\
 "Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.mflow_smooth",\
 "Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.useFixedDensity",\
 "Assume fixed upstream density in flow model [:#(type=Boolean)]", 753, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.reference_d",\
 "Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 754, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.dp", \
"Pressure drop over component [Pa|bar]", "preprocessor.FuelHeater.summary.dp_sec", 1,\
 5, 13097, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.p", 1,\
 5, 13206, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 13207, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.p", 1,\
 5, 13206, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 13207, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[1]", 1, 5, 13133,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[2]", 1, 5, 13134,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[3]", 1, 5, 13135,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[4]", 1, 5, 13136,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[5]", 1, 5, 13137,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[6]", 1, 5, 13138,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_outflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[7]", 1, 5, 13139,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.p", 1,\
 5, 13215, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 13216, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.p", 1,\
 5, 13215, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 13216, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[1]", 1, 5, 13140,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[2]", 1, 5, 13141,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[3]", 1, 5, 13142,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[4]", 1, 5, 13143,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[5]", 1, 5, 13144,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[6]", 1, 5, 13145,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_outflow.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[7]", 1, 5, 13146,\
 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.dp_from_isothermal",\
 "Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.m_flow", \
"Mass flow rate (single channel) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.dA", \
"Density from stateA [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.dB", \
"Density from stateB [kg/m3|g/cm3]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.d0", \
"Nominal density [kg/m3|g/cm3]", 755, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.friction_sec.dp0", \
"Nominal pressure drop [Pa|kPa]", 756, 100, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.friction_sec.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CF_Friction", \
"Calibration factor for pressure drop", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CF_Friction_sec", \
"Calibration factor for pressure drop", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.effectivenessStreamChoice",\
 "Stream used for the effectiveness calculation [:#(type=Modelon.Types.EffectivenessStreamChoice)]",\
 757, 3, 1.0,3.0,0.0,0,564)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.n_channels_prim", \
"Number of parallel channels [1]", 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.L_prim", "Length of primary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Dhyd_prim", \
"Hydraulic diameter, single channel [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.A_prim", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.V_prim", "Total volume [m3]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.A_heat_prim", \
"Heat transfer area, single channel [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.n_channels_sec", \
"Number of parallel channels [1]", 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.L_sec", "Length of secondary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Dhyd_sec", \
"Hydraulic diameter, single channel [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.A_sec", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.V_sec", "Total volume [m3]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.A_heat_sec", \
"Heat transfer area, single channel [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.m_flow", \
"Initial mass flow rate [kg/s]", 758, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.p_in", \
"Initial inlet pressure [Pa|bar]", 759, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_prim.dp", \
"Initial pressure drop [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_prim.p_out", \
"Initial outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.initFromEnthalpy",\
 "Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 760, false, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_prim.T_in", \
"Initial inlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.dT", \
"Initial temperature increase [K,]", 761, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_prim.T_out", \
"Initial outlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.h_in", \
"Initial inlet specific enthalpy [J/kg]", 762, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.dh", \
"Initial specific enthalpy increase [J/kg]", 763, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_prim.h_out", \
"Initial outlet specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.X[1]", \
"Initial mass fractions [1]", 764, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.X[2]", \
"Initial mass fractions [1]", 765, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.X[3]", \
"Initial mass fractions [1]", 766, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.X[4]", \
"Initial mass fractions [1]", 767, 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_prim.X[5]", \
"Initial mass fractions [1]", 768, 0.23, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.m_flow", \
"Initial mass flow rate [kg/s]", 769, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.p_in", \
"Initial inlet pressure [Pa|bar]", 770, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.dp", \
"Initial pressure drop [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.p_out", \
"Initial outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.initFromEnthalpy",\
 "Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 771, false, 0.0,0.0,0.0,0,562)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.T_in", \
"Initial inlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.dT", \
"Initial temperature increase [K,]", 772, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.T_out", \
"Initial outlet temperature [K|degC]", 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.h_in", \
"Initial inlet specific enthalpy [J/kg]", 773, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.init_sec.dh", \
"Initial specific enthalpy increase [J/kg]", 774, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.h_out", \
"Initial outlet specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[1]", \
"Initial mass fractions [1]", 0.03175579711384599, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[2]", \
"Initial mass fractions [1]", 0.15495406709770243, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[3]", \
"Initial mass fractions [1]", 0.028713975871231152, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[4]", \
"Initial mass fractions [1]", 0.1837200588299551, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[5]", \
"Initial mass fractions [1]", 0.2516776970663578, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[6]", \
"Initial mass fractions [1]", 0.32785651294517304, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.init_sec.X[7]", \
"Initial mass fractions [1]", 0.021321891075734414, 0.0,1.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.mflow_smooth", \
"Smoothing interval around zero mass flow rate [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.from_dp_prim", \
"if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.positiveFlow_prim", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.generateEventForReversal_prim",\
 "flag for switching events for flow reversal on/off [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.from_dp_sec", \
"if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.positiveFlow_sec", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.generateEventForReversal_sec",\
 "flag for switching events for flow reversal on/off [:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.Q_flow", \
"Total heat flow, from wall to primary side [W]", "preprocessor.FuelHeater.summary.Q_flow", 1,\
 5, 13087, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.m_flow", \
"Mass flow rate of primary medium [kg/s]", "preprocessor.drain_NGHeat.m_flow", -1,\
 5, 13049, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.T_in", \
"Inlet temperature, primary side [K|degC]", "preprocessor.FuelHeater.summary.T_in", 1,\
 5, 13088, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.T_out", \
"Outlet temperature, primary side [K|degC]", "preprocessor.FuelHeater.summary.T_out", 1,\
 5, 13089, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.h_in", \
"Inlet specific enthalpy, primary side [J/kg]", "preprocessor.FuelHeater.summary.h_in", 1,\
 5, 13090, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.h_out", \
"Outlet specific enthalpy, primary side [J/kg]", "preprocessor.FuelHeater.summary.h_out", 1,\
 5, 13091, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.p_in", \
"Inlet pressure, primary side [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.p_out", \
"Outlet pressure, primary side [Pa|bar]", "exhVol.p", 1, 1, 275, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.dp", \
"Primary side pressure drop [Pa|bar]", "preprocessor.FuelHeater.summary.dp", 1, 5,\
 13092, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.Q_flow_sec", \
"Total heat flow, from wall to secondary side [W]", "preprocessor.FuelHeater.summary.Q_flow", -1,\
 5, 13087, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.m_flow_sec", \
"Mass flow rate of secondary medium [kg/s]", "NGSource.massFlowBoundary.m_flow", 1,\
 5, 11835, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.T_sec_in", \
"Inlet temperature, secondary side [K|degC]", "preprocessor.FuelHeater.summary.T_sec_in", 1,\
 5, 13093, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.T_sec_out", \
"Outlet temperature, secondary side [K|degC]", "preprocessor.FuelHeater.summary.T_sec_out", 1,\
 5, 13094, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.h_sec_in", \
"Inlet specific enthalpy, secondary side [J/kg]", "preprocessor.FuelHeater.summary.h_sec_in", 1,\
 5, 13095, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.h_sec_out", \
"Outlet specific enthalpy, secondary side [J/kg]", "preprocessor.FuelHeater.summary.h_sec_out", 1,\
 5, 13096, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.p_sec_in", \
"Inlet pressure, secondary side [Pa|bar]", "NGSource.fluidPort.p", 1, 5, 11817, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.p_sec_out", \
"Outlet pressure, secondary side [Pa|bar]", "preprocessor.NGMix.p", 1, 1, 269, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.dp_sec", \
"Secondary side pressure drop [Pa|bar]", "preprocessor.FuelHeater.summary.dp_sec", 1,\
 5, 13097, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.Tpinch_prim_in", \
"Temperature difference at inflow of primary side [K,]", "preprocessor.FuelHeater.summary.Tpinch_prim_in", 1,\
 5, 13098, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.Tpinch_prim_out", \
"Temperature difference at outflow of primary side [K,]", "preprocessor.FuelHeater.summary.Tpinch_prim_out", 1,\
 5, 13099, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.lmtd", \
"log-mean temperature difference [K,]", "preprocessor.FuelHeater.summary.lmtd", 1,\
 5, 13100, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.summary.effectiveness", \
"Heat exchanger effectiveness [1]", "preprocessor.FuelHeater.summary.effectiveness", 1,\
 5, 13101, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.p", \
"Pressure [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.drain_NGHeat.m_flow", -1,\
 5, 13049, 132)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.FuelHeater.feed_prim.h_outflow", 1,\
 5, 13078, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "exhaustLoss.drain.X_outflow[1]", 1, 5,\
 13836, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "exhaustLoss.drain.X_outflow[2]", 1, 5,\
 13837, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "exhaustLoss.drain.X_outflow[3]", 1, 5,\
 13838, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "exhaustLoss.drain.X_outflow[4]", 1, 5,\
 13839, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "exhaustLoss.drain.X_outflow[5]", 1, 5,\
 13840, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.p", \
"Pressure [Pa|bar]", "exhVol.p", 1, 1, 275, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.m_flow", \
"Mass flow rate into the component [kg/s]", "preprocessor.drain_NGHeat.m_flow", 1,\
 5, 13049, 132)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.drain_NGHeat.h_outflow", 1,\
 5, 13050, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1,\
 5, 13244, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1,\
 5, 13245, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1,\
 5, 13246, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1,\
 5, 13247, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1,\
 5, 13248, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.p", \
"Pressure [Pa|bar]", "NGSource.fluidPort.p", 1, 5, 11817, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.m_flow", \
"Mass flow rate into the component [kg/s]", "NGSource.massFlowBoundary.m_flow", 1,\
 5, 11835, 132)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.feed_NG.h_outflow", 1,\
 5, 13048, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[1]", 1,\
 5, 13604, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[2]", 1,\
 5, 13605, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[3]", 1,\
 5, 13606, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[4]", 1,\
 5, 13607, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[5]", 1,\
 5, 13608, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[6]", 1,\
 5, 13609, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portA_sec.X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "preprocessor.NGMix.drain[1].X_outflow[7]", 1,\
 5, 13610, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_sec.p", \
"Pressure [Pa|bar]", "preprocessor.NGMix.p", 1, 1, 269, 4)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_sec.m_flow", \
"Mass flow rate into the component [kg/s]", "NGSource.massFlowBoundary.m_flow", -1,\
 5, 11835, 132)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.portB_sec.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "preprocessor.FuelHeater.drain_sec.h_outflow", 1,\
 5, 13079, 4)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", 0.9469822574910066, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", 0.05301774250899336, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.portB_sec.X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", 0.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.m_flow_prim", \
"Mass flowrate primary side, positive flow from portA_prim to portB_prim [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", -1, 5, 13049, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.Tprim_in", "Inlet temperature on primary side [K|degC]",\
 "preprocessor.FuelHeater.summary.T_in", 1, 5, 13088, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hprim_in", "Inlet specific enthalpy on primary side [J/kg]",\
 "preprocessor.FuelHeater.summary.h_in", 1, 5, 13090, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.pAprim", "Pressure at portA_prim [Pa|bar]",\
 "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.pBprim", "Pressure at portB_prim [Pa|bar]",\
 "exhVol.p", 1, 1, 275, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.pprim_out", \
"Primary side outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.dp_prim", "Pressure drop over the primary side [Pa|bar]",\
 "preprocessor.FuelHeater.summary.dp", 1, 5, 13092, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.m_flow_sec", \
"Mass flowrate secondary side, positive flow from portA_sec to portB_sec [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.Tsec_in", "Inlet temperature on secondary side [K|degC]",\
 "preprocessor.FuelHeater.summary.T_sec_in", 1, 5, 13093, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hsec_in", "Inlet specific enthalpy on secondary side [J/kg]",\
 "preprocessor.FuelHeater.summary.h_sec_in", 1, 5, 13095, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.pAsec", "Pressure at portA_sec [Pa|bar]",\
 "NGSource.fluidPort.p", 1, 5, 11817, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.pBsec", "Pressure at portB_sec [Pa|bar]",\
 "preprocessor.NGMix.p", 1, 1, 269, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.psec_out", \
"Secondary side outlet pressure [Pa|bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.dp_sec", "Pressure drop over the secondary side [Pa|bar]",\
 "preprocessor.FuelHeater.summary.dp_sec", 1, 5, 13097, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.C", "Ratio of the heat capacity flows [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.Q_flow", "Total heat flow from primary to secondary side [W]",\
 "preprocessor.FuelHeater.summary.Q_flow", -1, 5, 13087, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.eps", "Heat exchanger effectiveness [1]",\
 "preprocessor.FuelHeater.summary.effectiveness", 1, 5, 13101, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Q_max", "Maximum transferable heat [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TAprim_in", \
"Temperature of fluid connected to portA_prim [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 13202, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TBprim_in", \
"Temperature of fluid connected to portB_prim [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 13203, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TAprim_out", \
"Temperature of outgoing fluid portA_prim [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_outflow.T", 1,\
 5, 13204, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TBprim_out", \
"Temperature of outgoing fluid portB_prim [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_outflow.T", 1,\
 5, 13205, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hAprim_in", \
"Specific enthalpy inflow portA_prim [J/kg]", "preprocessor.gasMix.feed[1].h_outflow", 1,\
 5, 13479, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hBprim_in", \
"Specific enthalpy inflow portB_prim [J/kg]", "exhaustLoss.drain.h_outflow", 1, 5,\
 13835, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hAprim_out", \
"Specific enthalpy outflow portA_prim [J/kg]", "preprocessor.FuelHeater.feed_prim.h_outflow", 1,\
 5, 13078, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hBprim_out", \
"Specific enthalpy outflow portB_prim [J/kg]", "preprocessor.drain_NGHeat.h_outflow", 1,\
 5, 13050, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TAsec_out", \
"Temperature of outgoing fluid portA_sec [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.T", 1,\
 5, 13225, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TBsec_out", \
"Temperature of outgoing fluid portB_sec [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.T", 1,\
 5, 13234, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hAsec_in", "Specific enthalpy inflow portA_sec [J/kg]",\
 "NGSource.fluidPort.h_outflow", 1, 5, 11818, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hBsec_in", "Specific enthalpy inflow portB_sec [J/kg]",\
 "preprocessor.steamMix_TZ.hi", 1, 5, 12435, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hAsec_out", \
"Specific enthalpy outflow portA_sec [J/kg]", "preprocessor.feed_NG.h_outflow", 1,\
 5, 13048, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.hBsec_out", \
"Specific enthalpy outflow portB_sec [J/kg]", "preprocessor.FuelHeater.drain_sec.h_outflow", 1,\
 5, 13079, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateAsec_outflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.p", \
"Absolute pressure of medium [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.T", \
"Temperature of medium [K|degC]", 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.stateBsec_outflow.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,2560)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TAsec_in", "Temperature of fluid connected to portA_sec [K|degC]",\
 "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", 1, 5, 13207, 1024)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.TBsec_in", "Temperature of fluid connected to portB_sec [K|degC]",\
 "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", 1, 5, 13216, 1024)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.hprim_Tsec_in", \
"Specific enthalpy of primary side fluid at the secondary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.hsec_Tprim_in", \
"Specific enthalpy of secondary side fluid at the primary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", \
"Mass fractions inflow portA_prim [1]", 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", \
"Mass fractions inflow portA_prim [1]", 0.77, 0.0,1.0,0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", \
"Mass fractions inflow portA_prim [1]", 0.23, 0.0,1.0,0.1,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBprim_in[1]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBprim_in[2]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBprim_in[3]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBprim_in[4]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBprim_in[5]", \
"Mass fractions inflow portB_prim [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xprim[1]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xprim[2]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xprim[3]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xprim[4]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xprim[5]", \
"Mass fractions in primary channel (flow direction dependent) [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[1]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[2]", \
"Mass fractions inflow portA_sec [1]", 0.9469822574910066, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[3]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[4]", \
"Mass fractions inflow portA_sec [1]", 0.05301774250899336, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[5]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[6]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XAsec_in[7]", \
"Mass fractions inflow portA_sec [1]", 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[1]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[2]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[3]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[4]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[5]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[6]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.XBsec_in[7]", \
"Mass fractions inflow portB_sec [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[1]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[2]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[3]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[4]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[5]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[6]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Xsec[7]", \
"Mass fractions in secondary channel (flow direction dependent) [1]", 0.0, 0.0,\
1.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CAprim", "Primary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CBprim", "Primary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CAsec", "Secondary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CBsec", "Secondary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Cprim", "Primary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Csec", "Secondary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Cmin", "Smaller heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Cmax", "Larger heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Q_max_prim", \
"Maximum transferable heat for primary side [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.Q_max_sec", \
"Maximum transferable heat for secondary side [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.A_heat", "Wall heat transfer area [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.U", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.NTU", "Number of transfer units [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CF_HeatTransfer", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.CF_HeatTransfer_sec", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.thickness_wall", \
"Wall thickness [m|mm]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.heatFlowDynamics", \
"If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.order", "Order of filter [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.riseTime", \
"Filter rise time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.wall.c", "Specific heat capacity of the material [J/(kg.K)]",\
 500, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.wall.rho", \
"Density of the material [kg/m3|g/cm3]", 7880, 0.0,1E+100,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.wall.lambda", \
"Thermal conductivity of the material [W/(m.K)]", 21, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.A", \
"Flow cross sectional area [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.L", \
"Channel length (total length in case of discretized channel) [m]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.Dhyd", \
"Hydraulic diameter [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.F_user", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.m_flow", \
"Mass flow rate [kg/s]", "preprocessor.FuelHeater.heatExchanger.friction_prim.m_flow", 1,\
 5, 13121, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 13202, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.p",\
 "Absolute pressure of medium [Pa|bar]", "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 13202, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.p", \
"Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 13203, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.p",\
 "Absolute pressure of medium [Pa|bar]", "exhVol.p", 1, 1, 275, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.T",\
 "Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 13203, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.stateA_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.ht_from_isothermal",\
 "Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.alphaA", \
"Heat transfer coefficient, positive flow [W/(m2.K)]", "preprocessor.FuelHeater.heatExchanger.htcoeff_prim.alpha", 1,\
 7, 775, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.alphaB", \
"Heat transfer coefficient, negative flow [W/(m2.K)]", "preprocessor.FuelHeater.heatExchanger.htcoeff_prim.alpha", 1,\
 7, 775, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.htcoeff_prim.alpha", \
"Heat transfer coefficient [W/(m2.K)]", 775, 500, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.A", \
"Flow cross sectional area [m2]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.L", \
"Channel length (total length in case of discretized channel) [m]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.Dhyd", \
"Hydraulic diameter [m]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.F_user", \
"Calibration factor for heat transfer [1]", 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.m_flow", \
"Mass flow rate [kg/s]", "preprocessor.FuelHeater.heatExchanger.friction_sec.m_flow", 1,\
 5, 13148, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.p", 1,\
 5, 13206, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 13207, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[1]", 1, 5, 13133,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[2]", 1, 5, 13134,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[3]", 1, 5, 13135,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[4]", 1, 5, 13136,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[5]", 1, 5, 13137,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[6]", 1, 5, 13138,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[7]", 1, 5, 13139,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.p", 1,\
 5, 13206, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 13207, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[1]", 1, 5, 13133,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[2]", 1, 5, 13134,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[3]", 1, 5, 13135,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[4]", 1, 5, 13136,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[5]", 1, 5, 13137,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[6]", 1, 5, 13138,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB_out.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateA_inflow.X[7]", 1, 5, 13139,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.p", 1,\
 5, 13215, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 13216, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[1]", 1, 5, 13140,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[2]", 1, 5, 13141,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[3]", 1, 5, 13142,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[4]", 1, 5, 13143,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[5]", 1, 5, 13144,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[6]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[6]", 1, 5, 13145,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateB.X[7]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[7]", 1, 5, 13146,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.p", \
"Absolute pressure of medium [Pa|bar]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.p", 1,\
 5, 13215, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.T", \
"Temperature of medium [K|degC]", "preprocessor.FuelHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 13216, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[1]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[1]", 1, 5, 13140,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[2]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[2]", 1, 5, 13141,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[3]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[3]", 1, 5, 13142,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[4]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[4]", 1, 5, 13143,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[5]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[5]", 1, 5, 13144,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[6]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[6]", 1, 5, 13145,\
 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.stateA_out.X[7]",\
 "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"preprocessor.FuelHeater.heatExchanger.friction_sec.stateB_inflow.X[7]", 1, 5, 13146,\
 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.ht_from_isothermal",\
 "Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.alphaA", \
"Heat transfer coefficient, positive flow [W/(m2.K)]", "preprocessor.FuelHeater.heatExchanger.htcoeff_sec.alpha", 1,\
 7, 776, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.alphaB", \
"Heat transfer coefficient, negative flow [W/(m2.K)]", "preprocessor.FuelHeater.heatExchanger.htcoeff_sec.alpha", 1,\
 7, 776, 0)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.heatExchanger.htcoeff_sec.alpha", \
"Heat transfer coefficient [W/(m2.K)]", 776, 500, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.kc_prim", \
"Heat transfer coefficient primary side [W/(m2.K)]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.kc_sec", "Heat transfer coefficient secondary side [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.FuelHeater.heatExchanger.kc_wall", \
"Heat transfer coefficient wall [W/(m2.K)]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.kc_tot", "Total heat transfer coefficient [W/(m2.K)]",\
 "preprocessor.FuelHeater.heatExchanger.U", 1, 5, 13291, 0)
DeclareAlias2("preprocessor.FuelHeater.heatExchanger.Q_flow_internal", \
"Needed to connect to conditional connector [W]", "preprocessor.FuelHeater.summary.Q_flow", -1,\
 5, 13087, 1024)
DeclareVariable("preprocessor.FuelHeater.A_heat", "Heat transfer area [m2]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareParameter("preprocessor.FuelHeater.thickness_wall", "Wall thickness [m]",\
 777, 0.002, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.FuelHeater.heatFlowDynamics", "If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("preprocessor.FuelHeater.order", "Order of filter [:#(type=Integer)]",\
 778, 1, 0.0,0.0,0.0,0,564)
DeclareParameter("preprocessor.FuelHeater.riseTime", "Filter rise time [s]", 779,\
 10, 0.0,0.0,0.0,0,560)
DeclareAlias2("preprocessor.fuelLoss.feed.p", "Pressure [Pa|bar]", \
"preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.reformer.feed_fuel.m_flow", 1, 5, 12116, 132)
DeclareAlias2("preprocessor.fuelLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.drain_Reformate.h_outflow", 1, 5, 12760, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[1]", 1, 5, 12761, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[2]", 1, 5, 12762, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[3]", 1, 5, 12763, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[4]", 1, 5, 12764, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[5]", 1, 5, 12765, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[6]", 1, 5, 12766, 4)
DeclareAlias2("preprocessor.fuelLoss.feed.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[7]", 1, 5, 12767, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.p", "Pressure [Pa|bar]", \
"preprocessor.reformer.p", 1, 5, 12075, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.reformer.feed_fuel.m_flow", -1, 5, 12116, 132)
DeclareAlias2("preprocessor.fuelLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.steamMix_TZ.feed.h_outflow", 1, 5, 12416, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[1]", 1, 5, 12417, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[2]", 1, 5, 12418, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[3]", 1, 5, 12419, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[4]", 1, 5, 12420, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[5]", 1, 5, 12421, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[6]", 1, 5, 12422, 4)
DeclareAlias2("preprocessor.fuelLoss.drain.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[7]", 1, 5, 12423, 4)
DeclareAlias2("preprocessor.fuelLoss.m_flow", "mass flow through component [kg/s]",\
 "preprocessor.reformer.feed_fuel.m_flow", 1, 5, 12116, 0)
DeclareVariable("preprocessor.fuelLoss.dp", "pressure drop over component [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.fuelLoss.d", "density of media upstream [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.T", "temperature of media upstream [K|degC]",\
 288.15, 0.0,10000.0,300.0,0,512)
DeclareAlias2("preprocessor.fuelLoss.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 0)
DeclareAlias2("preprocessor.fuelLoss.medium.T", "Temperature of medium [K|degC]",\
 "preprocessor.fuelLoss.T", 1, 5, 13321, 0)
DeclareVariable("preprocessor.fuelLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("preprocessor.fuelLoss.medium.d", "Density of medium [kg/m3|g/cm3]",\
 "preprocessor.fuelLoss.d", 1, 5, 13320, 0)
DeclareVariable("preprocessor.fuelLoss.medium.h", "Specific enthalpy of medium [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("preprocessor.fuelLoss.medium.assertlevel", "[:#(type=AssertionLevel)]",\
 780, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("preprocessor.fuelLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.fuelLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[6]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.Z[7]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.cp", "Specific heat capacity [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.fuelLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.fuelLoss.medium.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("preprocessor.fuelLoss.d0", "Nominal density [kg/m3|g/cm3]", 781,\
 1, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.fuelLoss.dp0", "Nominal pressure drop [Pa|bar]", 782,\
 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.fuelLoss.m_flow0", "Nominal mass flow rate [kg/s]",\
 783, 0.0005, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.fuelLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.fuelLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.fuelLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("preprocessor.fuelLoss.value", "[1]", "preprocessor.fuelLoss.linear", 1,\
 5, 13408, 1024)
DeclareParameter("preprocessor.fuelLoss.limroot", "root interpolation region", 784,\
 0.01, 0.0,0.0,0.0,0,2608)
DeclareAlias2("preprocessor.gasMix.gas.p", "Absolute pressure of medium [Pa|bar]",\
 "preprocessor.gasMix.p", 1, 1, 261, 0)
DeclareAlias2("preprocessor.gasMix.gas.T", "Temperature of medium [K|degC]", \
"preprocessor.gasMix.T", 1, 1, 262, 0)
DeclareVariable("preprocessor.gasMix.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("preprocessor.gasMix.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 257, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.gasMix.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.gasMix.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 258, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.gasMix.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.gasMix.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 259, 0.77, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.gasMix.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.gasMix.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 260, 0.23, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.gasMix.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.gasMix.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 0)
DeclareAlias2("preprocessor.gasMix.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 0)
DeclareAlias2("preprocessor.gasMix.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 0)
DeclareAlias2("preprocessor.gasMix.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 0)
DeclareAlias2("preprocessor.gasMix.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 0)
DeclareVariable("preprocessor.gasMix.gas.d", "Density of medium [kg/m3|g/cm3]", 1,\
 1E-08,100000.0,1.0,0,512)
DeclareAlias2("preprocessor.gasMix.gas.h", "Specific enthalpy of medium [J/kg]",\
 "preprocessor.gasMix.feed[1].h_outflow", 1, 5, 13479, 0)
DeclareVariable("preprocessor.gasMix.gas.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("preprocessor.gasMix.gas.assertlevel", "[:#(type=AssertionLevel)]",\
 785, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("preprocessor.gasMix.gas.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.gasMix.gas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.gasMix.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.cp", "Specific heat capacity [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.gasMix.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.gasMix.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.gasMix.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("preprocessor.gasMix.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("preprocessor.gasMix.V_tot", "Total volume [m3]", 786, 0.001, \
0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.gasMix.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("preprocessor.gasMix.pstart", "Pressure start value [Pa|bar]", \
0.0, 0.0,1E+100,100000.0,0,513)
DeclareVariable("preprocessor.gasMix.Tstart", "Temperature start value [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareParameter("preprocessor.gasMix.Xstart[1]", "Gas composition start value [1]",\
 787, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.gasMix.Xstart[2]", "Gas composition start value [1]",\
 788, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.gasMix.Xstart[3]", "Gas composition start value [1]",\
 789, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.gasMix.Xstart[4]", "Gas composition start value [1]",\
 790, 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.gasMix.Xstart[5]", "Gas composition start value [1]",\
 791, 0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("preprocessor.gasMix.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.gasMix.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("preprocessor.gasMix.p", "gas pressure [Pa|bar]", 261, 0.0, 0.0,\
100000000.0,100000.0,0,544)
DeclareDerivative("preprocessor.gasMix.der(p)", "der(gas pressure) [Pa/s]", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.gasMix.T", "gas temperature [K|degC]", 262, 0.0, 0.0,\
10000.0,300.0,0,544)
DeclareDerivative("preprocessor.gasMix.der(T)", "der(gas temperature) [K/s]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.gasMix.Xtilde[1]", "Composition state variables [1]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 0)
DeclareAlias2("preprocessor.gasMix.Xtilde[2]", "Composition state variables [1]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 0)
DeclareAlias2("preprocessor.gasMix.Xtilde[3]", "Composition state variables [1]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 0)
DeclareAlias2("preprocessor.gasMix.Xtilde[4]", "Composition state variables [1]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 0)
DeclareAlias2("preprocessor.gasMix.Xtilde[5]", "Composition state variables [1]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 0)
DeclareVariable("preprocessor.gasMix.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,\
0,512)
DeclareVariable("preprocessor.gasMix.E_tot", "Total internal energy [J]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.gasMix.MXi[1]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.gasMix.MXi[2]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.gasMix.MXi[3]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.gasMix.MXi[4]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.gasMix.MXi[5]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareAlias2("preprocessor.gasMix.feed[1].p", "Pressure [Pa|bar]", \
"preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.gasMix.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 132)
DeclareVariable("preprocessor.gasMix.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("preprocessor.gasMix.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 4)
DeclareAlias2("preprocessor.gasMix.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 4)
DeclareAlias2("preprocessor.gasMix.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 4)
DeclareAlias2("preprocessor.gasMix.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 4)
DeclareAlias2("preprocessor.gasMix.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].p", "Pressure [Pa|bar]", \
"preprocessor.gasMix.p", 1, 1, 261, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", 1, 5, 13049, 132)
DeclareAlias2("preprocessor.gasMix.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.gasMix.feed[1].h_outflow", 1, 5, 13479, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 4)
DeclareAlias2("preprocessor.gasMix.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 4)
DeclareAlias2("preprocessor.gasMix.q.T", "Port temperature [K|degC]", \
"preprocessor.gasMix.T", 1, 1, 262, 4)
DeclareVariable("preprocessor.gasMix.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("preprocessor.gasMix.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("preprocessor.gasMix.hi[1]", "specific enthalpy at feed boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ho[1]", "specific enthalpy at drain boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_i[1, 1]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_i[1, 2]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_i[1, 3]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_i[1, 4]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_i[1, 5]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_o[1, 1]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_o[1, 2]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_o[1, 3]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_o[1, 4]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.X_o[1, 5]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dM", "Mass residual for balance [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dE", "Energy residual for balance [W]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dMX[1]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dMX[2]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dMX[3]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dMX[4]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.dMX[5]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.gasMix.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("preprocessor.NGMix.gas.p", "Absolute pressure of medium [Pa|bar]",\
 "preprocessor.NGMix.p", 1, 1, 269, 0)
DeclareAlias2("preprocessor.NGMix.gas.T", "Temperature of medium [K|degC]", \
"preprocessor.NGMix.T", 1, 1, 270, 0)
DeclareVariable("preprocessor.NGMix.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("preprocessor.NGMix.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 263, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 264, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 265, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 266, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.gas.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 267, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[6])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.gas.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 268, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("preprocessor.NGMix.gas.der(X[7])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.d", "Density of medium [kg/m3|g/cm3]", 1,\
 1E-08,100000.0,1.0,0,512)
DeclareAlias2("preprocessor.NGMix.gas.h", "Specific enthalpy of medium [J/kg]", \
"preprocessor.steamMix_TZ.hi", 1, 5, 12435, 0)
DeclareVariable("preprocessor.NGMix.gas.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("preprocessor.NGMix.gas.assertlevel", "[:#(type=AssertionLevel)]",\
 792, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("preprocessor.NGMix.gas.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.NGMix.gas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[6]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.Z[7]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.cp", "Specific heat capacity [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.NGMix.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.gas.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGMix.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("preprocessor.NGMix.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("preprocessor.NGMix.V_tot", "Total volume [m3]", 793, 0.001, \
0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.NGMix.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("preprocessor.NGMix.pstart", "Pressure start value [Pa|bar]", \
0.0, 0.0,1E+100,100000.0,0,513)
DeclareVariable("preprocessor.NGMix.Tstart", "Temperature start value [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareParameter("preprocessor.NGMix.Xstart[1]", "Gas composition start value [1]",\
 794, 1, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[2]", "Gas composition start value [1]",\
 795, 0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[3]", "Gas composition start value [1]",\
 796, 0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[4]", "Gas composition start value [1]",\
 797, 0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[5]", "Gas composition start value [1]",\
 798, 0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[6]", "Gas composition start value [1]",\
 799, 0, 0.0,1.0,0.0,0,560)
DeclareParameter("preprocessor.NGMix.Xstart[7]", "Gas composition start value [1]",\
 800, 0, 0.0,1.0,0.0,0,560)
DeclareVariable("preprocessor.NGMix.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.NGMix.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("preprocessor.NGMix.p", "gas pressure [Pa|bar]", 269, 0.0, 0.0,\
100000000.0,100000.0,0,544)
DeclareDerivative("preprocessor.NGMix.der(p)", "der(gas pressure) [Pa/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareState("preprocessor.NGMix.T", "gas temperature [K|degC]", 270, 0.0, 0.0,\
10000.0,300.0,0,544)
DeclareDerivative("preprocessor.NGMix.der(T)", "der(gas temperature) [K/s]", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareAlias2("preprocessor.NGMix.Xtilde[1]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[2]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[3]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[4]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[5]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[6]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 0)
DeclareAlias2("preprocessor.NGMix.Xtilde[7]", "Composition state variables [1]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 0)
DeclareVariable("preprocessor.NGMix.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.E_tot", "Total internal energy [J]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[1]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[2]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[3]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[4]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[5]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[6]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareVariable("preprocessor.NGMix.MXi[7]", "Total component mass [kg]", 0.0, \
0.0,1E+100,0.0,0,512)
DeclareAlias2("preprocessor.NGMix.feed[1].p", "Pressure [Pa|bar]", \
"preprocessor.NGMix.p", 1, 1, 269, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 132)
DeclareAlias2("preprocessor.NGMix.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.steamMix_TZ.hi", 1, 5, 12435, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 4)
DeclareAlias2("preprocessor.NGMix.feed[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 4)
DeclareAlias2("preprocessor.NGMix.drain[1].p", "Pressure [Pa|bar]", \
"preprocessor.NGMix.p", 1, 1, 269, 4)
DeclareAlias2("preprocessor.NGMix.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.steamMix_TZ.feed.m_flow", -1, 5, 12415, 132)
DeclareAlias2("preprocessor.NGMix.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.steamMix_TZ.hi", 1, 5, 12435, 4)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("preprocessor.NGMix.drain[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("preprocessor.NGMix.q.T", "Port temperature [K|degC]", \
"preprocessor.NGMix.T", 1, 1, 270, 4)
DeclareVariable("preprocessor.NGMix.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("preprocessor.NGMix.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,2565)
DeclareVariable("preprocessor.NGMix.hi[1]", "specific enthalpy at feed boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ho[1]", "specific enthalpy at drain boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 1]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 2]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 3]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 4]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 5]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 6]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_i[1, 7]", "Inlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 1]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 2]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 3]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 4]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 5]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 6]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.X_o[1, 7]", "Outlet composition [1]", 0.0, \
0.0,1.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dM", "Mass residual for balance [kg/s]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dE", "Energy residual for balance [W]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[1]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[2]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[3]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[4]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[5]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[6]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.dMX[7]", "Component mass residual [kg/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[6]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddx[7]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGMix.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("preprocessor.NGLoss.feed.p", "Pressure [Pa|bar]", \
"preprocessor.NGMix.p", 1, 1, 269, 4)
DeclareAlias2("preprocessor.NGLoss.feed.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.steamMix_TZ.feed.m_flow", 1, 5, 12415, 132)
DeclareAlias2("preprocessor.NGLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.steamMix_TZ.feed.h_outflow", 1, 5, 12416, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[1]", 1, 5, 12417, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[2]", 1, 5, 12418, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[3]", 1, 5, 12419, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[4]", 1, 5, 12420, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[5]", 1, 5, 12421, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[6]", 1, 5, 12422, 4)
DeclareAlias2("preprocessor.NGLoss.feed.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.steamMix_TZ.drain.X_outflow[7]", 1, 5, 12423, 4)
DeclareAlias2("preprocessor.NGLoss.drain.p", "Pressure [Pa|bar]", \
"preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("preprocessor.NGLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.steamMix_TZ.feed.m_flow", -1, 5, 12415, 132)
DeclareAlias2("preprocessor.NGLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.steamMix_TZ.hi", 1, 5, 12435, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 4)
DeclareAlias2("preprocessor.NGLoss.drain.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 4)
DeclareAlias2("preprocessor.NGLoss.m_flow", "mass flow through component [kg/s]",\
 "preprocessor.steamMix_TZ.feed.m_flow", 1, 5, 12415, 0)
DeclareVariable("preprocessor.NGLoss.dp", "pressure drop over component [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGLoss.d", "density of media upstream [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.T", "temperature of media upstream [K|degC]",\
 288.15, 0.0,10000.0,300.0,0,512)
DeclareAlias2("preprocessor.NGLoss.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "preprocessor.NGMix.p", 1, 1, 269, 0)
DeclareAlias2("preprocessor.NGLoss.medium.T", "Temperature of medium [K|degC]", \
"preprocessor.NGLoss.T", 1, 5, 13650, 0)
DeclareVariable("preprocessor.NGLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("preprocessor.NGLoss.medium.d", "Density of medium [kg/m3|g/cm3]",\
 "preprocessor.NGLoss.d", 1, 5, 13649, 0)
DeclareVariable("preprocessor.NGLoss.medium.h", "Specific enthalpy of medium [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("preprocessor.NGLoss.medium.assertlevel", "[:#(type=AssertionLevel)]",\
 801, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("preprocessor.NGLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.NGLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[6]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.Z[7]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.cp", "Specific heat capacity [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("preprocessor.NGLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("preprocessor.NGLoss.medium.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("preprocessor.NGLoss.d0", "Nominal density [kg/m3|g/cm3]", 802,\
 1, 0.0,1E+100,0.0,0,560)
DeclareParameter("preprocessor.NGLoss.dp0", "Nominal pressure drop [Pa|bar]", 803,\
 100, 0.0,0.0,0.0,0,560)
DeclareParameter("preprocessor.NGLoss.m_flow0", "Nominal mass flow rate [kg/s]",\
 804, 0.0002, 0.0,0.0,0.0,0,560)
DeclareVariable("preprocessor.NGLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("preprocessor.NGLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("preprocessor.NGLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("preprocessor.NGLoss.value", "[1]", "preprocessor.NGLoss.linear", 1,\
 5, 13737, 1024)
DeclareParameter("preprocessor.NGLoss.limroot", "root interpolation region", 805,\
 0.01, 0.0,0.0,0.0,0,2608)
DeclareAlias2("anLoss.feed.p", "Pressure [Pa|bar]", "preprocessor.reformer.p", 1,\
 5, 12075, 4)
DeclareAlias2("anLoss.feed.m_flow", "Mass flow rate into the component [kg/s]", \
"summary.dmFuelStkIn", 1, 5, 11764, 132)
DeclareAlias2("anLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "stack.feed_an.h_outflow", 1, 5, 11659, 4)
DeclareAlias2("anLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[1]", 1, 5, 10426, 4)
DeclareAlias2("anLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[2]", 1, 5, 10427, 4)
DeclareAlias2("anLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[3]", 1, 5, 10428, 4)
DeclareAlias2("anLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[4]", 1, 5, 10429, 4)
DeclareAlias2("anLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[5]", 1, 5, 10430, 4)
DeclareAlias2("anLoss.feed.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[6]", 1, 5, 10431, 4)
EndNonAlias(15)
PreNonAliasNew(16)
StartNonAlias(16)
DeclareAlias2("anLoss.feed.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[7]", 1, 5, 10432, 4)
DeclareAlias2("anLoss.drain.p", "Pressure [Pa|bar]", "stack.feed_Anode.volume[1].fluid.p", 1,\
 1, 212, 4)
DeclareAlias2("anLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "summary.dmFuelStkIn", -1, 5, 11764, 132)
DeclareAlias2("anLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.drain_Reformate.h_outflow", 1, 5, 12760, 4)
DeclareVariable("anLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anLoss.drain.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("anLoss.m_flow", "mass flow through component [kg/s]", \
"summary.dmFuelStkIn", 1, 5, 11764, 0)
DeclareVariable("anLoss.dp", "pressure drop over component [Pa|bar]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("anLoss.d", "density of media upstream [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareVariable("anLoss.T", "temperature of media upstream [K|degC]", 288.15, \
0.0,10000.0,300.0,0,512)
DeclareAlias2("anLoss.medium.p", "Absolute pressure of medium [Pa|bar]", \
"preprocessor.reformer.p", 1, 5, 12075, 0)
DeclareAlias2("anLoss.medium.T", "Temperature of medium [K|degC]", "anLoss.T", 1,\
 5, 13747, 0)
DeclareVariable("anLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("anLoss.medium.d", "Density of medium [kg/m3|g/cm3]", "anLoss.d", 1,\
 5, 13746, 0)
DeclareVariable("anLoss.medium.h", "Specific enthalpy of medium [J/kg]", 0.0, \
-10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u", "Specific internal energy of medium [J/kg]", \
0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("anLoss.medium.assertlevel", "[:#(type=AssertionLevel)]", 806, 2,\
 1.0,2.0,0.0,0,564)
DeclareVariable("anLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("anLoss.medium.state.T", "Temperature of medium [K|degC]", 300, \
0.0,10000.0,300.0,0,512)
DeclareVariable("anLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("anLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anLoss.medium.Z[1]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[2]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[3]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[4]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[5]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[6]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.Z[7]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("anLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.cp", "Specific heat capacity [J/(kg.K)]", 1000.0,\
 0.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("anLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("anLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anLoss.medium.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("anLoss.d0", "Nominal density [kg/m3|g/cm3]", 807, 1, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("anLoss.dp0", "Nominal pressure drop [Pa|bar]", 808, 100, \
0.0,0.0,0.0,0,560)
DeclareParameter("anLoss.m_flow0", "Nominal mass flow rate [kg/s]", 809, 0.001, \
0.0,0.0,0.0,0,560)
DeclareVariable("anLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("anLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("anLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("anLoss.value", "[1]", "anLoss.linear", 1, 5, 13834, 1024)
DeclareParameter("anLoss.limroot", "root interpolation region", 810, 0.01, \
0.0,0.0,0.0,0,2608)
DeclareAlias2("exhaustLoss.feed.p", "Pressure [Pa|bar]", "exhVol.p", 1, 1, 275, 4)
DeclareAlias2("exhaustLoss.feed.m_flow", "Mass flow rate into the component [kg/s]",\
 "exhaustSink.fluidPort.m_flow", 1, 5, 11928, 132)
DeclareAlias2("exhaustLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "exhaustSink.fluidPort.h_outflow", 1, 5, 11929, 4)
DeclareAlias2("exhaustLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[1]", 1, 5, 11935, 4)
DeclareAlias2("exhaustLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[2]", 1, 5, 11936, 4)
DeclareAlias2("exhaustLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[3]", 1, 5, 11937, 4)
DeclareAlias2("exhaustLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[4]", 1, 5, 11938, 4)
DeclareAlias2("exhaustLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[5]", 1, 5, 11939, 4)
DeclareAlias2("exhaustLoss.drain.p", "Pressure [Pa|bar]", "exhaustSink.pressureBoundary.p", 1,\
 5, 11932, 4)
DeclareAlias2("exhaustLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "exhaustSink.fluidPort.m_flow", -1, 5, 11928, 132)
DeclareVariable("exhaustLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("exhaustLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhaustLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhaustLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhaustLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,520)
DeclareVariable("exhaustLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,520)
DeclareAlias2("exhaustLoss.m_flow", "mass flow through component [kg/s]", \
"exhaustSink.fluidPort.m_flow", 1, 5, 11928, 0)
DeclareVariable("exhaustLoss.dp", "pressure drop over component [Pa|bar]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("exhaustLoss.d", "density of media upstream [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareAlias2("exhaustLoss.T", "temperature of media upstream [K|degC]", \
"exhaustLoss.medium.state.T", 1, 5, 13853, 0)
DeclareAlias2("exhaustLoss.medium.p", "Absolute pressure of medium [Pa|bar]", \
"exhVol.p", 1, 1, 275, 0)
DeclareAlias2("exhaustLoss.medium.T", "Temperature of medium [K|degC]", \
"exhaustLoss.medium.state.T", 1, 5, 13853, 0)
DeclareVariable("exhaustLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,512)
DeclareAlias2("exhaustLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("exhaustLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("exhaustLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("exhaustLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("exhaustLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareAlias2("exhaustLoss.medium.d", "Density of medium [kg/m3|g/cm3]", \
"exhaustLoss.d", 1, 5, 13842, 0)
DeclareVariable("exhaustLoss.medium.h", "Specific enthalpy of medium [J/kg]", \
0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("exhaustLoss.medium.assertlevel", "[:#(type=AssertionLevel)]", 811,\
 2, 1.0,2.0,0.0,0,564)
DeclareVariable("exhaustLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("exhaustLoss.medium.state.T", "Temperature of medium [K|degC]", 300,\
 0.0,10000.0,300.0,0,512)
DeclareVariable("exhaustLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("exhaustLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhaustLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhaustLoss.medium.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhaustLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.cp", "Specific heat capacity [J/(kg.K)]", \
1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhaustLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhaustLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhaustLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("exhaustLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhaustLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhaustLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhaustLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhaustLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhaustLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("exhaustLoss.d0", "Nominal density [kg/m3|g/cm3]", 812, 1, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("exhaustLoss.dp0", "Nominal pressure drop [Pa|bar]", 813, 100, \
0.0,0.0,0.0,0,560)
DeclareParameter("exhaustLoss.m_flow0", "Nominal mass flow rate [kg/s]", 814, \
0.01, 0.0,0.0,0.0,0,560)
DeclareVariable("exhaustLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("exhaustLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("exhaustLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("exhaustLoss.value", "[1]", "exhaustLoss.linear", 1, 5, 13904, 1024)
DeclareParameter("exhaustLoss.limroot", "root interpolation region", 815, 0.01, \
0.0,0.0,0.0,0,2608)
DeclareAlias2("exhVol.gas.p", "Absolute pressure of medium [Pa|bar]", "exhVol.p", 1,\
 1, 275, 0)
DeclareAlias2("exhVol.gas.T", "Temperature of medium [K|degC]", "exhVol.T", 1, 1,\
 276, 0)
DeclareVariable("exhVol.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("exhVol.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 271, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("exhVol.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("exhVol.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 272, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("exhVol.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("exhVol.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 273, 0.77, 0.0,1.0,0.1,0,560)
DeclareDerivative("exhVol.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("exhVol.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 274, 0.23, 0.0,1.0,0.1,0,560)
DeclareDerivative("exhVol.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("exhVol.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("exhVol.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("exhVol.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("exhVol.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("exhVol.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareVariable("exhVol.gas.d", "Density of medium [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("exhVol.gas.h", "Specific enthalpy of medium [J/kg]", \
"exhaustLoss.drain.h_outflow", 1, 5, 13835, 0)
DeclareVariable("exhVol.gas.u", "Specific internal energy of medium [J/kg]", 0.0,\
 -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("exhVol.gas.assertlevel", "[:#(type=AssertionLevel)]", 816, 2, \
1.0,2.0,0.0,0,564)
DeclareVariable("exhVol.gas.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("exhVol.gas.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("exhVol.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("exhVol.gas.T_degC", "Temperature of medium in [degC] [degC;]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.gas.Z[1]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.Z[2]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.Z[3]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.Z[4]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.Z[5]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("exhVol.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.cp", "Specific heat capacity [J/(kg.K)]", 1000.0, \
0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("exhVol.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("exhVol.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("exhVol.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhVol.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhVol.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhVol.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhVol.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("exhVol.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("exhVol.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("exhVol.V_tot", "Total volume [m3]", 817, 0.001, 0.0,0.0,0.0,0,560)
DeclareVariable("exhVol.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 5, 1.0,5.0,0.0,0,517)
DeclareVariable("exhVol.pstart", "Pressure start value [Pa|bar]", 0.0, 0.0,\
1E+100,100000.0,0,513)
DeclareParameter("exhVol.Tstart", "Temperature start value [K|degC]", 818, \
773.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("exhVol.Xstart[1]", "Gas composition start value [1]", 819, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("exhVol.Xstart[2]", "Gas composition start value [1]", 820, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("exhVol.Xstart[3]", "Gas composition start value [1]", 821, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("exhVol.Xstart[4]", "Gas composition start value [1]", 822, \
0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("exhVol.Xstart[5]", "Gas composition start value [1]", 823, \
0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("exhVol.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("exhVol.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("exhVol.p", "gas pressure [Pa|bar]", 275, 0.0, 0.0,100000000.0,\
100000.0,0,544)
DeclareDerivative("exhVol.der(p)", "der(gas pressure) [Pa/s]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareState("exhVol.T", "gas temperature [K|degC]", 276, 0.0, 0.0,10000.0,300.0,\
0,544)
DeclareDerivative("exhVol.der(T)", "der(gas temperature) [K/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("exhVol.Xtilde[1]", "Composition state variables [1]", \
"exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("exhVol.Xtilde[2]", "Composition state variables [1]", \
"exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("exhVol.Xtilde[3]", "Composition state variables [1]", \
"exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("exhVol.Xtilde[4]", "Composition state variables [1]", \
"exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("exhVol.Xtilde[5]", "Composition state variables [1]", \
"exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareVariable("exhVol.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("exhVol.E_tot", "Total internal energy [J]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("exhVol.MXi[1]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("exhVol.MXi[2]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("exhVol.MXi[3]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("exhVol.MXi[4]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("exhVol.MXi[5]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareAlias2("exhVol.feed[1].p", "Pressure [Pa|bar]", "exhVol.p", 1, 1, 275, 4)
DeclareAlias2("exhVol.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.drain_NGHeat.m_flow", -1, 5, 13049, 132)
DeclareAlias2("exhVol.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "exhaustLoss.drain.h_outflow", 1, 5, 13835, 4)
DeclareAlias2("exhVol.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 4)
DeclareAlias2("exhVol.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 4)
DeclareAlias2("exhVol.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 4)
DeclareAlias2("exhVol.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 4)
DeclareAlias2("exhVol.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 4)
DeclareAlias2("exhVol.drain[1].p", "Pressure [Pa|bar]", "exhVol.p", 1, 1, 275, 4)
DeclareAlias2("exhVol.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "exhaustSink.fluidPort.m_flow", -1, 5, 11928, 132)
DeclareAlias2("exhVol.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "exhaustLoss.drain.h_outflow", 1, 5, 13835, 4)
DeclareVariable("exhVol.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhVol.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhVol.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhVol.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("exhVol.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("exhVol.q.T", "Port temperature [K|degC]", "exhVol.T", 1, 1, 276, 4)
DeclareVariable("exhVol.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("exhVol.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("exhVol.hi[1]", "specific enthalpy at feed boundary [J/kg]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("exhVol.ho[1]", "specific enthalpy at drain boundary [J/kg]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("exhVol.X_i[1, 1]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_i[1, 2]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_i[1, 3]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_i[1, 4]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_i[1, 5]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_o[1, 1]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_o[1, 2]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_o[1, 3]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_o[1, 4]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.X_o[1, 5]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("exhVol.dM", "Mass residual for balance [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.dE", "Energy residual for balance [W]", 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("exhVol.dMX[1]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.dMX[2]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.dMX[3]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.dMX[4]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.dMX[5]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("exhVol.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("exhVol.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("exhVol.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("exhVol.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("exhVol.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("exhVol.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("exhVol.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("exhVol.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("anVolume.gas.p", "Absolute pressure of medium [Pa|bar]", \
"anVolume.p", 1, 1, 283, 0)
DeclareAlias2("anVolume.gas.T", "Temperature of medium [K|degC]", "anVolume.T", 1,\
 1, 284, 0)
DeclareVariable("anVolume.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("anVolume.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 277, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("anVolume.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 278, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("anVolume.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 279, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("anVolume.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 280, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("anVolume.gas.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 281, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[6])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("anVolume.gas.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 282, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("anVolume.gas.der(X[7])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.d", "Density of medium [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("anVolume.gas.h", "Specific enthalpy of medium [J/kg]", \
"anVolume.feed[1].h_outflow", 1, 5, 14102, 0)
DeclareVariable("anVolume.gas.u", "Specific internal energy of medium [J/kg]", \
0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("anVolume.gas.assertlevel", "[:#(type=AssertionLevel)]", 824, 2,\
 1.0,2.0,0.0,0,564)
DeclareVariable("anVolume.gas.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("anVolume.gas.state.T", "Temperature of medium [K|degC]", 300, \
0.0,10000.0,300.0,0,512)
DeclareVariable("anVolume.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("anVolume.gas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.Z[1]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[2]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[3]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[4]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[5]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[6]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.Z[7]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("anVolume.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.cp", "Specific heat capacity [J/(kg.K)]", 1000.0, \
0.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("anVolume.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("anVolume.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("anVolume.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("anVolume.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.gas.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("anVolume.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("anVolume.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("anVolume.V_tot", "Total volume [m3]", 825, 0.001, 0.0,0.0,0.0,\
0,560)
DeclareVariable("anVolume.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("anVolume.pstart", "Pressure start value [Pa|bar]", 0.0, 0.0,\
1E+100,100000.0,0,513)
DeclareParameter("anVolume.Tstart", "Temperature start value [K|degC]", 826, \
1073.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("anVolume.Xstart[1]", "Gas composition start value [1]", 827, \
0.5, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[2]", "Gas composition start value [1]", 828, \
0.4, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[3]", "Gas composition start value [1]", 829, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[4]", "Gas composition start value [1]", 830, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[5]", "Gas composition start value [1]", 831, \
0.1, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[6]", "Gas composition start value [1]", 832, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("anVolume.Xstart[7]", "Gas composition start value [1]", 833, \
0.0, 0.0,1.0,0.0,0,560)
DeclareVariable("anVolume.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("anVolume.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("anVolume.p", "gas pressure [Pa|bar]", 283, 0.0, 0.0,100000000.0,\
100000.0,0,544)
DeclareDerivative("anVolume.der(p)", "der(gas pressure) [Pa/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareState("anVolume.T", "gas temperature [K|degC]", 284, 0.0, 0.0,10000.0,\
300.0,0,544)
DeclareDerivative("anVolume.der(T)", "der(gas temperature) [K/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("anVolume.Xtilde[1]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[1]", 1, 5, 14103, 0)
DeclareAlias2("anVolume.Xtilde[2]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[2]", 1, 5, 14104, 0)
DeclareAlias2("anVolume.Xtilde[3]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[3]", 1, 5, 14105, 0)
DeclareAlias2("anVolume.Xtilde[4]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[4]", 1, 5, 14106, 0)
DeclareAlias2("anVolume.Xtilde[5]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[5]", 1, 5, 14107, 0)
DeclareAlias2("anVolume.Xtilde[6]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[6]", 1, 5, 14108, 0)
DeclareAlias2("anVolume.Xtilde[7]", "Composition state variables [1]", \
"anVolume.drain[1].X_outflow[7]", 1, 5, 14109, 0)
DeclareVariable("anVolume.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("anVolume.E_tot", "Total internal energy [J]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("anVolume.MXi[1]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[2]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[3]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[4]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[5]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[6]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("anVolume.MXi[7]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareAlias2("anVolume.feed[1].p", "Pressure [Pa|bar]", "anVolume.p", 1, 1, 283,\
 4)
DeclareAlias2("anVolume.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "stack.drain_an.m_flow", -1, 5, 11662, 132)
DeclareVariable("anVolume.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("anVolume.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[1]", 1, 5, 14103, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[2]", 1, 5, 14104, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[3]", 1, 5, 14105, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[4]", 1, 5, 14106, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[5]", 1, 5, 14107, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[6]", 1, 5, 14108, 4)
DeclareAlias2("anVolume.feed[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[7]", 1, 5, 14109, 4)
DeclareAlias2("anVolume.drain[1].p", "Pressure [Pa|bar]", "anVolume.p", 1, 1, 283,\
 4)
DeclareAlias2("anVolume.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", -1, 5, 13053, 132)
DeclareAlias2("anVolume.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "anVolume.feed[1].h_outflow", 1, 5, 14102, 4)
DeclareVariable("anVolume.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("anVolume.drain[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("anVolume.q.T", "Port temperature [K|degC]", "anVolume.T", 1, 1, 284,\
 4)
DeclareVariable("anVolume.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("anVolume.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,2565)
DeclareVariable("anVolume.hi[1]", "specific enthalpy at feed boundary [J/kg]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.ho[1]", "specific enthalpy at drain boundary [J/kg]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.X_i[1, 1]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 2]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 3]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 4]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 5]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 6]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_i[1, 7]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 1]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 2]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 3]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 4]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 5]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 6]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.X_o[1, 7]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,\
0,2560)
DeclareVariable("anVolume.dM", "Mass residual for balance [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("anVolume.dE", "Energy residual for balance [W]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("anVolume.dMX[1]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[2]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[3]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[4]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[5]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[6]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.dMX[7]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[6]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.ddx[7]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("anVolume.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("anVolume.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("cathVolume.gas.p", "Absolute pressure of medium [Pa|bar]", \
"cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("cathVolume.gas.T", "Temperature of medium [K|degC]", \
"cathVolume.T", 1, 1, 290, 0)
DeclareVariable("cathVolume.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("cathVolume.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 285, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("cathVolume.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("cathVolume.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 286, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("cathVolume.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("cathVolume.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 287, 0.77, 0.0,1.0,0.1,0,560)
DeclareDerivative("cathVolume.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("cathVolume.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 288, 0.23, 0.0,1.0,0.1,0,560)
DeclareDerivative("cathVolume.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("cathVolume.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("cathVolume.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("cathVolume.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("cathVolume.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("cathVolume.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("cathVolume.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareVariable("cathVolume.gas.d", "Density of medium [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("cathVolume.gas.h", "Specific enthalpy of medium [J/kg]", \
"cathVolume.feed[1].h_outflow", 1, 5, 14216, 0)
DeclareVariable("cathVolume.gas.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("cathVolume.gas.assertlevel", "[:#(type=AssertionLevel)]", 834,\
 2, 1.0,2.0,0.0,0,564)
DeclareVariable("cathVolume.gas.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("cathVolume.gas.state.T", "Temperature of medium [K|degC]", 300,\
 0.0,10000.0,300.0,0,512)
DeclareVariable("cathVolume.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("cathVolume.gas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("cathVolume.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("cathVolume.gas.Z[1]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.Z[2]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.Z[3]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.Z[4]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.Z[5]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("cathVolume.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.cp", "Specific heat capacity [J/(kg.K)]", 1000.0,\
 0.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("cathVolume.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("cathVolume.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("cathVolume.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("cathVolume.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("cathVolume.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("cathVolume.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("cathVolume.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("cathVolume.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("cathVolume.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("cathVolume.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("cathVolume.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("cathVolume.V_tot", "Total volume [m3]", 835, 0.001, 0.0,0.0,\
0.0,0,560)
DeclareVariable("cathVolume.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 5, 1.0,5.0,0.0,0,517)
DeclareVariable("cathVolume.pstart", "Pressure start value [Pa|bar]", 0.0, 0.0,\
1E+100,100000.0,0,513)
DeclareParameter("cathVolume.Tstart", "Temperature start value [K|degC]", 836, \
1073.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("cathVolume.Xstart[1]", "Gas composition start value [1]", 837,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("cathVolume.Xstart[2]", "Gas composition start value [1]", 838,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("cathVolume.Xstart[3]", "Gas composition start value [1]", 839,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("cathVolume.Xstart[4]", "Gas composition start value [1]", 840,\
 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("cathVolume.Xstart[5]", "Gas composition start value [1]", 841,\
 0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("cathVolume.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("cathVolume.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("cathVolume.p", "gas pressure [Pa|bar]", 289, 0.0, 0.0,100000000.0,\
100000.0,0,544)
DeclareDerivative("cathVolume.der(p)", "der(gas pressure) [Pa/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareState("cathVolume.T", "gas temperature [K|degC]", 290, 0.0, 0.0,10000.0,\
300.0,0,544)
DeclareDerivative("cathVolume.der(T)", "der(gas temperature) [K/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("cathVolume.Xtilde[1]", "Composition state variables [1]", \
"cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("cathVolume.Xtilde[2]", "Composition state variables [1]", \
"cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("cathVolume.Xtilde[3]", "Composition state variables [1]", \
"cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("cathVolume.Xtilde[4]", "Composition state variables [1]", \
"cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("cathVolume.Xtilde[5]", "Composition state variables [1]", \
"cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareVariable("cathVolume.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("cathVolume.E_tot", "Total internal energy [J]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("cathVolume.MXi[1]", "Total component mass [kg]", 0.0, 0.0,\
1E+100,0.0,0,512)
DeclareVariable("cathVolume.MXi[2]", "Total component mass [kg]", 0.0, 0.0,\
1E+100,0.0,0,512)
DeclareVariable("cathVolume.MXi[3]", "Total component mass [kg]", 0.0, 0.0,\
1E+100,0.0,0,512)
DeclareVariable("cathVolume.MXi[4]", "Total component mass [kg]", 0.0, 0.0,\
1E+100,0.0,0,512)
DeclareVariable("cathVolume.MXi[5]", "Total component mass [kg]", 0.0, 0.0,\
1E+100,0.0,0,512)
DeclareAlias2("cathVolume.feed[1].p", "Pressure [Pa|bar]", "cathVolume.p", 1, 1,\
 289, 4)
DeclareAlias2("cathVolume.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "stack.drain_cath.m_flow", -1, 5, 11660, 132)
DeclareVariable("cathVolume.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("cathVolume.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 4)
DeclareAlias2("cathVolume.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 4)
DeclareAlias2("cathVolume.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 4)
DeclareAlias2("cathVolume.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 4)
DeclareAlias2("cathVolume.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 4)
DeclareAlias2("cathVolume.drain[1].p", "Pressure [Pa|bar]", "cathVolume.p", 1, 1,\
 289, 4)
DeclareVariable("cathVolume.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.0,0,776)
DeclareAlias2("cathVolume.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "cathVolume.feed[1].h_outflow", 1, 5, 14216, 4)
DeclareVariable("cathVolume.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("cathVolume.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("cathVolume.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("cathVolume.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,520)
DeclareVariable("cathVolume.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,520)
DeclareAlias2("cathVolume.q.T", "Port temperature [K|degC]", "cathVolume.T", 1, 1,\
 290, 4)
DeclareVariable("cathVolume.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("cathVolume.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("cathVolume.hi[1]", "specific enthalpy at feed boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.ho[1]", "specific enthalpy at drain boundary [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.X_i[1, 1]", "Inlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_i[1, 2]", "Inlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_i[1, 3]", "Inlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_i[1, 4]", "Inlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_i[1, 5]", "Inlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_o[1, 1]", "Outlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_o[1, 2]", "Outlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_o[1, 3]", "Outlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_o[1, 4]", "Outlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.X_o[1, 5]", "Outlet composition [1]", 0.0, 0.0,1.0,\
0.0,0,2560)
DeclareVariable("cathVolume.dM", "Mass residual for balance [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dE", "Energy residual for balance [W]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dMX[1]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dMX[2]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dMX[3]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dMX[4]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.dMX[5]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("cathVolume.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("cathVolume.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("cathVolume.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("cathVolume.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("cathVolume.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("cathVolume.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("AirHeater.n_channels_prim", "Number of parallel channels [1]",\
 842, 1.0, 1.0,1E+100,0.0,0,560)
DeclareParameter("AirHeater.L_prim", "Length of primary channel [m]", 843, 0.1, \
0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.Dhyd_prim", "Hydraulic diameter, single channel [m]",\
 844, 0.01, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.A_prim", "Flow cross section area, single channel [m2]",\
 845, 0.0001, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.V_prim", "Total volume [m3]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.A_heat_prim", "Heat transfer area, single channel [m2]",\
 846, 0.02, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.n_channels_sec", "Number of parallel channels [1]", 847,\
 1.0, 1.0,1E+100,0.0,0,560)
DeclareParameter("AirHeater.L_sec", "Length of secondary channel [m]", 848, 0.1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.Dhyd_sec", "Hydraulic diameter, single channel [m]",\
 849, 0.01, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.A_sec", "Flow cross section area, single channel [m2]",\
 850, 0.0001, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.V_sec", "Total volume [m3]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.A_heat_sec", "Heat transfer area, single channel [m2]",\
 851, 0.02, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.dp_smooth", "Pressure drop smoothing region around zero [Pa|bar]",\
 852, 10, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.mflow_smooth", "Smoothing interval around zero mass flow rate [kg/s]",\
 853, 0.0001, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.from_dp_prim", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 854, true, 0.0,0.0,0.0,0,562)
DeclareVariable("AirHeater.positiveFlow_prim", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("AirHeater.generateEventForReversal_prim", "flag for switching events for flow reversal on/off [:#(type=Boolean)]",\
 855, false, 0.0,0.0,0.0,0,562)
DeclareParameter("AirHeater.from_dp_sec", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 856, true, 0.0,0.0,0.0,0,562)
DeclareVariable("AirHeater.positiveFlow_sec", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("AirHeater.generateEventForReversal_sec", "flag for switching events for flow reversal on/off [:#(type=Boolean)]",\
 857, false, 0.0,0.0,0.0,0,562)
DeclareParameter("AirHeater.dp_prim_start", "Pressure drop start value [Pa|bar]",\
 858, 100000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.T_prim_start", "Temperature inlet start value [K|degC]",\
 859, 313.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("AirHeater.dp_sec_start", "Pressure drop start value [Pa|bar]",\
 860, 100000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.T_sec_start", "Temperature inlet start value [K|degC]",\
 861, 313.15, 0.0,1E+100,300.0,0,560)
DeclareAlias2("AirHeater.drain_prim.p", "Pressure [Pa|bar]", "airMix.p", 1, 1, 311,\
 4)
DeclareAlias2("AirHeater.drain_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", 1, 5, 14217, 132)
DeclareVariable("AirHeater.drain_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("AirHeater.drain_prim.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 4)
DeclareAlias2("AirHeater.drain_prim.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 4)
DeclareAlias2("AirHeater.drain_prim.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 4)
DeclareAlias2("AirHeater.drain_prim.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 4)
DeclareAlias2("AirHeater.drain_prim.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 4)
DeclareAlias2("AirHeater.feed_prim.p", "Pressure [Pa|bar]", "cathVolume.p", 1, 1,\
 289, 4)
DeclareAlias2("AirHeater.feed_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 132)
DeclareVariable("AirHeater.feed_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("AirHeater.feed_prim.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 4)
DeclareAlias2("AirHeater.feed_prim.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 4)
DeclareAlias2("AirHeater.feed_prim.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 4)
DeclareAlias2("AirHeater.feed_prim.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 4)
DeclareAlias2("AirHeater.feed_prim.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 4)
DeclareAlias2("AirHeater.feed_sec.p", "Pressure [Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 4)
DeclareAlias2("AirHeater.feed_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 132)
DeclareVariable("AirHeater.feed_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("AirHeater.feed_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 4)
DeclareAlias2("AirHeater.feed_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 4)
DeclareAlias2("AirHeater.feed_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 4)
DeclareAlias2("AirHeater.feed_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 4)
DeclareAlias2("AirHeater.feed_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 4)
DeclareAlias2("AirHeater.drain_sec.p", "Pressure [Pa|bar]", "stack.feed_Cathode.volume[1].fluid.p", 1,\
 1, 220, 4)
DeclareAlias2("AirHeater.drain_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", -1, 5, 8, 132)
DeclareVariable("AirHeater.drain_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("AirHeater.drain_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("AirHeater.drain_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("AirHeater.drain_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("AirHeater.drain_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("AirHeater.drain_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("AirHeater.summary.Q_flow", "Total heat flow, from wall to primary side [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.summary.m_flow", "Mass flow rate of primary medium [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 0)
DeclareVariable("AirHeater.summary.T_in", "Inlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("AirHeater.summary.T_out", "Outlet temperature, primary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("AirHeater.summary.h_in", "Inlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.h_out", "Outlet specific enthalpy, primary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.summary.p_in", "Inlet pressure, primary side [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.summary.p_out", "Outlet pressure, primary side [Pa|bar]",\
 "airMix.p", 1, 1, 311, 0)
DeclareVariable("AirHeater.summary.dp", "Primary side pressure drop [Pa|bar]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.summary.Q_flow_sec", "Total heat flow, from wall to secondary side [W]",\
 "AirHeater.summary.Q_flow", -1, 5, 14265, 0)
DeclareAlias2("AirHeater.summary.m_flow_sec", "Mass flow rate of secondary medium [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 0)
DeclareVariable("AirHeater.summary.T_sec_in", "Inlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("AirHeater.summary.T_sec_out", "Outlet temperature, secondary side [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("AirHeater.summary.h_sec_in", "Inlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.h_sec_out", "Outlet specific enthalpy, secondary side [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.summary.p_sec_in", "Inlet pressure, secondary side [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 0)
DeclareAlias2("AirHeater.summary.p_sec_out", "Outlet pressure, secondary side [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareVariable("AirHeater.summary.dp_sec", "Secondary side pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.Tpinch_prim_in", "Temperature difference at inflow of primary side [K,]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.Tpinch_prim_out", "Temperature difference at outflow of primary side [K,]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.lmtd", "log-mean temperature difference [K,]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.summary.effectiveness", "Heat exchanger effectiveness [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.A", "Flow cross sectional area (single channel) [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.L", "Flow path length (one segment in case of discretized channels) [m]",\
 "AirHeater.heatExchanger.L_prim", 1, 5, 14327, 0)
DeclareVariable("AirHeater.heatExchanger.friction_prim.Dhyd", "Hydraulic diameter (single channel) [m]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_prim.n_channels", \
"Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.friction_prim.lengthFraction", \
"Fraction of total channel length (used for discretization, all correlations)", 862,\
 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_prim.flowFraction0", \
"Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 863, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_prim.dpFraction0", \
"Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 864, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.friction_prim.F_user", "Calibration factor for pressure loss",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_prim.from_dp", \
"if true, then massflow rate is computed from pressure [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_prim.positiveFlow", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_prim.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_prim.mflow_smooth", \
"Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.friction_prim.useFixedDensity", \
"Assume fixed upstream density in flow model [:#(type=Boolean)]", 865, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("AirHeater.heatExchanger.friction_prim.reference_d", \
"Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 866, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.dp", "Pressure drop over component [Pa|bar]",\
 "AirHeater.summary.dp", 1, 5, 14270, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_inflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 14360, 0)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateA_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateA_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateA_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateA_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateA_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 14360, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "airMix.p", 1, 1, 311, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateB_inflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 14361, 0)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateB_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateB_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateB_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateB_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.stateB_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "airMix.p", 1, 1, 311, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 14361, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_prim.stateA_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareVariable("AirHeater.heatExchanger.friction_prim.dp_from_isothermal", \
"Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_prim.m_flow", "Mass flow rate (single channel) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.dA", "Density from stateA [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_prim.dB", "Density from stateB [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("AirHeater.heatExchanger.friction_prim.d0", "Nominal density [kg/m3|g/cm3]",\
 867, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_prim.dp0", "Nominal pressure drop [Pa|kPa]",\
 868, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_prim.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 869, 0.02, 0.0,0.0,0.0,\
0,560)
DeclareVariable("AirHeater.heatExchanger.friction_sec.A", "Flow cross sectional area (single channel) [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.L", "Flow path length (one segment in case of discretized channels) [m]",\
 "AirHeater.heatExchanger.L_sec", 1, 5, 14333, 0)
DeclareVariable("AirHeater.heatExchanger.friction_sec.Dhyd", "Hydraulic diameter (single channel) [m]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.n_channels", \
"Number of parallel channels (only for correlations parameterized with multi channel properties) [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.friction_sec.lengthFraction", \
"Fraction of total channel length (used for discretization, all correlations)", 870,\
 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_sec.flowFraction0", \
"Fraction of nominal flow through this instance (used when propagating correlation to parallel channels and using nominal flow rate parameterization)",\
 871, 1, 1E-15,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_sec.dpFraction0", \
"Fraction of nominal dp over this instance (used when propagating correlation to channels in series and using nominal dp parameterization)",\
 872, 1, 1E-15,1E+100,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.friction_sec.F_user", "Calibration factor for pressure loss",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.from_dp", "if true, then massflow rate is computed from pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_sec.positiveFlow", \
"Assume positive flow for upstream fluid properties [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_sec.dp_smooth", \
"Pressure drop smoothing region around zero [Pa|bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.mflow_smooth", \
"Massflow smoothing region around [kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.friction_sec.useFixedDensity", \
"Assume fixed upstream density in flow model [:#(type=Boolean)]", 873, false, \
0.0,0.0,0.0,0,562)
DeclareParameter("AirHeater.heatExchanger.friction_sec.reference_d", \
"Assumed upstream density if useFixedDensity = true [kg/m3|g/cm3]", 874, 1, 0.0,\
1E+100,0.0,0,560)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.dp", "Pressure drop over component [Pa|bar]",\
 "AirHeater.summary.dp_sec", 1, 5, 14275, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_inflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 14366, 0)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateA_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateA_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateA_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateA_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateA_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,513)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 14366, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_inflow.p", \
"Absolute pressure of medium [Pa|bar]", "stack.feed_Cathode.volume[1].fluid.p", 1,\
 1, 220, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateB_inflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 14367, 0)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateB_inflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateB_inflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateB_inflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateB_inflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_sec.stateB_inflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", 0.0, 0.0,1.0,\
0.1,0,512)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.p", \
"Absolute pressure of medium [Pa|bar]", "stack.feed_Cathode.volume[1].fluid.p", 1,\
 1, 220, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 14367, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 0)
DeclareAlias2("AirHeater.heatExchanger.friction_sec.stateA_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 0)
DeclareVariable("AirHeater.heatExchanger.friction_sec.dp_from_isothermal", \
"Pressure drop is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.friction_sec.m_flow", "Mass flow rate (single channel) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.friction_sec.dA", "Density from stateA [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.friction_sec.dB", "Density from stateB [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareParameter("AirHeater.heatExchanger.friction_sec.d0", "Nominal density [kg/m3|g/cm3]",\
 875, 0.5, 0.0,1E+100,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_sec.dp0", "Nominal pressure drop [Pa|kPa]",\
 876, 100, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.friction_sec.m_flow0", \
"Nominal mass flow rate (total for all channels) [kg/s]", 877, 0.02, 0.0,0.0,0.0,\
0,560)
DeclareVariable("AirHeater.heatExchanger.CF_Friction", "Calibration factor for pressure drop",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.CF_Friction_sec", "Calibration factor for pressure drop",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.effectivenessStreamChoice", \
"Stream used for the effectiveness calculation [:#(type=Modelon.Types.EffectivenessStreamChoice)]",\
 878, 3, 1.0,3.0,0.0,0,564)
DeclareVariable("AirHeater.heatExchanger.n_channels_prim", "Number of parallel channels [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.L_prim", "Length of primary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.Dhyd_prim", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.A_prim", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.V_prim", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.A_heat_prim", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.n_channels_sec", "Number of parallel channels [1]",\
 1.0, 1.0,1E+100,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.L_sec", "Length of secondary channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.Dhyd_sec", "Hydraulic diameter, single channel [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.A_sec", "Flow cross section area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.V_sec", "Total volume [m3]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.A_heat_sec", "Heat transfer area, single channel [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_prim.m_flow", "Initial mass flow rate [kg/s]",\
 879, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.p_in", "Initial inlet pressure [Pa|bar]",\
 880, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_prim.dp", "Initial pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.init_prim.p_out", "Initial outlet pressure [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_prim.initFromEnthalpy", \
"Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 881, false, 0.0,0.0,0.0,0,562)
DeclareVariable("AirHeater.heatExchanger.init_prim.T_in", "Initial inlet temperature [K|degC]",\
 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_prim.dT", "Initial temperature increase [K,]",\
 882, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_prim.T_out", "Initial outlet temperature [K|degC]",\
 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_prim.h_in", "Initial inlet specific enthalpy [J/kg]",\
 883, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.dh", "Initial specific enthalpy increase [J/kg]",\
 884, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_prim.h_out", "Initial outlet specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_prim.X[1]", "Initial mass fractions [1]",\
 885, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.X[2]", "Initial mass fractions [1]",\
 886, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.X[3]", "Initial mass fractions [1]",\
 887, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.X[4]", "Initial mass fractions [1]",\
 888, 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_prim.X[5]", "Initial mass fractions [1]",\
 889, 0.23, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.m_flow", "Initial mass flow rate [kg/s]",\
 890, 0.1, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.p_in", "Initial inlet pressure [Pa|bar]",\
 891, 101000.0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_sec.dp", "Initial pressure drop [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.init_sec.p_out", "Initial outlet pressure [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_sec.initFromEnthalpy", \
"Initialize from enthalpy if true, otherwise from temperature [:#(type=Boolean)]",\
 892, false, 0.0,0.0,0.0,0,562)
DeclareVariable("AirHeater.heatExchanger.init_sec.T_in", "Initial inlet temperature [K|degC]",\
 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_sec.dT", "Initial temperature increase [K,]",\
 893, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_sec.T_out", "Initial outlet temperature [K|degC]",\
 300, 0.0,10000.0,300.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_sec.h_in", "Initial inlet specific enthalpy [J/kg]",\
 894, 300000.0, 0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.dh", "Initial specific enthalpy increase [J/kg]",\
 895, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.init_sec.h_out", "Initial outlet specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.init_sec.X[1]", "Initial mass fractions [1]",\
 896, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.X[2]", "Initial mass fractions [1]",\
 897, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.X[3]", "Initial mass fractions [1]",\
 898, 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.X[4]", "Initial mass fractions [1]",\
 899, 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("AirHeater.heatExchanger.init_sec.X[5]", "Initial mass fractions [1]",\
 900, 0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.dp_smooth", "Pressure drop smoothing region around zero [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.mflow_smooth", "Smoothing interval around zero mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.from_dp_prim", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.positiveFlow_prim", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.generateEventForReversal_prim", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.from_dp_sec", "if true, then massflow rate is computed from pressure drop [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.positiveFlow_sec", "Assume positive flow for upstream fluid properties [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.generateEventForReversal_sec", \
"flag for switching events for flow reversal on/off [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,515)
DeclareAlias2("AirHeater.heatExchanger.summary.Q_flow", "Total heat flow, from wall to primary side [W]",\
 "AirHeater.summary.Q_flow", 1, 5, 14265, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.m_flow", "Mass flow rate of primary medium [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.T_in", "Inlet temperature, primary side [K|degC]",\
 "AirHeater.summary.T_in", 1, 5, 14266, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.T_out", "Outlet temperature, primary side [K|degC]",\
 "AirHeater.summary.T_out", 1, 5, 14267, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.h_in", "Inlet specific enthalpy, primary side [J/kg]",\
 "AirHeater.summary.h_in", 1, 5, 14268, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.h_out", "Outlet specific enthalpy, primary side [J/kg]",\
 "AirHeater.summary.h_out", 1, 5, 14269, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.p_in", "Inlet pressure, primary side [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.p_out", "Outlet pressure, primary side [Pa|bar]",\
 "airMix.p", 1, 1, 311, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.dp", "Primary side pressure drop [Pa|bar]",\
 "AirHeater.summary.dp", 1, 5, 14270, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.Q_flow_sec", "Total heat flow, from wall to secondary side [W]",\
 "AirHeater.summary.Q_flow", -1, 5, 14265, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.m_flow_sec", "Mass flow rate of secondary medium [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.T_sec_in", "Inlet temperature, secondary side [K|degC]",\
 "AirHeater.summary.T_sec_in", 1, 5, 14271, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.T_sec_out", "Outlet temperature, secondary side [K|degC]",\
 "AirHeater.summary.T_sec_out", 1, 5, 14272, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.h_sec_in", "Inlet specific enthalpy, secondary side [J/kg]",\
 "AirHeater.summary.h_sec_in", 1, 5, 14273, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.h_sec_out", "Outlet specific enthalpy, secondary side [J/kg]",\
 "AirHeater.summary.h_sec_out", 1, 5, 14274, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.p_sec_in", "Inlet pressure, secondary side [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.p_sec_out", "Outlet pressure, secondary side [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.dp_sec", "Secondary side pressure drop [Pa|bar]",\
 "AirHeater.summary.dp_sec", 1, 5, 14275, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.Tpinch_prim_in", "Temperature difference at inflow of primary side [K,]",\
 "AirHeater.summary.Tpinch_prim_in", 1, 5, 14276, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.Tpinch_prim_out", \
"Temperature difference at outflow of primary side [K,]", "AirHeater.summary.Tpinch_prim_out", 1,\
 5, 14277, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.lmtd", "log-mean temperature difference [K,]",\
 "AirHeater.summary.lmtd", 1, 5, 14278, 0)
DeclareAlias2("AirHeater.heatExchanger.summary.effectiveness", "Heat exchanger effectiveness [1]",\
 "AirHeater.summary.effectiveness", 1, 5, 14279, 0)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.p", "Pressure [Pa|bar]", \
"cathVolume.p", 1, 1, 289, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 132)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.feed_prim.h_outflow", 1, 5, 14257, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "airMix.drain[1].X_outflow[1]", 1, 5,\
 15029, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "airMix.drain[1].X_outflow[2]", 1, 5,\
 15030, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "airMix.drain[1].X_outflow[3]", 1, 5,\
 15031, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "airMix.drain[1].X_outflow[4]", 1, 5,\
 15032, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "airMix.drain[1].X_outflow[5]", 1, 5,\
 15033, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.p", "Pressure [Pa|bar]", \
"airMix.p", 1, 1, 311, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", 1, 5, 14217, 132)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.drain_prim.h_outflow", 1, 5, 14256, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "cathVolume.drain[1].X_outflow[1]", 1,\
 5, 14218, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "cathVolume.drain[1].X_outflow[2]", 1,\
 5, 14219, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "cathVolume.drain[1].X_outflow[3]", 1,\
 5, 14220, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "cathVolume.drain[1].X_outflow[4]", 1,\
 5, 14221, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_prim.X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "cathVolume.drain[1].X_outflow[5]", 1,\
 5, 14222, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.p", "Pressure [Pa|bar]", \
"flowCathode.massFlowBoundary.state.p", 1, 5, 29, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 132)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.feed_sec.h_outflow", 1, 5, 14258, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 4)
DeclareAlias2("AirHeater.heatExchanger.portA_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.p", "Pressure [Pa|bar]", \
"stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", -1, 5, 8, 132)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.drain_sec.h_outflow", 1, 5, 14259, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 4)
DeclareAlias2("AirHeater.heatExchanger.portB_sec.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 4)
DeclareAlias2("AirHeater.heatExchanger.m_flow_prim", "Mass flowrate primary side, positive flow from portA_prim to portB_prim [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 0)
DeclareAlias2("AirHeater.heatExchanger.Tprim_in", "Inlet temperature on primary side [K|degC]",\
 "AirHeater.summary.T_in", 1, 5, 14266, 0)
DeclareAlias2("AirHeater.heatExchanger.hprim_in", "Inlet specific enthalpy on primary side [J/kg]",\
 "AirHeater.summary.h_in", 1, 5, 14268, 0)
DeclareAlias2("AirHeater.heatExchanger.pAprim", "Pressure at portA_prim [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.pBprim", "Pressure at portB_prim [Pa|bar]",\
 "airMix.p", 1, 1, 311, 0)
DeclareVariable("AirHeater.heatExchanger.pprim_out", "Primary side outlet pressure [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.heatExchanger.dp_prim", "Pressure drop over the primary side [Pa|bar]",\
 "AirHeater.summary.dp", 1, 5, 14270, 0)
DeclareAlias2("AirHeater.heatExchanger.m_flow_sec", "Mass flowrate secondary side, positive flow from portA_sec to portB_sec [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 0)
DeclareAlias2("AirHeater.heatExchanger.Tsec_in", "Inlet temperature on secondary side [K|degC]",\
 "AirHeater.summary.T_sec_in", 1, 5, 14271, 0)
DeclareAlias2("AirHeater.heatExchanger.hsec_in", "Inlet specific enthalpy on secondary side [J/kg]",\
 "AirHeater.summary.h_sec_in", 1, 5, 14273, 0)
DeclareAlias2("AirHeater.heatExchanger.pAsec", "Pressure at portA_sec [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.pBsec", "Pressure at portB_sec [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 0)
DeclareVariable("AirHeater.heatExchanger.psec_out", "Secondary side outlet pressure [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.heatExchanger.dp_sec", "Pressure drop over the secondary side [Pa|bar]",\
 "AirHeater.summary.dp_sec", 1, 5, 14275, 0)
DeclareVariable("AirHeater.heatExchanger.C", "Ratio of the heat capacity flows [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.heatExchanger.Q_flow", "Total heat flow from primary to secondary side [W]",\
 "AirHeater.summary.Q_flow", -1, 5, 14265, 0)
DeclareAlias2("AirHeater.heatExchanger.eps", "Heat exchanger effectiveness [1]",\
 "AirHeater.summary.effectiveness", 1, 5, 14279, 0)
DeclareVariable("AirHeater.heatExchanger.Q_max", "Maximum transferable heat [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.p", "Absolute pressure of medium [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 1024)
DeclareVariable("AirHeater.heatExchanger.stateAprim_inflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_inflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.p", "Absolute pressure of medium [Pa|bar]",\
 "airMix.p", 1, 1, 311, 1024)
DeclareVariable("AirHeater.heatExchanger.stateBprim_inflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_inflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.p", "Absolute pressure of medium [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 1024)
DeclareVariable("AirHeater.heatExchanger.stateAprim_outflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.p", "Absolute pressure of medium [Pa|bar]",\
 "airMix.p", 1, 1, 311, 1024)
DeclareVariable("AirHeater.heatExchanger.stateBprim_outflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBprim_outflow.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 1024)
DeclareAlias2("AirHeater.heatExchanger.TAprim_in", "Temperature of fluid connected to portA_prim [K|degC]",\
 "AirHeater.heatExchanger.stateAprim_inflow.T", 1, 5, 14360, 1024)
DeclareAlias2("AirHeater.heatExchanger.TBprim_in", "Temperature of fluid connected to portB_prim [K|degC]",\
 "AirHeater.heatExchanger.stateBprim_inflow.T", 1, 5, 14361, 1024)
DeclareAlias2("AirHeater.heatExchanger.TAprim_out", "Temperature of outgoing fluid portA_prim [K|degC]",\
 "AirHeater.heatExchanger.stateAprim_outflow.T", 1, 5, 14362, 1024)
DeclareAlias2("AirHeater.heatExchanger.TBprim_out", "Temperature of outgoing fluid portB_prim [K|degC]",\
 "AirHeater.heatExchanger.stateBprim_outflow.T", 1, 5, 14363, 1024)
DeclareAlias2("AirHeater.heatExchanger.hAprim_in", "Specific enthalpy inflow portA_prim [J/kg]",\
 "cathVolume.feed[1].h_outflow", 1, 5, 14216, 1024)
DeclareAlias2("AirHeater.heatExchanger.hBprim_in", "Specific enthalpy inflow portB_prim [J/kg]",\
 "airMix.feed[1].h_outflow", 1, 5, 15028, 1024)
DeclareAlias2("AirHeater.heatExchanger.hAprim_out", "Specific enthalpy outflow portA_prim [J/kg]",\
 "AirHeater.feed_prim.h_outflow", 1, 5, 14257, 1024)
DeclareAlias2("AirHeater.heatExchanger.hBprim_out", "Specific enthalpy outflow portB_prim [J/kg]",\
 "AirHeater.drain_prim.h_outflow", 1, 5, 14256, 1024)
DeclareVariable("AirHeater.heatExchanger.TAsec_out", "Temperature of outgoing fluid portA_sec [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.TBsec_out", "Temperature of outgoing fluid portB_sec [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.hAsec_in", "Specific enthalpy inflow portA_sec [J/kg]",\
 "flowCathode.fluidPort.h_outflow", 1, 5, 0, 1024)
DeclareAlias2("AirHeater.heatExchanger.hBsec_in", "Specific enthalpy inflow portB_sec [J/kg]",\
 "stack.feed_cath.h_outflow", 1, 5, 11658, 1024)
DeclareAlias2("AirHeater.heatExchanger.hAsec_out", "Specific enthalpy outflow portA_sec [J/kg]",\
 "AirHeater.feed_sec.h_outflow", 1, 5, 14258, 1024)
DeclareAlias2("AirHeater.heatExchanger.hBsec_out", "Specific enthalpy outflow portB_sec [J/kg]",\
 "AirHeater.drain_sec.h_outflow", 1, 5, 14259, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.p", "Absolute pressure of medium [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 1024)
DeclareVariable("AirHeater.heatExchanger.stateAsec_inflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_inflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.p", "Absolute pressure of medium [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 1024)
DeclareVariable("AirHeater.heatExchanger.stateBsec_inflow.T", "Temperature of medium [K|degC]",\
 0.0, 0.0,10000.0,300.0,0,2560)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_inflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.p", "Absolute pressure of medium [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.TAsec_out", 1, 5, 14364, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateAsec_outflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.p", "Absolute pressure of medium [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.TBsec_out", 1, 5, 14365, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 1024)
DeclareAlias2("AirHeater.heatExchanger.stateBsec_outflow.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 1024)
DeclareAlias2("AirHeater.heatExchanger.TAsec_in", "Temperature of fluid connected to portA_sec [K|degC]",\
 "AirHeater.heatExchanger.stateAsec_inflow.T", 1, 5, 14366, 1024)
DeclareAlias2("AirHeater.heatExchanger.TBsec_in", "Temperature of fluid connected to portB_sec [K|degC]",\
 "AirHeater.heatExchanger.stateBsec_inflow.T", 1, 5, 14367, 1024)
DeclareVariable("AirHeater.heatExchanger.hprim_Tsec_in", "Specific enthalpy of primary side fluid at the secondary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.hsec_Tprim_in", "Specific enthalpy of secondary side fluid at the primary side inlet temperature [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAprim_in[1]", "Mass fractions inflow portA_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAprim_in[2]", "Mass fractions inflow portA_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAprim_in[3]", "Mass fractions inflow portA_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAprim_in[4]", "Mass fractions inflow portA_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAprim_in[5]", "Mass fractions inflow portA_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBprim_in[1]", "Mass fractions inflow portB_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBprim_in[2]", "Mass fractions inflow portB_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBprim_in[3]", "Mass fractions inflow portB_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBprim_in[4]", "Mass fractions inflow portB_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBprim_in[5]", "Mass fractions inflow portB_prim [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xprim[1]", "Mass fractions in primary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xprim[2]", "Mass fractions in primary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xprim[3]", "Mass fractions in primary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xprim[4]", "Mass fractions in primary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xprim[5]", "Mass fractions in primary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.XAsec_in[1]", "Mass fractions inflow portA_sec [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("AirHeater.heatExchanger.XAsec_in[2]", "Mass fractions inflow portA_sec [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("AirHeater.heatExchanger.XAsec_in[3]", "Mass fractions inflow portA_sec [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("AirHeater.heatExchanger.XAsec_in[4]", "Mass fractions inflow portA_sec [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("AirHeater.heatExchanger.XAsec_in[5]", "Mass fractions inflow portA_sec [1]",\
 0.0, 0.0,1.0,0.0,0,2561)
DeclareVariable("AirHeater.heatExchanger.XBsec_in[1]", "Mass fractions inflow portB_sec [1]",\
 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBsec_in[2]", "Mass fractions inflow portB_sec [1]",\
 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBsec_in[3]", "Mass fractions inflow portB_sec [1]",\
 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBsec_in[4]", "Mass fractions inflow portB_sec [1]",\
 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("AirHeater.heatExchanger.XBsec_in[5]", "Mass fractions inflow portB_sec [1]",\
 0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xsec[1]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xsec[2]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xsec[3]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xsec[4]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Xsec[5]", "Mass fractions in secondary channel (flow direction dependent) [1]",\
 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.CAprim", "Primary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.CBprim", "Primary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.CAsec", "Secondary heat capacity flow inlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.CBsec", "Secondary heat capacity flow outlet [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Cprim", "Primary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Csec", "Secondary heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Cmin", "Smaller heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Cmax", "Larger heat capacity flow [W/K]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Q_max_prim", "Maximum transferable heat for primary side [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.Q_max_sec", "Maximum transferable heat for secondary side [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("AirHeater.heatExchanger.A_heat", "Wall heat transfer area [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.U", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.NTU", "Number of transfer units [1]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.CF_HeatTransfer", "Calibration factor for heat transfer [1]",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.CF_HeatTransfer_sec", "Calibration factor for heat transfer [1]",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.thickness_wall", "Wall thickness [m|mm]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.heatFlowDynamics", "If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("AirHeater.heatExchanger.order", "Order of filter [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("AirHeater.heatExchanger.riseTime", "Filter rise time [s]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.wall.c", "Specific heat capacity of the material [J/(kg.K)]",\
 500, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.wall.rho", "Density of the material [kg/m3|g/cm3]",\
 7880, 0.0,1E+100,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.wall.lambda", "Thermal conductivity of the material [W/(m.K)]",\
 21, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.A", "Flow cross sectional area [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.L", "Channel length (total length in case of discretized channel) [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.Dhyd", "Hydraulic diameter [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.F_user", "Calibration factor for heat transfer [1]",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.m_flow", "Mass flow rate [kg/s]",\
 "AirHeater.heatExchanger.friction_prim.m_flow", 1, 5, 14299, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.p", "Absolute pressure of medium [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.stateAprim_inflow.T", 1, 5, 14360, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.p", \
"Absolute pressure of medium [Pa|bar]", "cathVolume.p", 1, 1, 289, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAprim_inflow.T", 1,\
 5, 14360, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB_out.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.p", "Absolute pressure of medium [Pa|bar]",\
 "airMix.p", 1, 1, 311, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.stateBprim_inflow.T", 1, 5, 14361, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.p", \
"Absolute pressure of medium [Pa|bar]", "airMix.p", 1, 1, 311, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBprim_inflow.T", 1,\
 5, 14361, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.stateA_out.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.ht_from_isothermal", \
"Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.alphaA", "Heat transfer coefficient, positive flow [W/(m2.K)]",\
 "AirHeater.heatExchanger.htcoeff_prim.alpha", 1, 7, 901, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_prim.alphaB", "Heat transfer coefficient, negative flow [W/(m2.K)]",\
 "AirHeater.heatExchanger.htcoeff_prim.alpha", 1, 7, 901, 0)
DeclareVariable("AirHeater.heatExchanger.htcoeff_prim.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.htcoeff_prim.alpha", "Heat transfer coefficient [W/(m2.K)]",\
 901, 200, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.A", "Flow cross sectional area [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.L", "Channel length (total length in case of discretized channel) [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.Dhyd", "Hydraulic diameter [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.F_user", "Calibration factor for heat transfer [1]",\
 1.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.m_flow", "Mass flow rate [kg/s]",\
 "AirHeater.heatExchanger.friction_sec.m_flow", 1, 5, 14321, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.p", "Absolute pressure of medium [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.stateAsec_inflow.T", 1, 5, 14366, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.p", \
"Absolute pressure of medium [Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateAsec_inflow.T", 1,\
 5, 14366, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB_out.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.p", "Absolute pressure of medium [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.T", "Temperature of medium [K|degC]",\
 "AirHeater.heatExchanger.stateBsec_inflow.T", 1, 5, 14367, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateB.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.p", \
"Absolute pressure of medium [Pa|bar]", "stack.feed_Cathode.volume[1].fluid.p", 1,\
 1, 220, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.T", \
"Temperature of medium [K|degC]", "AirHeater.heatExchanger.stateBsec_inflow.T", 1,\
 5, 14367, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[2]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[3]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[4]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.stateA_out.X[5]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 0)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.ht_from_isothermal", \
"Heat transfer is computed from upstream properties [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,515)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.alphaA", "Heat transfer coefficient, positive flow [W/(m2.K)]",\
 "AirHeater.heatExchanger.htcoeff_sec.alpha", 1, 7, 902, 0)
DeclareAlias2("AirHeater.heatExchanger.htcoeff_sec.alphaB", "Heat transfer coefficient, negative flow [W/(m2.K)]",\
 "AirHeater.heatExchanger.htcoeff_sec.alpha", 1, 7, 902, 0)
DeclareVariable("AirHeater.heatExchanger.htcoeff_sec.CF_length", \
"Calibration factor for pipe length", 1.0, 0.0,0.0,0.0,0,513)
DeclareParameter("AirHeater.heatExchanger.htcoeff_sec.alpha", "Heat transfer coefficient [W/(m2.K)]",\
 902, 200, 0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatExchanger.kc_prim", "Heat transfer coefficient primary side [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("AirHeater.heatExchanger.kc_sec", "Heat transfer coefficient secondary side [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("AirHeater.heatExchanger.kc_wall", "Heat transfer coefficient wall [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("AirHeater.heatExchanger.kc_tot", "Total heat transfer coefficient [W/(m2.K)]",\
 "AirHeater.heatExchanger.U", 1, 5, 14411, 0)
DeclareAlias2("AirHeater.heatExchanger.Q_flow_internal", "Needed to connect to conditional connector [W]",\
 "AirHeater.summary.Q_flow", -1, 5, 14265, 1024)
DeclareParameter("AirHeater.A_heat", "Heat transfer area [m2]", 903, 0.02, \
0.0,0.0,0.0,0,560)
DeclareParameter("AirHeater.thickness_wall", "Wall thickness [m]", 904, 0.002, \
0.0,0.0,0.0,0,560)
DeclareVariable("AirHeater.heatFlowDynamics", "If true, heat flow is filtered through a dynamic filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareParameter("AirHeater.order", "Order of filter [:#(type=Integer)]", 905, 1,\
 0.0,0.0,0.0,0,564)
DeclareParameter("AirHeater.riseTime", "Filter rise time [s]", 906, 10, 0.0,0.0,\
0.0,0,560)
DeclareVariable("metalBurner.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("metalBurner.Mstart", "gas mass start value [kg]", 0.0, 0.0,\
1E+100,0.0,0,513)
DeclareParameter("metalBurner.pstart", "Pressure start value [Pa|bar]", 907, 110000,\
 0.0,0.0,0.0,0,560)
DeclareParameter("metalBurner.Tstart", "Temperature start value [K|degC]", 908, \
573.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("metalBurner.Xstart[1]", "Mass fraction start values [1]", 909,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("metalBurner.Xstart[2]", "Mass fraction start values [1]", 910,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("metalBurner.Xstart[3]", "Mass fraction start values [1]", 911,\
 0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("metalBurner.Xstart[4]", "Mass fraction start values [1]", 912,\
 0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("metalBurner.Xstart[5]", "Mass fraction start values [1]", 913,\
 0.23, 0.0,1.0,0.0,0,560)
DeclareParameter("metalBurner.startBurning", "Start the burner with a burning flame or catalytic process running [:#(type=Boolean)]",\
 914, true, 0.0,0.0,0.0,0,562)
DeclareParameter("metalBurner.V", "Inner volume [m3]", 915, 0.003, 0.0,0.0,0.0,0,560)
DeclareVariable("metalBurner.positiveFlow", "Assume positive flow for upstream properties [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareParameter("metalBurner.lam_eff", "Combustion efficiency at under-stoich cond.",\
 916, 0.9, 0.0,0.0,0.0,0,560)
DeclareAlias2("metalBurner.ignition", "If true, igniter is on [:#(type=Boolean)]",\
 "ignition.k", 1, 7, 952, 65)
DeclareVariable("metalBurner.q.T", "Port temperature [K|degC]", 0.0, 0.0,1E+100,\
300.0,0,520)
DeclareVariable("metalBurner.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareAlias2("metalBurner.summary.burning", "Boolean, true if burning [:#(type=Boolean)]",\
 "metalBurner.burner.burning", 1, 5, 14602, 65)
DeclareAlias2("metalBurner.summary.p", "Internal burner pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 0)
DeclareAlias2("metalBurner.summary.T", "Internal burner temperature [K|degC]", \
"metalBurner.burner.fluegas.T", 1, 1, 291, 0)
DeclareAlias2("metalBurner.summary.Q_combust", "Heat release from combustion [W]",\
 "display_I1.number", 1, 5, 15770, 0)
DeclareAlias2("metalBurner.summary.lambda", "Air-fuel equivalence ratio lambda [1]",\
 "metalBurner.burner.lambda", 1, 5, 14600, 0)
DeclareAlias2("metalBurner.summary.lambda_max_ignite", "Minimum air fuel equivalence ratio lambda for which air-gas mixture will ignite",\
 "metalBurner.burner.lambda_max_ignite", 1, 5, 14603, 0)
DeclareVariable("metalBurner.summary.lambda_extinguish", "Air fuel equivalence ratio lambda for which air-gas mixture will extinguish",\
 150, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.summary.AFR_mass", "Air-fuel ratio (mass-based) [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.summary.FAR_mass", "Fuel-air ratio (mass-based) [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("metalBurner.summary.m_fuel_in", "Inlet fuel flow rate [kg/s]", \
"metalBurner.fuel_in.m_flow", 1, 5, 14730, 0)
DeclareAlias2("metalBurner.summary.m_air_in", "Inlet air flow rate [kg/s]", \
"metalBurner.air_in.m_flow", 1, 5, 14729, 0)
DeclareAlias2("metalBurner.summary.m_exh_out", "Outlet exhaust flow rate [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 0)
DeclareAlias2("metalBurner.summary.X_exhaust[1]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 0)
DeclareAlias2("metalBurner.summary.X_exhaust[2]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 0)
DeclareAlias2("metalBurner.summary.X_exhaust[3]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 0)
DeclareAlias2("metalBurner.summary.X_exhaust[4]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 0)
DeclareAlias2("metalBurner.summary.X_exhaust[5]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 0)
DeclareVariable("metalBurner.S[1, 1]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 2]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 3]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 4]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 5]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 6]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[1, 7]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 1]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 2]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 3]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 4]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 5]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 6]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[2, 7]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 1]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 2]", "Transformation matrix", 2.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 3]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 4]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 5]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 6]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[3, 7]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 1]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 2]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 3]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 4]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 5]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 6]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[4, 7]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[5, 1]", "Transformation matrix", -0.5, 0.0,0.0,\
0.0,0,513)
DeclareVariable("metalBurner.S[5, 2]", "Transformation matrix", -2.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("metalBurner.S[5, 3]", "Transformation matrix", -0.5, 0.0,0.0,\
0.0,0,513)
DeclareVariable("metalBurner.S[5, 4]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[5, 5]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[5, 6]", "Transformation matrix", 0.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.S[5, 7]", "Transformation matrix", 1.0, 0.0,0.0,0.0,\
0,513)
DeclareVariable("metalBurner.wallmaterial.c", "Specific heat capacity of the material [J/(kg.K)]",\
 500, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.wallmaterial.rho", "Density of the material [kg/m3|g/cm3]",\
 7880, 0.0,1E+100,0.0,0,513)
DeclareVariable("metalBurner.wallmaterial.lambda", "Thermal conductivity of the material [W/(m.K)]",\
 21, 0.0,0.0,0.0,0,513)
DeclareParameter("metalBurner.M_w", "Mass of metal wall [kg]", 917, 0.5, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("metalBurner.wallthickness", "Thickness of metal wall [m]", 918,\
 0.02, 0.0,0.0,0.0,0,560)
DeclareParameter("metalBurner.A_heat", "metal heat transfer area [m2]", 919, 0.2,\
 0.0,0.0,0.0,0,560)
DeclareVariable("metalBurner.Cp_w", "[J/(kg.K)]", 500.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.Rw", "heat resistance in metal [K/W]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("metalBurner.burner.Mstart", "gas mass start value [kg]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("metalBurner.burner.pstart", "Pressure start value [Pa|bar]", \
0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.Tstart", "Temperature start value [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("metalBurner.burner.Xstart[1]", "Mass fraction start values [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("metalBurner.burner.Xstart[2]", "Mass fraction start values [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("metalBurner.burner.Xstart[3]", "Mass fraction start values [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("metalBurner.burner.Xstart[4]", "Mass fraction start values [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("metalBurner.burner.Xstart[5]", "Mass fraction start values [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("metalBurner.burner.startBurning", "Start the burner with a burning flame or catalytic process running [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("metalBurner.burner.V", "Inner volume [m3]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.positiveFlow", "Assume positive flow for upstream properties [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("metalBurner.burner.lam_eff", "Combustion efficiency at under-stoich cond.",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.ignition", "If true, igniter is on [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("metalBurner.burner.q.T", "Port temperature [K|degC]", \
"metalBurner.burner.fluegas.T", 1, 1, 291, 4)
DeclareVariable("metalBurner.burner.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,776)
DeclareAlias2("metalBurner.burner.summary.burning", "Boolean, true if burning [:#(type=Boolean)]",\
 "metalBurner.burner.burning", 1, 5, 14602, 65)
DeclareAlias2("metalBurner.burner.summary.p", "Internal burner pressure [Pa|bar]",\
 "metalBurner.burner.fluegas.state.p", 1, 5, 14546, 0)
DeclareAlias2("metalBurner.burner.summary.T", "Internal burner temperature [K|degC]",\
 "metalBurner.burner.fluegas.T", 1, 1, 291, 0)
DeclareAlias2("metalBurner.burner.summary.Q_combust", "Heat release from combustion [W]",\
 "display_I1.number", 1, 5, 15770, 0)
DeclareAlias2("metalBurner.burner.summary.lambda", "Air-fuel equivalence ratio lambda [1]",\
 "metalBurner.burner.lambda", 1, 5, 14600, 0)
DeclareAlias2("metalBurner.burner.summary.lambda_max_ignite", "Minimum air fuel equivalence ratio lambda for which air-gas mixture will ignite",\
 "metalBurner.burner.lambda_max_ignite", 1, 5, 14603, 0)
DeclareVariable("metalBurner.burner.summary.lambda_extinguish", "Air fuel equivalence ratio lambda for which air-gas mixture will extinguish",\
 150.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("metalBurner.burner.summary.AFR_mass", "Air-fuel ratio (mass-based) [1]",\
 "metalBurner.summary.AFR_mass", 1, 5, 14444, 0)
DeclareAlias2("metalBurner.burner.summary.FAR_mass", "Fuel-air ratio (mass-based) [1]",\
 "metalBurner.summary.FAR_mass", 1, 5, 14445, 0)
DeclareAlias2("metalBurner.burner.summary.m_fuel_in", "Inlet fuel flow rate [kg/s]",\
 "metalBurner.fuel_in.m_flow", 1, 5, 14730, 0)
DeclareAlias2("metalBurner.burner.summary.m_air_in", "Inlet air flow rate [kg/s]",\
 "metalBurner.air_in.m_flow", 1, 5, 14729, 0)
DeclareAlias2("metalBurner.burner.summary.m_exh_out", "Outlet exhaust flow rate [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 0)
DeclareAlias2("metalBurner.burner.summary.X_exhaust[1]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 0)
DeclareAlias2("metalBurner.burner.summary.X_exhaust[2]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 0)
DeclareAlias2("metalBurner.burner.summary.X_exhaust[3]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 0)
DeclareAlias2("metalBurner.burner.summary.X_exhaust[4]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 0)
DeclareAlias2("metalBurner.burner.summary.X_exhaust[5]", "Exhaust gas composition [1]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 0)
DeclareVariable("metalBurner.burner.S[1, 1]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 2]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 3]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 4]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 5]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 6]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[1, 7]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 1]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 2]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 3]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 4]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 5]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 6]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[2, 7]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 1]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 2]", "Transformation matrix", 2.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 3]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 4]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 5]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 6]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[3, 7]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 1]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 2]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 3]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 4]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 5]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 6]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[4, 7]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 1]", "Transformation matrix", -0.5, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 2]", "Transformation matrix", -2.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 3]", "Transformation matrix", -0.5, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 4]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 5]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 6]", "Transformation matrix", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.S[5, 7]", "Transformation matrix", 1.0, \
0.0,0.0,0.0,0,513)
DeclareAlias2("metalBurner.burner.Q_combust", "Heat release from combustion [W]",\
 "display_I1.number", 1, 5, 15770, 0)
DeclareAlias2("metalBurner.burner.fluegas.p", "Absolute pressure of medium [Pa|bar]",\
 "metalBurner.burner.fluegas.state.p", 1, 5, 14546, 0)
DeclareState("metalBurner.burner.fluegas.T", "Temperature of medium [K|degC]", 291,\
 0.0, 0.0,10000.0,300.0,0,544)
DeclareDerivative("metalBurner.burner.fluegas.der(T)", "der(Temperature of medium) [K/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("metalBurner.burner.fluegas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 0)
DeclareAlias2("metalBurner.burner.fluegas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 0)
DeclareAlias2("metalBurner.burner.fluegas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 0)
DeclareAlias2("metalBurner.burner.fluegas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 0)
DeclareAlias2("metalBurner.burner.fluegas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 0)
DeclareVariable("metalBurner.burner.fluegas.d", "Density of medium [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,576)
DeclareAlias2("metalBurner.burner.fluegas.h", "Specific enthalpy of medium [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 0)
DeclareVariable("metalBurner.burner.fluegas.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("metalBurner.burner.fluegas.assertlevel", "[:#(type=AssertionLevel)]",\
 920, 2, 1.0,2.0,0.0,0,564)
DeclareVariable("metalBurner.burner.fluegas.state.p", "Absolute pressure of medium [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("metalBurner.burner.fluegas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.Z[1]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.Z[2]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.Z[3]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.Z[4]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.Z[5]", "Component mole fractions [mol/mol]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.fluegas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.cp", "Specific heat capacity [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.fluegas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("metalBurner.burner.fluegas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("metalBurner.burner.M", "Gas total mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareState("metalBurner.burner.MX[1]", "Partial flue gas masses [kg]", 292, \
0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("metalBurner.burner.der(MX[1])", "der(Partial flue gas masses) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("metalBurner.burner.MX[2]", "Partial flue gas masses [kg]", 293, \
0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("metalBurner.burner.der(MX[2])", "der(Partial flue gas masses) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("metalBurner.burner.MX[3]", "Partial flue gas masses [kg]", 294, \
0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("metalBurner.burner.der(MX[3])", "der(Partial flue gas masses) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("metalBurner.burner.MX[4]", "Partial flue gas masses [kg]", 295, \
0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("metalBurner.burner.der(MX[4])", "der(Partial flue gas masses) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("metalBurner.burner.MX[5]", "Partial flue gas masses [kg]", 296, \
0.0, 0.0,1E+100,0.0,0,544)
DeclareDerivative("metalBurner.burner.der(MX[5])", "der(Partial flue gas masses) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("metalBurner.burner.dMX[1]", "Change in Partial flue gas mass [kg/s]",\
 "metalBurner.burner.der(MX[1])", 1, 6, 292, 0)
DeclareAlias2("metalBurner.burner.dMX[2]", "Change in Partial flue gas mass [kg/s]",\
 "metalBurner.burner.der(MX[2])", 1, 6, 293, 0)
DeclareAlias2("metalBurner.burner.dMX[3]", "Change in Partial flue gas mass [kg/s]",\
 "metalBurner.burner.der(MX[3])", 1, 6, 294, 0)
DeclareAlias2("metalBurner.burner.dMX[4]", "Change in Partial flue gas mass [kg/s]",\
 "metalBurner.burner.der(MX[4])", 1, 6, 295, 0)
DeclareAlias2("metalBurner.burner.dMX[5]", "Change in Partial flue gas mass [kg/s]",\
 "metalBurner.burner.der(MX[5])", 1, 6, 296, 0)
DeclareVariable("metalBurner.burner.E", "Gas total energy [J]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("metalBurner.burner.dE", "Change in total energy [W]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("metalBurner.burner.hia", "Air specific enthalpy [J/kg]", \
"airMix.feed[1].h_outflow", 1, 5, 15028, 0)
DeclareAlias2("metalBurner.burner.Xia[1]", "Air mass fractions [kg/kg]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("metalBurner.burner.Xia[2]", "Air mass fractions [kg/kg]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("metalBurner.burner.Xia[3]", "Air mass fractions [kg/kg]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("metalBurner.burner.Xia[4]", "Air mass fractions [kg/kg]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("metalBurner.burner.Xia[5]", "Air mass fractions [kg/kg]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareAlias2("metalBurner.burner.hif", "Fuel specific enthalpy [J/kg]", \
"metalBurner.fuel_in.h_outflow", 1, 5, 14731, 0)
DeclareAlias2("metalBurner.burner.Xif[1]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 0)
DeclareAlias2("metalBurner.burner.Xif[2]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 0)
DeclareAlias2("metalBurner.burner.Xif[3]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 0)
DeclareAlias2("metalBurner.burner.Xif[4]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 0)
DeclareAlias2("metalBurner.burner.Xif[5]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 0)
DeclareAlias2("metalBurner.burner.Xif[6]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 0)
DeclareAlias2("metalBurner.burner.Xif[7]", "Fuel mass fractions [kg/kg]", \
"fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 0)
DeclareAlias2("metalBurner.burner.ho", "Outlet specific enthalpy [J/kg]", \
"metalBurner.gas_out.h_outflow", 1, 5, 14723, 0)
DeclareAlias2("metalBurner.burner.Xio[1]", "Outlet mass fractions [kg/kg]", \
"metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 0)
DeclareAlias2("metalBurner.burner.Xio[2]", "Outlet mass fractions [kg/kg]", \
"metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 0)
DeclareAlias2("metalBurner.burner.Xio[3]", "Outlet mass fractions [kg/kg]", \
"metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 0)
DeclareAlias2("metalBurner.burner.Xio[4]", "Outlet mass fractions [kg/kg]", \
"metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 0)
DeclareAlias2("metalBurner.burner.Xio[5]", "Outlet mass fractions [kg/kg]", \
"metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 0)
DeclareVariable("metalBurner.burner.Tr", "Residence time [s]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("metalBurner.burner.lambda", "Air-fuel ratio lambda [1]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.lambda_extinguish", "Air fuel ratio lambda for which air-gas mixture will extinguish",\
 150.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.burner.burning", "true if burner is on [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,642)
DeclareAlias2("metalBurner.burner.air_in.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("metalBurner.burner.air_in.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", 1, 5, 14729, 132)
DeclareAlias2("metalBurner.burner.air_in.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("metalBurner.burner.air_in.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("metalBurner.burner.air_in.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("metalBurner.burner.air_in.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("metalBurner.burner.air_in.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("metalBurner.burner.air_in.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareAlias2("metalBurner.burner.fuel_in.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("metalBurner.burner.fuel_in.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", 1, 5, 14730, 132)
DeclareAlias2("metalBurner.burner.fuel_in.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("metalBurner.burner.fuel_in.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("metalBurner.burner.gas_out.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("metalBurner.burner.gas_out.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", -1, 5, 13051, 132)
DeclareAlias2("metalBurner.burner.gas_out.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("metalBurner.burner.gas_out.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("metalBurner.burner.gas_out.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("metalBurner.burner.gas_out.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("metalBurner.burner.gas_out.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("metalBurner.burner.gas_out.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareVariable("metalBurner.burner.lambda_max_ignite", "Minimum air fuel ratio lambda for which air-gas mixture will ignite",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.blowOff", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,642)
DeclareVariable("metalBurner.burner.Y[1]", "[mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.Y[2]", "[mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.Y[3]", "[mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.Y[4]", "[mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.Y[5]", "[mol/mol]", 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("metalBurner.burner.m_flow_oxygen", "Oxygen mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.m_flow_oxygen_stoich", "Stoichiometric mass flow rate of oxygen [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.burner.m_flow_ox_fuel", "mass flow rate of oxygen in the fuel [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.S_Burning[1, 1]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 2]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 3]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 4]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 5]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 6]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[1, 7]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 1]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 2]", "Stoichiometric matrix when burning (molar mass based)",\
 2.7433136813182015, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 3]", "Stoichiometric matrix when burning (molar mass based)",\
 1.57120110245947, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 4]", "Stoichiometric matrix when burning (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 5]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 6]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[2, 7]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 1]", "Stoichiometric matrix when burning (molar mass based)",\
 8.936682739051928, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 2]", "Stoichiometric matrix when burning (molar mass based)",\
 2.245949810689882, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 3]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 4]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 5]", "Stoichiometric matrix when burning (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 6]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[3, 7]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 1]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 2]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 3]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 4]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 5]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 6]", "Stoichiometric matrix when burning (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[4, 7]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 1]", "Stoichiometric matrix when burning (molar mass based)",\
 -7.936682739051928, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 2]", "Stoichiometric matrix when burning (molar mass based)",\
 -3.9892634920080834, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 3]", "Stoichiometric matrix when burning (molar mass based)",\
 -0.57120110245947, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 4]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 5]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 6]", "Stoichiometric matrix when burning (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Burning[5, 7]", "Stoichiometric matrix when burning (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 1]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 2]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 3]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 4]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 5]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 6]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[1, 7]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 1]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 2]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 3]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 4]", "Stoichiometric matrix when mixing (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 5]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 6]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[2, 7]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 1]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 2]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 3]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 4]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 5]", "Stoichiometric matrix when mixing (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 6]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[3, 7]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 1]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 2]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 3]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 4]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 5]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 6]", "Stoichiometric matrix when mixing (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[4, 7]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 1]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 2]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 3]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 4]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 5]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 6]", "Stoichiometric matrix when mixing (molar mass based)",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.S_Mixing[5, 7]", "Stoichiometric matrix when mixing (molar mass based)",\
 1.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("metalBurner.burner.air[1]", "substance index vector for some components in air [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("metalBurner.burner.air[2]", "substance index vector for some components in air [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,2565)
DeclareVariable("metalBurner.burner.fuel[1]", "substance index vector for some fuel components [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,2565)
DeclareVariable("metalBurner.burner.fuel_O2[1]", "substance index vector for O2 in the fuel [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,2565)
DeclareVariable("metalBurner.burner.Zia[1]", "Air mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zia[2]", "Air mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zia[3]", "Air mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zia[4]", "Air mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zia[5]", "Air mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[1]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[2]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[3]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[4]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[5]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[6]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.Zif[7]", "fuel mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,2560)
DeclareVariable("metalBurner.burner.z_flow_air[1]", "air molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_air[2]", "air molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_air[3]", "air molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_air[4]", "air molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_air[5]", "air molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[1]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[2]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[3]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[4]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[5]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[6]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.z_flow_fuel[7]", "fuel molar flow [mol/s]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareParameter("metalBurner.burner.lambda_max_ignite_par[1]", "parameters to describe temperature dependence of lambda_max_ignite",\
 921, 5.0, 0.0,0.0,0.0,0,2608)
DeclareParameter("metalBurner.burner.lambda_max_ignite_par[2]", "parameters to describe temperature dependence of lambda_max_ignite",\
 922, 0.0, 0.0,0.0,0.0,0,2608)
DeclareParameter("metalBurner.burner.scale", "time constant for quasi-equilibrium reactions [s]",\
 923, 0.1, 0.0,0.0,0.0,0,2608)
DeclareState("metalBurner.burner.krate_comb", "combustion rate, start at 0 for smooth ignition [1]",\
 297, 0, 0.0,0.0,0.0,0,2608)
DeclareDerivative("metalBurner.burner.der(krate_comb)", "der(combustion rate, start at 0 for smooth ignition) [s-1]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("metalBurner.burner.lambda2", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("metalBurner.burner.X_air_in[1]", "inlet composition of air [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 1024)
DeclareAlias2("metalBurner.burner.X_air_in[2]", "inlet composition of air [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 1024)
DeclareAlias2("metalBurner.burner.X_air_in[3]", "inlet composition of air [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 1024)
DeclareAlias2("metalBurner.burner.X_air_in[4]", "inlet composition of air [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 1024)
DeclareAlias2("metalBurner.burner.X_air_in[5]", "inlet composition of air [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[1]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[2]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[3]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[4]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[5]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[6]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 1024)
DeclareAlias2("metalBurner.burner.X_fuel_in[7]", "inlet composition of fuel [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 1024)
DeclareVariable("metalBurner.wall.n", "Discretization of wall connectors [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareAlias2("metalBurner.wall.qa[1].T", "Port temperature [K|degC]", \
"metalBurner.burner.fluegas.T", 1, 1, 291, 4)
DeclareAlias2("metalBurner.wall.qa[1].Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "metalBurner.burner.q.Q_flow", -1, 5, 14500, 132)
DeclareAlias2("metalBurner.wall.qb[1].T", "Port temperature [K|degC]", \
"metalBurner.q.T", 1, 5, 14441, 4)
DeclareVariable("metalBurner.wall.qb[1].Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("metalBurner.wall.n_channels", "Number of parallel channels considered [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("metalBurner.wall.pars.Cp", "Metal heat capacity [J/(kg.K)]", \
500.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.wall.pars.Rw", "Thermal resistance in metal [K/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("metalBurner.wall.m[1]", "Metal mass [kg]", 0.0, 0.0,1E+100,0.0,\
0,513)
DeclareState("metalBurner.wall.Tm[1]", "Metal mean temperature, direction along n as on side qa [K|degC]",\
 298, 0.0, 0.0,1E+100,300.0,0,544)
DeclareDerivative("metalBurner.wall.der(Tm[1])", "der(Metal mean temperature, direction along n as on side qa) [K/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.wall.Tm_degC[1]", "Metal mean temperature, direction along n as on side qa [degC]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("metalBurner.wall.T0[1]", "Metal start temperature, direction along n as on side qa [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("metalBurner.wall.steadyStateInit", "True if derivatives should be zero at initialization [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("metalBurner.wall.massLessWall", "Removes thermal inertia if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("metalBurner.wall.includeThermalResistance", "Removes thermal resistance if false [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("metalBurner.gas_out.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("metalBurner.gas_out.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", -1, 5, 13051, 132)
DeclareVariable("metalBurner.gas_out.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareVariable("metalBurner.gas_out.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("metalBurner.gas_out.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("metalBurner.gas_out.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("metalBurner.gas_out.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("metalBurner.gas_out.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("metalBurner.air_in.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareVariable("metalBurner.air_in.m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.001,0,776)
DeclareAlias2("metalBurner.air_in.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("metalBurner.air_in.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("metalBurner.air_in.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("metalBurner.air_in.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("metalBurner.air_in.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("metalBurner.air_in.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareAlias2("metalBurner.fuel_in.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareVariable("metalBurner.fuel_in.m_flow", "Mass flow rate into the component [kg/s]",\
 0.0, -100000000.0,100000000.0,0.001,0,776)
DeclareVariable("metalBurner.fuel_in.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("metalBurner.fuel_in.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("metalBurner.fuel_in.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("fuelMix.gas.p", "Absolute pressure of medium [Pa|bar]", \
"fuelMix.p", 1, 1, 305, 0)
DeclareAlias2("fuelMix.gas.T", "Temperature of medium [K|degC]", "fuelMix.T", 1,\
 1, 306, 0)
DeclareVariable("fuelMix.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("fuelMix.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 299, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("fuelMix.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 300, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("fuelMix.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 301, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("fuelMix.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 302, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("fuelMix.gas.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 303, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[6])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("fuelMix.gas.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 304, 0.0, 0.0,1.0,0.1,0,544)
DeclareDerivative("fuelMix.gas.der(X[7])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.d", "Density of medium [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("fuelMix.gas.h", "Specific enthalpy of medium [J/kg]", \
"metalBurner.fuel_in.h_outflow", 1, 5, 14731, 0)
DeclareVariable("fuelMix.gas.u", "Specific internal energy of medium [J/kg]", \
0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("fuelMix.gas.assertlevel", "[:#(type=AssertionLevel)]", 924, 2,\
 1.0,2.0,0.0,0,564)
DeclareVariable("fuelMix.gas.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("fuelMix.gas.state.T", "Temperature of medium [K|degC]", 300, \
0.0,10000.0,300.0,0,512)
DeclareVariable("fuelMix.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("fuelMix.gas.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.Z[1]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[2]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[3]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[4]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[5]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[6]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.Z[7]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("fuelMix.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.cp", "Specific heat capacity [J/(kg.K)]", 1000.0, \
0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelMix.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("fuelMix.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelMix.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.gas.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelMix.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("fuelMix.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("fuelMix.V_tot", "Total volume [m3|l]", 925, 0.001, 0.0,0.0,0.0,\
0,560)
DeclareVariable("fuelMix.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 1, 1.0,5.0,0.0,0,517)
DeclareVariable("fuelMix.pstart", "Pressure start value [Pa|bar]", 0.0, 0.0,\
1E+100,100000.0,0,513)
DeclareParameter("fuelMix.Tstart", "Temperature start value [K|degC]", 926, \
1073.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("fuelMix.Xstart[1]", "Gas composition start value [1]", 927, \
0.5, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[2]", "Gas composition start value [1]", 928, \
0.4, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[3]", "Gas composition start value [1]", 929, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[4]", "Gas composition start value [1]", 930, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[5]", "Gas composition start value [1]", 931, \
0.1, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[6]", "Gas composition start value [1]", 932, \
0.0, 0.0,1.0,0.0,0,560)
DeclareParameter("fuelMix.Xstart[7]", "Gas composition start value [1]", 933, \
0.0, 0.0,1.0,0.0,0,560)
DeclareVariable("fuelMix.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("fuelMix.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("fuelMix.p", "gas pressure [Pa|bar]", 305, 0.0, 0.0,100000000.0,\
100000.0,0,544)
DeclareDerivative("fuelMix.der(p)", "der(gas pressure) [Pa/s]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareState("fuelMix.T", "gas temperature [K|degC]", 306, 0.0, 0.0,10000.0,\
300.0,0,544)
DeclareDerivative("fuelMix.der(T)", "der(gas temperature) [K/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("fuelMix.Xtilde[1]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 0)
DeclareAlias2("fuelMix.Xtilde[2]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 0)
DeclareAlias2("fuelMix.Xtilde[3]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 0)
DeclareAlias2("fuelMix.Xtilde[4]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 0)
DeclareAlias2("fuelMix.Xtilde[5]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 0)
DeclareAlias2("fuelMix.Xtilde[6]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 0)
DeclareAlias2("fuelMix.Xtilde[7]", "Composition state variables [1]", \
"fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 0)
DeclareVariable("fuelMix.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("fuelMix.E_tot", "Total internal energy [J]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelMix.MXi[1]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[2]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[3]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[4]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[5]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[6]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("fuelMix.MXi[7]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareAlias2("fuelMix.feed[1].p", "Pressure [Pa|bar]", "fuelMix.p", 1, 1, 305, 4)
DeclareAlias2("fuelMix.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", 1, 5, 13053, 132)
DeclareAlias2("fuelMix.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("fuelMix.feed[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("fuelMix.drain[1].p", "Pressure [Pa|bar]", "fuelMix.p", 1, 1, 305,\
 4)
DeclareAlias2("fuelMix.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", -1, 5, 14730, 132)
DeclareAlias2("fuelMix.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareVariable("fuelMix.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelMix.drain[1].X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("fuelMix.q.T", "Port temperature [K|degC]", "fuelMix.T", 1, 1, 306,\
 4)
DeclareVariable("fuelMix.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("fuelMix.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,2565)
DeclareVariable("fuelMix.hi[1]", "specific enthalpy at feed boundary [J/kg]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("fuelMix.ho[1]", "specific enthalpy at drain boundary [J/kg]", \
"metalBurner.fuel_in.h_outflow", 1, 5, 14731, 1024)
DeclareVariable("fuelMix.X_i[1, 1]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 2]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 3]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 4]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 5]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 6]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("fuelMix.X_i[1, 7]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareAlias2("fuelMix.X_o[1, 1]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[1]", 1,\
 5, 14826, 1024)
DeclareAlias2("fuelMix.X_o[1, 2]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[2]", 1,\
 5, 14827, 1024)
DeclareAlias2("fuelMix.X_o[1, 3]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[3]", 1,\
 5, 14828, 1024)
DeclareAlias2("fuelMix.X_o[1, 4]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[4]", 1,\
 5, 14829, 1024)
DeclareAlias2("fuelMix.X_o[1, 5]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[5]", 1,\
 5, 14830, 1024)
DeclareAlias2("fuelMix.X_o[1, 6]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[6]", 1,\
 5, 14831, 1024)
DeclareAlias2("fuelMix.X_o[1, 7]", "Outlet composition [1]", "fuelMix.drain[1].X_outflow[7]", 1,\
 5, 14832, 1024)
DeclareVariable("fuelMix.dM", "Mass residual for balance [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("fuelMix.dE", "Energy residual for balance [W]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("fuelMix.dMX[1]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[2]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[3]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[4]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[5]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[6]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.dMX[7]", "Component mass residual [kg/s]", 0.0, \
0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[6]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.ddx[7]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("fuelMix.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("fuelMix.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("fuelLoss.feed.p", "Pressure [Pa|bar]", "fuelMix.p", 1, 1, 305, 4)
DeclareAlias2("fuelLoss.feed.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", 1, 5, 14730, 132)
DeclareAlias2("fuelLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("fuelLoss.feed.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("fuelLoss.drain.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("fuelLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", -1, 5, 14730, 132)
DeclareAlias2("fuelLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareVariable("fuelLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("fuelLoss.drain.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("fuelLoss.m_flow", "mass flow through component [kg/s]", \
"metalBurner.fuel_in.m_flow", 1, 5, 14730, 0)
DeclareVariable("fuelLoss.dp", "pressure drop over component [Pa|bar]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("fuelLoss.d", "density of media upstream [kg/m3|g/cm3]", 1, \
1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.T", "temperature of media upstream [K|degC]", 288.15, \
0.0,10000.0,300.0,0,512)
DeclareAlias2("fuelLoss.medium.p", "Absolute pressure of medium [Pa|bar]", \
"fuelMix.p", 1, 1, 305, 0)
DeclareAlias2("fuelLoss.medium.T", "Temperature of medium [K|degC]", \
"fuelLoss.T", 1, 5, 14871, 0)
DeclareVariable("fuelLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[6]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Xi[7]", "Structurally independent mass fractions [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("fuelLoss.medium.d", "Density of medium [kg/m3|g/cm3]", \
"fuelLoss.d", 1, 5, 14870, 0)
DeclareVariable("fuelLoss.medium.h", "Specific enthalpy of medium [J/kg]", 0.0, \
-10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("fuelLoss.medium.assertlevel", "[:#(type=AssertionLevel)]", 934,\
 2, 1.0,2.0,0.0,0,564)
DeclareVariable("fuelLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("fuelLoss.medium.state.T", "Temperature of medium [K|degC]", 300,\
 0.0,10000.0,300.0,0,512)
DeclareVariable("fuelLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("fuelLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelLoss.medium.Z[1]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[2]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[3]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[4]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[5]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[6]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.Z[7]", "Component mole fractions [mol/mol]", \
0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("fuelLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[6]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.dUZT[7]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[6]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.h_component[7]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[6]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.s_component[7]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[6]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.u_comp[7]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.cp", "Specific heat capacity [J/(kg.K)]", \
1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[6]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.g_formation[7]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("fuelLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("fuelLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("fuelLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[6]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("fuelLoss.medium.ddx[7]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("fuelLoss.d0", "Nominal density [kg/m3|g/cm3]", 935, 1, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("fuelLoss.dp0", "Nominal pressure drop [Pa|bar]", 936, 10000, \
0.0,0.0,0.0,0,560)
DeclareParameter("fuelLoss.m_flow0", "Nominal mass flow rate [kg/s]", 937, 0.001,\
 0.0,0.0,0.0,0,560)
DeclareVariable("fuelLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("fuelLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("fuelLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("fuelLoss.value", "[1]", "fuelLoss.linear", 1, 5, 14958, 1024)
DeclareParameter("fuelLoss.limroot", "root interpolation region", 938, 0.01, \
0.0,0.0,0.0,0,2608)
DeclareAlias2("airMix.gas.p", "Absolute pressure of medium [Pa|bar]", "airMix.p", 1,\
 1, 311, 0)
DeclareAlias2("airMix.gas.T", "Temperature of medium [K|degC]", "airMix.T", 1, 1,\
 312, 0)
DeclareVariable("airMix.gas.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareState("airMix.gas.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 307, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("airMix.gas.der(X[2])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("airMix.gas.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 308, 0.0, 0.0,1.0,0.1,0,560)
DeclareDerivative("airMix.gas.der(X[3])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("airMix.gas.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 309, 0.77, 0.0,1.0,0.1,0,560)
DeclareDerivative("airMix.gas.der(X[4])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("airMix.gas.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 310, 0.23, 0.0,1.0,0.1,0,560)
DeclareDerivative("airMix.gas.der(X[5])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.gas.der(X[1])", "der(Mass fractions (= (component mass)/total mass  m_i/m)) [s-1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("airMix.gas.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("airMix.gas.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("airMix.gas.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("airMix.gas.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("airMix.gas.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareVariable("airMix.gas.d", "Density of medium [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("airMix.gas.h", "Specific enthalpy of medium [J/kg]", \
"airMix.feed[1].h_outflow", 1, 5, 15028, 0)
DeclareVariable("airMix.gas.u", "Specific internal energy of medium [J/kg]", 0.0,\
 -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("airMix.gas.assertlevel", "[:#(type=AssertionLevel)]", 939, 2, \
1.0,2.0,0.0,0,564)
DeclareVariable("airMix.gas.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("airMix.gas.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("airMix.gas.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("airMix.gas.T_degC", "Temperature of medium in [degC] [degC;]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.gas.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.gas.Z[1]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.Z[2]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
EndNonAlias(16)
PreNonAliasNew(17)
StartNonAlias(17)
DeclareVariable("airMix.gas.Z[3]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.Z[4]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.Z[5]", "Component mole fractions [mol/mol]", 0.0, \
0.0,1.0,0.1,0,512)
DeclareVariable("airMix.gas.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.cp", "Specific heat capacity [J/(kg.K)]", 1000.0, \
0.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airMix.gas.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.gas.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.gas.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("airMix.gas.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("airMix.gas.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airMix.gas.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airMix.gas.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airMix.gas.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airMix.gas.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airMix.N_feed", "Number of feed connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("airMix.N_drain", "Number of drain connectors [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("airMix.V_tot", "Total volume [m3]", 940, 0.001, 0.0,0.0,0.0,0,560)
DeclareVariable("airMix.initOpt", "Initialisation option [:#(type=FuelCell.Internal.Choices.InitOptions)]",\
 5, 1.0,5.0,0.0,0,517)
DeclareVariable("airMix.pstart", "Pressure start value [Pa|bar]", 0.0, 0.0,\
1E+100,100000.0,0,513)
DeclareParameter("airMix.Tstart", "Temperature start value [K|degC]", 941, \
973.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("airMix.Xstart[1]", "Gas composition start value [1]", 942, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("airMix.Xstart[2]", "Gas composition start value [1]", 943, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("airMix.Xstart[3]", "Gas composition start value [1]", 944, 0.0,\
 0.0,1.0,0.0,0,560)
DeclareParameter("airMix.Xstart[4]", "Gas composition start value [1]", 945, \
0.77, 0.0,1.0,0.0,0,560)
DeclareParameter("airMix.Xstart[5]", "Gas composition start value [1]", 946, \
0.23, 0.0,1.0,0.0,0,560)
DeclareVariable("airMix.positiveFlow", "Only flow in design direction correct if true [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("airMix.QuasiStatic", "Quasi-static model (static mass and energy balances [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareState("airMix.p", "gas pressure [Pa|bar]", 311, 0.0, 0.0,100000000.0,\
100000.0,0,544)
DeclareDerivative("airMix.der(p)", "der(gas pressure) [Pa/s]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareState("airMix.T", "gas temperature [K|degC]", 312, 0.0, 0.0,10000.0,300.0,\
0,544)
DeclareDerivative("airMix.der(T)", "der(gas temperature) [K/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareAlias2("airMix.Xtilde[1]", "Composition state variables [1]", \
"airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("airMix.Xtilde[2]", "Composition state variables [1]", \
"airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("airMix.Xtilde[3]", "Composition state variables [1]", \
"airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("airMix.Xtilde[4]", "Composition state variables [1]", \
"airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("airMix.Xtilde[5]", "Composition state variables [1]", \
"airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareVariable("airMix.M", "Total mass [kg]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("airMix.E_tot", "Total internal energy [J]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airMix.MXi[1]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("airMix.MXi[2]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("airMix.MXi[3]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("airMix.MXi[4]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareVariable("airMix.MXi[5]", "Total component mass [kg]", 0.0, 0.0,1E+100,\
0.0,0,512)
DeclareAlias2("airMix.feed[1].p", "Pressure [Pa|bar]", "airMix.p", 1, 1, 311, 4)
DeclareAlias2("airMix.feed[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 132)
DeclareVariable("airMix.feed[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("airMix.feed[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 4)
DeclareAlias2("airMix.feed[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 4)
DeclareAlias2("airMix.feed[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 4)
DeclareAlias2("airMix.feed[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 4)
DeclareAlias2("airMix.feed[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 4)
DeclareAlias2("airMix.drain[1].p", "Pressure [Pa|bar]", "airMix.p", 1, 1, 311, 4)
DeclareAlias2("airMix.drain[1].m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", -1, 5, 14729, 132)
DeclareAlias2("airMix.drain[1].h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "airMix.feed[1].h_outflow", 1, 5, 15028, 4)
DeclareVariable("airMix.drain[1].X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airMix.drain[1].X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airMix.drain[1].X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airMix.drain[1].X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,520)
DeclareVariable("airMix.drain[1].X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,520)
DeclareAlias2("airMix.q.T", "Port temperature [K|degC]", "airMix.T", 1, 1, 312, 4)
DeclareVariable("airMix.q.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("airMix.nXi", "number of independent mass fractions [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,2565)
DeclareVariable("airMix.hi[1]", "specific enthalpy at feed boundary [J/kg]", 0.0,\
 0.0,0.0,0.0,0,2560)
DeclareVariable("airMix.ho[1]", "specific enthalpy at drain boundary [J/kg]", \
0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("airMix.X_i[1, 1]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_i[1, 2]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_i[1, 3]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_i[1, 4]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_i[1, 5]", "Inlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_o[1, 1]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_o[1, 2]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_o[1, 3]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_o[1, 4]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.X_o[1, 5]", "Outlet composition [1]", 0.0, 0.0,1.0,0.0,0,2560)
DeclareVariable("airMix.dM", "Mass residual for balance [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.dE", "Energy residual for balance [W]", 0.0, 0.0,0.0,0.0,\
0,2560)
DeclareVariable("airMix.dMX[1]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.dMX[2]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.dMX[3]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.dMX[4]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.dMX[5]", "Component mass residual [kg/s]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareVariable("airMix.ddx[1]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("airMix.ddx[2]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("airMix.ddx[3]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("airMix.ddx[4]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("airMix.ddx[5]", "derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,2560)
DeclareVariable("airMix.duTp", "derivative of inner energy by temperature at constant p [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("airMix.ddTp", "derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("airMix.ddpT", "derivative of density by pressure at constant temperature [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("airLoss.feed.p", "Pressure [Pa|bar]", "airMix.p", 1, 1, 311, 4)
DeclareAlias2("airLoss.feed.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", 1, 5, 14729, 132)
DeclareAlias2("airLoss.feed.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("airLoss.feed.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("airLoss.feed.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("airLoss.feed.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("airLoss.feed.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("airLoss.feed.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareAlias2("airLoss.drain.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("airLoss.drain.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", -1, 5, 14729, 132)
DeclareAlias2("airLoss.drain.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "airMix.feed[1].h_outflow", 1, 5, 15028, 4)
DeclareVariable("airLoss.drain.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airLoss.drain.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airLoss.drain.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airLoss.drain.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareVariable("airLoss.drain.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,520)
DeclareAlias2("airLoss.m_flow", "mass flow through component [kg/s]", \
"metalBurner.air_in.m_flow", 1, 5, 14729, 0)
DeclareVariable("airLoss.dp", "pressure drop over component [Pa|bar]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("airLoss.d", "density of media upstream [kg/m3|g/cm3]", 1, 1E-08,\
100000.0,1.0,0,512)
DeclareAlias2("airLoss.T", "temperature of media upstream [K|degC]", \
"airLoss.medium.state.T", 1, 5, 15080, 0)
DeclareAlias2("airLoss.medium.p", "Absolute pressure of medium [Pa|bar]", \
"airMix.p", 1, 1, 311, 0)
DeclareAlias2("airLoss.medium.T", "Temperature of medium [K|degC]", \
"airLoss.medium.state.T", 1, 5, 15080, 0)
DeclareVariable("airLoss.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,512)
DeclareAlias2("airLoss.medium.Xi[1]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("airLoss.medium.Xi[2]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("airLoss.medium.Xi[3]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("airLoss.medium.Xi[4]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("airLoss.medium.Xi[5]", "Structurally independent mass fractions [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareAlias2("airLoss.medium.d", "Density of medium [kg/m3|g/cm3]", "airLoss.d", 1,\
 5, 15069, 0)
DeclareVariable("airLoss.medium.h", "Specific enthalpy of medium [J/kg]", 0.0, \
-10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.u", "Specific internal energy of medium [J/kg]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.Rg", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.04, 0.001,0.25,0.032,0,512)
DeclareParameter("airLoss.medium.assertlevel", "[:#(type=AssertionLevel)]", 947,\
 2, 1.0,2.0,0.0,0,564)
DeclareVariable("airLoss.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("airLoss.medium.state.T", "Temperature of medium [K|degC]", 300,\
 0.0,10000.0,300.0,0,512)
DeclareVariable("airLoss.medium.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("airLoss.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airLoss.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airLoss.medium.Z[1]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.Z[2]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.Z[3]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.Z[4]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.Z[5]", "Component mole fractions [mol/mol]", 0.0,\
 0.0,1.0,0.1,0,512)
DeclareVariable("airLoss.medium.dUZT[1]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.dUZT[2]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.dUZT[3]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.dUZT[4]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.dUZT[5]", "Derivative of inner energy by moles at constant temperature [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.h_component[1]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.h_component[2]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.h_component[3]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.h_component[4]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.h_component[5]", "Specific enthalpies of the component gases [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.s_component[1]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.s_component[2]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.s_component[3]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.s_component[4]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.s_component[5]", "Component specific entropy [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.u_comp[1]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.u_comp[2]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.u_comp[3]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.u_comp[4]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.u_comp[5]", "Specific internal energy per component [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.cp", "Specific heat capacity [J/(kg.K)]", 1000.0,\
 0.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.g_formation[1]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.g_formation[2]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.g_formation[3]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.g_formation[4]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.g_formation[5]", "Component Gibbs energy of formation, molar base! [J/mol]",\
 0.0, -100000000.0,100000000.0,1000000.0,0,512)
DeclareVariable("airLoss.medium.ddTp", "Derivative of density by temperature at constant pressure [kg/(m3.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airLoss.medium.ddpT", "Derivative of density by pressure at constant temperature [s2/(m2)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("airLoss.medium.dupT", "Derivative of specific inner energy by pressure at constant T, zero for ideal gas [J/(kg.Pa)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("airLoss.medium.duTp", "Derivative of specific inner energy by temperature at constant p [J/(kg.K)]",\
 1000.0, 0.0,1000000.0,1000.0,0,512)
DeclareVariable("airLoss.medium.ddx[1]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airLoss.medium.ddx[2]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airLoss.medium.ddx[3]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airLoss.medium.ddx[4]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareVariable("airLoss.medium.ddx[5]", "Derivative vector of density by change in mass composition [kg/m3|g/cm3]",\
 1, 1E-08,100000.0,1.0,0,512)
DeclareParameter("airLoss.d0", "Nominal density [kg/m3|g/cm3]", 948, 1, 0.0,\
1E+100,0.0,0,560)
DeclareParameter("airLoss.dp0", "Nominal pressure drop [Pa|kPa]", 949, 100, \
0.0,0.0,0.0,0,560)
DeclareParameter("airLoss.m_flow0", "Nominal mass flow rate [kg/s]", 950, 0.02, \
0.0,0.0,0.0,0,560)
DeclareVariable("airLoss.linearLoss", "linear pressure drop if true [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("airLoss.nonlinear", "", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("airLoss.linear", "[1]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareAlias2("airLoss.value", "[1]", "airLoss.linear", 1, 5, 15131, 1024)
DeclareParameter("airLoss.limroot", "root interpolation region", 951, 0.01, \
0.0,0.0,0.0,0,2608)
DeclareParameter("ignition.k", "Constant output value [:#(type=Boolean)]", 952, \
true, 0.0,0.0,0.0,0,562)
DeclareAlias2("ignition.y", "Connector of Boolean output signal [:#(type=Boolean)]",\
 "ignition.k", 1, 7, 952, 65)
DeclareVariable("checkMassBalanceSystem.nS_fuel", "Number of species in the fuel model [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("checkMassBalanceSystem.nS_air", "Number of species in the air model [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("checkMassBalanceSystem.nS_exhaust", "Number of species in the exhaust model [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[1]", "Molar Mass for fuel [kg/mol]",\
 0.00201588, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[2]", "Molar Mass for fuel [kg/mol]",\
 0.01604246, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[3]", "Molar Mass for fuel [kg/mol]",\
 0.0280101, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[4]", "Molar Mass for fuel [kg/mol]",\
 0.0440095, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[5]", "Molar Mass for fuel [kg/mol]",\
 0.01801528, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[6]", "Molar Mass for fuel [kg/mol]",\
 0.0280134, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_fuel[7]", "Molar Mass for fuel [kg/mol]",\
 0.0319988, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_air[1]", "Molar Mass for air [kg/mol]",\
 0.039948, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_air[2]", "Molar Mass for air [kg/mol]",\
 0.0440095, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_air[3]", "Molar Mass for air [kg/mol]",\
 0.01801528, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_air[4]", "Molar Mass for air [kg/mol]",\
 0.0280134, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_air[5]", "Molar Mass for air [kg/mol]",\
 0.0319988, 0.0,1E+100,0.0,0,513)
DeclareParameter("checkMassBalanceSystem.MMX_water[1]", "Molar Mass for water [kg/mol]",\
 953, 0.018015268, 0.0,1E+100,0.0,0,560)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].molarMass",\
 "molar mass [kg/mol]", 0.018015268, 0.001,0.25,0.032,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalTemperature",\
 "critical temperature [K|degC]", 647.096, 0.0,10000.0,300.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalPressure",\
 "critical pressure [Pa|bar]", 22064000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalMolarVolume",\
 "critical molar Volume [m3/mol]", 5.5948037267080745E-05, 1E-06,1000000.0,1.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalDensity",\
 "critical molar Volume [kg/m3|g/cm3]", 1, 1E-08,100000.0,1.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalEnthalpy",\
 "critical specific enthalpy [J/kg]", -1, -10000000000.0,10000000000.0,1000000.0,\
0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].criticalEntropy",\
 "critical specific entropy [J/(kg.K)]", -1, -1000000.0,1000000.0,1000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].acentricFactor",\
 "Pitzer acentric factor", 0.344, 0.0,0.0,0.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].triplePointTemperature",\
 "triple point temperature [K|degC]", 273.16, 0.0,10000.0,300.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].triplePointPressure",\
 "triple point pressure [Pa|bar]", 611.657, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].meltingPoint",\
 "melting point at 101325 Pa [K|degC]", 273.15, 0.0,10000.0,300.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].normalBoilingPoint",\
 "normal boiling point (at 101325 Pa) [K|degC]", 373.124, 0.0,10000.0,300.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].dipoleMoment",\
 "dipole moment of molecule in Debye (1 debye = 3.33564e10-30 C.m) [debye]", 1.8,\
 0.0,3.0,0.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasIdealGasHeatCapacity",\
 "true if ideal gas heat capacity is available [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasCriticalData",\
 "true if critical data are known [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasDipoleMoment",\
 "true if a dipole moment known [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasFundamentalEquation",\
 "true if a fundamental equation [:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasLiquidHeatCapacity",\
 "true if liquid heat capacity is available [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasSolidHeatCapacity",\
 "true if solid heat capacity is available [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasAccurateViscosityData",\
 "true if accurate data for a viscosity function is available [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasAccurateConductivityData",\
 "true if accurate data for thermal conductivity is available [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasVapourPressureCurve",\
 "true if vapour pressure data, e.g. Antoine coefficients are known [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].hasAcentricFactor",\
 "true if Pitzer accentric factor is known [:#(type=Boolean)]", false, 0.0,0.0,\
0.0,0,2563)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].HCRIT0",\
 "Critical specific enthalpy of the fundamental equation [J/kg]", 0.0, \
-10000000000.0,10000000000.0,1000000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].SCRIT0",\
 "Critical specific entropy of the fundamental equation [J/(kg.K)]", 0.0, \
-1000000.0,1000000.0,1000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].deltah",\
 "Difference between specific enthalpy model (h_m) and f.eq. (h_f) (h_m - h_f) [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,2561)
DeclareVariable("_GlobalScope.Modelon.Media.EquationsOfState.Templates.Water.IF97.BaseIF97.waterConstants[1].deltas",\
 "Difference between specific enthalpy model (s_m) and f.eq. (s_f) (s_m - s_f) [J/(kg.K)]",\
 0.0, -1000000.0,1000000.0,1000.0,0,2561)
DeclareVariable("checkMassBalanceSystem.MMX_exhaust[1]", "Molar Mass for exhaust gas [kg/mol]",\
 0.039948, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_exhaust[2]", "Molar Mass for exhaust gas [kg/mol]",\
 0.0440095, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_exhaust[3]", "Molar Mass for exhaust gas [kg/mol]",\
 0.01801528, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_exhaust[4]", "Molar Mass for exhaust gas [kg/mol]",\
 0.0280134, 0.0,1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MMX_exhaust[5]", "Molar Mass for exhaust gas [kg/mol]",\
 0.0319988, 0.0,1E+100,0.0,0,513)
DeclareParameter("checkMassBalanceSystem.nH_fuel[1]", "Number of hydrogen atoms in each species for fuel",\
 954, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[2]", "Number of hydrogen atoms in each species for fuel",\
 955, 4, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[3]", "Number of hydrogen atoms in each species for fuel",\
 956, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[4]", "Number of hydrogen atoms in each species for fuel",\
 957, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[5]", "Number of hydrogen atoms in each species for fuel",\
 958, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[6]", "Number of hydrogen atoms in each species for fuel",\
 959, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_fuel[7]", "Number of hydrogen atoms in each species for fuel",\
 960, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[1]", "Number of carbon atoms in each species for fuel",\
 961, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[2]", "Number of carbon atoms in each species for fuel",\
 962, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[3]", "Number of carbon atoms in each species for fuel",\
 963, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[4]", "Number of carbon atoms in each species for fuel",\
 964, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[5]", "Number of carbon atoms in each species for fuel",\
 965, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[6]", "Number of carbon atoms in each species for fuel",\
 966, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_fuel[7]", "Number of carbon atoms in each species for fuel",\
 967, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[1]", "Number of oxygen atoms in each species for fuel",\
 968, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[2]", "Number of oxygen atoms in each species for fuel",\
 969, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[3]", "Number of oxygen atoms in each species for fuel",\
 970, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[4]", "Number of oxygen atoms in each species for fuel",\
 971, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[5]", "Number of oxygen atoms in each species for fuel",\
 972, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[6]", "Number of oxygen atoms in each species for fuel",\
 973, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_fuel[7]", "Number of oxygen atoms in each species for fuel",\
 974, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_air[1]", "Number of hydrogen atoms in each species for air",\
 975, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_air[2]", "Number of hydrogen atoms in each species for air",\
 976, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_air[3]", "Number of hydrogen atoms in each species for air",\
 977, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_air[4]", "Number of hydrogen atoms in each species for air",\
 978, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_air[5]", "Number of hydrogen atoms in each species for air",\
 979, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_air[1]", "Number of carbon atoms in each species for air",\
 980, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_air[2]", "Number of carbon atoms in each species for air",\
 981, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_air[3]", "Number of carbon atoms in each species for air",\
 982, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_air[4]", "Number of carbon atoms in each species for air",\
 983, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_air[5]", "Number of carbon atoms in each species for air",\
 984, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_air[1]", "Number of oxygen atoms in each species for air",\
 985, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_air[2]", "Number of oxygen atoms in each species for air",\
 986, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_air[3]", "Number of oxygen atoms in each species for air",\
 987, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_air[4]", "Number of oxygen atoms in each species for air",\
 988, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_air[5]", "Number of oxygen atoms in each species for air",\
 989, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_exhaust[1]", "Number of hydrogen atoms in each species for air",\
 990, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_exhaust[2]", "Number of hydrogen atoms in each species for air",\
 991, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_exhaust[3]", "Number of hydrogen atoms in each species for air",\
 992, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_exhaust[4]", "Number of hydrogen atoms in each species for air",\
 993, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nH_exhaust[5]", "Number of hydrogen atoms in each species for air",\
 994, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_exhaust[1]", "Number of carbon atoms in each species for air",\
 995, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_exhaust[2]", "Number of carbon atoms in each species for air",\
 996, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_exhaust[3]", "Number of carbon atoms in each species for air",\
 997, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_exhaust[4]", "Number of carbon atoms in each species for air",\
 998, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nC_exhaust[5]", "Number of carbon atoms in each species for air",\
 999, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_exhaust[1]", "Number of oxygen atoms in each species for air",\
 1000, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_exhaust[2]", "Number of oxygen atoms in each species for air",\
 1001, 2, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_exhaust[3]", "Number of oxygen atoms in each species for air",\
 1002, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_exhaust[4]", "Number of oxygen atoms in each species for air",\
 1003, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("checkMassBalanceSystem.nO_exhaust[5]", "Number of oxygen atoms in each species for air",\
 1004, 2, 0.0,0.0,0.0,0,560)
DeclareVariable("checkMassBalanceSystem.MM_H", "[kg/mol]", 0.00100794, 0.0,\
1E+100,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MM_C", "[kg/mol]", 0.0120107, 0.0,1E+100,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.MM_O", "[kg/mol]", 0.0159994, 0.0,1E+100,\
0.0,0,513)
DeclareAlias2("checkMassBalanceSystem.m_flow_fuel_in", "Mass flow rate at the fuel inlet [kg/s]",\
 "NGSource.m_flow", 1, 7, 559, 0)
DeclareVariable("checkMassBalanceSystem.m_flow_air_in", "Mass flow rate at the air inlet [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("checkMassBalanceSystem.m_flow_water_in", "Mass flow rate at the water inlet [kg/s]",\
 "WaterSource.m_flow", 1, 7, 553, 0)
DeclareVariable("checkMassBalanceSystem.m_flow_in_total", "Total inlet mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("checkMassBalanceSystem.m_flow_exhaust_out", "Mass flow rate at the outlet [kg/s]",\
 "exhaustSink.fluidPort.m_flow", -1, 5, 11928, 0)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[1]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[2]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[3]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[4]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[5]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[6]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_fuel_in[7]", "Composition at the fuel inlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_air_in[1]", "Composition at the air inlet [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.X_air_in[2]", "Composition at the air inlet [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.X_air_in[3]", "Composition at the air inlet [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.X_air_in[4]", "Composition at the air inlet [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.X_air_in[5]", "Composition at the air inlet [1]",\
 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("checkMassBalanceSystem.X_exhaust_out[1]", "Composition at the outlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_exhaust_out[2]", "Composition at the outlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_exhaust_out[3]", "Composition at the outlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_exhaust_out[4]", "Composition at the outlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.X_exhaust_out[5]", "Composition at the outlet [1]",\
 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.change_m_flow", "Change in mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.relativeChange_m_flow", "Relative change of m_flow [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[1]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[2]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[3]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[4]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[5]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[6]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_fuel_in[7]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_air_in[1]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.mX_air_in[2]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.mX_air_in[3]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.mX_air_in[4]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.mX_air_in[5]", "[kg/s]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("checkMassBalanceSystem.mX_exhaust_out[1]", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_exhaust_out[2]", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_exhaust_out[3]", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_exhaust_out[4]", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mX_exhaust_out[5]", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mH_in", "Inlet hydrogen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mC_in", "Inlet carbon atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mO_in", "Inlet oxygen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mH_out", "Outlet hydrogen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mC_out", "Outlet carbon atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.mO_out", "Outlet oxygen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.change_mH", "Change of hydrogen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.change_mC", "Change of carbon atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.change_mO", "Change of oxygen atom mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.relativeChange_mH", "Relative change of hydrogen atom mass flow rate [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.relativeChange_mC", "Relative change of carbon atom mass flow rate [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("checkMassBalanceSystem.relativeChange_mO", "Relative change of oxygen atom mass flow rate [1]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_I.number", "Number to visualize if use_numberPort=false [V]",\
 "current.v", 1, 5, 136, 512)
DeclareParameter("display_I.precision", "Number of decimals to show [:#(type=Integer)]",\
 1005, 1, 0.0,1E+100,0.0,0,564)
DeclareVariable("display_I.use_numberPort", "= true, if numberPort enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_I.showText", "Show number reference as text [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_I.hideBackground", "Hide background [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareAlias2("display_I.showNumber", "[V]", "current.v", 1, 5, 136, 0)
DeclareVariable("display_P.number", "Number to visualize if use_numberPort=false [W]",\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareParameter("display_P.precision", "Number of decimals to show [:#(type=Integer)]",\
 1006, 0, 0.0,1E+100,0.0,0,564)
DeclareVariable("display_P.use_numberPort", "= true, if numberPort enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_P.showText", "Show number reference as text [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_P.hideBackground", "Hide background [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareAlias2("display_P.showNumber", "[W]", "display_P.number", 1, 5, 15235, 0)
DeclareVariable("display_MoleFractions.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions.H2_index", "H2 substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.CH4_index", "CH4 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.CO_index", "CO substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.H2O_index", "H2O substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.N2_index", "N2 substance index [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.O2_index", "O2 substance index [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.nbrOfPresentSubstances", "[:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.compatibleMedium", "[:#(type=Boolean)]", \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions.X_H2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_CH4", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_CO", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[6]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.y[7]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions.visible_massflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions.visible_moleflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions.data.mdot", "[kg/s]", "summary.dmFuelStkIn", 1,\
 5, 11764, 4)
DeclareAlias2("display_MoleFractions.data.temp", "[K|degC]", "gasSensor.state.T", 1,\
 5, 15285, 4)
DeclareAlias2("display_MoleFractions.data.enthalpy", "[J/kg]", "preprocessor.drain_Reformate.h_outflow", 1,\
 5, 12760, 4)
DeclareAlias2("display_MoleFractions.data.pressure", "[Pa|bar]", \
"stack.feed_Anode.volume[1].fluid.p", 1, 1, 212, 4)
DeclareVariable("display_MoleFractions.data.X[1]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[2]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[3]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[4]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[5]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[6]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X[7]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[1]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[2]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[3]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[4]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[5]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[6]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions.data.X_flow[7]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("gasSensor.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("gasSensor.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("gasSensor.portA.p", "Pressure [Pa|bar]", "stack.feed_Anode.volume[1].fluid.p", 1,\
 1, 212, 4)
DeclareAlias2("gasSensor.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "summary.dmFuelStkIn", 1, 5, 11764, 132)
DeclareAlias2("gasSensor.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "stack.feed_an.h_outflow", 1, 5, 11659, 4)
DeclareAlias2("gasSensor.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[1]", 1, 5, 10426, 4)
DeclareAlias2("gasSensor.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[2]", 1, 5, 10427, 4)
DeclareAlias2("gasSensor.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[3]", 1, 5, 10428, 4)
DeclareAlias2("gasSensor.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[4]", 1, 5, 10429, 4)
DeclareAlias2("gasSensor.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[5]", 1, 5, 10430, 4)
DeclareAlias2("gasSensor.portA.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[6]", 1, 5, 10431, 4)
DeclareAlias2("gasSensor.portA.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "stack.feed_Anode.volume[1].port[2].X_outflow[7]", 1, 5, 10432, 4)
DeclareAlias2("gasSensor.portB.p", "Pressure [Pa|bar]", "stack.feed_Anode.volume[1].fluid.p", 1,\
 1, 212, 4)
DeclareAlias2("gasSensor.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "summary.dmFuelStkIn", -1, 5, 11764, 132)
DeclareAlias2("gasSensor.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.drain_Reformate.h_outflow", 1, 5, 12760, 4)
DeclareAlias2("gasSensor.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[1]", 1, 5, 12761, 4)
DeclareAlias2("gasSensor.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[2]", 1, 5, 12762, 4)
DeclareAlias2("gasSensor.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[3]", 1, 5, 12763, 4)
DeclareAlias2("gasSensor.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[4]", 1, 5, 12764, 4)
DeclareAlias2("gasSensor.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[5]", 1, 5, 12765, 4)
DeclareAlias2("gasSensor.portB.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[6]", 1, 5, 12766, 4)
DeclareAlias2("gasSensor.portB.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.drain_Reformate.X_outflow[7]", 1, 5, 12767, 4)
DeclareAlias2("gasSensor.u.mdot", "[kg/s]", "summary.dmFuelStkIn", 1, 5, 11764, 4)
DeclareAlias2("gasSensor.u.temp", "[K|degC]", "gasSensor.state.T", 1, 5, 15285, 4)
DeclareAlias2("gasSensor.u.enthalpy", "[J/kg]", "preprocessor.drain_Reformate.h_outflow", 1,\
 5, 12760, 4)
DeclareAlias2("gasSensor.u.pressure", "[Pa|bar]", "stack.feed_Anode.volume[1].fluid.p", 1,\
 1, 212, 4)
DeclareAlias2("gasSensor.u.X[1]", "Mass Fraction [1]", "display_MoleFractions.data.X[1]", 1,\
 5, 15270, 4)
DeclareAlias2("gasSensor.u.X[2]", "Mass Fraction [1]", "display_MoleFractions.data.X[2]", 1,\
 5, 15271, 4)
DeclareAlias2("gasSensor.u.X[3]", "Mass Fraction [1]", "display_MoleFractions.data.X[3]", 1,\
 5, 15272, 4)
DeclareAlias2("gasSensor.u.X[4]", "Mass Fraction [1]", "display_MoleFractions.data.X[4]", 1,\
 5, 15273, 4)
DeclareAlias2("gasSensor.u.X[5]", "Mass Fraction [1]", "display_MoleFractions.data.X[5]", 1,\
 5, 15274, 4)
DeclareAlias2("gasSensor.u.X[6]", "Mass Fraction [1]", "display_MoleFractions.data.X[6]", 1,\
 5, 15275, 4)
DeclareAlias2("gasSensor.u.X[7]", "Mass Fraction [1]", "display_MoleFractions.data.X[7]", 1,\
 5, 15276, 4)
DeclareAlias2("gasSensor.u.X_flow[1]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[1]", 1,\
 5, 15277, 4)
DeclareAlias2("gasSensor.u.X_flow[2]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[2]", 1,\
 5, 15278, 4)
DeclareAlias2("gasSensor.u.X_flow[3]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[3]", 1,\
 5, 15279, 4)
DeclareAlias2("gasSensor.u.X_flow[4]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[4]", 1,\
 5, 15280, 4)
DeclareAlias2("gasSensor.u.X_flow[5]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[5]", 1,\
 5, 15281, 4)
DeclareAlias2("gasSensor.u.X_flow[6]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[6]", 1,\
 5, 15282, 4)
DeclareAlias2("gasSensor.u.X_flow[7]", "Mass flow [kg/s]", "display_MoleFractions.data.X_flow[7]", 1,\
 5, 15283, 4)
DeclareVariable("display_phTmdot.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot.y.mdot", "[kg/s]", "summary.dmFuelStkIn", 1, 5, 11764,\
 4)
DeclareAlias2("display_phTmdot.y.temp", "[K|degC]", "gasSensor.state.T", 1, 5, 15285,\
 4)
DeclareAlias2("display_phTmdot.y.enthalpy", "[J/kg]", "preprocessor.drain_Reformate.h_outflow", 1,\
 5, 12760, 4)
DeclareAlias2("display_phTmdot.y.pressure", "[Pa|bar]", "stack.feed_Anode.volume[1].fluid.p", 1,\
 1, 212, 4)
DeclareAlias2("display_phTmdot.y.X[1]", "Mass Fraction [1]", "display_MoleFractions.data.X[1]", 1,\
 5, 15270, 4)
DeclareAlias2("display_phTmdot.y.X[2]", "Mass Fraction [1]", "display_MoleFractions.data.X[2]", 1,\
 5, 15271, 4)
DeclareAlias2("display_phTmdot.y.X[3]", "Mass Fraction [1]", "display_MoleFractions.data.X[3]", 1,\
 5, 15272, 4)
DeclareAlias2("display_phTmdot.y.X[4]", "Mass Fraction [1]", "display_MoleFractions.data.X[4]", 1,\
 5, 15273, 4)
DeclareAlias2("display_phTmdot.y.X[5]", "Mass Fraction [1]", "display_MoleFractions.data.X[5]", 1,\
 5, 15274, 4)
DeclareAlias2("display_phTmdot.y.X[6]", "Mass Fraction [1]", "display_MoleFractions.data.X[6]", 1,\
 5, 15275, 4)
DeclareAlias2("display_phTmdot.y.X[7]", "Mass Fraction [1]", "display_MoleFractions.data.X[7]", 1,\
 5, 15276, 4)
DeclareAlias2("display_phTmdot.y.X_flow[1]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[1]", 1, 5, 15277, 4)
DeclareAlias2("display_phTmdot.y.X_flow[2]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[2]", 1, 5, 15278, 4)
DeclareAlias2("display_phTmdot.y.X_flow[3]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[3]", 1, 5, 15279, 4)
DeclareAlias2("display_phTmdot.y.X_flow[4]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[4]", 1, 5, 15280, 4)
DeclareAlias2("display_phTmdot.y.X_flow[5]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[5]", 1, 5, 15281, 4)
DeclareAlias2("display_phTmdot.y.X_flow[6]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[6]", 1, 5, 15282, 4)
DeclareAlias2("display_phTmdot.y.X_flow[7]", "Mass flow [kg/s]", \
"display_MoleFractions.data.X_flow[7]", 1, 5, 15283, 4)
DeclareVariable("display_phTmdot.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1007, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_cathodeIn.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn.Ar_index", "Ar substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.H2O_index", "H2O substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.N2_index", "N2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.O2_index", "O2 substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.nbrOfPresentSubstances", "[:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.compatibleMedium", "[:#(type=Boolean)]", true,\
 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_cathodeIn.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn.X_Ar", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_cathodeIn.visible_massfraction", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn.visible_molefraction", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn.visible_massflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn.visible_moleflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_cathodeIn.data.mdot", "[kg/s]", "flowCathode.massFlowBoundary.m_flow", 1,\
 5, 8, 4)
DeclareVariable("display_cathodeIn.data.temp", "[K|degC]", 300, 0.0,10000.0,\
300.0,0,520)
DeclareAlias2("display_cathodeIn.data.enthalpy", "[J/kg]", "flowCathode.fluidPort.h_outflow", 1,\
 5, 0, 4)
DeclareAlias2("display_cathodeIn.data.pressure", "[Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 4)
DeclareVariable("display_cathodeIn.data.X[1]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("display_cathodeIn.data.X[2]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("display_cathodeIn.data.X[3]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("display_cathodeIn.data.X[4]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("display_cathodeIn.data.X[5]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("display_cathodeIn.data.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn.data.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn.data.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn.data.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn.data.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot_cathodeIn.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("display_phTmdot_cathodeIn.y.mdot", "[kg/s]", "flowCathode.massFlowBoundary.m_flow", 1,\
 5, 8, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.temp", "[K|degC]", "display_cathodeIn.data.temp", 1,\
 5, 15326, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.enthalpy", "[J/kg]", "flowCathode.fluidPort.h_outflow", 1,\
 5, 0, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.pressure", "[Pa|bar]", \
"flowCathode.massFlowBoundary.state.p", 1, 5, 29, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X[1]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[1]", 1, 5, 15327, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X[2]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[2]", 1, 5, 15328, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X[3]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[3]", 1, 5, 15329, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X[4]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[4]", 1, 5, 15330, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X[5]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[5]", 1, 5, 15331, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X_flow[1]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[1]", 1, 5, 15332, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X_flow[2]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[2]", 1, 5, 15333, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X_flow[3]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[3]", 1, 5, 15334, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X_flow[4]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[4]", 1, 5, 15335, 4)
DeclareAlias2("display_phTmdot_cathodeIn.y.X_flow[5]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[5]", 1, 5, 15336, 4)
DeclareVariable("display_phTmdot_cathodeIn.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1008, true, 0.0,0.0,0.0,0,562)
DeclareAlias2("gasSensor_cathodeIn.state.p", "Absolute pressure of medium [Pa|bar]",\
 "flowCathode.massFlowBoundary.state.p", 1, 5, 29, 0)
DeclareAlias2("gasSensor_cathodeIn.state.T", "Temperature of medium [K|degC]", \
"display_cathodeIn.data.temp", 1, 5, 15326, 0)
DeclareAlias2("gasSensor_cathodeIn.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 0)
DeclareAlias2("gasSensor_cathodeIn.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 0)
DeclareAlias2("gasSensor_cathodeIn.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 0)
DeclareAlias2("gasSensor_cathodeIn.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 0)
DeclareAlias2("gasSensor_cathodeIn.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 0)
DeclareAlias2("gasSensor_cathodeIn.portA.p", "Pressure [Pa|bar]", \
"flowCathode.massFlowBoundary.state.p", 1, 5, 29, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 132)
DeclareAlias2("gasSensor_cathodeIn.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.feed_sec.h_outflow", 1, 5, 14258, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 4)
DeclareAlias2("gasSensor_cathodeIn.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.p", "Pressure [Pa|bar]", \
"flowCathode.massFlowBoundary.state.p", 1, 5, 29, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", -1, 5, 8, 132)
DeclareAlias2("gasSensor_cathodeIn.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "flowCathode.fluidPort.h_outflow", 1, 5, 0, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 4)
DeclareAlias2("gasSensor_cathodeIn.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 4)
DeclareAlias2("gasSensor_cathodeIn.u.mdot", "[kg/s]", "flowCathode.massFlowBoundary.m_flow", 1,\
 5, 8, 4)
DeclareAlias2("gasSensor_cathodeIn.u.temp", "[K|degC]", "display_cathodeIn.data.temp", 1,\
 5, 15326, 4)
DeclareAlias2("gasSensor_cathodeIn.u.enthalpy", "[J/kg]", "flowCathode.fluidPort.h_outflow", 1,\
 5, 0, 4)
DeclareAlias2("gasSensor_cathodeIn.u.pressure", "[Pa|bar]", "flowCathode.massFlowBoundary.state.p", 1,\
 5, 29, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X[1]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[1]", 1, 5, 15327, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X[2]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[2]", 1, 5, 15328, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X[3]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[3]", 1, 5, 15329, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X[4]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[4]", 1, 5, 15330, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X[5]", "Mass Fraction [1]", \
"display_cathodeIn.data.X[5]", 1, 5, 15331, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X_flow[1]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[1]", 1, 5, 15332, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X_flow[2]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[2]", 1, 5, 15333, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X_flow[3]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[3]", 1, 5, 15334, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X_flow[4]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[4]", 1, 5, 15335, 4)
DeclareAlias2("gasSensor_cathodeIn.u.X_flow[5]", "Mass flow [kg/s]", \
"display_cathodeIn.data.X_flow[5]", 1, 5, 15336, 4)
DeclareVariable("display_phTmdot1.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot1.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot1.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot1.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot1.y.mdot", "[kg/s]", "metalBurner.fuel_in.m_flow", 1,\
 5, 14730, 4)
DeclareAlias2("display_phTmdot1.y.temp", "[K|degC]", "gasSensor1.state.T", 1, 5,\
 15361, 4)
DeclareAlias2("display_phTmdot1.y.enthalpy", "[J/kg]", "metalBurner.fuel_in.h_outflow", 1,\
 5, 14731, 4)
DeclareAlias2("display_phTmdot1.y.pressure", "[Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("display_phTmdot1.y.X[1]", "Mass Fraction [1]", "display_MoleFractions5.data.X[1]", 1,\
 5, 15763, 4)
DeclareAlias2("display_phTmdot1.y.X[2]", "Mass Fraction [1]", "display_MoleFractions5.data.X[2]", 1,\
 5, 15764, 4)
DeclareAlias2("display_phTmdot1.y.X[3]", "Mass Fraction [1]", "display_MoleFractions5.data.X[3]", 1,\
 5, 15765, 4)
DeclareAlias2("display_phTmdot1.y.X[4]", "Mass Fraction [1]", "display_MoleFractions5.data.X[4]", 1,\
 5, 15766, 4)
DeclareAlias2("display_phTmdot1.y.X[5]", "Mass Fraction [1]", "display_MoleFractions5.data.X[5]", 1,\
 5, 15767, 4)
DeclareAlias2("display_phTmdot1.y.X[6]", "Mass Fraction [1]", "display_MoleFractions5.data.X[6]", 1,\
 5, 15768, 4)
DeclareAlias2("display_phTmdot1.y.X[7]", "Mass Fraction [1]", "display_MoleFractions5.data.X[7]", 1,\
 5, 15769, 4)
DeclareVariable("display_phTmdot1.y.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[6]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.y.X_flow[7]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot1.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot1.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot1.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot1.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot1.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1009, true, 0.0,0.0,0.0,0,562)
DeclareVariable("gasSensor1.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("gasSensor1.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("gasSensor1.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor1.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("gasSensor1.portA.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("gasSensor1.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", 1, 5, 14730, 132)
DeclareAlias2("gasSensor1.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("gasSensor1.portA.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("gasSensor1.portB.p", "Pressure [Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("gasSensor1.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.fuel_in.m_flow", -1, 5, 14730, 132)
DeclareAlias2("gasSensor1.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.fuel_in.h_outflow", 1, 5, 14731, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("gasSensor1.portB.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("gasSensor1.u.mdot", "[kg/s]", "metalBurner.fuel_in.m_flow", 1, 5,\
 14730, 4)
DeclareAlias2("gasSensor1.u.temp", "[K|degC]", "gasSensor1.state.T", 1, 5, 15361,\
 4)
DeclareAlias2("gasSensor1.u.enthalpy", "[J/kg]", "metalBurner.fuel_in.h_outflow", 1,\
 5, 14731, 4)
DeclareAlias2("gasSensor1.u.pressure", "[Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("gasSensor1.u.X[1]", "Mass Fraction [1]", "display_MoleFractions5.data.X[1]", 1,\
 5, 15763, 4)
DeclareAlias2("gasSensor1.u.X[2]", "Mass Fraction [1]", "display_MoleFractions5.data.X[2]", 1,\
 5, 15764, 4)
DeclareAlias2("gasSensor1.u.X[3]", "Mass Fraction [1]", "display_MoleFractions5.data.X[3]", 1,\
 5, 15765, 4)
DeclareAlias2("gasSensor1.u.X[4]", "Mass Fraction [1]", "display_MoleFractions5.data.X[4]", 1,\
 5, 15766, 4)
DeclareAlias2("gasSensor1.u.X[5]", "Mass Fraction [1]", "display_MoleFractions5.data.X[5]", 1,\
 5, 15767, 4)
DeclareAlias2("gasSensor1.u.X[6]", "Mass Fraction [1]", "display_MoleFractions5.data.X[6]", 1,\
 5, 15768, 4)
DeclareAlias2("gasSensor1.u.X[7]", "Mass Fraction [1]", "display_MoleFractions5.data.X[7]", 1,\
 5, 15769, 4)
DeclareAlias2("gasSensor1.u.X_flow[1]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[1]", 1,\
 5, 15349, 4)
DeclareAlias2("gasSensor1.u.X_flow[2]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[2]", 1,\
 5, 15350, 4)
DeclareAlias2("gasSensor1.u.X_flow[3]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[3]", 1,\
 5, 15351, 4)
DeclareAlias2("gasSensor1.u.X_flow[4]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[4]", 1,\
 5, 15352, 4)
DeclareAlias2("gasSensor1.u.X_flow[5]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[5]", 1,\
 5, 15353, 4)
DeclareAlias2("gasSensor1.u.X_flow[6]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[6]", 1,\
 5, 15354, 4)
DeclareAlias2("gasSensor1.u.X_flow[7]", "Mass flow [kg/s]", "display_phTmdot1.y.X_flow[7]", 1,\
 5, 15355, 4)
DeclareAlias2("gasSensor_cathodeIn1.state.p", "Absolute pressure of medium [Pa|bar]",\
 "metalBurner.burner.fluegas.state.p", 1, 5, 14546, 0)
DeclareVariable("gasSensor_cathodeIn1.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareAlias2("gasSensor_cathodeIn1.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 0)
DeclareAlias2("gasSensor_cathodeIn1.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 0)
DeclareAlias2("gasSensor_cathodeIn1.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 0)
DeclareAlias2("gasSensor_cathodeIn1.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 0)
DeclareAlias2("gasSensor_cathodeIn1.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 0)
DeclareAlias2("gasSensor_cathodeIn1.portA.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", 1, 5, 14729, 132)
DeclareAlias2("gasSensor_cathodeIn1.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("gasSensor_cathodeIn1.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "metalBurner.air_in.m_flow", -1, 5, 14729, 132)
DeclareAlias2("gasSensor_cathodeIn1.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "airMix.feed[1].h_outflow", 1, 5, 15028, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 4)
DeclareAlias2("gasSensor_cathodeIn1.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 4)
DeclareAlias2("gasSensor_cathodeIn1.u.mdot", "[kg/s]", "metalBurner.air_in.m_flow", 1,\
 5, 14729, 4)
DeclareAlias2("gasSensor_cathodeIn1.u.temp", "[K|degC]", "gasSensor_cathodeIn1.state.T", 1,\
 5, 15369, 4)
DeclareAlias2("gasSensor_cathodeIn1.u.enthalpy", "[J/kg]", "airMix.feed[1].h_outflow", 1,\
 5, 15028, 4)
DeclareAlias2("gasSensor_cathodeIn1.u.pressure", "[Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareVariable("gasSensor_cathodeIn1.u.X[1]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X[2]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X[3]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X[4]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X[5]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn1.u.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot_cathodeIn1.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn1.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn1.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn1.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot_cathodeIn1.y.mdot", "[kg/s]", "metalBurner.air_in.m_flow", 1,\
 5, 14729, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.temp", "[K|degC]", "gasSensor_cathodeIn1.state.T", 1,\
 5, 15369, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.enthalpy", "[J/kg]", \
"airMix.feed[1].h_outflow", 1, 5, 15028, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.pressure", "[Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X[1]", "Mass Fraction [1]", \
"gasSensor_cathodeIn1.u.X[1]", 1, 5, 15370, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X[2]", "Mass Fraction [1]", \
"gasSensor_cathodeIn1.u.X[2]", 1, 5, 15371, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X[3]", "Mass Fraction [1]", \
"gasSensor_cathodeIn1.u.X[3]", 1, 5, 15372, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X[4]", "Mass Fraction [1]", \
"gasSensor_cathodeIn1.u.X[4]", 1, 5, 15373, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X[5]", "Mass Fraction [1]", \
"gasSensor_cathodeIn1.u.X[5]", 1, 5, 15374, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn1.u.X_flow[1]", 1, 5, 15375, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn1.u.X_flow[2]", 1, 5, 15376, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn1.u.X_flow[3]", 1, 5, 15377, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn1.u.X_flow[4]", 1, 5, 15378, 4)
DeclareAlias2("display_phTmdot_cathodeIn1.y.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn1.u.X_flow[5]", 1, 5, 15379, 4)
DeclareVariable("display_phTmdot_cathodeIn1.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn1.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn1.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn1.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn1.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1010, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_cathodeIn2.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn2.Ar_index", "Ar substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.H2O_index", "H2O substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.N2_index", "N2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.O2_index", "O2 substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.nbrOfPresentSubstances", "[:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.compatibleMedium", "[:#(type=Boolean)]", \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn2.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn2.X_Ar", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn2.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_cathodeIn2.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn2.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn2.visible_massflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn2.visible_moleflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_cathodeIn2.data.mdot", "[kg/s]", "preprocessor.feed_SteamHeat.m_flow", 1,\
 5, 13051, 4)
DeclareVariable("display_cathodeIn2.data.temp", "[K|degC]", 300, 0.0,10000.0,\
300.0,0,520)
DeclareAlias2("display_cathodeIn2.data.enthalpy", "[J/kg]", "metalBurner.gas_out.h_outflow", 1,\
 5, 14723, 4)
DeclareAlias2("display_cathodeIn2.data.pressure", "[Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareVariable("display_cathodeIn2.data.X[1]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X[2]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X[3]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X[4]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X[5]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn2.data.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareAlias2("gasSensor_cathodeIn2.state.p", "Absolute pressure of medium [Pa|bar]",\
 "metalBurner.burner.fluegas.state.p", 1, 5, 14546, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.T", "Temperature of medium [K|degC]", \
"display_cathodeIn2.data.temp", 1, 5, 15413, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 0)
DeclareAlias2("gasSensor_cathodeIn2.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 0)
DeclareAlias2("gasSensor_cathodeIn2.portA.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", 1, 5, 13051, 132)
DeclareAlias2("gasSensor_cathodeIn2.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_SteamHeat.h_outflow", 1, 5, 13052, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[1]", 1, 5, 13244, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[2]", 1, 5, 13245, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[3]", 1, 5, 13246, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[4]", 1, 5, 13247, 4)
DeclareAlias2("gasSensor_cathodeIn2.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.FuelHeater.heatExchanger.XAprim_in[5]", 1, 5, 13248, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.p", "Pressure [Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_SteamHeat.m_flow", -1, 5, 13051, 132)
DeclareAlias2("gasSensor_cathodeIn2.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[1]", 1, 5, 14724, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[2]", 1, 5, 14725, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[3]", 1, 5, 14726, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[4]", 1, 5, 14727, 4)
DeclareAlias2("gasSensor_cathodeIn2.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "metalBurner.gas_out.X_outflow[5]", 1, 5, 14728, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.mdot", "[kg/s]", "preprocessor.feed_SteamHeat.m_flow", 1,\
 5, 13051, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.temp", "[K|degC]", "display_cathodeIn2.data.temp", 1,\
 5, 15413, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.enthalpy", "[J/kg]", "metalBurner.gas_out.h_outflow", 1,\
 5, 14723, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.pressure", "[Pa|bar]", "metalBurner.burner.fluegas.state.p", 1,\
 5, 14546, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X[1]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[1]", 1, 5, 15414, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X[2]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[2]", 1, 5, 15415, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X[3]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[3]", 1, 5, 15416, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X[4]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[4]", 1, 5, 15417, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X[5]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[5]", 1, 5, 15418, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X_flow[1]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[1]", 1, 5, 15419, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X_flow[2]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[2]", 1, 5, 15420, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X_flow[3]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[3]", 1, 5, 15421, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X_flow[4]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[4]", 1, 5, 15422, 4)
DeclareAlias2("gasSensor_cathodeIn2.u.X_flow[5]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[5]", 1, 5, 15423, 4)
DeclareVariable("display_phTmdot_cathodeIn2.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn2.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn2.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn2.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot_cathodeIn2.y.mdot", "[kg/s]", "preprocessor.feed_SteamHeat.m_flow", 1,\
 5, 13051, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.temp", "[K|degC]", "display_cathodeIn2.data.temp", 1,\
 5, 15413, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.enthalpy", "[J/kg]", \
"metalBurner.gas_out.h_outflow", 1, 5, 14723, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.pressure", "[Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X[1]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[1]", 1, 5, 15414, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X[2]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[2]", 1, 5, 15415, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X[3]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[3]", 1, 5, 15416, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X[4]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[4]", 1, 5, 15417, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X[5]", "Mass Fraction [1]", \
"display_cathodeIn2.data.X[5]", 1, 5, 15418, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X_flow[1]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[1]", 1, 5, 15419, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X_flow[2]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[2]", 1, 5, 15420, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X_flow[3]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[3]", 1, 5, 15421, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X_flow[4]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[4]", 1, 5, 15422, 4)
DeclareAlias2("display_phTmdot_cathodeIn2.y.X_flow[5]", "Mass flow [kg/s]", \
"display_cathodeIn2.data.X_flow[5]", 1, 5, 15423, 4)
DeclareVariable("display_phTmdot_cathodeIn2.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn2.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn2.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn2.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn2.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1011, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_MoleFractions2.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions2.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.H2_index", "H2 substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.CH4_index", "CH4 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.CO_index", "CO substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.H2O_index", "H2O substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.N2_index", "N2 substance index [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.O2_index", "O2 substance index [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.nbrOfPresentSubstances", \
"[:#(type=Integer)]", 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.compatibleMedium", "[:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions2.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions2.X_H2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_CH4", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_CO", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[6]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.y[7]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions2.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions2.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions2.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions2.visible_massflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions2.visible_moleflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions2.data.mdot", "[kg/s]", "preprocessor.feed_ATRHeat.m_flow", 1,\
 5, 13053, 4)
DeclareAlias2("display_MoleFractions2.data.temp", "[K|degC]", "gasSensor2.state.T", 1,\
 5, 15486, 4)
DeclareAlias2("display_MoleFractions2.data.enthalpy", "[J/kg]", "anVolume.feed[1].h_outflow", 1,\
 5, 14102, 4)
DeclareAlias2("display_MoleFractions2.data.pressure", "[Pa|bar]", "anVolume.p", 1,\
 1, 283, 4)
DeclareVariable("display_MoleFractions2.data.X[1]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[2]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[3]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[4]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[5]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[6]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X[7]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[1]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[2]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[3]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[4]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[5]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[6]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions2.data.X_flow[7]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot2.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot2.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot2.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot2.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot2.y.mdot", "[kg/s]", "preprocessor.feed_ATRHeat.m_flow", 1,\
 5, 13053, 4)
DeclareAlias2("display_phTmdot2.y.temp", "[K|degC]", "gasSensor2.state.T", 1, 5,\
 15486, 4)
DeclareAlias2("display_phTmdot2.y.enthalpy", "[J/kg]", "anVolume.feed[1].h_outflow", 1,\
 5, 14102, 4)
DeclareAlias2("display_phTmdot2.y.pressure", "[Pa|bar]", "anVolume.p", 1, 1, 283,\
 4)
DeclareAlias2("display_phTmdot2.y.X[1]", "Mass Fraction [1]", "display_MoleFractions2.data.X[1]", 1,\
 5, 15463, 4)
DeclareAlias2("display_phTmdot2.y.X[2]", "Mass Fraction [1]", "display_MoleFractions2.data.X[2]", 1,\
 5, 15464, 4)
DeclareAlias2("display_phTmdot2.y.X[3]", "Mass Fraction [1]", "display_MoleFractions2.data.X[3]", 1,\
 5, 15465, 4)
DeclareAlias2("display_phTmdot2.y.X[4]", "Mass Fraction [1]", "display_MoleFractions2.data.X[4]", 1,\
 5, 15466, 4)
DeclareAlias2("display_phTmdot2.y.X[5]", "Mass Fraction [1]", "display_MoleFractions2.data.X[5]", 1,\
 5, 15467, 4)
DeclareAlias2("display_phTmdot2.y.X[6]", "Mass Fraction [1]", "display_MoleFractions2.data.X[6]", 1,\
 5, 15468, 4)
DeclareAlias2("display_phTmdot2.y.X[7]", "Mass Fraction [1]", "display_MoleFractions2.data.X[7]", 1,\
 5, 15469, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[1]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[1]", 1, 5, 15470, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[2]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[2]", 1, 5, 15471, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[3]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[3]", 1, 5, 15472, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[4]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[4]", 1, 5, 15473, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[5]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[5]", 1, 5, 15474, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[6]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[6]", 1, 5, 15475, 4)
DeclareAlias2("display_phTmdot2.y.X_flow[7]", "Mass flow [kg/s]", \
"display_MoleFractions2.data.X_flow[7]", 1, 5, 15476, 4)
DeclareVariable("display_phTmdot2.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot2.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot2.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot2.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot2.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1012, true, 0.0,0.0,0.0,0,562)
DeclareVariable("gasSensor2.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("gasSensor2.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("gasSensor2.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor2.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("gasSensor2.portA.p", "Pressure [Pa|bar]", "anVolume.p", 1, 1, 283,\
 4)
DeclareAlias2("gasSensor2.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", 1, 5, 13053, 132)
DeclareAlias2("gasSensor2.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_ATRHeat.h_outflow", 1, 5, 13054, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[1]", 1, 5, 14826, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[2]", 1, 5, 14827, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[3]", 1, 5, 14828, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[4]", 1, 5, 14829, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[5]", 1, 5, 14830, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[6]", 1, 5, 14831, 4)
DeclareAlias2("gasSensor2.portA.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "fuelMix.drain[1].X_outflow[7]", 1, 5, 14832, 4)
DeclareAlias2("gasSensor2.portB.p", "Pressure [Pa|bar]", "anVolume.p", 1, 1, 283,\
 4)
DeclareAlias2("gasSensor2.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "preprocessor.feed_ATRHeat.m_flow", -1, 5, 13053, 132)
DeclareAlias2("gasSensor2.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "anVolume.feed[1].h_outflow", 1, 5, 14102, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[1]", 1, 5, 14103, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[2]", 1, 5, 14104, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[3]", 1, 5, 14105, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[4]", 1, 5, 14106, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[5]", 1, 5, 14107, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[6]", 1, 5, 14108, 4)
DeclareAlias2("gasSensor2.portB.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "anVolume.drain[1].X_outflow[7]", 1, 5, 14109, 4)
DeclareAlias2("gasSensor2.u.mdot", "[kg/s]", "preprocessor.feed_ATRHeat.m_flow", 1,\
 5, 13053, 4)
DeclareAlias2("gasSensor2.u.temp", "[K|degC]", "gasSensor2.state.T", 1, 5, 15486,\
 4)
DeclareAlias2("gasSensor2.u.enthalpy", "[J/kg]", "anVolume.feed[1].h_outflow", 1,\
 5, 14102, 4)
DeclareAlias2("gasSensor2.u.pressure", "[Pa|bar]", "anVolume.p", 1, 1, 283, 4)
DeclareAlias2("gasSensor2.u.X[1]", "Mass Fraction [1]", "display_MoleFractions2.data.X[1]", 1,\
 5, 15463, 4)
DeclareAlias2("gasSensor2.u.X[2]", "Mass Fraction [1]", "display_MoleFractions2.data.X[2]", 1,\
 5, 15464, 4)
DeclareAlias2("gasSensor2.u.X[3]", "Mass Fraction [1]", "display_MoleFractions2.data.X[3]", 1,\
 5, 15465, 4)
DeclareAlias2("gasSensor2.u.X[4]", "Mass Fraction [1]", "display_MoleFractions2.data.X[4]", 1,\
 5, 15466, 4)
DeclareAlias2("gasSensor2.u.X[5]", "Mass Fraction [1]", "display_MoleFractions2.data.X[5]", 1,\
 5, 15467, 4)
DeclareAlias2("gasSensor2.u.X[6]", "Mass Fraction [1]", "display_MoleFractions2.data.X[6]", 1,\
 5, 15468, 4)
DeclareAlias2("gasSensor2.u.X[7]", "Mass Fraction [1]", "display_MoleFractions2.data.X[7]", 1,\
 5, 15469, 4)
DeclareAlias2("gasSensor2.u.X_flow[1]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[1]", 1,\
 5, 15470, 4)
DeclareAlias2("gasSensor2.u.X_flow[2]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[2]", 1,\
 5, 15471, 4)
DeclareAlias2("gasSensor2.u.X_flow[3]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[3]", 1,\
 5, 15472, 4)
DeclareAlias2("gasSensor2.u.X_flow[4]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[4]", 1,\
 5, 15473, 4)
DeclareAlias2("gasSensor2.u.X_flow[5]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[5]", 1,\
 5, 15474, 4)
DeclareAlias2("gasSensor2.u.X_flow[6]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[6]", 1,\
 5, 15475, 4)
DeclareAlias2("gasSensor2.u.X_flow[7]", "Mass flow [kg/s]", "display_MoleFractions2.data.X_flow[7]", 1,\
 5, 15476, 4)
DeclareAlias2("gasSensor_cathodeIn3.state.p", "Absolute pressure of medium [Pa|bar]",\
 "cathVolume.p", 1, 1, 289, 0)
DeclareVariable("gasSensor_cathodeIn3.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareAlias2("gasSensor_cathodeIn3.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 0)
DeclareAlias2("gasSensor_cathodeIn3.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 0)
DeclareAlias2("gasSensor_cathodeIn3.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 0)
DeclareAlias2("gasSensor_cathodeIn3.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 0)
DeclareAlias2("gasSensor_cathodeIn3.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 0)
DeclareAlias2("gasSensor_cathodeIn3.portA.p", "Pressure [Pa|bar]", \
"cathVolume.p", 1, 1, 289, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", -1, 5, 14217, 132)
DeclareAlias2("gasSensor_cathodeIn3.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.feed_prim.h_outflow", 1, 5, 14257, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[1]", 1, 5, 15029, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[2]", 1, 5, 15030, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[3]", 1, 5, 15031, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[4]", 1, 5, 15032, 4)
DeclareAlias2("gasSensor_cathodeIn3.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "airMix.drain[1].X_outflow[5]", 1, 5, 15033, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.p", "Pressure [Pa|bar]", \
"cathVolume.p", 1, 1, 289, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "cathVolume.drain[1].m_flow", 1, 5, 14217, 132)
DeclareAlias2("gasSensor_cathodeIn3.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "cathVolume.feed[1].h_outflow", 1, 5, 14216, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[1]", 1, 5, 14218, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[2]", 1, 5, 14219, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[3]", 1, 5, 14220, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[4]", 1, 5, 14221, 4)
DeclareAlias2("gasSensor_cathodeIn3.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "cathVolume.drain[1].X_outflow[5]", 1, 5, 14222, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.mdot", "[kg/s]", "cathVolume.drain[1].m_flow", -1,\
 5, 14217, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.temp", "[K|degC]", "gasSensor_cathodeIn3.state.T", 1,\
 5, 15494, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.enthalpy", "[J/kg]", "cathVolume.feed[1].h_outflow", 1,\
 5, 14216, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.pressure", "[Pa|bar]", "cathVolume.p", 1, 1,\
 289, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.X[1]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[1]", 1, 5, 15525, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.X[2]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[2]", 1, 5, 15526, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.X[3]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[3]", 1, 5, 15527, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.X[4]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[4]", 1, 5, 15528, 4)
DeclareAlias2("gasSensor_cathodeIn3.u.X[5]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[5]", 1, 5, 15529, 4)
DeclareVariable("gasSensor_cathodeIn3.u.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn3.u.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn3.u.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn3.u.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn3.u.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_cathodeIn3.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn3.Ar_index", "Ar substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.H2O_index", "H2O substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.N2_index", "N2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.O2_index", "O2 substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.nbrOfPresentSubstances", "[:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.compatibleMedium", "[:#(type=Boolean)]", \
true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn3.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_cathodeIn3.X_Ar", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_cathodeIn3.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_cathodeIn3.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn3.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn3.visible_massflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_cathodeIn3.visible_moleflow", "[:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_cathodeIn3.data.mdot", "[kg/s]", "cathVolume.drain[1].m_flow", -1,\
 5, 14217, 4)
DeclareAlias2("display_cathodeIn3.data.temp", "[K|degC]", "gasSensor_cathodeIn3.state.T", 1,\
 5, 15494, 4)
DeclareAlias2("display_cathodeIn3.data.enthalpy", "[J/kg]", "cathVolume.feed[1].h_outflow", 1,\
 5, 14216, 4)
DeclareAlias2("display_cathodeIn3.data.pressure", "[Pa|bar]", "cathVolume.p", 1,\
 1, 289, 4)
DeclareVariable("display_cathodeIn3.data.X[1]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn3.data.X[2]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn3.data.X[3]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn3.data.X[4]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareVariable("display_cathodeIn3.data.X[5]", "Mass Fraction [1]", 0.0, 0.0,\
1.0,0.0,0,520)
DeclareAlias2("display_cathodeIn3.data.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[1]", 1, 5, 15495, 4)
DeclareAlias2("display_cathodeIn3.data.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[2]", 1, 5, 15496, 4)
DeclareAlias2("display_cathodeIn3.data.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[3]", 1, 5, 15497, 4)
DeclareAlias2("display_cathodeIn3.data.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[4]", 1, 5, 15498, 4)
DeclareAlias2("display_cathodeIn3.data.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[5]", 1, 5, 15499, 4)
DeclareVariable("display_phTmdot_cathodeIn3.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn3.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn3.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn3.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot_cathodeIn3.y.mdot", "[kg/s]", "cathVolume.drain[1].m_flow", -1,\
 5, 14217, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.temp", "[K|degC]", "gasSensor_cathodeIn3.state.T", 1,\
 5, 15494, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.enthalpy", "[J/kg]", \
"cathVolume.feed[1].h_outflow", 1, 5, 14216, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.pressure", "[Pa|bar]", \
"cathVolume.p", 1, 1, 289, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X[1]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[1]", 1, 5, 15525, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X[2]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[2]", 1, 5, 15526, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X[3]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[3]", 1, 5, 15527, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X[4]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[4]", 1, 5, 15528, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X[5]", "Mass Fraction [1]", \
"display_cathodeIn3.data.X[5]", 1, 5, 15529, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[1]", 1, 5, 15495, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[2]", 1, 5, 15496, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[3]", 1, 5, 15497, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[4]", 1, 5, 15498, 4)
DeclareAlias2("display_phTmdot_cathodeIn3.y.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn3.u.X_flow[5]", 1, 5, 15499, 4)
DeclareVariable("display_phTmdot_cathodeIn3.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn3.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn3.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn3.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn3.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1013, true, 0.0,0.0,0.0,0,562)
DeclareAlias2("gasSensor_cathodeIn4.state.p", "Absolute pressure of medium [Pa|bar]",\
 "exhaustSink.pressureBoundary.p", 1, 5, 11932, 0)
DeclareVariable("gasSensor_cathodeIn4.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareAlias2("gasSensor_cathodeIn4.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 0)
DeclareAlias2("gasSensor_cathodeIn4.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 0)
DeclareAlias2("gasSensor_cathodeIn4.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 0)
DeclareAlias2("gasSensor_cathodeIn4.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 0)
DeclareAlias2("gasSensor_cathodeIn4.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 0)
DeclareAlias2("gasSensor_cathodeIn4.portA.p", "Pressure [Pa|bar]", \
"exhaustSink.pressureBoundary.p", 1, 5, 11932, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "exhaustSink.fluidPort.m_flow", 1, 5, 11928, 132)
DeclareAlias2("gasSensor_cathodeIn4.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "exhaustSink.fluidPort.h_outflow", 1, 5, 11929, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[1]", 1, 5, 11935, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[2]", 1, 5, 11936, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[3]", 1, 5, 11937, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[4]", 1, 5, 11938, 4)
DeclareAlias2("gasSensor_cathodeIn4.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustSink.pressureBoundary.X[5]", 1, 5, 11939, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.p", "Pressure [Pa|bar]", \
"exhaustSink.pressureBoundary.p", 1, 5, 11932, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "exhaustSink.fluidPort.m_flow", -1, 5, 11928, 132)
DeclareAlias2("gasSensor_cathodeIn4.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "exhaustLoss.drain.h_outflow", 1, 5, 13835, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[1]", 1, 5, 13836, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[2]", 1, 5, 13837, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[3]", 1, 5, 13838, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[4]", 1, 5, 13839, 4)
DeclareAlias2("gasSensor_cathodeIn4.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "exhaustLoss.drain.X_outflow[5]", 1, 5, 13840, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.mdot", "[kg/s]", "exhaustSink.fluidPort.m_flow", 1,\
 5, 11928, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.temp", "[K|degC]", "gasSensor_cathodeIn4.state.T", 1,\
 5, 15538, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.enthalpy", "[J/kg]", "exhaustLoss.drain.h_outflow", 1,\
 5, 13835, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.pressure", "[Pa|bar]", "exhaustSink.pressureBoundary.p", 1,\
 5, 11932, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.X[1]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[1]", 1, 5, 15714, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.X[2]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[2]", 1, 5, 15715, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.X[3]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[3]", 1, 5, 15716, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.X[4]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[4]", 1, 5, 15717, 4)
DeclareAlias2("gasSensor_cathodeIn4.u.X[5]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[5]", 1, 5, 15718, 4)
DeclareVariable("gasSensor_cathodeIn4.u.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn4.u.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn4.u.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn4.u.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn4.u.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot_cathodeIn4.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn4.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_phTmdot_cathodeIn4.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn4.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("display_phTmdot_cathodeIn4.y.mdot", "[kg/s]", "exhaustSink.fluidPort.m_flow", 1,\
 5, 11928, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.temp", "[K|degC]", "gasSensor_cathodeIn4.state.T", 1,\
 5, 15538, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.enthalpy", "[J/kg]", \
"exhaustLoss.drain.h_outflow", 1, 5, 13835, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.pressure", "[Pa|bar]", \
"exhaustSink.pressureBoundary.p", 1, 5, 11932, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X[1]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[1]", 1, 5, 15714, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X[2]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[2]", 1, 5, 15715, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X[3]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[3]", 1, 5, 15716, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X[4]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[4]", 1, 5, 15717, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X[5]", "Mass Fraction [1]", \
"display_MoleFractions4.data.X[5]", 1, 5, 15718, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[1]", 1, 5, 15539, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[2]", 1, 5, 15540, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[3]", 1, 5, 15541, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[4]", 1, 5, 15542, 4)
DeclareAlias2("display_phTmdot_cathodeIn4.y.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[5]", 1, 5, 15543, 4)
DeclareVariable("display_phTmdot_cathodeIn4.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn4.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn4.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn4.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn4.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1014, true, 0.0,0.0,0.0,0,562)
DeclareAlias2("gasSensor_cathodeIn5.state.p", "Absolute pressure of medium [Pa|bar]",\
 "stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 0)
DeclareVariable("gasSensor_cathodeIn5.state.T", "Temperature of medium [K|degC]",\
 300, 0.0,10000.0,300.0,0,512)
DeclareAlias2("gasSensor_cathodeIn5.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 0)
DeclareAlias2("gasSensor_cathodeIn5.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 0)
DeclareAlias2("gasSensor_cathodeIn5.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 0)
DeclareAlias2("gasSensor_cathodeIn5.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 0)
DeclareAlias2("gasSensor_cathodeIn5.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 0)
DeclareAlias2("gasSensor_cathodeIn5.portA.p", "Pressure [Pa|bar]", \
"stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 132)
DeclareAlias2("gasSensor_cathodeIn5.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "stack.feed_cath.h_outflow", 1, 5, 11658, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[1]", 1, 5, 14390, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[2]", 1, 5, 14391, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[3]", 1, 5, 14392, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[4]", 1, 5, 14393, 4)
DeclareAlias2("gasSensor_cathodeIn5.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "AirHeater.heatExchanger.XBsec_in[5]", 1, 5, 14394, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.p", "Pressure [Pa|bar]", \
"stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", -1, 5, 8, 132)
DeclareAlias2("gasSensor_cathodeIn5.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "AirHeater.drain_sec.h_outflow", 1, 5, 14259, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 4)
DeclareAlias2("gasSensor_cathodeIn5.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 4)
DeclareAlias2("gasSensor_cathodeIn5.u.mdot", "[kg/s]", "flowCathode.massFlowBoundary.m_flow", 1,\
 5, 8, 4)
DeclareAlias2("gasSensor_cathodeIn5.u.temp", "[K|degC]", "gasSensor_cathodeIn5.state.T", 1,\
 5, 15552, 4)
DeclareAlias2("gasSensor_cathodeIn5.u.enthalpy", "[J/kg]", "AirHeater.drain_sec.h_outflow", 1,\
 5, 14259, 4)
DeclareAlias2("gasSensor_cathodeIn5.u.pressure", "[Pa|bar]", "stack.feed_Cathode.volume[1].fluid.p", 1,\
 1, 220, 4)
DeclareVariable("gasSensor_cathodeIn5.u.X[1]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X[2]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X[3]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X[4]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X[5]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X_flow[2]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X_flow[3]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X_flow[4]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor_cathodeIn5.u.X_flow[5]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,520)
DeclareVariable("display_phTmdot_cathodeIn5.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn5.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn5.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn5.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("display_phTmdot_cathodeIn5.y.mdot", "[kg/s]", "flowCathode.massFlowBoundary.m_flow", 1,\
 5, 8, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.temp", "[K|degC]", "gasSensor_cathodeIn5.state.T", 1,\
 5, 15552, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.enthalpy", "[J/kg]", \
"AirHeater.drain_sec.h_outflow", 1, 5, 14259, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.pressure", "[Pa|bar]", \
"stack.feed_Cathode.volume[1].fluid.p", 1, 1, 220, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X[1]", "Mass Fraction [1]", \
"gasSensor_cathodeIn5.u.X[1]", 1, 5, 15553, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X[2]", "Mass Fraction [1]", \
"gasSensor_cathodeIn5.u.X[2]", 1, 5, 15554, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X[3]", "Mass Fraction [1]", \
"gasSensor_cathodeIn5.u.X[3]", 1, 5, 15555, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X[4]", "Mass Fraction [1]", \
"gasSensor_cathodeIn5.u.X[4]", 1, 5, 15556, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X[5]", "Mass Fraction [1]", \
"gasSensor_cathodeIn5.u.X[5]", 1, 5, 15557, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn5.u.X_flow[1]", 1, 5, 15558, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn5.u.X_flow[2]", 1, 5, 15559, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn5.u.X_flow[3]", 1, 5, 15560, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn5.u.X_flow[4]", 1, 5, 15561, 4)
DeclareAlias2("display_phTmdot_cathodeIn5.y.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn5.u.X_flow[5]", 1, 5, 15562, 4)
DeclareVariable("display_phTmdot_cathodeIn5.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn5.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn5.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn5.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn5.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1015, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_MoleFractions1.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions1.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.H2_index", "H2 substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.CH4_index", "CH4 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.CO_index", "CO substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.H2O_index", "H2O substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.N2_index", "N2 substance index [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.O2_index", "O2 substance index [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.nbrOfPresentSubstances", \
"[:#(type=Integer)]", 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.compatibleMedium", "[:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions1.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions1.X_H2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_CH4", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_CO", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[6]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.y[7]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions1.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions1.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions1.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions1.visible_massflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions1.visible_moleflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions1.data.mdot", "[kg/s]", "NGSource.massFlowBoundary.m_flow", 1,\
 5, 11835, 4)
DeclareAlias2("display_MoleFractions1.data.temp", "[K|degC]", "gasSensor3.state.T", 1,\
 5, 15617, 4)
DeclareAlias2("display_MoleFractions1.data.enthalpy", "[J/kg]", "NGSource.fluidPort.h_outflow", 1,\
 5, 11818, 4)
DeclareAlias2("display_MoleFractions1.data.pressure", "[Pa|bar]", \
"NGSource.fluidPort.p", 1, 5, 11817, 4)
DeclareVariable("display_MoleFractions1.data.X[1]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[2]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[3]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[4]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[5]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[6]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X[7]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[1]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[2]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[3]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[4]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[5]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[6]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("display_MoleFractions1.data.X_flow[7]", "Mass flow [kg/s]", 0.0,\
 0.0,0.0,0.0,0,520)
DeclareVariable("gasSensor3.state.p", "Absolute pressure of medium [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("gasSensor3.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareVariable("gasSensor3.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[6]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareVariable("gasSensor3.state.X[7]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,512)
DeclareAlias2("gasSensor3.portA.p", "Pressure [Pa|bar]", "NGSource.fluidPort.p", 1,\
 5, 11817, 4)
DeclareAlias2("gasSensor3.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 132)
DeclareAlias2("gasSensor3.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_NG.h_outflow", 1, 5, 13048, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[1]", 1, 5, 13604, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[2]", 1, 5, 13605, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[3]", 1, 5, 13606, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[4]", 1, 5, 13607, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[5]", 1, 5, 13608, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[6]", 1, 5, 13609, 4)
DeclareAlias2("gasSensor3.portA.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 "preprocessor.NGMix.drain[1].X_outflow[7]", 1, 5, 13610, 4)
DeclareAlias2("gasSensor3.portB.p", "Pressure [Pa|bar]", "NGSource.fluidPort.p", 1,\
 5, 11817, 4)
DeclareAlias2("gasSensor3.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", -1, 5, 11835, 132)
DeclareAlias2("gasSensor3.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "NGSource.fluidPort.h_outflow", 1, 5, 11818, 4)
DeclareVariable("gasSensor3.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.9469822574910066, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.05301774250899336, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[6]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor3.portB.X_outflow[7]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("gasSensor3.u.mdot", "[kg/s]", "NGSource.massFlowBoundary.m_flow", 1,\
 5, 11835, 4)
DeclareAlias2("gasSensor3.u.temp", "[K|degC]", "gasSensor3.state.T", 1, 5, 15617,\
 4)
DeclareAlias2("gasSensor3.u.enthalpy", "[J/kg]", "NGSource.fluidPort.h_outflow", 1,\
 5, 11818, 4)
DeclareAlias2("gasSensor3.u.pressure", "[Pa|bar]", "NGSource.fluidPort.p", 1, 5,\
 11817, 4)
DeclareAlias2("gasSensor3.u.X[1]", "Mass Fraction [1]", "display_MoleFractions1.data.X[1]", 1,\
 5, 15602, 4)
DeclareAlias2("gasSensor3.u.X[2]", "Mass Fraction [1]", "display_MoleFractions1.data.X[2]", 1,\
 5, 15603, 4)
DeclareAlias2("gasSensor3.u.X[3]", "Mass Fraction [1]", "display_MoleFractions1.data.X[3]", 1,\
 5, 15604, 4)
DeclareAlias2("gasSensor3.u.X[4]", "Mass Fraction [1]", "display_MoleFractions1.data.X[4]", 1,\
 5, 15605, 4)
DeclareAlias2("gasSensor3.u.X[5]", "Mass Fraction [1]", "display_MoleFractions1.data.X[5]", 1,\
 5, 15606, 4)
DeclareAlias2("gasSensor3.u.X[6]", "Mass Fraction [1]", "display_MoleFractions1.data.X[6]", 1,\
 5, 15607, 4)
DeclareAlias2("gasSensor3.u.X[7]", "Mass Fraction [1]", "display_MoleFractions1.data.X[7]", 1,\
 5, 15608, 4)
DeclareAlias2("gasSensor3.u.X_flow[1]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[1]", 1,\
 5, 15609, 4)
DeclareAlias2("gasSensor3.u.X_flow[2]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[2]", 1,\
 5, 15610, 4)
DeclareAlias2("gasSensor3.u.X_flow[3]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[3]", 1,\
 5, 15611, 4)
DeclareAlias2("gasSensor3.u.X_flow[4]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[4]", 1,\
 5, 15612, 4)
DeclareAlias2("gasSensor3.u.X_flow[5]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[5]", 1,\
 5, 15613, 4)
DeclareAlias2("gasSensor3.u.X_flow[6]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[6]", 1,\
 5, 15614, 4)
DeclareAlias2("gasSensor3.u.X_flow[7]", "Mass flow [kg/s]", "display_MoleFractions1.data.X_flow[7]", 1,\
 5, 15615, 4)
DeclareVariable("display_phTmdot3.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot3.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot3.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot3.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("display_phTmdot3.y.mdot", "[kg/s]", "NGSource.massFlowBoundary.m_flow", 1,\
 5, 11835, 4)
DeclareAlias2("display_phTmdot3.y.temp", "[K|degC]", "gasSensor3.state.T", 1, 5,\
 15617, 4)
DeclareAlias2("display_phTmdot3.y.enthalpy", "[J/kg]", "NGSource.fluidPort.h_outflow", 1,\
 5, 11818, 4)
DeclareAlias2("display_phTmdot3.y.pressure", "[Pa|bar]", "NGSource.fluidPort.p", 1,\
 5, 11817, 4)
DeclareAlias2("display_phTmdot3.y.X[1]", "Mass Fraction [1]", "display_MoleFractions1.data.X[1]", 1,\
 5, 15602, 4)
DeclareAlias2("display_phTmdot3.y.X[2]", "Mass Fraction [1]", "display_MoleFractions1.data.X[2]", 1,\
 5, 15603, 4)
DeclareAlias2("display_phTmdot3.y.X[3]", "Mass Fraction [1]", "display_MoleFractions1.data.X[3]", 1,\
 5, 15604, 4)
DeclareAlias2("display_phTmdot3.y.X[4]", "Mass Fraction [1]", "display_MoleFractions1.data.X[4]", 1,\
 5, 15605, 4)
DeclareAlias2("display_phTmdot3.y.X[5]", "Mass Fraction [1]", "display_MoleFractions1.data.X[5]", 1,\
 5, 15606, 4)
DeclareAlias2("display_phTmdot3.y.X[6]", "Mass Fraction [1]", "display_MoleFractions1.data.X[6]", 1,\
 5, 15607, 4)
DeclareAlias2("display_phTmdot3.y.X[7]", "Mass Fraction [1]", "display_MoleFractions1.data.X[7]", 1,\
 5, 15608, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[1]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[1]", 1, 5, 15609, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[2]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[2]", 1, 5, 15610, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[3]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[3]", 1, 5, 15611, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[4]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[4]", 1, 5, 15612, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[5]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[5]", 1, 5, 15613, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[6]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[6]", 1, 5, 15614, 4)
DeclareAlias2("display_phTmdot3.y.X_flow[7]", "Mass flow [kg/s]", \
"display_MoleFractions1.data.X_flow[7]", 1, 5, 15615, 4)
DeclareVariable("display_phTmdot3.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot3.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot3.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot3.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot3.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1016, true, 0.0,0.0,0.0,0,562)
DeclareAlias2("gasSensor4.state.p", "Absolute pressure of medium [Pa|bar]", \
"ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 0)
DeclareVariable("gasSensor4.state.T", "Temperature of medium [K|degC]", 300, 0.0,\
10000.0,300.0,0,512)
DeclareAlias2("gasSensor4.state.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 0)
DeclareAlias2("gasSensor4.state.X[2]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 0)
DeclareAlias2("gasSensor4.state.X[3]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 0)
DeclareAlias2("gasSensor4.state.X[4]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 0)
DeclareAlias2("gasSensor4.state.X[5]", "Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 0)
DeclareAlias2("gasSensor4.portA.p", "Pressure [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 4)
DeclareAlias2("gasSensor4.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 132)
DeclareAlias2("gasSensor4.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "preprocessor.feed_ATRAir.h_outflow", 1, 5, 13057, 4)
DeclareVariable("gasSensor4.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor4.portA.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor4.portA.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor4.portA.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 0.77, 0.0,1.0,0.1,0,521)
DeclareVariable("gasSensor4.portA.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 0.23, 0.0,1.0,0.1,0,521)
DeclareAlias2("gasSensor4.portB.p", "Pressure [Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 4)
DeclareAlias2("gasSensor4.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", -1, 5, 11892, 132)
DeclareAlias2("gasSensor4.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "ATRAirSource.fluidPort.h_outflow", 1, 5, 11884, 4)
DeclareAlias2("gasSensor4.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 4)
DeclareAlias2("gasSensor4.portB.X_outflow[2]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 4)
DeclareAlias2("gasSensor4.portB.X_outflow[3]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 4)
DeclareAlias2("gasSensor4.portB.X_outflow[4]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 4)
DeclareAlias2("gasSensor4.portB.X_outflow[5]", "Mass fractions of exiting fluid [kg/kg]",\
 "ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 4)
DeclareAlias2("gasSensor4.u.mdot", "[kg/s]", "ATRAirSource.massFlowBoundary.m_flow", 1,\
 5, 11892, 4)
DeclareAlias2("gasSensor4.u.temp", "[K|degC]", "gasSensor4.state.T", 1, 5, 15640,\
 4)
DeclareAlias2("gasSensor4.u.enthalpy", "[J/kg]", "ATRAirSource.fluidPort.h_outflow", 1,\
 5, 11884, 4)
DeclareAlias2("gasSensor4.u.pressure", "[Pa|bar]", "ATRAirSource.massFlowBoundary.state.p", 1,\
 5, 11913, 4)
DeclareAlias2("gasSensor4.u.X[1]", "Mass Fraction [1]", "display_MoleFractions3.data.X[1]", 1,\
 5, 15676, 4)
DeclareAlias2("gasSensor4.u.X[2]", "Mass Fraction [1]", "display_MoleFractions3.data.X[2]", 1,\
 5, 15677, 4)
DeclareAlias2("gasSensor4.u.X[3]", "Mass Fraction [1]", "display_MoleFractions3.data.X[3]", 1,\
 5, 15678, 4)
DeclareAlias2("gasSensor4.u.X[4]", "Mass Fraction [1]", "display_MoleFractions3.data.X[4]", 1,\
 5, 15679, 4)
DeclareAlias2("gasSensor4.u.X[5]", "Mass Fraction [1]", "display_MoleFractions3.data.X[5]", 1,\
 5, 15680, 4)
DeclareVariable("gasSensor4.u.X_flow[1]", "Mass flow [kg/s]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("gasSensor4.u.X_flow[2]", "Mass flow [kg/s]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("gasSensor4.u.X_flow[3]", "Mass flow [kg/s]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("gasSensor4.u.X_flow[4]", "Mass flow [kg/s]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("gasSensor4.u.X_flow[5]", "Mass flow [kg/s]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("display_MoleFractions3.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions3.Ar_index", "Ar substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.H2O_index", "H2O substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.N2_index", "N2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.O2_index", "O2 substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.nbrOfPresentSubstances", \
"[:#(type=Integer)]", 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.compatibleMedium", "[:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions3.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions3.X_Ar", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.X_CO2", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.X_H2O", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.X_N2", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.X_O2", "", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions3.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions3.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions3.visible_massflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions3.visible_moleflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions3.data.mdot", "[kg/s]", "ATRAirSource.massFlowBoundary.m_flow", 1,\
 5, 11892, 4)
DeclareAlias2("display_MoleFractions3.data.temp", "[K|degC]", "gasSensor4.state.T", 1,\
 5, 15640, 4)
DeclareAlias2("display_MoleFractions3.data.enthalpy", "[J/kg]", "ATRAirSource.fluidPort.h_outflow", 1,\
 5, 11884, 4)
DeclareAlias2("display_MoleFractions3.data.pressure", "[Pa|bar]", \
"ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 4)
DeclareVariable("display_MoleFractions3.data.X[1]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,521)
DeclareVariable("display_MoleFractions3.data.X[2]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,521)
DeclareVariable("display_MoleFractions3.data.X[3]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,521)
DeclareVariable("display_MoleFractions3.data.X[4]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,521)
DeclareVariable("display_MoleFractions3.data.X[5]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,521)
DeclareAlias2("display_MoleFractions3.data.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[1]", 1, 5, 15646, 4)
DeclareAlias2("display_MoleFractions3.data.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[2]", 1, 5, 15647, 4)
DeclareAlias2("display_MoleFractions3.data.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[3]", 1, 5, 15648, 4)
DeclareAlias2("display_MoleFractions3.data.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[4]", 1, 5, 15649, 4)
DeclareAlias2("display_MoleFractions3.data.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[5]", 1, 5, 15650, 4)
DeclareVariable("display_phTmdot_cathodeIn6.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn6.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot_cathodeIn6.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,\
0,512)
DeclareVariable("display_phTmdot_cathodeIn6.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("display_phTmdot_cathodeIn6.y.mdot", "[kg/s]", "ATRAirSource.massFlowBoundary.m_flow", 1,\
 5, 11892, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.temp", "[K|degC]", "gasSensor4.state.T", 1,\
 5, 15640, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.enthalpy", "[J/kg]", \
"ATRAirSource.fluidPort.h_outflow", 1, 5, 11884, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.pressure", "[Pa|bar]", \
"ATRAirSource.massFlowBoundary.state.p", 1, 5, 11913, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X[1]", "Mass Fraction [1]", \
"display_MoleFractions3.data.X[1]", 1, 5, 15676, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X[2]", "Mass Fraction [1]", \
"display_MoleFractions3.data.X[2]", 1, 5, 15677, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X[3]", "Mass Fraction [1]", \
"display_MoleFractions3.data.X[3]", 1, 5, 15678, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X[4]", "Mass Fraction [1]", \
"display_MoleFractions3.data.X[4]", 1, 5, 15679, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X[5]", "Mass Fraction [1]", \
"display_MoleFractions3.data.X[5]", 1, 5, 15680, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[1]", 1, 5, 15646, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[2]", 1, 5, 15647, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[3]", 1, 5, 15648, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[4]", 1, 5, 15649, 4)
DeclareAlias2("display_phTmdot_cathodeIn6.y.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor4.u.X_flow[5]", 1, 5, 15650, 4)
DeclareVariable("display_phTmdot_cathodeIn6.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn6.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn6.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot_cathodeIn6.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot_cathodeIn6.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1017, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_MoleFractions4.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions4.Ar_index", "Ar substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.H2O_index", "H2O substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.N2_index", "N2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.O2_index", "O2 substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.nbrOfPresentSubstances", \
"[:#(type=Integer)]", 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.compatibleMedium", "[:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions4.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions4.X_Ar", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions4.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions4.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions4.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions4.visible_massflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions4.visible_moleflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions4.data.mdot", "[kg/s]", "exhaustSink.fluidPort.m_flow", 1,\
 5, 11928, 4)
DeclareAlias2("display_MoleFractions4.data.temp", "[K|degC]", "gasSensor_cathodeIn4.state.T", 1,\
 5, 15538, 4)
DeclareAlias2("display_MoleFractions4.data.enthalpy", "[J/kg]", "exhaustLoss.drain.h_outflow", 1,\
 5, 13835, 4)
DeclareAlias2("display_MoleFractions4.data.pressure", "[Pa|bar]", \
"exhaustSink.pressureBoundary.p", 1, 5, 11932, 4)
DeclareVariable("display_MoleFractions4.data.X[1]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions4.data.X[2]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions4.data.X[3]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions4.data.X[4]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions4.data.X[5]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareAlias2("display_MoleFractions4.data.X_flow[1]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[1]", 1, 5, 15539, 4)
DeclareAlias2("display_MoleFractions4.data.X_flow[2]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[2]", 1, 5, 15540, 4)
DeclareAlias2("display_MoleFractions4.data.X_flow[3]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[3]", 1, 5, 15541, 4)
DeclareAlias2("display_MoleFractions4.data.X_flow[4]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[4]", 1, 5, 15542, 4)
DeclareAlias2("display_MoleFractions4.data.X_flow[5]", "Mass flow [kg/s]", \
"gasSensor_cathodeIn4.u.X_flow[5]", 1, 5, 15543, 4)
DeclareAlias2("multiDisplaySensor4.portA.p", "Pressure [Pa|bar]", \
"preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("multiDisplaySensor4.portA.m_flow", "Mass flow rate into the component [kg/s]",\
 "WaterSource.massFlowBoundary.m_flow", 1, 5, 11797, 132)
DeclareAlias2("multiDisplaySensor4.portA.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "WaterSource.fluidPort.h_outflow", 1, 5, 11794, 4)
DeclareVariable("multiDisplaySensor4.portA.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 1.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("multiDisplaySensor4.portB.p", "Pressure [Pa|bar]", \
"preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("multiDisplaySensor4.portB.m_flow", "Mass flow rate into the component [kg/s]",\
 "WaterSource.massFlowBoundary.m_flow", -1, 5, 11797, 132)
DeclareAlias2("multiDisplaySensor4.portB.h_outflow", "Specific enthalpy of exiting fluid  [J/kg]",\
 "WaterSource.fluidPort.h_outflow", 1, 5, 11794, 4)
DeclareAlias2("multiDisplaySensor4.portB.X_outflow[1]", "Mass fractions of exiting fluid [kg/kg]",\
 "WaterSource.massFlowBoundary.X[1]", 1, 5, 11801, 4)
DeclareAlias2("multiDisplaySensor4.u.mdot", "[kg/s]", "WaterSource.massFlowBoundary.m_flow", 1,\
 5, 11797, 4)
DeclareVariable("multiDisplaySensor4.u.temp", "[K|degC]", 300, 0.0,10000.0,300.0,\
0,520)
DeclareAlias2("multiDisplaySensor4.u.enthalpy", "[J/kg]", "WaterSource.fluidPort.h_outflow", 1,\
 5, 11794, 4)
DeclareAlias2("multiDisplaySensor4.u.pressure", "[Pa|bar]", "preprocessor.steamMix_TZ.state_water.p", 1,\
 5, 12607, 4)
DeclareVariable("multiDisplaySensor4.u.X[1]", "Mass Fraction [1]", 0.0, 0.0,1.0,\
0.0,0,521)
DeclareVariable("multiDisplaySensor4.u.X_flow[1]", "Mass flow [kg/s]", 0.0, \
0.0,0.0,0.0,0,521)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.state.p", "Absolute pressure of medium [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 0)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.state.h", "Specific Enthalpy of medium [J/kg]",\
 "WaterSource.fluidPort.h_outflow", 1, 5, 11794, 0)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.state.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [kg/kg]", \
"WaterSource.massFlowBoundary.X[1]", 1, 5, 11801, 0)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portA.p", "Pressure [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portA.m_flow", \
"Mass flow rate into the component [kg/s]", "WaterSource.massFlowBoundary.m_flow", 1,\
 5, 11797, 132)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portA.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "WaterSource.fluidPort.h_outflow", 1,\
 5, 11794, 4)
DeclareVariable("multiDisplaySensor4.multiDisplaySensor.portA.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", 1.0, 0.0,1.0,0.1,0,521)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portB.p", "Pressure [Pa|bar]",\
 "preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portB.m_flow", \
"Mass flow rate into the component [kg/s]", "WaterSource.massFlowBoundary.m_flow", -1,\
 5, 11797, 132)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portB.h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "WaterSource.fluidPort.h_outflow", 1,\
 5, 11794, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.portB.X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "WaterSource.massFlowBoundary.X[1]", 1,\
 5, 11801, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.mdot", "[kg/s]", \
"WaterSource.massFlowBoundary.m_flow", 1, 5, 11797, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.temp", "[K|degC]", \
"multiDisplaySensor4.u.temp", 1, 5, 15720, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.enthalpy", "[J/kg]", \
"WaterSource.fluidPort.h_outflow", 1, 5, 11794, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.pressure", "[Pa|bar]", \
"preprocessor.steamMix_TZ.state_water.p", 1, 5, 12607, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.X[1]", "Mass Fraction [1]",\
 "multiDisplaySensor4.u.X[1]", 1, 5, 15721, 4)
DeclareAlias2("multiDisplaySensor4.multiDisplaySensor.u.X_flow[1]", \
"Mass flow [kg/s]", "multiDisplaySensor4.u.X_flow[1]", 1, 5, 15722, 4)
DeclareVariable("display_phTmdot4.h_kJ", "[J/kg]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot4.p_bar", "[bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot4.T_degC", "[degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_phTmdot4.mdot", "[kg/s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("display_phTmdot4.y.mdot", "[kg/s]", "WaterSource.massFlowBoundary.m_flow", 1,\
 5, 11797, 4)
DeclareAlias2("display_phTmdot4.y.temp", "[K|degC]", "multiDisplaySensor4.u.temp", 1,\
 5, 15720, 4)
DeclareAlias2("display_phTmdot4.y.enthalpy", "[J/kg]", "WaterSource.fluidPort.h_outflow", 1,\
 5, 11794, 4)
DeclareAlias2("display_phTmdot4.y.pressure", "[Pa|bar]", "preprocessor.steamMix_TZ.state_water.p", 1,\
 5, 12607, 4)
DeclareAlias2("display_phTmdot4.y.X[1]", "Mass Fraction [1]", "multiDisplaySensor4.u.X[1]", 1,\
 5, 15721, 4)
DeclareAlias2("display_phTmdot4.y.X_flow[1]", "Mass flow [kg/s]", \
"multiDisplaySensor4.u.X_flow[1]", 1, 5, 15722, 4)
DeclareVariable("display_phTmdot4.precision_p", "Number of significant digits - pressure [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot4.precision_h", "Number of significant digits - specific enthalpy [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot4.precision_T", "Number of significant digits - temperature [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_phTmdot4.precision_mdot", "Number of significant digits - mass flow [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareParameter("display_phTmdot4.displayUnits", "If true the actual units are displayed [:#(type=Boolean)]",\
 1018, true, 0.0,0.0,0.0,0,562)
DeclareVariable("display_MoleFractions5.displayMassUnit", "If false visualizer show concentration in mole [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions5.sensorType", "Sensor type [:#(type=FuelCell.Sensors.Types.SensorType)]",\
 1, 1.0,2.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.H2_index", "H2 substance index [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.CH4_index", "CH4 substance index [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.CO_index", "CO substance index [:#(type=Integer)]",\
 3, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.CO2_index", "CO2 substance index [:#(type=Integer)]",\
 4, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.H2O_index", "H2O substance index [:#(type=Integer)]",\
 5, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.N2_index", "N2 substance index [:#(type=Integer)]",\
 6, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.O2_index", "O2 substance index [:#(type=Integer)]",\
 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.nbrOfPresentSubstances", \
"[:#(type=Integer)]", 7, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.compatibleMedium", "[:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions5.precision", "Number of significant digits [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("display_MoleFractions5.X_H2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_CH4", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_CO", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_CO2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_H2O", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_N2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.X_O2", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[1]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[2]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[3]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[4]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[5]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[6]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.y[7]", "[1]", 0.0, 0.0,1.0,0.0,0,512)
DeclareVariable("display_MoleFractions5.flow_conversion", "Kg/s to g/s", 1000, \
0.0,0.0,0.0,0,513)
DeclareVariable("display_MoleFractions5.visible_massfraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions5.visible_molefraction", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions5.visible_massflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("display_MoleFractions5.visible_moleflow", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("display_MoleFractions5.data.mdot", "[kg/s]", "metalBurner.fuel_in.m_flow", 1,\
 5, 14730, 4)
DeclareAlias2("display_MoleFractions5.data.temp", "[K|degC]", "gasSensor1.state.T", 1,\
 5, 15361, 4)
DeclareAlias2("display_MoleFractions5.data.enthalpy", "[J/kg]", "metalBurner.fuel_in.h_outflow", 1,\
 5, 14731, 4)
DeclareAlias2("display_MoleFractions5.data.pressure", "[Pa|bar]", \
"metalBurner.burner.fluegas.state.p", 1, 5, 14546, 4)
DeclareVariable("display_MoleFractions5.data.X[1]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[2]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[3]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[4]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[5]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[6]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareVariable("display_MoleFractions5.data.X[7]", "Mass Fraction [1]", 0.0, \
0.0,1.0,0.0,0,520)
DeclareAlias2("display_MoleFractions5.data.X_flow[1]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[1]", 1, 5, 15349, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[2]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[2]", 1, 5, 15350, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[3]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[3]", 1, 5, 15351, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[4]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[4]", 1, 5, 15352, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[5]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[5]", 1, 5, 15353, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[6]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[6]", 1, 5, 15354, 4)
DeclareAlias2("display_MoleFractions5.data.X_flow[7]", "Mass flow [kg/s]", \
"display_phTmdot1.y.X_flow[7]", 1, 5, 15355, 4)
DeclareVariable("display_I1.number", "Number to visualize if use_numberPort=false [W]",\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareParameter("display_I1.precision", "Number of decimals to show [:#(type=Integer)]",\
 1019, 1, 0.0,1E+100,0.0,0,564)
DeclareVariable("display_I1.use_numberPort", "= true, if numberPort enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_I1.showText", "Show number reference as text [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_I1.hideBackground", "Hide background [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareAlias2("display_I1.showNumber", "[W]", "display_I1.number", 1, 5, 15770, 0)
DeclareVariable("display_P1.number", "Number to visualize if use_numberPort=false",\
 0.0, 0.0,0.0,0.0,0,1536)
DeclareParameter("display_P1.precision", "Number of decimals to show [:#(type=Integer)]",\
 1020, 0, 0.0,1E+100,0.0,0,564)
DeclareVariable("display_P1.use_numberPort", "= true, if numberPort enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_P1.showText", "Show number reference as text [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("display_P1.hideBackground", "Hide background [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareAlias2("display_P1.showNumber", "", "display_P1.number", 1, 5, 15774, 0)
DeclareAlias2("flowCathode.massFlowBoundary.m_flow_par.y", "Value of Real output [kg/s]",\
 "flowCathode.massFlowBoundary.m_flow", 1, 5, 8, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.V_flow_par.y", "Value of Real output [m3/s]",\
 "flowCathode.massFlowBoundary.V_flow", 1, 5, 9, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.T_in_par.y", "Value of Real output [K]",\
 "flowCathode.massFlowBoundary.T", 1, 5, 10, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.h_in_par.y", "Value of Real output [J/kg]",\
 "flowCathode.massFlowBoundary.h", 1, 5, 11, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.X_in_par[1].y", "Value of Real output [1]",\
 "flowCathode.massFlowBoundary.X[1]", 1, 5, 12, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.X_in_par[2].y", "Value of Real output [1]",\
 "flowCathode.massFlowBoundary.X[2]", 1, 5, 13, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.X_in_par[3].y", "Value of Real output [1]",\
 "flowCathode.massFlowBoundary.X[3]", 1, 5, 14, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.X_in_par[4].y", "Value of Real output [1]",\
 "flowCathode.massFlowBoundary.X[4]", 1, 5, 15, 1024)
DeclareAlias2("flowCathode.massFlowBoundary.X_in_par[5].y", "Value of Real output [1]",\
 "flowCathode.massFlowBoundary.X[5]", 1, 5, 16, 1024)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[1].anode_channel.channel.p[1]", 1, 5, 2864,\
 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Anode.drain[1].m_flow", -1,\
 5, 10398, 132)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[1].feed_anode.h_outflow", 1,\
 5, 1779, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[1]", 1,\
 5, 2493, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[2]", 1,\
 5, 2494, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[3]", 1,\
 5, 2495, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[4]", 1,\
 5, 2496, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[5]", 1,\
 5, 2497, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[6]", 1,\
 5, 2498, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portA[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[1].X[7]", 1,\
 5, 2499, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Anode.volume[1].fluid.p", 1, 1, 226, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Anode.feed[1].m_flow", -1,\
 5, 11151, 132)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[1].drain_anode.h_outflow", 1,\
 5, 1780, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[1]", 1,\
 5, 2772, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[2]", 1,\
 5, 2773, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[3]", 1,\
 5, 2774, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[4]", 1,\
 5, 2775, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[5]", 1,\
 5, 2776, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[6]", 1,\
 5, 2777, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.portB[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].anode_channel.channel.gas[4].X[7]", 1,\
 5, 2778, 4)
DeclareAlias2("stack.subStack[1].anode_channel.channel.q[1].T", "Port temperature [K|degC]",\
 "stack.subStack[1].anode_channel.channel.T_wall[1]", 1, 5, 2995, 4)
DeclareVariable("stack.subStack[1].anode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].anode_channel.channel.q[2].T", "Port temperature [K|degC]",\
 "stack.subStack[1].anode_channel.channel.T_wall[2]", 1, 5, 2996, 4)
DeclareVariable("stack.subStack[1].anode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].anode_channel.channel.q[3].T", "Port temperature [K|degC]",\
 "stack.subStack[1].anode_channel.channel.T_wall[3]", 1, 5, 2997, 4)
DeclareVariable("stack.subStack[1].anode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].anode_channel.channel.q[4].T", "Port temperature [K|degC]",\
 "stack.subStack[1].anode_channel.channel.T_wall[4]", 1, 5, 2998, 4)
DeclareVariable("stack.subStack[1].anode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[1].cell.cathode[1].state.p", 1, 5, 1163, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Cathode.drain[1].m_flow", -1,\
 5, 10832, 132)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[1].feed_cathode.h_outflow", 1,\
 5, 1781, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[1].friction.stateB_inflow.X[1]", 1,\
 5, 11031, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[1].friction.stateB_inflow.X[2]", 1,\
 5, 11032, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[1].friction.stateB_inflow.X[3]", 1,\
 5, 11033, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[1].friction.stateB_inflow.X[4]", 1,\
 5, 11034, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portA[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[1].friction.stateB_inflow.X[5]", 1,\
 5, 11035, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Cathode.volume[1].fluid.p", 1, 1, 234, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Cathode.feed[1].m_flow", -1,\
 5, 11446, 132)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[1].drain_cathode.h_outflow", 1,\
 5, 1782, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].cell.cathode[4].X[1]", 1,\
 5, 1481, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].cell.cathode[4].X[2]", 1,\
 5, 1482, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].cell.cathode[4].X[3]", 1,\
 5, 1483, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].cell.cathode[4].X[4]", 1,\
 5, 1484, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.portB[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[1].cell.cathode[4].X[5]", 1,\
 5, 1485, 4)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.q[1].T", \
"Port temperature [K|degC]", "stack.subStack[1].cathode_channel.channel.T_wall[1]", 1,\
 5, 3917, 4)
DeclareVariable("stack.subStack[1].cathode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.q[2].T", \
"Port temperature [K|degC]", "stack.subStack[1].cathode_channel.channel.T_wall[2]", 1,\
 5, 3918, 4)
DeclareVariable("stack.subStack[1].cathode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.q[3].T", \
"Port temperature [K|degC]", "stack.subStack[1].cathode_channel.channel.T_wall[3]", 1,\
 5, 3919, 4)
DeclareVariable("stack.subStack[1].cathode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[1].cathode_channel.channel.q[4].T", \
"Port temperature [K|degC]", "stack.subStack[1].cathode_channel.channel.T_wall[4]", 1,\
 5, 3920, 4)
DeclareVariable("stack.subStack[1].cathode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[2].anode_channel.channel.p[1]", 1, 5, 6046,\
 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Anode.drain[2].m_flow", -1,\
 5, 10399, 132)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[2].feed_anode.h_outflow", 1,\
 5, 4968, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[1]", 1,\
 5, 5675, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[2]", 1,\
 5, 5676, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[3]", 1,\
 5, 5677, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[4]", 1,\
 5, 5678, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[5]", 1,\
 5, 5679, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[6]", 1,\
 5, 5680, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portA[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[1].X[7]", 1,\
 5, 5681, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Anode.volume[1].fluid.p", 1, 1, 226, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Anode.feed[2].m_flow", -1,\
 5, 11152, 132)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[2].drain_anode.h_outflow", 1,\
 5, 4969, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[1]", 1,\
 5, 5954, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[2]", 1,\
 5, 5955, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[3]", 1,\
 5, 5956, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[4]", 1,\
 5, 5957, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[5]", 1,\
 5, 5958, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[6]", 1,\
 5, 5959, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.portB[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].anode_channel.channel.gas[4].X[7]", 1,\
 5, 5960, 4)
DeclareAlias2("stack.subStack[2].anode_channel.channel.q[1].T", "Port temperature [K|degC]",\
 "stack.subStack[2].anode_channel.channel.T_wall[1]", 1, 5, 6177, 4)
DeclareVariable("stack.subStack[2].anode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].anode_channel.channel.q[2].T", "Port temperature [K|degC]",\
 "stack.subStack[2].anode_channel.channel.T_wall[2]", 1, 5, 6178, 4)
DeclareVariable("stack.subStack[2].anode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].anode_channel.channel.q[3].T", "Port temperature [K|degC]",\
 "stack.subStack[2].anode_channel.channel.T_wall[3]", 1, 5, 6179, 4)
DeclareVariable("stack.subStack[2].anode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].anode_channel.channel.q[4].T", "Port temperature [K|degC]",\
 "stack.subStack[2].anode_channel.channel.T_wall[4]", 1, 5, 6180, 4)
DeclareVariable("stack.subStack[2].anode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[2].cell.cathode[1].state.p", 1, 5, 4622, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Cathode.drain[2].m_flow", -1,\
 5, 10833, 132)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[2].feed_cathode.h_outflow", 1,\
 5, 4970, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[2].friction.stateB_inflow.X[1]", 1,\
 5, 11075, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[2].friction.stateB_inflow.X[2]", 1,\
 5, 11076, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[2].friction.stateB_inflow.X[3]", 1,\
 5, 11077, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[2].friction.stateB_inflow.X[4]", 1,\
 5, 11078, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portA[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[2].friction.stateB_inflow.X[5]", 1,\
 5, 11079, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Cathode.volume[1].fluid.p", 1, 1, 234, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Cathode.feed[2].m_flow", -1,\
 5, 11447, 132)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[2].drain_cathode.h_outflow", 1,\
 5, 4971, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].cell.cathode[4].X[1]", 1,\
 5, 4802, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].cell.cathode[4].X[2]", 1,\
 5, 4803, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].cell.cathode[4].X[3]", 1,\
 5, 4804, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].cell.cathode[4].X[4]", 1,\
 5, 4805, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.portB[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[2].cell.cathode[4].X[5]", 1,\
 5, 4806, 4)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.q[1].T", \
"Port temperature [K|degC]", "stack.subStack[2].cathode_channel.channel.T_wall[1]", 1,\
 5, 7099, 4)
DeclareVariable("stack.subStack[2].cathode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.q[2].T", \
"Port temperature [K|degC]", "stack.subStack[2].cathode_channel.channel.T_wall[2]", 1,\
 5, 7100, 4)
DeclareVariable("stack.subStack[2].cathode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.q[3].T", \
"Port temperature [K|degC]", "stack.subStack[2].cathode_channel.channel.T_wall[3]", 1,\
 5, 7101, 4)
DeclareVariable("stack.subStack[2].cathode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[2].cathode_channel.channel.q[4].T", \
"Port temperature [K|degC]", "stack.subStack[2].cathode_channel.channel.T_wall[4]", 1,\
 5, 7102, 4)
DeclareVariable("stack.subStack[2].cathode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[3].anode_channel.channel.p[1]", 1, 5, 9102,\
 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Anode.drain[3].m_flow", -1,\
 5, 10400, 132)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[3].feed_anode.h_outflow", 1,\
 5, 8024, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[1]", 1,\
 5, 8731, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[2]", 1,\
 5, 8732, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[3]", 1,\
 5, 8733, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[4]", 1,\
 5, 8734, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[5]", 1,\
 5, 8735, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[6]", 1,\
 5, 8736, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portA[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[1].X[7]", 1,\
 5, 8737, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Anode.volume[1].fluid.p", 1, 1, 226, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Anode.feed[3].m_flow", -1,\
 5, 11153, 132)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[3].drain_anode.h_outflow", 1,\
 5, 8025, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[1]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[1]", 1,\
 5, 9010, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[2]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[2]", 1,\
 5, 9011, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[3]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[3]", 1,\
 5, 9012, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[4]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[4]", 1,\
 5, 9013, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[5]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[5]", 1,\
 5, 9014, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[6]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[6]", 1,\
 5, 9015, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.portB[1].X_outflow[7]", \
"Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].anode_channel.channel.gas[4].X[7]", 1,\
 5, 9016, 4)
DeclareAlias2("stack.subStack[3].anode_channel.channel.q[1].T", "Port temperature [K|degC]",\
 "stack.subStack[3].anode_channel.channel.T_wall[1]", 1, 5, 9233, 4)
DeclareVariable("stack.subStack[3].anode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].anode_channel.channel.q[2].T", "Port temperature [K|degC]",\
 "stack.subStack[3].anode_channel.channel.T_wall[2]", 1, 5, 9234, 4)
DeclareVariable("stack.subStack[3].anode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].anode_channel.channel.q[3].T", "Port temperature [K|degC]",\
 "stack.subStack[3].anode_channel.channel.T_wall[3]", 1, 5, 9235, 4)
DeclareVariable("stack.subStack[3].anode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].anode_channel.channel.q[4].T", "Port temperature [K|degC]",\
 "stack.subStack[3].anode_channel.channel.T_wall[4]", 1, 5, 9236, 4)
DeclareVariable("stack.subStack[3].anode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].p", \
"Pressure [Pa|bar]", "stack.subStack[3].cell.cathode[1].state.p", 1, 5, 7678, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.feed_Cathode.drain[3].m_flow", -1,\
 5, 10834, 132)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[3].feed_cathode.h_outflow", 1,\
 5, 8026, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[3].friction.stateB_inflow.X[1]", 1,\
 5, 11119, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[3].friction.stateB_inflow.X[2]", 1,\
 5, 11120, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[3].friction.stateB_inflow.X[3]", 1,\
 5, 11121, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[3].friction.stateB_inflow.X[4]", 1,\
 5, 11122, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portA[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.feed_Cathode.frictionLoss[3].friction.stateB_inflow.X[5]", 1,\
 5, 11123, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].p", \
"Pressure [Pa|bar]", "stack.drain_Cathode.volume[1].fluid.p", 1, 1, 234, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].m_flow", \
"Mass flow rate into the component [kg/s]", "stack.drain_Cathode.feed[3].m_flow", -1,\
 5, 11448, 132)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].h_outflow", \
"Specific enthalpy of exiting fluid  [J/kg]", "stack.subStack[3].drain_cathode.h_outflow", 1,\
 5, 8027, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].X_outflow[1]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].cell.cathode[4].X[1]", 1,\
 5, 7858, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].X_outflow[2]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].cell.cathode[4].X[2]", 1,\
 5, 7859, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].X_outflow[3]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].cell.cathode[4].X[3]", 1,\
 5, 7860, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].X_outflow[4]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].cell.cathode[4].X[4]", 1,\
 5, 7861, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.portB[1].X_outflow[5]",\
 "Mass fractions of exiting fluid [kg/kg]", "stack.subStack[3].cell.cathode[4].X[5]", 1,\
 5, 7862, 4)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.q[1].T", \
"Port temperature [K|degC]", "stack.subStack[3].cathode_channel.channel.T_wall[1]", 1,\
 5, 10155, 4)
DeclareVariable("stack.subStack[3].cathode_channel.channel.q[1].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.q[2].T", \
"Port temperature [K|degC]", "stack.subStack[3].cathode_channel.channel.T_wall[2]", 1,\
 5, 10156, 4)
DeclareVariable("stack.subStack[3].cathode_channel.channel.q[2].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.q[3].T", \
"Port temperature [K|degC]", "stack.subStack[3].cathode_channel.channel.T_wall[3]", 1,\
 5, 10157, 4)
DeclareVariable("stack.subStack[3].cathode_channel.channel.q[3].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("stack.subStack[3].cathode_channel.channel.q[4].T", \
"Port temperature [K|degC]", "stack.subStack[3].cathode_channel.channel.T_wall[4]", 1,\
 5, 10158, 4)
DeclareVariable("stack.subStack[3].cathode_channel.channel.q[4].Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareAlias2("WaterSource.massFlowBoundary.m_flow_par.y", "Value of Real output [kg/s]",\
 "WaterSource.massFlowBoundary.m_flow", 1, 5, 11797, 1024)
DeclareAlias2("WaterSource.massFlowBoundary.V_flow_par.y", "Value of Real output [m3/s]",\
 "WaterSource.massFlowBoundary.V_flow", 1, 5, 11798, 1024)
DeclareAlias2("WaterSource.massFlowBoundary.T_in_par.y", "Value of Real output [K]",\
 "WaterSource.massFlowBoundary.T", 1, 5, 11799, 1024)
DeclareAlias2("WaterSource.massFlowBoundary.h_in_par.y", "Value of Real output [J/kg]",\
 "WaterSource.massFlowBoundary.h", 1, 5, 11800, 1024)
DeclareAlias2("WaterSource.massFlowBoundary.X_in_par[1].y", "Value of Real output [1]",\
 "WaterSource.massFlowBoundary.X[1]", 1, 5, 11801, 1024)
DeclareAlias2("NGSource.massFlowBoundary.m_flow_par.y", "Value of Real output [kg/s]",\
 "NGSource.massFlowBoundary.m_flow", 1, 5, 11835, 1024)
DeclareAlias2("NGSource.massFlowBoundary.V_flow_par.y", "Value of Real output [m3/s]",\
 "NGSource.massFlowBoundary.V_flow", 1, 5, 11836, 1024)
DeclareAlias2("NGSource.massFlowBoundary.T_in_par.y", "Value of Real output [K]",\
 "NGSource.massFlowBoundary.T", 1, 5, 11837, 1024)
DeclareAlias2("NGSource.massFlowBoundary.h_in_par.y", "Value of Real output [J/kg]",\
 "NGSource.massFlowBoundary.h", 1, 5, 11838, 1024)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[1].y", "Value of Real output [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[2].y", "Value of Real output [1]",\
 0.9469822574910066, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[3].y", "Value of Real output [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[4].y", "Value of Real output [1]",\
 0.05301774250899336, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[5].y", "Value of Real output [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[6].y", "Value of Real output [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("NGSource.massFlowBoundary.X_in_par[7].y", "Value of Real output [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("ATRAirSource.massFlowBoundary.m_flow_par.y", "Value of Real output [kg/s]",\
 "ATRAirSource.massFlowBoundary.m_flow", 1, 5, 11892, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.V_flow_par.y", "Value of Real output [m3/s]",\
 "ATRAirSource.massFlowBoundary.V_flow", 1, 5, 11893, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.T_in_par.y", "Value of Real output [K]",\
 "ATRAirSource.massFlowBoundary.T", 1, 5, 11894, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.h_in_par.y", "Value of Real output [J/kg]",\
 "ATRAirSource.massFlowBoundary.h", 1, 5, 11895, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.X_in_par[1].y", "Value of Real output [1]",\
 "ATRAirSource.massFlowBoundary.X[1]", 1, 5, 11896, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.X_in_par[2].y", "Value of Real output [1]",\
 "ATRAirSource.massFlowBoundary.X[2]", 1, 5, 11897, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.X_in_par[3].y", "Value of Real output [1]",\
 "ATRAirSource.massFlowBoundary.X[3]", 1, 5, 11898, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.X_in_par[4].y", "Value of Real output [1]",\
 "ATRAirSource.massFlowBoundary.X[4]", 1, 5, 11899, 1024)
DeclareAlias2("ATRAirSource.massFlowBoundary.X_in_par[5].y", "Value of Real output [1]",\
 "ATRAirSource.massFlowBoundary.X[5]", 1, 5, 11900, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.p_par.y", "Value of Real output [Pa]",\
 "exhaustSink.pressureBoundary.p", 1, 5, 11932, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.T_in_par.y", "Value of Real output [K]",\
 "exhaustSink.pressureBoundary.T", 1, 5, 11933, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.h_in_par.y", "Value of Real output [J/kg]",\
 "exhaustSink.pressureBoundary.h", 1, 5, 11934, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.X_in_par[1].y", "Value of Real output [1]",\
 "exhaustSink.pressureBoundary.X[1]", 1, 5, 11935, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.X_in_par[2].y", "Value of Real output [1]",\
 "exhaustSink.pressureBoundary.X[2]", 1, 5, 11936, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.X_in_par[3].y", "Value of Real output [1]",\
 "exhaustSink.pressureBoundary.X[3]", 1, 5, 11937, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.X_in_par[4].y", "Value of Real output [1]",\
 "exhaustSink.pressureBoundary.X[4]", 1, 5, 11938, 1024)
DeclareAlias2("exhaustSink.pressureBoundary.X_in_par[5].y", "Value of Real output [1]",\
 "exhaustSink.pressureBoundary.X[5]", 1, 5, 11939, 1024)
EndNonAlias(17)
PreNonAliasNew(18)
