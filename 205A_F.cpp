#include <bits/stdc++.h>

using namespace std;

unordered_map <int,int> m;

main (){

	int n;

	cin>>n;

	int a[n],b=INT_MAX,in=0;
	for(int i=0;i<n;i++){ cin>>a[i]; m[a[i]]++; if(a[i]<b) { b=a[i]; in=i;}}

	//	cout<<m[b]<<endl;
		if(m[b]==1) cout<<in+1;

		else cout<<"Still Rozdil";}
