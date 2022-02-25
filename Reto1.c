#include <stdio.h>

void swap(int d1, int d2);

int x;
int y;

int main(void){
x = 1;
y = 2;
printf("Valor de x: %d\n",x);
printf("Valor de y: %d\n",y);
swap(x,y);
printf("Valor de x: %d\n",x);
printf("Valor de y: %d\n",y);
return 0;
}

void swap(int d1, int d2){
int temp;
temp = d1;
d1 = d2;
d2 = temp;

}