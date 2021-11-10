#include <stdio.h>
int main()
{
    int value1=0;
    int value2=0;
    int value3=0;
    int*aptr;
    int*bptr;
    int*cptr;

       aptr=&value1;

       bptr=&value2;
       *aptr=10;
       *bptr=110;
       value3=*aptr-*bptr;

       cptr=&value3;
       cptr=value3+*aptr;
       bptr=cptr;
       aptr=bptr;
       printf("%d",aptr) ;
       return 0;
}
