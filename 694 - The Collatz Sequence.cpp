#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t=0;
    while(cin >> a >> b){
        t++;
        if(a<=-1 && b<=-1) break;
        long long x=a,cnt=0;
        if(x==1){
            cout << "Case " << t << ": " << "A = " << a << ", limit = " << b << ", number of terms = " << cnt+1 << endl;
        }else{
            while(x!=1){
                if(x%2 ==0){
                    x=x/2;
                }else{
                    x=(x*3)+1;
                }
                cnt++;
                if(x>b){
                    cout << "Case " << t << ": " << "A = " << a << ", limit = " << b << ", number of terms = " << cnt << endl;
                    break;
                }else if(x==1){
                    cout << "Case " << t << ": " << "A = " << a << ", limit = " << b << ", number of terms = " << cnt+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
