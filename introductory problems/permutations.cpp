#include <iostream>
using namespace std;

int main(void){
    cout.sync_with_stdio(false);
    int a;
    cin>>a;
    if((a == 2) || (a == 3)){
        cout<<"NO SOLUTION";
    }else{
        for(int i=2;i<=a;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<a+1;i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}