#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int        main(void)
{
    char    *str;
    char    *to_find;

    str = "Salve Mlkada.";
    to_find = "Mllk";
    
    printf("Minha:%s \n", ft_strstr(str, to_find)); // precisa de espaço entre o %s e o \n pq se não da segmentation fault.
    printf("Original:%s \n\n", strstr(str, to_find));
    
    to_find = "";
    printf("Minha:%s \n", ft_strstr(str, to_find));
    printf("Original:%s \n\n", strstr(str, to_find));
    
    to_find = "lve";
    printf("Minha:%s \n", ft_strstr(str, to_find));
    printf("Original:%s \n\n", strstr(str, to_find));
    
    to_find = " M";
    printf("Minha:%s \n", ft_strstr(str, to_find));
    printf("Original:%s \n\n", strstr(str, to_find));
    
    to_find = ".";
    printf("Minha:%s \n", ft_strstr(str, to_find));
    printf("Original:%s \n\n", strstr(str, to_find));

    str = "";
    printf("Minha:%s \n", ft_strstr(str, to_find));
    printf("Original:%s \n\n", strstr(str, to_find));
}

