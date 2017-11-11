#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nA[60005];
    bool ck = false;
    bool pk = false;
    int p=0;
    while(cin >> nA[p]){

        if(nA[p]==0){
            for(int q=0; q<=p; q++){
                if(ck == false){
                cout << "PERFECTION OUTPUT" << endl;
                ck = true;
                }
                if(nA[q]==0){
                    cout << "END OF OUTPUT" << endl;
                    pk = true;
                    break;
                }
                int sum=0;
                for(int j=1; j<=nA[q]; j++){
                    if(nA[q]%j==0){
                        sum+=j;
                    }
                }

                int c=10,cn=1,s=1;
                for(int x=1; x<=6; x++){
                    s *=c;
                    if(s>nA[q]) break;
                    cn++;
                }
                if(cn == 5){
                    if(sum-nA[q] < nA[q]) cout << nA[q] << "  DEFICIENT" << endl;
                    else if(sum-nA[q] > nA[q]) cout << nA[q] << "  ABUNDANT" << endl;
                    else cout << nA[q] << "  PERFECT" << endl;
                }else if(cn == 4){
                    if(sum-nA[q] < nA[q]) cout << " " << nA[q] << "  DEFICIENT" << endl;
                    else if(sum-nA[q] > nA[q]) cout << " " << nA[q] << "  ABUNDANT" << endl;
                    else cout << " " << nA[q] << "  PERFECT" << endl;
                }else if(cn == 3){
                    if(sum-nA[q] < nA[q]) cout << "  " << nA[q] << "  DEFICIENT" << endl;
                    else if(sum-nA[q] > nA[q]) cout  << "  " << nA[q] << "  ABUNDANT" << endl;
                    else cout  << "  " << nA[q] << "  PERFECT" << endl;
                }else if(cn == 2){
                    if(sum-nA[q] < nA[q]) cout  << "   " << nA[q] << "  DEFICIENT" << endl;
                    else if(sum-nA[q] > nA[q]) cout  << "   " << nA[q] << "  ABUNDANT" << endl;
                    else cout  << "   " << nA[q] << "  PERFECT" << endl;
                }else if(cn == 1){
                    if(sum-nA[q] < nA[q]) cout  << "    " << nA[q] << "  DEFICIENT" << endl;
                    else if(sum-nA[q] > nA[q]) cout  << "    " << nA[q] << "  ABUNDANT" << endl;
                    else cout  << "    " << nA[q] << "  PERFECT" << endl;
                }

            }

        }
        p++;
        if(pk == true) break;

    }
    return 0;
}

