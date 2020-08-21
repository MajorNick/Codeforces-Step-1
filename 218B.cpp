// link : https://codeforces.com/contest/218/problem/B

#include <bits/stdc++.h>

using namespace std;

int a,b,c,m,n,mina,maxa;

main (){

cin>>m>>n;

vector<int> v(n);

for(int i=0;i<n;i++){

	cin>>v[i];

}

sort(v.begin(),v.end(),greater<int>());

int t=m,j=n-1;

while (t>0){

	
	if(v[j]>t) break;

	mina+=(v[j]*(v[j]+1))/2;

	t-=v[j];

	j--;}

	if(t!=0){

		mina+=(v[j]*(v[j]+1)/2)-((v[j]-t)*(v[j]-t+1))/2;

	}

while(m>0){

	

	maxa+=v[0];

	v[0]--;

	m--;
	
	sort(v.begin(),v.end(),greater<int>());

}


cout<<maxa<<" "<<mina;}
