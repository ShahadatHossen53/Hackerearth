//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, a, b;
    bool result = true;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a>>b;
        if(a<b){
            result = false;
            break;
        }
    }
    if(result){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
