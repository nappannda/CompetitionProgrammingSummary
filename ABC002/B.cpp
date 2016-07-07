#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i=0;i<str.length();++i){
        switch (str[i]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                str.erase(i,1);
                --i;
                break;
        }
    }
    cout << str << endl;
}
