#include <iostream>
using namespace std;
int main(void){
    int a;
    cin >> a;
    cout << a/3600 <<":" << a%3600/60 << ":" << a%60 <<endl;
    return 0;
}
