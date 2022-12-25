#include <stdio.h>

/*
            Nested While Loop
0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
5 4 3 2 1 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1 0
8 7 6 5 4 3 2 1 0
9 8 7 6 5 4 3 2 1 0
10 9 8 7 6 5 4 3 2 1 0
*/
int main()

{

    int a = 0 ;
    int b;
    while(a <= 11)
    {
        b = a - 1;
        printf(" %i ",a);
        a++;

        
        while(b >= 0)
        {
            printf(" %i ",b);
            b--;
        }

        printf("\n");
    }


return 0;
}