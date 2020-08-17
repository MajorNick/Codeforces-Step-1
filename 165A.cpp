// link : https://codeforces.com/contest/165/problem/A

#include <bits/stdc++.h>

#define F first 

#define S second

using namespace std;

pair <int, int > xy[200];

main (){
int n,k=0;
cin>>n;

for(int i=0;i<n;i++){ int x,y; cin>>x>>y; xy[i]=make_pair(x,y);}


for(int i=0;i<n;i++){
int l=0,r=0,u=0,t=0;

	for(int j=0;j<n;j++){

		if(j==i) continue;

		if(xy[j].F>xy[i].F&&xy[i].S==xy[j].S) r++;

		if(xy[j].F<xy[i].F&&xy[i].S==xy[j].S) l++;

		if(xy[j].F==xy[i].F&&xy[i].S>xy[j].S) t++;

		if(xy[i].F==xy[j].F&&xy[i].S<xy[j].S) u++;

	}
	if(r!=0&&l!=0&&t!=0&&u!=0) k++;}


cout<<k;}
