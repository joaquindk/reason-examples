module type VehicleDefinition = {
    type family;
    let maxSpeed: int;
  };
  
module Car: VehicleDefinition = {
    type family = SUV | Coupe | Berlina;
    let maxSpeed = 300;
};

