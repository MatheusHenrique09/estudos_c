#include <stdio.h>
#include <math.h>

int main(){
    double base,altura,diagonal,perimetro,area;

    printf("Base do retangulo: ");
    scanf("%lf",&base);

    printf("Altura do triangulo: ");
    scanf("lf",&altura);

    area = base * altura;

    perimetro = 2 * (base + altura);

    diagonal = sqrt(base * base + pow(altura,2.0));

    printf("AREA = %.4lf \n",area);
    printf("PERIMETRO = %.4lf \n",perimetro);
    printf("DIAGONAL = %.4lf \n",diagonal);

    return 0;
}