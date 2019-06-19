/* TIPOS MUTABLES */

let algo = ref(5);

algo := algo^ + 5;

Js.log3("Tiene que ser 10", algo, algo^);

/* ARRAYS (MUTABLES) */

let myArr = [|1, 2, 3|];
let newArr = myArr[0] = 5;

Js.log(myArr);

/** Destructuring */
type structType = {
    a: int,
    b: int,
};

let myStruct = {a: 5, b: 10};

let {a, b} = myStruct;

Js.log2(a, b);


/* LISTAS INMUTABLES */

let myList = [1, 2, 3];

Js.log(Belt.List.get(myList, 0));

Js.log(Belt.List.makeBy(10, i => float_of_int(i) ** 2.));

Js.log2("These are equal", [1, 2, 3] == [1, 2, 3]);

/* TODOS LOS BLOQUES RETORNAN UNA EXPRESION */

let resultado = if(4 > 5) "Impossible" else "Winner";

Js.log(resultado);

/* DESTRUCTURING */

let [|first, second, third|] = myArr;

Js.log2(first, second);

/* PARAMETROS ETIQUETADOS */

let divideFn = (~dividendo, ~divisor) => dividendo / divisor;

Js.log(divideFn(~divisor=2, ~dividendo=10));
