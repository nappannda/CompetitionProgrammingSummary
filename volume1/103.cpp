#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int i=1;
    cin >> n;
    int out = 0;
    bool rui1 = false;
    bool rui2 = false;
    bool rui3 = false;
    vector<int> vec;
    int t=0;
    while(1){
        string str;
        cin >> str;
        if(str == "HIT"){
            if(rui3){
                rui3 = false;
                ++t;
            }
            if(rui2){
                rui2 =false;
                rui3 =true;
            }
            if(rui1){
                rui1 =false;
                rui2 = true;
            }
            rui1 = true;
        }else if(str == "OUT"){
            ++out;
            if(out == 3){
                out = 0;
                rui1 = false;
                rui2 = false;
                rui3 = false;
                vec.push_back(t);
                t=0;
                ++i;
            }
        }else if(str == "HOMERUN"){
            if(rui1){
                rui1=false;
                ++t;
            }
            if(rui2){
                rui2 = false;
                ++t;
            }
            if(rui3){
                rui3 = false;
                ++t;
            }
            ++t;
        }
        if(i==n+1) break;
    }
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << endl;
    }
    return 0;
}


