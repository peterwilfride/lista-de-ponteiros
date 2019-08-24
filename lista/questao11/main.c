#include <stdio.h>

int main()
{
    char xChar[4];
    short int xInt[4]; // foi ussado o short para que o int tivesse apenas 2 bytes
    float xFloat[4];
    double xDouble[4];
    printf("Para o tipo char localizado em %d\n",xChar);
    printf("%d\n",xChar+1);
    printf("%d\n",xChar+2);
    printf("%d\n\n",xChar+3);
    printf("Para o tipo int localizado em %d\n",xInt);
    printf("%d\n",xInt+1);
    printf("%d\n",xInt+2);
    printf("%d\n\n",xInt+3);
    printf("Para o tipo float localizado em %d\n",xFloat);
    printf("%d\n",xFloat+1);
    printf("%d\n",xFloat+2);
    printf("%d\n\n",xFloat+3);
    printf("Para o tipo double localizado em %d\n",xDouble);
    printf("%d\n",xDouble+1);
    printf("%d\n",xDouble+2);
    printf("%d\n\n",xDouble+3);
    return 0;
}
