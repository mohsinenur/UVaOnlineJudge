#include<bits/stdc++.h>
using namespace std;
int main()
{
    long N,p;
    while(cin>>N && N>=1){
        if(N==1) cout << "0%" << endl;
        else{
            p = 25*N;
            cout << p << "%" << endl;
        }
    }
    return 0;
}
