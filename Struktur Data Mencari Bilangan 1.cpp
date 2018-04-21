#include <cstdio>
 
 
int main(){
    int arr[1001]={0}, n, x, i, j;
    scanf("%d",&i);
    while(i!=-9){
        arr[i-1]++;
        scanf("%d", &i);
         
    }
 
 
     
    scanf("%d", &n);
    for(j=0;j<n;j++){
        scanf("%d", &x);
        if(arr[x-1]==0) printf("%d tidak ada\n", x);
        else printf("%d ada\n", x);
    }
     
     
     
    return 0;
 
}
