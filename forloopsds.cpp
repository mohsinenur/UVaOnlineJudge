#include<iostream>
using namespace std;
int main()
{
    int x,r, ans=1;
    cin >> x >> r;
    for(int i=1; i<=r; i++){
        ans = ans*x;
    }
    cout << ans << endl;
    return 0;
}
