#include<iostream>

using namespace std;

int main()
{
    long long cnt,K,ntk,i;
    cin >> cnt;
    K = 0;
    ntk = 0;

    for(i=1; i<=cnt; (i=i+1))
    {
        string cr;
        cin >> cr;

        if(cr == "donate")
        {
            cin >> K;
            ntk += K;
        }else
        {
            cout << ntk << endl;
        }

        if(i>=cnt)
            break;
    }
    return 0;
}
