#include <iostream>
#include <algorithm>
using namespace std;
const int s = 2e5;
 
int main(void){
    cout.sync_with_stdio(false);
    int n, m, k, i=0, j=0, ans=0;
    cin>>n>>m>>k;
    int a[s], b[s];
    for(i=0; i<n;++i){
        cin>>a[i];
    }
    for(i=0; i<m;++i){
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
 
    cout<<endl;
    i=0;j=0;
    while (i < n && j < m){
		if (abs(a[i] - b[j]) <= k){
			++i;
            ++j;
			++ans;
		}
		else{
			if (a[i] - b[j] > k){
				++j;
			}else{
				++i;
			}
		}
	}
	cout<<ans;
    return 0;
}