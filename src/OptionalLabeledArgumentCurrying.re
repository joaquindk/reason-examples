/*let curriedAddFn = (~a, ~b=0) => a + b; 

let addFive = curriedAddFn(~a=5);

Js.log(string_of_int(addFive));
Js.log(string_of_int(addFive));
*/

let curriedAddFn = (~a, ~b=0, ()) => a + b; 

let addFive = curriedAddFn(~a=5, ());

Js.log(addFive);
Js.log(curriedAddFn(~a=5, ~b=5, ()));
