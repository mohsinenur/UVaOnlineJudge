#include<iostream>
using namespace std;

int main()
{
    top:
    double h,u,d,f;
    while(cin >> h >> u >> d >> f)
    {
        //6 3 1 10
        if(h==0)
        {
            break;
        }
        double h1 = 0.0;
        int i;
        f = ((f*u)/100);
        for(i=1; ; i++)
        {
            if(u>0)
            {
                h1 = h1 + u;
                u -= f;
            }

            if(h1>h)
                break;

            h1-=d;

            if(h1<0)
            break;
        }
        //success on day 3
        //failure on day 4
        if(h1>h)
        {
            cout << "success on day " << i << endl;
            goto top;
        }else if(h1 < 0)
        {
            cout << "failure on day " << i << endl;
            goto top;
        }
    }
    return 0;
}
