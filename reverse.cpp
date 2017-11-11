#include<iostream>

int reversDigits(int num)
{
    int rev_num = 0;
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
    int num;
    while(cin >> num)
    {
        if(num == 0)
            break;

        cout << reversDigits(num) << endl;
    }
    return 0;
}
