#include <iostream>
using namespace std;

int main(void){
    cout.sync_with_stdio(false);
    long long int a;
    cin>>a;
    for(int i=0;i<a;i++){
        long long int x, y;
        cin>>x>>y;
        int mx = max(x, y);
        if((x==1) && (y % 2 != 0)){
            cout<<y*y<<endl;
        }else if ((x % 2 ==0) && (y == 1)){
            cout<<x*x<<endl;
        }else if (mx%2 == 0) {
            if(x>y) {
                cout<<x*x - y + 1<<endl;
            }else {
                cout<<y*y - (2*y) + x + 1<<endl;
            }
        }else if (mx%2 != 0) {
            if(x>y) {
                cout<<(x-1)*(x-1) + y<<endl;
            }else {
                cout<<y*y - x + 1<<endl;
            }
        }
    }
    return 0;
}