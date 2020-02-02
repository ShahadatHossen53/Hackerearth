//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/

#include<stdio.h>
int main(){
    int n, i, temp;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0 ;i<n; i++){
        scanf("%d", &a[i]);
        b[i] = i;
    }
    for(i=0; i<n-1; i++){
        int k=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                k++;
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
        if(k==0){
            break;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}
