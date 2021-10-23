#include <stdio.h>   
#define PI 3.14
int main(){
float Hacim;
int Yaricap;

printf("Yaricapin degeri:");
scanf("%d", &Yaricap);
Hacim=(4/3.0)*PI*(Yaricap*Yaricap*Yaricap);

printf("Kürenin hacmi %lf",Hacim);
return 0;


}