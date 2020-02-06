//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/tutorial/

#include<stdio.h>
int main(){
    char s[101];
    gets(s);
    int i, num[10] = {0};
    for(i=0; i<strlen(s); i++){
        num[s[i]-48]++;
    }
    for(i=0; i<10; i++){
        printf("%d %d\n", i, num[i]);
    }
}
