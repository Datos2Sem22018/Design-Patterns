#include <iostream>
using namespace std;
class Engine{

public:
    void Start(){
        cout << "Method Start from Engine"<< endl;
    }

};

class Headlights{

public:
    void TurnOn(){
        cout << "Method TurnOn from Headlights"<< endl;
    }

};

//  That's the facade.
class Car{

private:
    Engine engine;
    Headlights headlights;

public:
    void TurnIgnitionKeyOn(){
        cout << "Method TurnIgnitionKeyOn from Car"<< endl;
        cout << "##############################"<< endl;
        headlights.TurnOn();
        engine.Start();
        cout << "##############################"<< endl;
    }

};

int main(){
    Car car;
    car.TurnIgnitionKeyOn();
    return 0;
}