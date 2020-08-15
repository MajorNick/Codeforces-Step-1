//link : https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>

using namespace std;

int a[3];

main (){
int t=4;
while(t--) {cin>>a[t];}


int k=0;
for(int i=0;i<3;i++){

	if(a[i]==a[i+1]) k++;}

cout<<k;}
