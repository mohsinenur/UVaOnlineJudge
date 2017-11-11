#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin >> t){
        for(int i=1; i<=t; i++)
        {
            double f,ar,anml,anvi,ttl=0;
            cin >> f;
            for(int j=1; j<=f; j++){
                cin >> ar >> anml >> anvi;
                double bnf = (((ar/anml)*anml)*anvi);
                ttl+=bnf;
            }
            cout << ttl << endl;
        }
    }
    return 0;
}
