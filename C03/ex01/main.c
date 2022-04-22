#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
        char    *str1 = "abcdefghi";
        char    *str2 = "abcdEfghi";
        char    str3[] = {'a', 'b', -23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
        char    *str4 = "Teste ";
        char    *str5 = "!";
        char    *str6 = "";
        int             i;

        printf("str1: %s\n", str1);
        printf("str2: %s\n", str2);
        printf("str3: %s\n", str3);
        printf("str4: %s\n", str4);
        printf("str5: %s\n", str5);
        printf("str6: %s\n", str6);
        i = strncmp(str1, str2, 0);
        printf("\nResult comp str1 com str2: %d\n", i);
        i = ft_strncmp(str1, str2, 0);
        printf("Meu resultado str1 com str2: %d\n", i);
        i = strncmp(str1, str3, 7);
        printf("Result comp str1 com str3: %d\n", i);
        i = ft_strncmp(str1, str3, 7);
        printf("Meu resultado str1 com str3: %d\n", i);
        i = strncmp(str3, str1, 7);
        printf("Result comp str3 com str1: %d\n", i);
        i = ft_strncmp(str3, str1, 7);
        printf("Meu resultado str3 com str1: %d\n", i);
        i = strncmp(str1, str4, 7);
        printf("Result comp str1 com str4: %d\n", i);
        i = ft_strncmp(str1, str4, 7);
        printf("Meu resultado str1 com str4: %d\n", i);

        i = strncmp(str5, str6, 25);
        printf("Result comp str5 com str6: %d\n", i);
        i = ft_strncmp(str5, str6, 25);
        printf("Meu resultado str5 com str6: %d\n", i);
        return (0);
}