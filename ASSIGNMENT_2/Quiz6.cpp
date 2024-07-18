#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function to simulate the traffic light
void trafficLightSimulation(int duration) {
    int timePassed = 0;
    while (timePassed < duration) {
        int currentTime = timePassed % 30; // Cycle every 30 seconds

        switch (currentTime) {
            case 0 ... 14: // Red light for 15 seconds
                cout << "Red Light" << endl;
                break;
            case 15 ... 19: // Yellow light for 5 seconds
                cout << "Yellow Light" << endl;
                break;
            case 20 ... 29: // Green light for 10 seconds
                cout << "Green Light" << endl;
                break;
        }

        // Wait for 1 second
        this_thread::sleep_for(chrono::seconds(1));
        timePassed++;
    }
}

int main() {
    int simulationDuration;
    cout << "Enter the duration of the traffic light simulation in seconds: ";
    cin >> simulationDuration;

    trafficLightSimulation(simulationDuration);

    return 0;
}
