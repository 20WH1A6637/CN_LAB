#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    scanf("%s",a);
    int i = 0,count = 0;
    char b[100];
    int j = 0;
    while(count != 6 && i<20){
        if(a[i] == '1'){
            count++;
            b[j] = a[i];
            j++;
            i++;
        }
        else if(count == 5){
            b[j] ='0';
            j++;
            count = 0;
        }
        else if(a[i] == '0'){
            b[j] = a[i];
            j++;
            i++;
            count = 0;
        }
        else{
            b[j++] = a[i++];
        }
    }
    printf("%s",b);
}
