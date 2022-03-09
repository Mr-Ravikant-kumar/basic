#include<iostream>
using namespace std;
int main()
{
    long int n1, n2,sum,sub,div,mul,rem;
    cout << "enter the first and second number";
    cin >> n1>>n2 ;
    
if (n1>n2)
{
    sum = n1 + n2;
    mul = n1 * n2;
    sub = n1 - n2;
    div = n1 / n2;
    rem = n1 % n2;
}
else{
    if(n1<n2)
    {
        swap(n1, n2);
        sum = n1 + n2;
        mul = n1 * n2;
        sub = n1 - n2;
        div = n1 / n2;
        rem = n1 % n2;
    }
}
    cout << "\nsum=" << sum<< "\ndiffence="<<sub<<"\nmultiplication="<<mul<<"\ndivision="<<div<<"\nremendar="<<rem;
}