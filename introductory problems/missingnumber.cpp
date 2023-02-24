#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    cout.sync_with_stdio(false);
    long long int a;
    long long int arr[int(2e5)] = {};
    cin>>a;
    for (int i = 0; i< a-1; i++){
        int b;
        cin >> b;
        arr[i] = b;
    }
    sort(arr, arr+a);
    for(auto i:arr){
        ///cout<<i<<arr[i]<<" ";
        if(i != arr[i]){
            cout<<i - 1;
            break;
        }
        if(i == a-1){
            cout<<i+1;
            break;
        }
    }
}