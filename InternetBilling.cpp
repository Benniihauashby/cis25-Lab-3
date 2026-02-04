#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char letter;
    int hours;
    double monthlyBill, ovrCharge = 0.0;
    cout << "-----------------MENU----------------" << endl;
    cout << "Package A: For $9.95 per month, 10 hours of access are provided. Additional hours are $2.00 per hour." << endl << endl;
    
    cout << "Package B: For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour." << endl << endl;
    
    cout << "Package C: For $19.95 per month, unlimited access is provided." << endl << endl;
    
    cout << "Please enter the desired package: ";
    cin >> letter;
    
    if (toupper(letter) == 'A' || toupper(letter) == 'B' || toupper(letter) == 'C'){
        
        cout << "Enter the number of hours used: ";
        cin >> hours;
        
        if (hours < 0 || hours > 744){
            cout << "Please enter a valid number of hours and restart the program." << endl;
            return -1;
        }
        
        if (toupper(letter) == 'A'){
            if (hours > 10){
                ovrCharge = (hours - 10) * 2;
            }
            
            monthlyBill = 9.95 + ovrCharge;
        }
        
        else if (toupper(letter) == 'B'){
            if (hours > 20){
                ovrCharge = (hours - 20) * 1;
            }
            
            monthlyBill = 14.95 + ovrCharge;
        }
        
        else{
            monthlyBill = 19.95;
        }
    }
    else{
        cout << "Please enter a valid package and restart the program." << endl;
        return -1;
    }
    
    cout << "Your total monthly bill is: " << fixed << setprecision(2) << monthlyBill << endl;
}
