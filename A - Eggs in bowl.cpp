#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int n, P, Q;
        cin >> n >> P >> Q;
        int nArr[n];
        for(int j = 1; j <= n; j++)
        {
            cin >> nArr[j];
        }

        int cntEgg = 0, eggWt = 0;

        int mEgg = 0;
        if(P>n)
            mEgg = n;
        else
            mEgg = P;

        for(int k = 1; k <= mEgg; k++)
        {
            if((nArr[k]+eggWt) <= Q)
            {
                eggWt += nArr[k];
                cntEgg++;
            }
        }

        cout << "Case " << i << ": "<< cntEgg << endl;
    }

    return 0;
}
