#include <stdio.h>

int     ft_atoi(char *str);

int     main(void)
{
        //char    *str = "             +++-+-+-+++-++-8L9E77-TRAS";
        //char  *str = "             +++-+-+-+++-++-L9E-TRAS";
        //char  *str = "             +++-+-+-+++-++-LE-TRAS";
        //char  *str = "-9--E-TRAS";
        //char  *str = "   ---+--+1234ab567";
        char    *str = "   --+--+1034ab567";
        //char    *str = "-206103467";
        //char    *str = "+--+-0206103467";
        //char    *str = "-";
        //char    *str = "";
        int     valor;

        valor = ft_atoi(str);
        printf ("valor do int: %d\n", valor); 
	return (0);
}
