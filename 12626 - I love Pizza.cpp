#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int x=1; x<=n; x++){
        char s[600];
        cin >> s;
        int m=0,a=0,r=0,g=0,i=0,t=0,cnt=0;
        for(int j=0; j<strlen(s); j++){
            if(s[j] == 'M') m++;
            else if(s[j] == 'A') a++;
            else if(s[j] == 'R') r++;
            else if(s[j] == 'G') g++;
            else if(s[j] == 'I') i++;
            else if(s[j] == 'T') t++;
        }
        for(int k=1; k<=k+1; k++){
            if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1){
                cnt++;
                m-=1;a-=3;r-=2;g-=1;i-=1;t-=1;
            }else {
                cout << cnt << endl;
                break;
            }
        }
    }
    return 0;
}
