#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin >> t){
        int x[t];
        for(int i=0; i<t; i++){
            cin >> x[i];
        }
        int c,d,y[t];
        for(int k=1; k<t; k++){
            c = abs(x[k-1] - x[k]);
            y[k-1] = c;
        }
        sort(y,y+t);
        bool ck = true;
        int b;
        if(t-1>2){
            for(int j=1; j<t-1; j++){
                b = (y[j] - y[j-1]);
                if(b != 1) ck = false;
            }
        }else if(t == 2) {
            if(y[0] != 1) ck = false;
        }
        if(ck == true) cout << "Jolly" << endl;
        else if(ck == false) cout << "Not jolly" << endl;
    }
    return 0;
}
