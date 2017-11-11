#include<iostream>
using namespace std;
main()
{
    int i, j, k, tmpI;
    cin >> i >> j;
    tmpI = i;
    int c = 0;
    for(k = 1; k <= k+1; k++)
    {
        if(i%2 != 0)
        {
            i = 3*i + 1;
        }else
        {
            i = i/2;
        }

        c++;

        if(i == j)
            break;
    }


    cout << tmpI << " " << j << " " << c << endl;

    return 0;
}
