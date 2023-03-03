#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    cout.sync_with_stdio(false);
    long long int n, m, k, i, j, ans;
    cin>>m>>n>>k;
    long long int a[n], b[m];
    for(i=0; i<n;i++){
        cin>>a[i];
    }
    for(i=0; i<m;i++){
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);

    while (i < n && j < m){
		if (abs(a[i] - b[j]) <= k){
			++i; ++j;
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
	cout << ans << "\n";
    return 0;
}