trait Phone {
    fn call(&self);
}

trait Tablet {
    fn play(&self);
}

trait Factory<P: Phone, T: Tablet> {
    fn newPhone(&self) -> P;
    fn newTablet(&self) -> T;
}

struct IPhone;
impl Phone for IPhone {
    fn call(&self) {
        println!("I'm a hipster, so I use IPhone!");
    }
}

struct IPad;
impl Tablet for IPad {
    fn play(&self) {
        println!("Just playing some games in an IPad");
    }
}

struct IOSFactory;
impl Factory<IPhone, IPad> for IOSFactory {
    fn newPhone(&self) -> IPhone {
        return IPhone;
    }
    fn newTablet(&self) -> IPad {
        return IPad;
    }
}

struct Huawei;
impl Phone for Huawei {
    fn call(&self) {
        println!("Look! This thing's indestructible!");
    }
}

struct GooglePlay;
impl Tablet for GooglePlay {
    fn play(&self) {
        println!("I'm tired of Angry Birds...");
    }
}

struct AndroidFactory;
impl Factory<Huawei, GooglePlay> for AndroidFactory {
    fn newPhone(&self) -> Huawei {
        return Huawei;
    }
    fn newTablet(&self) -> GooglePlay {
        return GooglePlay;
    }
}

fn main() {
    let ios = IOSFactory;
    let android = AndroidFactory;
    let phone = ios.newPhone();
    phone.call();
    let phone = android.newPhone();
    phone.call();
    let tablet = ios.newTablet();
    tablet.play();
    let tablet = android.newTablet();
    tablet.play();
}
