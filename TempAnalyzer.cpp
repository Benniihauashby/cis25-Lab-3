#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("temperatures.txt");

    double temperature;
    double sum = 0.0;
    int count = 0;

    while (inFile >> temperature) {
        sum += temperature;
        count++;
    }

    inFile.close();

    double average = sum / count;

    cout << "Temperatures analyzed for " << count << " days." << endl;
    cout << "The average temperature was: " << average << endl;

    return 0;
}

