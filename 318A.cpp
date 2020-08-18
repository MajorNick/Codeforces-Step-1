// link : https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>


using namespace std;

long long  a,b,c,n;

main (){

cin>>n>>a;

if(n%2==0&&n/2==a) {cout<<n-1;return 0;}


if(n%2==0&&a>n/2) {cout<<(a-n/2)*2; return 0;}

if(n%2==1&&a>n/2+1) cout<<(a-n/2-1)*2;

else  	cout<<(a*2)-1;






}

