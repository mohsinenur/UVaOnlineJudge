#include<iostream>
using namespace std;

int main()
{
    int tC;
    cin >> tC;
    for(int i=1; i<=tC; i++)
    {
        int cs, s, maxS=0;
        cin >> cs;

        for(int j=1; j<=cs; j++)
        {
            cin >> s;
            if(s>maxS)
                maxS = s;
        }

        //Case 1: 9
        cout << "Case " << i << ": " << maxS << endl;
    }
    return 0;
}
