#include <stdio.h>
#include <string.h>

int     ft_strcmp(char *s1, char *s2);

int     main(void)
{
        char    *str1 = "Teste 1";
        char    *str2 = "Teste 1";
        char    *str3 = "Teste 2";
        char    *str4 = "Teste ";
        char    *str5 = "42 Razoes para voce ficar Perdido!";
        char    *str6 = "42 sazoes para voce ficarASDASDASD Qerdido!";
        int             i;

        printf("str1: %s\n", str1);
        printf("str2: %s\n", str2);
        printf("str3: %s\n", str3);
        printf("str4: %s\n", str4);
        printf("str5: %s\n", str5);
        printf("str6: %s\n", str6);
        i = strcmp(str1, str2);
        printf("\nResult comp str1 com str2: %d\n", i);
        i = ft_strcmp(str1, str2);
        printf("Meu resultado str1 com str2: %d\n", i);
        i = strcmp(str1, str3);
        printf("Result comp str1 com str3: %d\n", i);
        i = ft_strcmp(str1, str3);
        printf("Meu resultado str1 com str3: %d\n", i);
        i = strcmp(str3, str1);
        printf("Result comp str3 com str1: %d\n", i);
        i = ft_strcmp(str3, str1);
        printf("Meu resultado str3 com str1: %d\n", i);
        i = strcmp(str1, str4);
        printf("Result comp str1 com str4: %d\n", i);
        i = ft_strcmp(str1, str4);
        printf("Meu resultado str1 com str4: %d\n", i);
        i = strcmp(str5, str6);
        printf("Result comp str5 com str6: %d\n", i);
        i = ft_strcmp(str5, str6);
        printf("Meu resultado str5 com str6: %d\n", i);
        return (0);
}