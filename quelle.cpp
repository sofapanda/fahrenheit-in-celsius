#include <iostream>;

using namespace std;

int main ()
{
    
    float fahrenheit = 50;
    float celsius = 0;
    
    // Die formel
    
    celsius = ((fahrenheit - 32) * 5 ) / 9;
    
    cout << celsius;
    
    return 0;
}
