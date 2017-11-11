#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int p;
        bool slv = true;
        for(int j=1; j<=13; j++){
            cin >> p;
            if(p==0) slv = false;
        }
        if(slv == true) cout << "Set #" << i << ": Yes" << endl;
        else cout << "Set #" << i << ": No" << endl;
    }
    return 0;
}
