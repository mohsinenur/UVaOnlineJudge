#include<iostream>
using namespace std;
main()
{
    int N, i;
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a+b > c)
        {
            cout << "OK" << endl;
        }else
        {
            cout << "Wrong!!" << endl;
        }
    }

    return 0;
}
