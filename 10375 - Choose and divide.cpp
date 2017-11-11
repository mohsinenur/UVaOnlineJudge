#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long p,q,r,s;
    while(cin >> p >> q >> r >> s){
        long long k=1, pq, rs;
        for(long long i=2; i<=p; i++){
            k = k*i;
            if(i== (p-q)) pq = k;
            if(i == q) q = k;
        }
        p=k;
        pq = pq*q;
        long long p_q = (p/pq);
        cout << p_q << endl;
        k=1;
        for(long long i=2; i<=r; i++){
            k = k*i;
            if(i== (r-s)) rs = k;
            if(i == s) s = k;
        }
        r=k;
        rs = rs*s;
        long long r_s = (r/rs);
        cout << r_s << endl;
    }
    return 0;
}
