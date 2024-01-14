#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    string a;
    cout << "enter string of  length less than 9";
    cin >> a;
    int z = 0;

    for (int i = 0; i < a.length(); i++)
    {

        int b = a[i] - 48;

        double d = (a.length() - 1 - i);

        double c = pow(10, d);

        z = z + (b * c);
    }

    cout << z;
}