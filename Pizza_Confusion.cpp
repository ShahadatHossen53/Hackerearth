//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/pizza-confusion/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, point, m = -1;
    cin>>n;
    string str, result = "";
    for(i=0; i<n; i++){
        cin>>str>>point;
        if(m<point){
            m = point;
            result = str;
        }
        else if(m==point){
            result = min(result, str);
        }
    }
    cout<<result<<endl;
}
