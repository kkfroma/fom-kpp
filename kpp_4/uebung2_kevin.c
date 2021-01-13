#include <stdio.h>

int main () {

int zahl1;
int zahl2;
int summe=0;
int differenz=0;
int produkt=0;
int quotient=0;
int divisionsrest=0;



printf("Geben Sie zwei Zahlen ein: ");

scanf("%d %d", &zahl1, &zahl2);

int summe=zahl1+zahl2;
int differenz=zahl1-zahl2;
int produkt=zahl1*zahl2;
int quotient=zahl1/zahl2;
int divisionsrest=zahl1%zahl2;


printf("Summe: %d \nDifferenz: %d \nProdukt: %d \nQuotient: %g \nDivisionsrest: %d" summe, differenz, produkt, quotient, divisionsrest);

return 0;

}
