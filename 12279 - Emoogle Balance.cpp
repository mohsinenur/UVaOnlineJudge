#include<iostream>

using namespace std;

int main()
{
    int tc;
    int cn = 1;
    while(cin >> tc)
    {
        if(tc == 0)
            break;

        int sup = 0;
        int tg = 0;
        for(int i=1; i<=tc; i++)
        {
            int c;
            cin >> c;
            if(c != 0)
            {
                sup++;
            }else
            {
                tg++;
            }
        }

        int b = sup - tg;
        cout << "Case " << cn << ": " << b << endl;
        cn++;
    }
    return 0;
}
