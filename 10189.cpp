#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin >> a >> b){
        if(a==0 || b==0) break;
        char fA[a][b];

        //replacing value array
        int nfA[a][b];

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin >> fA[i][j];

                //replacing field
                if(fA[i][j] == '*') nfA[i][j] = -1;
                else{
                    int p = 0;
                    nfA[i][j] = p;
                    if(fA[i][j-1] == '*'){
                        nfA[i][j] += 1; //left
                    }
                    if(fA[i][j+1] == '*'){
                        nfA[i][j] += 1; //right
                    }
                    if(fA[i-1][j] == '*'){
                        nfA[i][j] += 1; //up
                    }
                    if(fA[i+1][j] == '*'){
                        nfA[i][j] += 1; //down
                    }

                    if(fA[i-1][j-1] == '*'){
                         nfA[i][j] += 1; //left-up
                    }
                    if(fA[i-1][j+1] == '*'){
                         nfA[i][j] += 1; //right-up
                    }
                    if(fA[i-1][j-1] == '*'){
                           nfA[i][j] += 1; //left-down
                    }
                    if(fA[i+1][j+1] == '*'){
                           nfA[i][j] += 1; //right-down
                    }

                }
            }
        }

        //out put showing
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if(nfA[i][j] == -1){
                    cout << "*";
                    if(j==b-1) cout << endl;
                }else{
                    cout << nfA[i][j];
                    if(j==b-1) cout << endl;
                }
            }
        }
    }
    return 0;
}

