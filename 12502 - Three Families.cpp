#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        //cout << (z*(x-(x+y)/3))/((x+y)/3) << endl;
        cout << z*(2*x-y)/(x+y) << endl;
    }
    return 0;
}
