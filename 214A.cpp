// link : https://codeforces.com/problemset/problem/214/A

#include <bits/stdc++.h>

using namespace std;

int m,n,k;

main (){

cin>>m>>n;

for(int i=0;i<=1000;i++){

	for(int j=0;j<=1000;j++){

		if(i*i+j==m&&j*j+i==n) k++;}}


cout<<k;}
