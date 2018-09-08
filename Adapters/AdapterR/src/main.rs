trait Ship {
    fn turnOn (&self);
    fn turnOff (&self);
    fn fireCannon (&self);
    fn sail (&self);
}

struct VaporShip;

impl Ship for VaporShip {
    fn turnOn (&self) {
        println!("VaporShip turning on.")
    }
    fn turnOff (&self) {
        println!("VaporShip turning off.")
    }
    fn fireCannon (&self) {
        println!("VaporShip firing cannon.")
    }
    fn sail (&self) {
        println!("VaporShip sailing to the sunset.")
    }
}

trait MotorShip {
    fn ignition (&self);
    fn on (&self);
    fn off (&self);
    fn launch (&self);
    fn sail (&self);
}

struct CruiserShip;

impl MotorShip for CruiserShip {
    fn ignition (&self) {
        println!("Turning Cruiser's ignition.")
    }
    fn on (&self) {
        println!("Turning on the Cruiser.")
    }
    fn off (&self) {
        println!("Turning off the Cruiser.")
    }
    fn launch (&self) {
        println!("Launching the Cruiser's cannonball.")
    }
    fn sail (&self) {
        println!("The Cruiser is sailing to the sunset.")
    }
}

struct ShipAdapter {
    ship : CruiserShip
}

impl Ship for ShipAdapter {
    fn turnOn (&self) {
        self.ship.ignition();
        self.ship.on();
    }
    fn turnOff (&self) {
        self.ship.off();
    }
    fn fireCannon (&self) {
        self.ship.launch();
    }
    fn sail (&self) {
        self.ship.sail();
    }
}

fn pilot<S: Ship>(ship: &S) {
    ship.turnOn();
    ship.turnOff();
    ship.fireCannon();
    ship.sail();
    print!("\n");
}

fn main() {
    let davyJones = VaporShip;
    println!("Sailing with Davy Jones!");
    pilot(&davyJones);
    let titanic = CruiserShip;
    let shipAdapter = ShipAdapter {
        ship: titanic
    };
    println!("Sailing with the Titanic!");
    pilot(&shipAdapter);
}
