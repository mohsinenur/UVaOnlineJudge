#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int l,b,i;
    while(gets(s))
    {
        l=strlen(s);
        b=-1;
        for(i=0; i<l; i++)
        {
            if(s[i] == ' ')
            {
                for(int j=i-1; j>b; j--)
                {
                    cout << s[j];
                }
                cout << " ";
                b=i;
            }
        }
        for(int j=l-1; j>b; j--)
        {
            cout << s[j];
        }
        cout << endl;
    }

    return 0;
}
