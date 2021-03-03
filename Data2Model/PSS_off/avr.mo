within Mostar.Data2Model.PSS_off;
record avr =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PSS_off.avr) "initialization of all parameters on GENSAE";
