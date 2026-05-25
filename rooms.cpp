#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Total number of doors
    const int total_doors = 1000;

    // Vector to store open doors
    vector<int> open_doors;

    // Only perfect squares remain open
    for (int i = 1; i * i <= total_doors; i++) {
        open_doors.push_back(i * i);
    }

    // Print total open doors
    cout << "Total number of doors open: "
         << open_doors.size() << endl;

    // Print open door numbers
    cout << "Doors left open are:" << endl;

    for (int door : open_doors) {
        cout << door << " ";
    }

    cout << endl;

    return 0;
}