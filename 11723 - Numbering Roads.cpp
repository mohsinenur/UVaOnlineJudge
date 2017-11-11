#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    int j=0;
    while(cin >> a >> b){
        if(a==0 || b==0) break;
        j++;
        double x = ceil((a-b)/b);
        if(x > 26) cout << "Case " << j << ": " << "impossible" << endl;
        else{
            cout << "Case " << j << ": " << abs(x) << endl;
        }
    }
    return 0;
}
