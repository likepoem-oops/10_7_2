#include <stdio.h>

int main()
{
    int passpword = 123;
    int inputpwd = 0;
    int a = 0;
    printf("����������:");
    scanf("%d",&inputpwd);
    while (a == 0){
    a = (inputpwd == passpword)? 1 : 2;
    if(a == 1){
        printf("������ȷ\n");
    }else{
        printf("�����������������");
    scanf("%d",&inputpwd);
    a = 0;}
    }
    printf("Hello, World!\n");
    return 0;
}
