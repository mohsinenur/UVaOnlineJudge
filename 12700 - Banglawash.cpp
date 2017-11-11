#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tC;
    cin >> tC;
    for(int j=1; j<=tC; j++){
        int N,lnt,b=0,w=0,t=0,a=0;
        cin >> N;
        char wrd[N];
        cin >> wrd;
        lnt = strlen(wrd);
        for(int i=0; wrd[i]; i++){
            if(wrd[i] == 'B'){
                b++;
            }else if(wrd[i] == 'W'){
                w++;
            }else if(wrd[i] == 'T'){
                t++;
            }else if(wrd[i] == 'A'){
                a++;
            }
        }
        if(b!=0 && b==(lnt-a)) cout << "Case " << j << ": BANGLAWASH" << endl;
        else if(w!=0 && w==(lnt-a)) cout << "Case " << j << ": WHITEWASH" << endl;
        else if(a==lnt) cout << "Case " << j << ": ABANDONED" << endl;
        else if(b>w) cout << "Case " << j << ": BANGLADESH " << b << " - " << w << endl;
        else if(w>b) cout << "Case " << j << ": WWW " << w << " - " << b << endl;
        else if(b==w) cout << "Case " << j << ": DRAW " << b << " " << t << endl;
    }
    return 0;
}
