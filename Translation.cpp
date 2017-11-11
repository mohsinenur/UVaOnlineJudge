#include<bits/stdc++.h>
using namespace std;
int main()
{
    char w1[105];
    char w2[1005];
    while(cin.getline(w1,105)){
        cin.getline(w2,105);

        int ln1 = strlen(w1);
        int ln2 = strlen(w2);
        int ck = 0;
        if(ln1 != ln2){
            cout << "NO" << endl;
            continue;
        }
        else{
            for(int i=0; w1[i]; i++){
                if(w1[i] != w2[ln2-1-i]){
                    ck = 1;
                    break;
                }
            }
        }
        if(ck == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
