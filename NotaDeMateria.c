#include<stdio.h>
#include<stdlib.h>
int main()
{
  char nota; //una variable del tipo char puede almacenar una letra, s�mbolo o d�gito, SOLO UNO
  printf("\n Programa calificacion de materia ");
  printf("\n Ingrese una nota (caracter) \t");
  scanf("%c",&nota);
  if(nota=='a'||nota=='A') //la variable del tipo char se compara encerr�ndola entre ''
  {                        /*  Si no se hiciera eso, se tomar�a el caracter a o A como otra variable en el caso de este programa*/
    printf("\n Sobresaliente ");
  }
  else if(nota=='b'||nota=='B')
  {
    printf("\n Muy bien ");
  }
  else
  {
    printf("\n Debes mejorar ");
  }
  system("PAUSE");
  return 0;
}
