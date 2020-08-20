// link : https://codeforces.com/contest/124/problem/A


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,a,b ;
    cin >> n >> a >> b;

    if(n-a > b + 1){
        int ans = b + 1;
        cout << ans << endl;
    }

    else{

    cout << n-a << endl;
    }

}