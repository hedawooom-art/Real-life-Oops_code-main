#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Sensor {
private:
    string id;
    float moisture;
    string time;

public:

    // Constructor
    Sensor(string i, float m, string t) {
        id = i;
        moisture = m;
        time = t;
    }

    // Update sensor reading
    void updateReading(float m, string t) {
        moisture = m;
        time = t;
    }

    // Display sensor data
    void showData() const {
        cout << "Sensor ID: " << id << endl;
        cout << "Moisture Level: " << moisture << "%" << endl;
        cout << "Recorded At: " << time << endl;
        cout << "------------------------" << endl;
    }
};


int main() {

    vector<Sensor> sensors;

    // Add sensors using push_back instead of emplace_back
    sensors.push_back(Sensor("A201", 48.6, "07:30 AM"));
    sensors.push_back(Sensor("A202", 55.4, "07:30 AM"));
    sensors.push_back(Sensor("A203", 41.2, "07:30 AM"));

    cout << "===== FARM SENSOR DATA =====" << endl;

    // C++98-compatible loop
    vector<Sensor>::iterator s;

    for (s = sensors.begin(); s != sensors.end(); ++s) {
        s->showData();
    }

    // Update first sensor
    sensors[0].updateReading(51.3, "08:30 AM");

    cout << "\n===== UPDATED SENSOR DATA =====" << endl;

    sensors[0].showData();

    return 0;
}
