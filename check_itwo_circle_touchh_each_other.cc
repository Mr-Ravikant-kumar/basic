#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1, y1, r1, x2, r2, y2;
    cin >> x1 >> y1 >> r1 >> x2 >> r2 >> y2;
    int dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    if (dis>(r1+r2))
    {
        cout << "0";

    }
    else
    {
        cout << "1";
    }
}