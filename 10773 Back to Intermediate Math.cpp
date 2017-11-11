#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for (int i=1; i<=t;i++){
        double a,b,c;
        cin >> a >> b >> c;
        if (c<=b || c==0 || b==0)
            cout << "Case " << i << ": " << "can't determine" << endl;
        else
        {
            double t1, t2;
            t1= a/(sqrt((c*c)-(b*b)));
            t2= a/c;
            if(t1==t2) cout << "Case " << i << ": " << "can't determine" << endl;
            else{
                cout << fixed;
                cout << setprecision(3) << "Case " << i << ": " << t1-t2 << endl;
            }
        }
    }
    return 0;
}
