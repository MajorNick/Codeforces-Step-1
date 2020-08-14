// link : https://codeforces.com/problemset/problem/248/A

#include<bits/stdc++.h>

using namespace std;
 
 main()
{
    int n, a, b, c=0, d=0, e=0, f=0, g, h;
    cin>>n;
    for(int i=0; i<n; i++){

       cin>>a>>b;

       if(a==0) c++;

       else d++;

       if(b==0) e++;

       else f++;
    }
    g=min(c,d);
    h=min(e,f);
    cout<<g+h;}
    
