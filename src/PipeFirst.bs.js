// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var $$String = require("bs-platform/lib/js/string.js");

function concatenateLength(str) {
  return str + (" " + String(str.length));
}

function flipAroundNumChars(str, numChars) {
  var flippedNumChars = $$String.sub(str, 0, numChars).split("").reverse().join("");
  return flippedNumChars + $$String.sub(str, numChars, str.length - numChars | 0);
}

var result = flipAroundNumChars(concatenateLength("Hello world"), 4);

console.log(result);

console.log(flipAroundNumChars(concatenateLength("Hello world"), 4));

exports.concatenateLength = concatenateLength;
exports.flipAroundNumChars = flipAroundNumChars;
exports.result = result;
/* result Not a pure module */
