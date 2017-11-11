#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int off, day;
        string m;
        cin >> m;
        if(m=="JAN" || m=="MAR" || m=="MAY" || m=="JUL" || m=="AUG" || m=="OCT" || m=="DEC") off = 10;
        else if(m=="APR" || m=="JUN" || m=="SEP" || m=="NOV") off = 30;
        else if(m=="FEB") off = 8;
        string d;
        cin >> d;

        if(off == 30){
            if(d=="SUN") day = 8;
            else if(d=="MON") day = 8;
            else if(d=="TUE") day = 8;
            else if(d=="WED") day = 8;
            else if(d=="THU") day = 9;
            else if(d=="FRI") day = 10;
            else if(d=="SAT") day = 9;
        }else {
            if(d=="THU") day = 0;
            else if(d=="FRI") day = 0;
            else if(d=="SAT") day = 1;
            else if(d=="SUN") day = 2;
            else if(d=="MON") day = 2;
            else if(d=="TUE") day = 2;
            else if(d=="WED") day = 1;
        }

        if(off == 8) cout << off<< endl;
        else if(off == 30) cout << day << endl;
        else cout << off-day << endl;
    }
    return 0;
}
