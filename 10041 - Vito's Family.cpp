#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin >> t){
        for(int k=1; k<=t; k++){
            int r,x;
            cin >> r;
            int rArr[r];
            for(int i=0; i<r; i++){
                cin >> rArr[i];
            }
            //3 2 4 6
            int mn=0;
            sort(rArr, rArr+r);

            for(int j=1; j<r; j++){
                if(rArr[j]>rArr[j-1] || rArr[j]<rArr[j-1]){
                    mn+=abs(rArr[j]-rArr[j-1]);
                }
            }
            cout << mn << endl;
        }
    }
    return 0;
}
