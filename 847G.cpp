// link : https://codeforces.com/contest/847/problem/G

#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;

int arr[7];

string s;

main (){

cin>>a;

for(int i=0;i<a;i++){

	cin>>s;

	for(int j=0;j<7;j++){

		if(s[j]=='1') arr[j]++;}

}

cout<<*max_element(arr,arr+7);}
