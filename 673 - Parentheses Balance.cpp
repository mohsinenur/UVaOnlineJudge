#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    for(int i=1; i<=t; i++){
        char s[128];
        int fst=0, snd=0;
        cin.getline(s,128);
        bool sndb = false;
        bool fstb = false;
        for(int j=0; s[j]; j++){
            if(s[j] == 40) fst++;
            else if(s[j] == 41) fst--;
            else if(s[j] == 91) snd++;
            else if(s[j] == 93) snd--;
        }
        if(fst==0 && snd==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
