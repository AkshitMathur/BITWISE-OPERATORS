// 23070123014 AKSHIT MATHUR EXP(4)
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "enter the number a:"<<endl;
    cin>>a;
    cout << "enter the number b:"<<endl;
    cin>>b;
    cout << "BITWISE AND:"<<(a&b)<<endl;
    cout << "BITWISE OR:"<<(a|b)<<endl;
    cout << "BITWISE NOT:"<<(~b)<<endl;
    cout << "BITWISE XOR:"<<(a^b)<<endl;
    cout << "left shift:"<<(a<<2)<<endl;
    cout << "right shift:"<<(a>>2)<<endl;
   

    return 0;
}
//output
//enter the number a:
//5
//enter the number b:
//4
//BITWISE AND:4
//BITWISE OR:5
//BITWISE NOT:-5
//BITWISE XOR:1
//left shift:20
//right shift:1
