#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter the first number: ";
    cin >> n1;
    
    cout << "enter the second number: ";
    cin >> n2;
    cout << "addition of two number is :" << (n1 + n2) %12 << " hour.";
}