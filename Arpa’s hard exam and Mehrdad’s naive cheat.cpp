#include<iostream>

using namespace std;



int main()
{
    int a, b;
    cin >> a;
    if (a == 0)
    {
        cout << 1;
        return 0;
    }
    a %= 4;
    if (a == 1)
        cout << 8;
    else if (a == 2)
        cout << 4;
    else if (a == 3)
        cout << 2;
    else if (a == 0)
        cout << 6;
    return 0;
}
