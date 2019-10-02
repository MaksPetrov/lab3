#include <iostream>

using namespace std;

int main()
{
    int a, t, s;
    cout << "a = ";
    cin >> a;
    t = a*a;
    s = t*a;
    a = s*t;
    a = a*a*a;
    cout << "a^15 = " << a;
}
