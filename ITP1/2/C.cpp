#include <iostream>
using namespace std;
int main(void){
    int a[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(i==2){
            cout << a[i] << endl;
        }else{
            cout << a[i] << " ";
        }
         
    }
     
    return 0;
}
