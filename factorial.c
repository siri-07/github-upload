#include<stdio.h>

int factorial(int number)

{
	if(number<0)
	return -1;
    if(number==0||number==1)
    return 1;
    
	// TODO:- Your logic here
    return number*(number-1);
}

// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int main() {
  int num = 0, N = 0;

  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
    
  return 0;
}