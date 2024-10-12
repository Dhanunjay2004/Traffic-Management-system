#include <iostream>
#include <string>

using namespace std;

class TrafficLight {
private:
    enum State { RED, GREEN, YELLOW };
    State currentState;

public:
    TrafficLight() : currentState(RED) {}

    void changeLight() {
        switch (currentState) {
            case RED: currentState = GREEN; break;
            case GREEN: currentState = YELLOW; break;
            case YELLOW: currentState = RED; break;
        }
    }

    string getCurrentState() {
        switch (currentState) {
            case RED: return "Red Light: Stop!";
            case GREEN: return "Green Light: Go!";
            case YELLOW: return "Yellow Light: Caution!";
        }
        return "";
    }
};

int main() {
    TrafficLight light;
    string command;

    while (true) {
        cout << light.getCurrentState() << endl;

        cout << "Enter 'c' to change light or 'q' to quit: ";
        cin >> command;

        if (command == "c") {
            light.changeLight();
        } else if (command == "q") {
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
