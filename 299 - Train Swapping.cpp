#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int tc,cnt,c=0;
        cin >> tc;
        cnt = tc;
        int tA[tc];
        for(int j=0; j<tc; j++){
            cin >> tA[j];
        }

        top:
        for(int k=0; k<tc; k++){
            if(tA[k] > tA[k+1] && k<tc-1){
                swap(tA[k],tA[k+1]);
                cnt--;
                c++;
            }
        }

        if(cnt != tc){
            cnt = tc;
            goto top;
        }

        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
