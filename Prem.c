#include <stdio.h>
#include<math.h>

//hsc percentage calculater 


int main()
{
  double number,result;
  printf("\nEnter the marks out of 650 :");
  scanf("%lf",&number);
  result = number/650*100;
  printf("\n Your percentage is %lf %\n",result);
  
  if(result > 35)
    printf("result : pass\n");
  else if (result <35)
    printf("result :fail \n");
   
  return 0;
}
//made by prem with 💝💝💝
//give me a star😊😊
