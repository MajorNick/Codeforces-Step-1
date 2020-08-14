// link : https://codeforces.com/contest/144/problem/A

#include <bits/stdc++.h>

using namespace std;

int a,b,c[100],ans1,ans2,i1=1,j2=1;

main (){

int n;
cin>>n;

for(int i=1;i<=n;i++){

	cin>>c[i];

	if(i==1) { ans1=c[i]; ans2=c[i];}

	if(c[i]>ans1) { ans1=c[i]; i1=i;}

	if(c[i]<=ans2){ans2=c[i]; j2=i;}

	}

//cout<<ans1<<" "<<ans2<<endl;


if(j2<i1) cout<<i1-1+n-j2-1;

else cout<<i1-1+n-j2;}
