#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n>70000){
        cout << "89" << endl;
    }else if(n>=35000){
        cout << (n/1000-30)/5 + 80 << endl;
    }else if(n<=30000 && n>=6000){
        cout << n/1000 + 50 << endl;
    }else if(n<=5000 && n>=100){
        if(n/100<10){
            cout << "0" << n/100 << endl;
        }else{
            cout << n/100 << endl;
        }
    }else if(n<100){
        cout << "00" << endl;
    }
}
