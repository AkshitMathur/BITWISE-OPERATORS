// 23070123014 AKSHIT MATHUR EXP(4)
#include <iostream>
using namespace std;
int main() {
    int n,bit_to_be_set,bit_to_be_reset,set,reset;
    cout << "enter the number n:"<<endl;
    cin>>n;
    cout << "enter the position to set:"<<endl;
    cin>>bit_to_be_set;
    set=n|(1<<bit_to_be_set);
    cout << "enter the position to reset:"<<endl;
    cin>>bit_to_be_reset;
    reset=n&(~(1<<bit_to_be_set));
    cout << "your number is:"<<set<<endl;
    cout << "your number is:"<<reset<<endl;
    
    return 0;
}
//enter the number n:
//50
//enter the position to set:
//2
//enter the position to reset:
//2
//your number is:54
//your number is:50
