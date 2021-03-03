within Mostar.Data2Model.PQLim04;
record pso_gen =
   Mostar.Records.systemData (redeclare replaceable record Machine =
       Mostar.Data.PQLim04.pso_generator)
  "initialization of all parameters on GENSAE";
