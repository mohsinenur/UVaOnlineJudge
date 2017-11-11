#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a>b && c<b || c>b && a<b)
            cout << "Case " << i <<": " << b << endl;
        else if(a>c && b<c || b>c && a<c)
            cout << "Case " << i <<": " << c << endl;
        else if(b>a && c<a || c>a && b<a)
            cout << "Case " << i <<": " << a << endl;
    }

    return 0;
}
