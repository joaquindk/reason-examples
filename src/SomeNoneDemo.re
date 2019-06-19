let x = Some(10);

let printOptionalInt = (value: option(int)) => {
	switch (value) {
      | Some(currentVal) => string_of_int(currentVal)
      | None => "empty"
	};
};



Js.log(printOptionalInt(x));
