#include <iostream>
#include <set>
using namespace std;
 
int main(void){
    cout.sync_with_stdio(false);
    long long int a, n;
    set <long long> s;
    cin>>a;
    for(long long int i=0;i<a;i++){
        cin>>n;
        s.insert(n);
 
    }
    cout<<s.size();
    return 0;
}