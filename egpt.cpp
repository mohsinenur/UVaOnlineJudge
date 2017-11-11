#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c && a!=0&&b!=0&&c!=0){
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        if(c*c==a*a+b*b) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}
