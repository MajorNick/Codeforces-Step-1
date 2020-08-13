// link : https://codeforces.com/contest/271/problem/A

#include <bits/stdc++.h>
using namespace std;

int a,b,c;

main (){

	cin>>a;

	for(int i=a+1;i<9000;i++){

		set <int>s;

		s.insert(i/1000);s.insert((i%1000)/100);s.insert((i%100)/10);s.insert(i%10);
	if(s.size()==4) {cout<<i<<endl; break;}
	}
}

