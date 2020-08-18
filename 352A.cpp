// link : https://codeforces.com/problemset/problem/352/A

#include <bits/stdc++.h>

using namespace std;

int a,b,c,d,t5,t0;

main (){

int n;

cin>>n;

for(int i=0;i<n;i++){

	cin>>c;

	if(c==0) t0++;

	else t5++;

}

if(t5/9>0&&t0>0){


	for(int i=0;i<(t5/9)*9;i++) cout<<"5";

	for(int i=0;i<t0;i++) cout<<"0";


}
else {

	if(t0>0) cout<<"0";

	else cout<<"-1";}}



