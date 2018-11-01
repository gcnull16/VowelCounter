#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{
    char s[100];

    int a;

    int e;

    int i;

    int o;

    int u;

    a = 0;

    e = 0;

    i = 0;

    o = 0;

    u = 0;


    int k;

    printf("Enter a sentence or phrase: ");

    gets(s);

    printf("Aa = %d\n", a);

    printf("Ee = %d\n", e);

    printf("Ii = %d\n", i);

    printf("Oo = %d\n", o);

    printf("Uu = %d\n", u);


    for(k = 0; k < s; k++ )
    {

    if(s[k] == 'a' || s[k] == 'A')

    {
       a = a + 1;

    }
    else if(s[k] == 'e' || s[k] == 'E')

    {
        e = e + 1;

    }
     else if(s[k] == 'i' || s[k] == 'I')

    {
        i = i + 1;

    }
    else if(s[k] == 'o' || s[k] == 'O')

    {
        o = o + 1;

    }
     else if(s[k] == 'u' || s[k] == 'U')

    {
        u = u + 1;

    }


    }


    return 0;

}
