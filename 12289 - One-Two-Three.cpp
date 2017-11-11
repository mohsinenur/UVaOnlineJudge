#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int i=1; i<=tc; i++)
    {
        char wrd[10];
        cin >> wrd;

        if(strlen(wrd) == 5)
        {
            cout << 3 << endl;
        }else
        {
            int cnt = 0;
            if(wrd[0] == 'o')
                cnt++;
            if(wrd[1] == 'n')
                cnt++;
            if(wrd[2] == 'e')
                cnt++;

            if(cnt >= 2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
