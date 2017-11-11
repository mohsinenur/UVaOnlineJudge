#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],w1[100],w2[100];
    while(cin.getline(s,10000)){
        int cntw1 = 0,cntw2=0;
        for(int i=0; i<strlen(s); i++){
            if(s[i] != ' '){
                w1[i] = s[i];
                cntw1++;
            }
            if(s[i] == ' '){
                if(cntw1>cntw2){
                    for(int k=0; w1[k]; k++){
                        w2[k] = w1[k];
                    }
                }else{
                    for(int k=0; w1[k]; k++){
                        w1[k] = '\n';
                    }
                    cntw1 = 0;
                }
            }
            if(w1[5] == 'E-N-D'){
                for(int k=0; w2[k]; k++){
                    cout << w2[k];
                }
                cout << endl;
                break;
            }

        }
    }

    return 0;
}
