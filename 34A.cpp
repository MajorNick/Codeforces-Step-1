//link :https://codeforces.com/problemset/problem/34/A

#include <bits/stdc++.h>

using namespace std;

main(){

int n;

cin>>n;

vector <int>v(n+1);

for(int i=0;i<n;i++) cin>>v[i];

v[n]=v[0];
int min,r=0;
min=abs(v[1]-v[0]);
for(int i=0;i<n;i++){

	if(min>abs(v[i]-v[i+1])) {min=abs(v[i]-v[i+1]); r=i;

			}}

if(r+1!=n) cout<<r+1<<" "<<r+2;

else cout<<r+1<<" "<<"1";
	
}

