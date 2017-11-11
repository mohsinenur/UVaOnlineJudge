#include<iostream>
using namespace std;

int main()
{
    double a, b;
    while(cin >> a >> b)
    {
        if(a == 0)
            break;
        double c = a+b;

        cout << c << endl;
    }
    return 0;
}
