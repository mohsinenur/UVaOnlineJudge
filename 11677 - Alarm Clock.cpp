#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d){
        if(a==0 && b==0 && c==0 && d==0) break;
        if(c==0) c=24;
        if(a==0) a=24;
        int th =((c*60)+d) - ((a*60)+b);
        if(th<0) th = 1440 + th;
        cout << th << endl;
    }
    return 0;
}
