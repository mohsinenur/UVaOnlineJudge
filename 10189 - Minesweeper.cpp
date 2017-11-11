#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin >> a >> b){

        if(a==0 || b==0) break;
        char fA[a+5][b+5];

        //replacing value array
        int nfA[a+5][b+5];

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin >> fA[i][j];

                //replacing field
                if(fA[i][j] == '*') nfA[i][j] = -1;
                else{
                    int p = 0;
                    nfA[i][j] = p;
                    if(j!=0){
                        if(fA[i][j-1] == '*'){
                             nfA[i][j] += 1; //left done
                        }
                    }
                    if(j!=b-1){
                        cout << fA[i][j+1];
                        if(fA[i][j+1] == '*'){
                             nfA[i][j] += 1; //right
                        }
                    }
                    if(i!=0){
                        if(fA[i-1][j] == '*') {
                            nfA[i][j] += 1; //up ... done
                        }
                    }
                    if(i!=a-1){
                        if(fA[i+1][j] == '*') nfA[i][j] += 1; //down
                    }

                    if(i!=0 || j!=0){
                        if(fA[i-1][j-1] == '*') {
                            nfA[i][j] += 1; //left-up ... done

                        }
                    }
                    if(i!=0 || j!=b-1){
                        if(fA[i-1][j+1] == '*') nfA[i][j] += 1; //right-up
                    }
                    if(i!=a-1 || j!=0){
                        if(fA[i+1][j-1] == '*'){
                                 nfA[i][j] += 1; //left-down
                            cout << "hi";
                        }
                    }
                    if(i!=a-1 || j!=b-1){
                        if(fA[i+1][j+1] == '*'){
                             nfA[i][j] += 1; //right-down
                        }
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
