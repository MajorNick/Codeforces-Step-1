// link : https://codeforces.com/contest/32/problem/B

#include <bits/stdc++.h>

using namespace std;

int a,b;

string s;

vector <int> v;

main (){

	cin>>s;

	int n=s.size();
int i=0;
	while(i<s.size()){

		if(s[i+1]=='.'&&s[i]=='-'&&i<=s.size()-2 ) {v.push_back(1);i+=2;}

		else{

		if(s[i+1]=='-'&&s[i]=='-'&&i<=s.size()-2){ v.push_back(2);i+=2;}

		else {v.push_back(0); i++;}

}}

for(int j=0;j<v.size();j++) cout<<v[j];
}
