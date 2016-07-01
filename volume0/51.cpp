#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> sa;
    while(n!=0){
        string str;
        cin >> str;
        vector<int> vec;
        for(int i=0;i<str.length();i++){
            vec.push_back((int)str[i]- (int)'0');
        }
        string min="",max="";
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            min += to_string(vec[i]);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<vec.size();i++){
            max += to_string(vec[i]);
        }
        int min_i = stoi(min);
        int max_i = stoi(max);
        sa.push_back( max_i - min_i );
        --n;
    }
    for(int i=0;i<sa.size();i++){
        cout << sa[i] << endl;
    }
    return 0;
}
