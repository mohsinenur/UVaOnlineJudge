#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned int b,p,m;
    while(cin >> b >> p >> m){

        cout << ((b%m)* mod(b,p,m))%m << endl;
    }
    return 0;
}
