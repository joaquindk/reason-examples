let dogAge = (~multiplicationFactor=7, ~humanAge, () ) => humanAge * multiplicationFactor;

let humanAge = 5;

Js.log(dogAge(~humanAge, ()))
