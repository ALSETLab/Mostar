within Mostar.Data2Model.IG_Lim_Capacitive;
record avr_gen =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.AVR_IG_Lim_Capacitive.avr_gen)
  "initialization of all parameters on GENSAE";
