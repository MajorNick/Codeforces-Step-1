// link :https://codeforces.com/contest/304/problem/A

#include <bits/stdc++.h>

using namespace std;

int n,k;

main (){

cin>>n;

for(int i=1;i<=n;i++){
int r;
	for(int j=i;j<=n;j++){

		 r=i*i+j*j;

		int m=sqrt(r);

		if(m*m==r&&m<=n)  k++;}


}

cout<<k;}
