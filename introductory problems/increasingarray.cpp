#include <iostream>
using namespace std;
 
int main(void){
    cout.sync_with_stdio(false);
    int n=0;
    long long int ans=0;
    int arr[200005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i){
            if(arr[i] < arr[i-1]){
                ans += arr[i-1] - arr[i];
                arr[i] = arr[i-1];
            }
        }
    }
    cout<<ans;
    return 0;
}