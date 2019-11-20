within Mostar.Data2Model.IG_Lim_Inductive;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.AVR_IG_Lim_Inductive.init)
  "initialization of all parameters on GENSAE";
