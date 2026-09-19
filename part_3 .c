#include <stdio.h>

int power(int x){
    return x*x;//定义了一个计算乘方函数
}

int zh(int x,int y,int z){
    int p=(x+y+z)/3;
    int f=(power(p-x)+power(p-y)+power(p-z))/3;
    return 3 * p - f / 3; //定义了一个计算综合成绩的函数
}

void dy(int zh1,int zh2,int zh3){

    if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");//定义了一个判断并打印结果的函数，dy是打印的意思
  }

}

int main(){//在main函数中一步步调用之前定义的函数，使main函数更加简洁
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

  int zh1=zh(x1,x2,x3);
  int zh2=zh(y1,y2,y3);
  int zh3=zh(z1,z2,z3);

  dy(zh1, zh2, zh3);
  
  return 0;
  
}

