//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/the-best-player-1/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, m = -1, t;
    cin>>t>>n;
    unsigned long int a[1007], temp;
    string s[1007], stemp;

    for(i=0; i<t; i++){
        cin>>s[i]>>a[i];
    }

    for(i=0; i<t-1; i++){
        int num =0;
        for(int j=0; j<t-i-1; j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                stemp = s[j];
                s[j] = s[j+1];
                s[j+1] = stemp;

                num++;
            }
        }
        if(num==0){
            break;
        }
    }
    int num = 0, j = 0;
    for(i=0; i<n; i++){
        j =i;
        while(a[i]==a[i+1]){ 
            num++;
            i++;
        }
        if(num>0){
            sort(s+j, s+j+num+1);
            num =0;
        }
    }
    for(i=0; i<n; i++){
        cout<<s[i]<<endl;
    }
}
