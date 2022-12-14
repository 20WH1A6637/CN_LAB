#include<stdio.h>
int main(){
    int n;
    printf("Give the window size\n");
    scanf("%d",&n);
    int a;
    printf("Give the number of frames to be sent\n");
    scanf("%d",&a);
    int j = 0;
    while(a > 0){
        for(int i = 0;i < n;i++){
            printf("Frame %d is sent\n",j);
            j++;
        }
        printf("Give the last acknowledged frame\n");
        int temp;
        scanf("%d", &temp);
        if(temp == j-1){
            a = a - n;
        }
        else{
            j = j - n;
        }
    }
}
