#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    while(cin>>y && y!=-1){
        int tb=0,i;
        long long tbA[y+2];
        tbA[0] = 1;
        tbA[1] = 2;
        for(i=2; i<=y; i++){
            tbA[i] = tbA[i-1]+tbA[i-2]+1;
        }
        if(y==0) cout << 0 << " " << 1 << endl;
        else cout << tbA[i-2] << " " << tbA[i-1] << endl;
    }
    return 0;
}
