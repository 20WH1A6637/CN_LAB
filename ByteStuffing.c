#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    fgets(a, 20, stdin);
    int j = 0, i = 0, count = 0;
    while(count != 2 && i < 20){
        if(a[i] == 'f'|| a[i] == 'e'){
            b[j++] = 'e';
            b[j++] = ' ';
            b[j++] = a[i++];
            count++;
        }
        else if(count == 1){
            count = 0;
        }
        else{
            b[j++] = a[i++];
        }
    }
    printf("%s",b);
}
