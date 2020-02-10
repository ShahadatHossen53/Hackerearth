//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/compiler-version-2/

#include<bits/stdc++.h>
using namespace std;
void newCompiler(string s);
int main(){
    string str;
    int i = 0, j;
    while(getline(cin, str)){
        newCompiler(str);
    }
}

void newCompiler(string s){
    int i,j=0, len = s.size();
    char output[1000]="";
    for(i=0; i<len; i++){
        if(s[i] == '-' && s[i+1] == '>'){
            output[j++] = '.';
            i++;
        }
        else if(s[i] == '/' && s[i+1] == '/'){
            for(i; i<len; i++){
                output[j++] = s[i];
            }
            break;
        }
        else{
            output[j++] = s[i];
        }
    }
    cout<<output<<endl;
}


