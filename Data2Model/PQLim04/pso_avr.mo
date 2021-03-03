within Mostar.Data2Model.PQLim04;
record pso_avr =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim04.pso_avr) "initialization of all parameters on GENSAE";
