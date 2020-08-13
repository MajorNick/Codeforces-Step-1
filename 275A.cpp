// link : https://codeforces.com/contest/275/problem/A

#include <bits/stdc++.h>

using namespace std;

int a[5][5];

main (){
int n;
for(int i=1;i<=3;i++){

	for(int j=1;j<=3;j++){

		cin>>n;
		a[i][j]+=n;
		a[i+1][j]+=n;
		a[i-1][j]+=n;
		a[i][j-1]+=n;
		a[i][j+1]+=n;

	}}

for(int i=1;i<=3;i++){

	for(int j=1;j<=3;j++){

		cout<<(a[i][j]+1)%2;

	}
	cout<<endl;}}
