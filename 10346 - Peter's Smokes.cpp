#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c,b,d,sum,de;
    while(cin >> c >> b){
        sum = c;
        top:
        d = c/b;
        de = c%b;
        sum += d;
        if(d+de>=b){
            c = d+de;
            goto top;
        }else{
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
