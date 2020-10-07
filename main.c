#include <stdio.h>

int main()
{
    int passpword = 123;
    int inputpwd = 0;
    int a = 0;
    printf("请输入密码:");
    scanf("%d",&inputpwd);
    while (a == 0){
    a = (inputpwd == passpword)? 1 : 2;
    if(a == 1){
        printf("密码正确\n");
    }else{
        printf("密码错误，请重新输入");
    scanf("%d",&inputpwd);
    a = 0;}
    }
    printf("Hello, World!\n");
    return 0;
}
