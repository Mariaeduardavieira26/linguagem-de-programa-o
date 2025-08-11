/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str0[20], str1[20];

    printf("Digite uma string: ");
    gets(str0);

    printf("Digite outra string: ");
    gets(str1);

    if (strcmp(str0, str1) == 0) {
        printf("Sao iguais");
    }

    return 0;
}
