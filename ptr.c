#include<stdio.h>
int main()

{

int *aptr;

int *bptr;

int *cptr;

             int value1 = 0;

             int value2 = 0;

             int result = 0;

             aptr = &value1;

bptr = &value2;

*bptr = value2 + 5; // value2 = 5

*aptr = 6;               //value1 = 6

cptr = &value2;

*cptr = *aptr + *bptr; //6 + 5 = value 2  = 11

result = value1+value2;

printf("%d",result);

return 0;

}


