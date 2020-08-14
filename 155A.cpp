// link : https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>

using namespace std;

int a,ans,b,c,d,n[1000];

main (){

cin>>a;

for(int i=0;i<a;i++){

	cin>>n[i];
}

for(int i=1;i<a;i++){

	

	for(int j=i;j>=0;j--){

		if(n[i]<=n[j]&&i!=j) break; if(j==0) ans++;}
	for(int j=i;j>0;j--){

		if(n[i]>=n[j]&&i!=j) break; if(j==0) ans++;}

}

cout<<ans;
}
