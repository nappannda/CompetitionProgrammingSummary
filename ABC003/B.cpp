#include <iostream>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int cnt = 0;
    for(int i=0;i<s.length();++i){
        if(s[i] == t[i]){
            ++cnt;
        }else if(s[i] == '@' && t[i] == '@'){
            ++cnt;
        }else if(s[i] == '@'){
            switch (t[i]) {
                case 'a':
                case 't':
                case 'c':
                case 'o':
                case 'd':
                case 'e':
                case 'r':
                    ++cnt;
                    break;
            }
        }else if(t[i] == '@'){
            switch (s[i]) {
                case 'a':
                case 't':
                case 'c':
                case 'o':
                case 'd':
                case 'e':
                case 'r':
                    ++cnt;
                    break;
            }
        }
    }
    if(cnt == s.length()){
        cout << "You can win" << endl;
    }else{
        cout << "You will lose" << endl;
    }
}

