#include <string.h>
#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int     main(void)
{
        char *str1 = "String 1!";
        //char *str2 = "String 2!";
        char des[200] = "42 coisas aqui;";
        char des2[200] = "42 coisas aqui;";
        char *teste;

        printf("str 1: %s\ndes: %s\n", str1, des);
        teste = strcat(des, str1);
        printf("Resultado no des: %s\n", des);
        printf("lenght: %ld\n",strlen(teste));

        //*des = "42 coisas aqui;";
        printf("\nMinha vez!!\nstr 1: %s\ndes: %s\n", str1, des2);
        teste = ft_strcat(des2, str1);
        printf("Resultado no des: %s\n", des2);
        printf("lenght: %ld\n",strlen(teste));
}
