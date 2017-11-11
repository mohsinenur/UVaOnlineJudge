#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin >> a >> b){
        if(a==b) cout << a << endl;
        else if(a>b) cout << a << endl;
        else if(b>a) cout << b << endl;
    }
    return 0;
}
