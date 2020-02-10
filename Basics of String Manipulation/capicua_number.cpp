//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/capicua-2/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, num1;
    cin>>n;
    while(n--){
        int num2 = 0, temp;
        cin>>num1;
        temp = num1;
        while (temp != 0)
          {
            num2 = num2 * 10;
            num2 = num2 + temp%10;
            temp = temp/10;
          }
        if(!(num1-num2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
