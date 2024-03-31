#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
      // TODO: Solicite o valor inicial ao usuário

      int inicial = 0;
      int final = 0;
      int anos = 0;
      int nascimentos = 0;
      int mortes = 0;

      do{

       inicial = get_int("Start Size:" );


      }while(inicial < 9);



     // TODO: Solicite o valor final ao usuário

      do{

      final = get_int("End Size:" );

      }while (final < inicial);

     // TODO: Calcule o número de anos até o limite
     do{

      if (inicial == final){

            break;
      }

     nascimentos = floor(inicial / 3);

     mortes = floor(inicial / 4);

     inicial = inicial + nascimentos - mortes;

     anos++;

     } while(inicial < final);

     printf("Years: %i\n", anos);


     // TODO: Imprima o número de anos

}