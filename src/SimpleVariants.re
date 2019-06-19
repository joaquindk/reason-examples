type colors =
  | White
  | Green
  | Red
  | Blue
  | Black;

let colorToRgb = (color: colors) =>
  switch (color) {
  | Green => "#00ff00"
  | Red => "#ff0000"
  | Blue => "#0000ff"
  | White => "#ffffff"
  | Black => "#000000"
  };

