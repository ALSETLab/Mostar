within Mostar.Data2Model.Qizb_capacitive;
record avr =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.Qizb_capacitive.avr)
  "initialization of all parameters on GENSAE";
