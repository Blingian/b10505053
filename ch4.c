#include <stdio.h>
#include <stdlib.h>/* 亂數相關函數 */
#include <time.h>/* 時間相關函數 */
int main ()
{
  int year, month, days;

  /* 設定亂數種子 */
  srand(time(NULL));

    /* 產生亂數 */
    year = rand()%2021; 
    month = rand()%12 + 1;
    days = rand()%31 + 1;
    
  switch (month){
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :  /* 小月 */
      days = 31;
      break;
    
    case 4 : case 6 : case 9 : case 11 :  /* 大月 */
      days = 30;
      break;
    
    case 2 :  /* 閏年算法 */
     if ((year % 400 == 0)|
          (year % 4 == 0 &&(year % 100 != 0)))
      days = 29;
    else days = 28;
    break;
  default:
    days = 0;
  }
  int age;
    age = 2021 - year;  /* 假設沒有死亡 */

    printf("%3d/%2d/%2d\n", year, month, days);
    printf("Age is : %2d\n", age);
    return 0;
}
