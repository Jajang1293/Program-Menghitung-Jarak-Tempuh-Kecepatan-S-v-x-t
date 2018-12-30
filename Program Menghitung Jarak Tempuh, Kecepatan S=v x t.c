#include<stdio.h>
void main()
{
    float v,t,Kecepatan;
    printf("Program Menghitung Jarak Tempuh S=V*t\n");
    printf("\n Kecepatan V (meter) = ");
    scanf("%f", &v);
    printf("\n Waktu t (detik) = ");
    scanf("%f", &t);
    Kecepatan=v*t;
    printf("\n Jarak Tempuh S (m/s) = %.2f\n",Kecepatan);
}
