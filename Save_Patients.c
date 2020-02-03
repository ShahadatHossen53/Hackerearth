//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/

#include<stdio.h>
int main(){
    int n, i, a[10], b[10];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
        if(b[i] <a[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
