#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,sum=0;
    char n[10000];
    while(cin.getline(n,100000)){
        for(int i=0; i<strlen(n); i++){
            sum+=n[i]-48;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
