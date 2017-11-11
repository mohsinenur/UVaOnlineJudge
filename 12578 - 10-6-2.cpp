#include<bits/stdc++.h>
//define pi = 3.14159265358979323846264
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        double ln,aR,aG;
        cin >> ln;
        aR = (2*ln)/10;
        aR = 3.14159265358*(aR*aR);
        aG = (ln*((6*ln)/10));
        cout << fixed;
        cout << setprecision(2) << aR << " " << aG-aR <<  endl;
    }
    return 0;
}
