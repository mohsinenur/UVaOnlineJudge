#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin >> t && t>0){
        int tA[t];
        for(int i=0; i<t; i++){
            cin >> tA[i];
        }
        sort(tA, tA+t);
        for(int j=0; j<t; j++){
            if(j == t-1)
                cout << tA[j] << endl;
            else cout << tA[j] << " ";
        }
    }
    return 0;
}
