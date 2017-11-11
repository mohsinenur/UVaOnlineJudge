#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n>0){
        for(int i=1; i<=n; i++){
            int x=0;
            for(int j=1; j<=n; j++){
                x = pow(j,3)-pow(i,3);
                if(x == n) cout << j << " " << i << endl;
                if(x<=0 || x>n) break;
            }
            if(x == n) break;
        }
    }
    return 0;
}
