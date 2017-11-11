#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double c,f;
        cin >> c >> f;
        double tf = 1.8*c+32 + f;
        cout << fixed;
        cout << setprecision(2) << "Case " << i << ": " << (tf-32)*(5.0/9.0) << endl;
    }
    return 0;
}
