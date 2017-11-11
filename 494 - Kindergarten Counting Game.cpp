#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[10000];
    int cnt=0;
    bool w = false;
    while(gets(s)){
        for(int j=0; s[j]; j++){
            if(s[j]>='a' && s[j]<='z' || s[j]>='A' && s[j]<='Z'){
                w = true;
            }
            else {
                if(w==true){
                    cnt++;
                    w = false;
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}
