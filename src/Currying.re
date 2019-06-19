let curriedAddFn = (a, b) => a + b; 

let addFive = curriedAddFn(5);

Js.log(addFive(10));
Js.log(addFive(20));
