#include <bits/stdc++.h>
using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		n--;
		int temp=0;
		int cnt=1;
		while(n!=0){
			temp++;
			cnt++;
			if(temp==k){
				n--;
				temp=0;
			}
		}
		cout<<cnt<<endl;
	}
}

int main(){
	solve();
}
