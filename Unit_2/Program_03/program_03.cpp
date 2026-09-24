#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Base Class
class Vehicle {
protected:
    string id;
    string regNo;
    float fuel;

public:

    Vehicle(string i, string r) {
        id = i;
        regNo = r;
        fuel = 100.0;
    }

    void startEngine() const {
        cout << "Engine started for vehicle: " << id << endl;
    }

    void refuel(float amount) {
        fuel += amount;

        if (fuel > 100.0)
            fuel = 100.0;
    }

    virtual void displayInfo() const {
        cout << "ID: " << id
             << " | Registration: " << regNo
             << " | Fuel: " << fuel << "%" << endl;
    }

    virtual ~Vehicle() {
    }
};


// Truck Class
class Truck : public Vehicle {
    float capacity;

public:

    Truck(string i, string r, float c)
        : Vehicle(i, r), capacity(c) {
    }

    virtual void displayInfo() const {
        cout << "Type: Truck" << endl;

        Vehicle::displayInfo();

        cout << "Load Capacity: "
             << capacity << " tons" << endl;
    }
};


// Delivery Van Class
class DeliveryVan : public Vehicle {
    int storage;

public:

    DeliveryVan(string i, string r, int s)
        : Vehicle(i, r), storage(s) {
    }

    virtual void displayInfo() const {
        cout << "Type: Delivery Van" << endl;

        Vehicle::displayInfo();

        cout << "Storage Capacity: "
             << storage << " kg" << endl;
    }
};


// Bike Class
class Bike : public Vehicle {
    bool deliveryBox;

public:

    Bike(string i, string r, bool box)
        : Vehicle(i, r), deliveryBox(box) {
    }

    virtual void displayInfo() const {
        cout << "Type: Delivery Bike" << endl;

        Vehicle::displayInfo();

        cout << "Delivery Box: "
             << (deliveryBox ? "Available" : "Not Available")
             << endl;
    }
};


int main() {

    // C++98: use vector of Vehicle pointers
    vector<Vehicle*> fleet;


    // Create vehicles
    fleet.push_back(
        new Truck("V101", "MH14-XY-4582", 12.5)
    );

    fleet.push_back(
        new DeliveryVan("V202", "MH14-PQ-6734", 65)
    );

    fleet.push_back(
        new Bike("V303", "MH14-ZA-9216", true)
    );


    cout << "===== VEHICLE FLEET =====" << endl;


    // C++98 compatible loop
    vector<Vehicle*>::iterator v;

    for (v = fleet.begin(); v != fleet.end(); ++v) {

        (*v)->startEngine();

        (*v)->displayInfo();

        cout << endl;
    }


    // Delete dynamically created objects
    for (v = fleet.begin(); v != fleet.end(); ++v) {
        delete *v;
    }


    return 0;
}
