#include<iostream>
using namespace std;
int main()
{
    int N, cntN = 1;
    while(cin >> N)
    {
        if(N == 0 || cntN > 10)
            break;

        int tN = 0;
        int empC = N;
        int diN = 0, moN = 0;

        while(empC >= 3)
        {
            diN = empC/3;
            moN = empC%3;
            tN += diN;
            empC = diN + moN;
        }

        if(empC == 2)
        {
            tN = tN+1;
        }

        cntN++;
        cout << tN << endl;
    }

    return 0;
}
