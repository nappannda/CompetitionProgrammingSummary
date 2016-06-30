#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    cin >> a >> b >> c;
    if(b>a){
        if(c>b){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
