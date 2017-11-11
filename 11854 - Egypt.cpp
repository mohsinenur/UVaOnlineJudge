#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a==0 && b==0 && c==0) break;
        if(b>a && b>c){
            swap(b,c);
        }
        else if(a>b && a>c){
            swap(a,c);
        }
        if(c*c == (a*a + b*b)) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}
