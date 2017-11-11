#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        int x[n];
        int mx,mn;
        for(int j=0; j<n; j++){
            cin >> x[j];
            if(j==0){
                mx = x[0];
                mn = x[0];
            }
            if(x[j]>=mx) mx = x[j];
            if(x[j]<=mn) mn = x[j];
        }
        cout << (mx-mn)*2 << endl;
    }
    return 0;
}
