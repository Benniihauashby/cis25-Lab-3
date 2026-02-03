#include <iostream>
using namespace std;

int sum = 0;
int n = 0;

int main() {
    while (n >= 0) {
        cout << "Enter a positve number to add to the sum, or a negative number to quit: ";
        cin >> n;
        if (n >= 0){
            sum = sum + n;
        }
    }
    cout << "The final sum is: " << sum << endl;

    return 0;
    }
