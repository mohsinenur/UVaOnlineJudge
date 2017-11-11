#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int tb = a+b;
        int cnt=0;
        while(tb>=c){
            int nw = tb/c;
            int nx = tb%c;
            tb = nw + nx;
            cnt += nw;
        }
        cout << cnt << endl;
    }
    return 0;
}
