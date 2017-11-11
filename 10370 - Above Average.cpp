#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        int nA[n], sum=0;
        for(int j=0; j<n; j++){
            cin >> nA[j];
            sum+=nA[j];
        }

        double avg = sum*1.0/n*1.0;
        int cnt =0;
        for(int k=0; k<n; k++){
            if(nA[k]>avg) cnt++;
        }

        cout << fixed;
        cout << setprecision(3) << cnt*100.0/n*1.0 << "%" <<  endl;
    }
    return 0;
}
