#include<iostream>

long reversDigits(long long num)
{
    long long rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}

using namespace std;
int main()
{
    top:
    long long num;
    while(cin >> num)
    {
        if(num == 0)
            break;
        long long rNum=0, cnt=0, j;
        for(j=1; ; j++)
        {
            rNum = reversDigits(j);
            if(rNum==j)
            {
                cnt++;
                cout << rNum << endl;
            }
            if(cnt == num)
            {
                cout << rNum << endl;
                goto top;
            }
        }

    }
    return 0;
}
