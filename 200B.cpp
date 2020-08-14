//link : https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;
double a;

int n;
    
  double   sum;

main (){

	cin>>n;

int r;

	for(int i=0;i<n;i++){

		cin>>r;

		sum+=r;

	}

a=sum/n;

cout<<setprecision(6)<<a;
}

