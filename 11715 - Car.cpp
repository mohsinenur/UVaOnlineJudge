#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1; i<=i+1; i++){
        int n;
        cin >> n;
        if(n==0) break;
        double a,b,c;
        cin >> a >> b >> c;
        if(n==1){
            double s = ((a+b)/2)*c;
            double av = ((b-a)/c);
            cout << fixed;
            cout << setprecision(3) << "Case " << i << ": " << s << " " << av << endl;
        }
        else if(n==2){
            //2 u v a
            double t = ((b-a)/c);
            double s = a*t + ((c*(t*t)/2));
            cout << fixed;
            cout << setprecision(3) << "Case " << i << ": " << s << " " << t << endl;
        }
        else if(n==3){
            //
            double v = sqrt(a*a + 2*b*c);
            double t = (v-a)/b;
            cout << fixed;
            cout << setprecision(3) << "Case " << i << ": " << v << " " << t << endl;
        }
        else if(n==4){
            // v a s: u t
            double u = sqrt((a*a)-(2*b*c));
            double t = (a-u)/b;
            cout << fixed;
            cout << setprecision(3) << "Case " << i << ": " << u << " " << t << endl;
        }
    }
    return 0;
}
