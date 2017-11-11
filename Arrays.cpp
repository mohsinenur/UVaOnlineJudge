#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,m;
    cin >> a >> b >> k >> m;
    int aa[a];
    int ba[b];
    int ck=0, cm=0, cnt=0;
    for(int i=0; i<a; i++){
        cin >> aa[i];
    }

    sort(aa, aa+a);
    int mxk = aa[k-1];
    for(int j=0; j<b; j++){
        cin >> ba[j];
        if(ba[j] > mxk) cnt++;
    }

    if(cnt>=m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
