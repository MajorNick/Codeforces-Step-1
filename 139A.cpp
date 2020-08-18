// link : https://codeforces.com/problemset/problem/139/A

#include <bits/stdc++.h>

using namespace std;

int w[7],n;

main(){

cin>>n;

for(int i=0;i<7;i++) cin>>w[i];
int i=0;
while(n>0){

	n=n-w[i];

	i++;
	
	if(i>7) i=0;

}


cout<<i;}
