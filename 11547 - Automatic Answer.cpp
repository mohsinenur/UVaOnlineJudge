#include<iostream>
using namespace std;

int main()
{
    int tstCase;
    cin >> tstCase;
    for(int i=1; i<=tstCase; i++)
    {
        int nmbr, nNmbr;
        cin >> nmbr;
        nNmbr = ((((((nmbr*567)/9)+7492)*235)/47)-498);
        nNmbr = (nNmbr/10)%10;
        if(nNmbr<0)
            nNmbr = -nNmbr;

        cout << nNmbr << endl;
    }
    return 0;
}
