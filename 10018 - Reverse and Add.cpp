#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;

        int div = 1, rev = 0, base = 1, a = p;
        for(int j = 1; j <= j+1; j++)
        {
            if(a>0)
            {
                a = (p/div)%10;
                rev = a + (rev*base);
                div *= 10;
                base = 10;

            }else
            {
                rev = rev/10;
                break;
            }

        }

        p = rev + n;



    }

    return 0;
}
