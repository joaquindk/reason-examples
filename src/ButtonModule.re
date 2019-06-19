module Button = {
    type variant = Primary | Secondary;
  let sizePx = 200;
    let defaultText = "Click me!";

    module Border = {
    type visiblity = Visible | Hidden;
    let widthPx = 2;
    
    let prettyPrint = () => "Im a button of size " ++ string_of_int(sizePx)
    }
};

Js.log(Button.Border.widthPx);
Js.log(Button.Border.prettyPrint());

open Button;

Js.log(sizePx);
Js.log(Border.widthPx);

module ExitButton {
  include Button;
  let exitMessage = "Bye!";
};

Js.log(ExitButton.sizePx)
