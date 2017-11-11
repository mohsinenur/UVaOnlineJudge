#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        double s,d,s1,d1,s3,d3;
        cin >> s >> d;
        //s1 = s/2;
        //d1 = d/2;
        s3 = (s+d)/2;
        d3 = (s-d)/2;

        double intpart;
        if( modf( s3, &intpart) == 0 && modf( d3, &intpart) == 0 )
        {
            if(s3>=0 && d3>=0) cout << s3 << " " << d3 << endl;
            else cout << "impossible" << endl;
        }else{
            cout << "impossible" << endl;
        }
    }
    return 0;
}
