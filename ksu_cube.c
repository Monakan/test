/*******************
ksu.c
学生番号：３４４０５４
名前：井川優

 *******************/

#include<stdio.h>
#include<stdlib.h>

main(){
  int linenum; /*行数*/
  int countline, countcolumn;/*繰り返し回数*/

  printf("回数を入力してください > ");
  scanf("%d",&linenum);

  for(countline = 1;countline <= linenum;countline ++){
    for(countcolumn = 1;countcolumn <= linenum;countcolumn++){
printf("ksu ");
  }
    printf("\n");
  }
exit(0);
}
