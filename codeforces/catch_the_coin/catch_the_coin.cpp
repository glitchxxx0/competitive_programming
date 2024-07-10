#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	while (n--) {
		int x,y;
		cin >> x >> y;
		if(y < -1){
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
}

int main(){
	solve();
}
