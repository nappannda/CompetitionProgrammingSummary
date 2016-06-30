#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int t;
    for(int i=0;i<5;++i){
        cin >> t;
        vec.push_back(t);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<5;++i){
        cout << vec[i] ;
        if(i != 4) cout << " ";
    }
    cout << endl;
    return 0;
}
