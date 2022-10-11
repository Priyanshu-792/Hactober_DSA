#include <iostream>
using namespace std;
int main() {
float a, b, c;
cout<<"Enter First Value:";
cin >> a;
cout<<"Enter Second Value:";
cin >> b;
cout<<"Enter Third Value:";
cin >> c;
if(a >= b && a >= c)
    cout << "Largest number: " << a;
if(b >= a && b >= c)
    cout << "Largest number: " << b;
if(c >= a && c >= b)
    cout << "Largest number: " << c;
return 0;
}
