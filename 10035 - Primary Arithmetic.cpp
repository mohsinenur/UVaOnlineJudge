#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
            break;

        int carry = 0;
        int div = 1;
        int ca = 0;
        for(int i = 1; i < 10; i++)
        {
            if(((a/div)%10 + (b/div)%10 + ca) >=10)
            {
                div *= 10;
                carry++;
                ca = 1;
            }else
            {
                div *= 10;
                ca = 0;
            }
        }

        if(carry == 0)
            cout << "No carry operation." << endl;
        else if(carry == 1)
            cout << "1 carry operation." << endl;
        else
            cout << carry << " carry operations." << endl;
    }

    return 0;
}
