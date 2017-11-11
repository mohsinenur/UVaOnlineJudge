#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n,k,p;
        cin >> n >> k >> p;
        if((p%n == 0))
            cout << "Case " << i << ": " << k << endl;
        else if((p+k) > n)
        {
            if(((p+k)%n) == 0)
                cout << "Case " << i << ": " << n << endl;
            else
                cout << "Case " << i << ": " << (p+k)%n << endl;
        }
        else if(p+k <= n)
        {
            cout << "Case " << i << ": " << p+k << endl;
        }
    }
    return 0;
}
