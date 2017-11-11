#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    double pi = 3.141592653589793;
    while(cin >> a >> b >> c){
        double k = (a+b+c)/2.0;
        double tri = (sqrt(k*(k-a)*(k-b)*(k-c)));
        double rds =  tri/k;
        double cir = pi*rds*rds;
        double rds2 = (a*b*c)/(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b)));
        double cir2 = pi*rds2*rds2;

        cout << fixed;
        cout << setprecision(4) << cir2-tri  << " " << tri-cir << " " << cir << endl;
    }
    return 0;
}
