#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, num;
   printf("Digite um valor \n");
   scanf("%d", &num);

   if(num > 0){
        i = num;
   while(i>=1){
        printf("%d \t", i);
        i--;
   }

   }else{
        printf("Numero Invalido! \n");
   }
    return 0;
}
