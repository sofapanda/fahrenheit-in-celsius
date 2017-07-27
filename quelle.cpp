#include <iostream>;

using namespace std;

int main ()
{
    // Die Variablen
    
    float fahrenheit = 50; // Den den umzurechnenden Wert eintragen
    float celsius = 0;
    
    // Die formel
    
    celsius = ((fahrenheit - 32) * 5 ) / 9;
    
    cout << fahrenheit << " Grad Fahrenheit entspricht " << celsius << " Grad Celsius" << endl;
    
    return 0;
}
