#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,h,w;
    while(cin >> n >> b >> h >> w){
        int htlb;
        int bd,htlcst[230],cst=0,lnt=0;
        for(int i=1; i<=h; i++){
            cin >> htlb;
            for(int j=1; j<=w; j++){
                cin >> bd;
                if(bd>=n){
                    cst = n*htlb;
                    if(cst <= b)
                        htlcst[lnt++] = cst;
                }
            }
        }
        if(lnt == 0) cout << "stay home" << endl;
        else{
            sort(htlcst,htlcst+lnt);
            cout << htlcst[0] << endl;
        }
    }
    return 0;
}
