#include <string.h>
#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int     main(void)
{
        char *str1 = "ABCDEFGHIJKLMNOPQEWRADFSDF";
        //char *str2 = "String 2!";
        char des[52] = "0123456789";
        char des2[52] = "0123456789";
        char *teste;

        printf("str 1: %s\ndes: %s\n", str1, des);
        teste = strncat(des, str1, 200);
        printf("Resultado no des: %s\n", des);
        printf("lenght: %ld\n",strlen(teste));

        //des = "42 coisas aqui;";
        printf("\nMinha vez!!\nstr 1: %s\ndes: %s\n", str1, des2);
        teste = ft_strncat(des2, str1, 200);
        printf("Resultado no des: %s\n", des2);
        printf("lenght: %ld\n",strlen(teste));
}