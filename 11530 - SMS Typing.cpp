#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    for(int i=1; i<=t; i++){
        int l,cnt=0;
        char s[100];
        cin.getline(s,100);
        l=strlen(s);
        for(int j=0; j<l; j++){
            if(s[j]=='a'|| s[j]=='d' || s[j]=='g' || s[j]=='j' || s[j] =='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==32)
                cnt += 1;
            else if(s[j]=='b' || s[j]=='e'||s[j]=='h' || s[j]=='k' || s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
                cnt += 2;
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' || s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
                cnt += 3;
            else if(s[j] == 's' || s[j] == 'z')
                cnt += 4;
        }
        cout << "Case #" << i << ": " << cnt << endl;
    }
    return 0;
}
