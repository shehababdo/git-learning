#include <stdio.h>
#include <stdlib.h>

int main()

{
    int m =5 ;

    for (int i =1 ; i<= m ; i++){

       for (int j =1 ; j <= (2*m-1); j ++){
       if (j<=((m-i)+1)&&((m+i)-1)){
        printf("*\n");
       }
       else {
        printf(" ");
            }
    }
    }

    return 0;
}
