within Mostar.Data2Model.IG_Lim_Capacitive;
record init =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.AVR_IG_Lim_Capacitive.init)
  "initialization of all parameters on GENSAE";
