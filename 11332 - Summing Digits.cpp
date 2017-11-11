#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ten=10,sum=0;
    while(cin>>n && n!=0){
        top:
        for( ; n!=0; ){
            sum += n%ten;
            n = n/ten;
        }
        if(sum>=10){
            n = sum;
            sum = 0;
            goto top;
        }else{
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
