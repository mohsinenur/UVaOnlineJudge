#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b){
        if(a<0 || b<0) break;
        int up, dwn;
        up = abs(a-b);
        if(a<b) dwn = (100-b)+a;
        else dwn = (100-a)+b;
        if(up<dwn) cout << up << endl;
        else cout << dwn << endl;
    }
    return 0;
}
