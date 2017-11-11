#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int arr[13],j;
        for (j=0;j<13;j++){
            cin >> arr[j];

        }
        int k,ok=0;
        for (k=0;k<13;k++){
            if (arr[k]==0){
                ok = 1;
            }
          }

          if(ok==0){
             cout <<"Set #" << i << ": Yes" << endl;
          }else cout <<"Set #" << i << ": No" << endl;
        }
return 0;
}
