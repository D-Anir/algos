#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("inputf.in", "r", stdin);
	    // for writing output to output.txt
	    freopen("outputf.in", "w", stdout);
	#endif
	    ll t;
	    cin>>t;
	    while(t--){
	    	ll n;
	    	cin>>n;
	    	ll a[2*n];
	    	vector<ll> v;
	    	for(ll i=0;i<2*n;i++){
	    		cin>>a[i];
	    		if(count(v.begin(),v.end(),a[i])==0)
	    			v.push_back(a[i]);
	    	}
	    	for(ll i=0;i<n;i++)
	    		cout<<v[i]<<" ";
	    	cout<<endl;
	    }
	    return 0;
	}