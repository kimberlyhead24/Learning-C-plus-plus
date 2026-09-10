#include <iostream>
using namespace std;

int main() {
    double temperature;
    
    // Get temperature input
    cout << "Enter temperature: ";
    cin >> temperature;
    
    // TODO: Implement temperature classification using conditions
    // Hint: Use nested ternary operator to classify temperatures
    // Cold: < 10, Mild: 10-25 (inclusive), Hot: > 25
    string category = (temperature < 10) ? "Cold"
                    : (temperature < 26) ? "Mild"
                    : "Hot";
    
    // Display result
    cout << category << endl;
    
    return 0;
}
