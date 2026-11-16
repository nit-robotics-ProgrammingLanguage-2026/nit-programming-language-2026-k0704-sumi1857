#include <stdio.h>

/*static変数を使って値の累積和を管理する関数*/
int add_to_total(int value)
{
 /*関数を呼び出しても値が保持される*/
  static int total=0;
  
  total +=value;
  
  return total;
}

int main(void)
{
  int input_number;
  int result=0;
  
  scanf("%d",&input_number);
  
  if(input_number < 1 ||input_number > 10)
  {
    printf("NG");
    return 0;
  }
  
  for(int current=1; current<=input_number;current++)
  {
    result = add_to_total(current*2);
  }
  
  printf("%d",result);
  
  return 0;
}
