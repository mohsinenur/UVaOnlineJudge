#include<bits/stdc++.h>
using namespace std;
int main()
{
    char w[100];
    while(cin >> w){
        for(int i=0; w[i]; i++){
            if(w[i]=='B' || w[i]=='F' || w[i]=='P' || w[i]=='V') cout << "1";
            else if( w[i]=='C' || w[i]=='G' || w[i]=='J' || w[i]=='K' || w[i]=='Q' || w[i]=='S' || w[i]=='X' || w[i]=='Z') cout << "2";
            else if( w[i]=='D' || w[i]=='T') cout << "3";
            else if( w[i]=='L') cout << "4";
            else if( w[i]=='M' || w[i]=='N') cout << "5";
            else if( w[i]=='R') cout << "6";
        }
        cout << endl;
    }
    return 0;
}
