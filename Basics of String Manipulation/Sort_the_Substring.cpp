//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/tutorial/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, l;
    cin>>l;
    while(l--){
        char str[10005];
        cin>>str>>n>>m;
        sort(str+n, str+m+1, greater<int>());
        cout<<str<<endl;
    }
}
