#include<stdio.h>
int main(){
   int age;
   char name[20];
   char answer = 'Y';
   int i=0;
   while ( answer == 'Y'){
    printf("请输入你的年龄:\n");
    scanf("%d",&age);
    printf("请输入你的姓名:\n");
    scanf("%s",name);
    printf("你的年龄是：%d,你的姓名是：%s\n",age,name);
    printf("是否需要继续输入(Y/N)\n");
    scanf(" %c",&answer);
    i++;
    }
   printf("你的操作次数是%d次\n",i);
   return 0; 
}