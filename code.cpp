#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    cout.sync_with_stdio(false);
    long long int now = 1, ans = 0;
    string dna;
    cin>>dna;
    for(int i=1; i<dna.length(); i++){
        //cout<<dna[i];//
        
        if(dna[i-1] == dna[i]){
            now++;
        }else{
            if(now > ans){
                ans = now;
            }
            now = 1;
        }
        //cout<<" "<<now<<ans<<endl;//
    }
    if(now > ans){
        ans = now;
        now = 0;
    }
    cout<<ans;
    return 0;
}