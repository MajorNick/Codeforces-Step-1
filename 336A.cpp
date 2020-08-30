// link : https://codeforces.com/contest/336/problem/A

#include <bits/stdc++.h>

using namespace std;

#define F first

#define S second 


long long a,b,c;

pair<long long, long long > xy[2];

main (){

	cin>>a>>b;

	xy[0].F=0; xy[1].S=0;


xy[0].S=xy[1].F=abs(a)+abs(b);

if(a<0) xy[1].F*=-1;

if(b<0) xy[0].S*=-1;

sort(xy,xy+2);

	

cout<<xy[0].F<<" "<<xy[0].S<<" "<<xy[1].F<<" "<<xy[1].S;

}


