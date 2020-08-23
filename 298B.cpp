// link : https://codeforces.com/problemset/problem/298/B

#include <bits/stdc++.h>

using namespace std;

string s;

int t,x1,z1,x2,y2;

char r1,r2;

main (){

cin>>t>>x1>>z1>>x2>>y2;

cin>>s;

if(y2>z1) r1='N';
else r1='S';

if(x2>x1) r2='E';

else r2='W';

int dx,dy,k1=0,k2=0,dj=0,di=0;

 dx=abs(x2-x1);
 dy=abs(y2-z1);


for(int i=0;i<t;i++){

	if(dx!=k1){if(s[i]==r2){k1++;dj=i;}}

	if(dy!=k2){if(s[i]==r1){k2++;di=i;}}

}


if(k2==dy&&k1==dx) 

cout<<max(dj,di)+1;

else cout<<"-1";
}



