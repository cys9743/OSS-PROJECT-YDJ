#include <stdio.h>

int main(void){

  int number;
  char name[10];
  printf("당신의 학번을 입력하세요 :");
  scanf("%d", &number);
  printf("당신의 이름을 입력하세요 : ");
  scanf("%s", &name);
  printf("당신의 학번은 %d 입니다.\n", number);
  printf("당신의 이름은 %s 입니다.\n", name);

  return 0;
}
  
