within Mostar.Data2Model.IG_Lim_Inductive;
record PSO_generator =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.AVR_IG_Lim_Inductive.PSO_generator)
  "initialization of all parameters on GENSAE";
