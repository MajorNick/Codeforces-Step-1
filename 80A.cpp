// link : https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>

using namespace std;

int a,b;

main (){

cin>>a>>b;

for(int i=a+1;i<b;i++){

	for(int j=2;j<i;j++){

		if(i%j==0) {break;}
		
		if(j==i-1) {cout<<"NO";return 0;}
	}

}

for(int i=2;i<b;i++) { if(b%i==0) {cout<<"NO"; return 0;}}
cout<<"YES";}
