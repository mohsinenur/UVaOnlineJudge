#include<iostream>
using namespace std;

int main()
{
    int n, b, h, w, p;
    while(cin >> n >> b >> h >> w)
    {
        int htl[h];
        for(int i=0; i<h; i++)
        {
            cin >> p;
            int a;
            for(int j=1; j<=w; j++)
            {
                cin >> a;
                if(a < n) htl[i] = 0;
                else htl[i] = p*n;
            }
        }

        bool htlc = true;
        int bhh = 0;
        for(int k=0; k<h; k++)
        {
            if(htl[k] != 0)
            {
                if(htl[k] <= b)
                {
                    if(k>=2)
                    {
                        if(htl[k] <= htl[k-1] && htl[k-1] != 0)
                        {
                            bhh = htl[k];
                            htlc = true;
                        }else if(htl[k-1] == 0)
                        {
                            bhh = htl[k];
                            htlc = true;
                        }else
                        {
                            bhh = htl[k];
                            htlc = true;
                        }
                    }
                }
                else htlc = false;
            }else htlc = false;
        }

        if(htlc == false) cout << "stay home" << endl;
        else cout << bhh << endl;
    }
    return 0;
}
