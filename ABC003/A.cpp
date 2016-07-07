#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int avg=0;
    for(int i=n;i>0;i--){
        avg+=(i*10000);
    }
    cout << avg/n << endl;
    return 0;
}
