let concatenateLength = (str): string =>
  str ++ " " ++ string_of_int(String.length(str));

let flipAroundNumChars = (str, numChars): string => {
  let flippedNumChars =
    str
    ->String.sub(0, numChars)
    ->Js.String.split("", _)
    ->Js.Array.reverseInPlace
    ->Js.Array.joinWith("", _);

  flippedNumChars ++ String.sub(str, numChars, String.length(str) - numChars);
};

let result = flipAroundNumChars(concatenateLength("Hello world"), 4);

Js.log(result);
Js.log("Hello world"-> concatenateLength -> flipAroundNumChars(4));
