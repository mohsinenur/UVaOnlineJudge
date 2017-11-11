#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char name[100]; // name variable
    double a,b,total;
    cin >> name >> a >> b; //name,salary and sell input
    total = a + ((b*15)/100); //calculate with 15%
    //TOTAL = R$ 684.54
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " << total << endl;
    return 0;
}
