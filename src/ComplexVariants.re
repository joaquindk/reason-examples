type familia =
  | Padre(string, int)
  | Madre(string)
  | Hijo(string, int, bool)
  | Hija(string, int, bool);

let familiaToStr = (miembroFamiliar: familia) =>
  switch (miembroFamiliar) {
  | Padre(nombre, edad) =>
    "El padre se llama "
    ++ nombre
    ++ " y tiene "
    ++ string_of_int(edad)
    ++ {js| años|js}
  | Madre(nombre) => "La madre se llama " ++ nombre
  | Hijo(nombre, edad, esPrimero) =>
    "El " ++ (esPrimero ? "primer " : "") ++ "hijo se llama "
    ++ nombre
    ++ " y tiene "
    ++ string_of_int(edad)
    ++ {js| años|js}
  | Hija(nombre, edad, esPrimera) =>
    "La " ++ (esPrimera ? "primera " : "") ++ "hija se llama "
    ++ nombre
    ++ " y tiene "
    ++ string_of_int(edad)
    ++ {js| años|js}
  };

Js.log(familiaToStr(Padre("Juan", 30)));
Js.log(familiaToStr(Madre("Andrea")));
Js.log(familiaToStr(Hija("Clara", 9, true)));

