//https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/a-b-4/?fbclid=IwAR2sO2mI3PdgENVkSVzQyFwJoO5-iCjG24CpN-lMumV0MaFC5C3x9J1l-JQ

#include<bits/stdc++.h>
using namespace std;
void sum(string a, string b);
int main(){
    string a, b;
    while(cin>>a>>b){
        sum(a, b);
    }
}
void sum(string a, string b){
    int result[101] = {0};
    char tempa[101], tempb[101];
    int i, lena, lenb, j =100, carry =0, digit;
    for(i=0; i<100; i++){
        tempa[i] = '0';
        tempb[i] = '0';
    }
    lena = a.size();
    lenb = b.size();
    for(i=lena; i>=0; i--){
        tempa[j--] = a[i];
    }
    j=100;
    for(i=lenb; i>=0; i--){
        tempb[j--] = b[i];
    }
    for(i=100; i>=0; i--){
        if(((tempa[i]+tempb[i]+carry)-96)>9){
            result[i] = ((tempa[i]+tempb[i]+carry)-96)-10;
            carry =1;
        }
        else{
            result[i] = (tempa[i]+tempb[i]+carry)-96;
            carry =0;
        }
    }
    result[i] = carry;
    i=0;
    while(result[i]==0){
        i++;
    }
    if(i==100){
        i--;
    }
    for(i; i<100; i++){
        cout<<result[i];
    }
    cout<<endl;
}
