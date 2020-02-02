//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/

#include<stdio.h>
int main(){
    int t, k;
    scanf("%d", &t);
    for(k = 0; k<t; k++){
        int n, i, num=0, temp, max_sum =0, min_sum = 0, dif, m;
        scanf("%d %d\n", &n, &m);
        int a[n];
        for(i=0 ;i<n; i++){
            scanf("%d", &a[i]);
        }
        for(i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    num++;
                }
            }
        }
        int x=n-1, y=0;
        dif = n-m;
        while(dif--){
            max_sum+=a[x--];
            min_sum += a[y++];
        }
        
        printf("%d\n", max_sum - min_sum);
    }
    return 0; 
}
