// link : https://codeforces.com/contest/230/problem/A

#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;

main(){

int s,n;

cin>>s>>n;

pair <int,int> r[n];

for(int i=0;i<n;i++){

	cin>>a>>b;

	r[i]=make_pair(a,b);

}

sort(r,r+n);

for(int i=0;i<n;i++){

	if(s>r[i].first) s+=r[i].second;

	else { cout<<"NO"; return 0;}}


 cout<<"YES";

}
