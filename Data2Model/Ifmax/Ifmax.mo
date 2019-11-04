within Mostar.Data2Model.Ifmax;
record Ifmax =
   Mostar.Records.systemData (redeclare replaceable record
                         Machine =
       Mostar.Data.AVR_Ifmax.init)
      "initialization of all parameters on GENSAE";
