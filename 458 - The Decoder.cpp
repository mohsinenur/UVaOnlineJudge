#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    char c;
    while(cin >> s){
        for(int i=0; s[i]; i++){
            c = s[i]-7;
            cout << c;
        }
    cout << endl;
    }
    return 0;
}
