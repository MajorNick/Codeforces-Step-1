// link : https://codeforces.com/problemset/problem/1177/A

#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;

int k;

main(){

	cin>>k;

	vector<int>v;
	
int 	r=1;

	while(v.size()<k){

	vector<int> n;

		int m=r;

		while(m>0){

	n.push_back(m%10);
			m=m/10;}

		for(int i=n.size()-1;i>=0;i--)v.push_back(n[i]);



		r++;}


	cout<<v[k-1];}
