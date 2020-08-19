// link : https://codeforces.com/problemset/problem/149/A

#include <bits/stdc++.h>

using namespace std;

int a[12],n,k,sum;

main(){

cin>>n;

for(int i=0;i<12;i++) cin>>a[i];

sort(a,a+12);
int i=11;
while(sum<n&&i>=0){

	sum+=a[i];
	
	k++;

	i--;}

if(sum<n) cout<<"-1";

else cout<<k;}


