#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d;
    while(cin >> s >> d){
        for(long long i=1; ; i++){
            d-=s;
            if(d<=0) break;
            s+=1;

        }
        cout << s << endl;
    }
    return 0;
}
