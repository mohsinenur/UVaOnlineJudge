#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    while(cin >> g && g!=0){
        cin.ignore(1);
        char gw[10000];
        int ln;
        cin >> gw;
        ln = strlen(gw)/g;
        for(int i=0; i<ln*g; i=i+ln){
            for(int j=i+ln-1; j>=i; j-- ){
                cout << gw[j];
            }
        }
        cout << endl;
    }
    return 0;
}
