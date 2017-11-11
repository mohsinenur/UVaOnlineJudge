#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,d,s,x;

    for(;;)
    {
        n=1080;
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        else if(0 <= a <= 39 && 0 <= b <= 39 && 0 <= c <= 39 && 0 <= d <= 39)
        {
            s=40+(a-b+b-c+c-d);
            x=n+(s*27);
            cout<<x<<endl;
        }
    }


    return 0;
}
