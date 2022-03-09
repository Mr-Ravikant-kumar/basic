#include<iostream>
using namespace std;
int main()
{
    
    int a, b, temp;
    cout << "enter the first number";
    cin >> a;
    cout << "enter the second number";
    cin >> b;
    cout << "before swapping\na=" << a << "\nb=" << b;
    /*  temp = a;
      a = b;
      b = temp;
    cout << "swapping of two number is \na="<<a<<"\nb="<<b;*/
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nafter swapping\na=" << a<<"\nb=" << b;
}
