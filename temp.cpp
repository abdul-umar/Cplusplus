#include <iostream>
using namespace std;
int main()
{
    float frh, cel;
	cout << " Convert temperature in Fahrenheit to Celsius : \n";
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : \n";
    cout << " The temperature in Celsius : \n";
    return 0;
}
