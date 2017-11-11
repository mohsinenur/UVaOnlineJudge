#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cout << endl;
        int a,b;
        cin >> a >> b;
        int aA[a],bA[b], bAA[b], baA[b], baaA[b];
        for(int j=0; j<a; j++){
            cin >> aA[j];
        }
        for(int k=0; k<b; k++){
            cin >> bA[k] >> bAA[k];
            baA[k] = bA[k]; baaA[k]= bAA[k];
        }

        int sum=0, cnt=0, mx=-1, nm, p, h;
        bool ck = false;
        bool ckk = false;
        for(p=0; p<=a; p++){
            if(ck == true) p--;
            for(int q=0; q<b; q++){
                if(baA[q]== p){
                    nm = baaA[q];
                    if(aA[nm] > mx){
                        mx = aA[nm];
                        h = nm;
                    }
                    ckk = true;
                }
            }

            if(mx>-1) sum+=mx;
            p=h;
            cout << "Case " << p << ": " << sum << " " << h << endl;
            mx = -1;
            ck = true;
            if(ckk == false) break;
        }
    }
    return 0;
}
