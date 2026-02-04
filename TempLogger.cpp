#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile;
    outFile.open("temperatures.txt");

    int days;
    double temperature;

    cout << "How many days of temperatures would you like to record? ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        cout << "Enter temperature for Day " << i << ": ";
        cin >> temperature;
        outFile << temperature << endl;
    }

    outFile.close();
    return 0;
}

