#include <stdio.h>
int main()
{
    int a, b, i, j, c = 0, n = 0, m = 0;
    scanf("%d%d", &a, &b);
    int matriz[a][b];
    for(i=0; i<a; i++)
        for(j=0; j<b; j++)
            scanf("%d", &matriz[i][j]);

    for(i=1; i<a-1; i++)
    {
        for(j=1; j<b-1; j++)
        {
            if(matriz[i][j]==42)
                if(matriz[i-1][j-1]==7 && matriz[i-1][j]==7 && matriz[i-1][j+1]==7)
                    if(matriz[i][j-1]==7 && matriz[i][j+1]==7)
                        if(matriz[i+1][j-1]==7 && matriz[i+1][j]==7 && matriz[i+1][j+1]==7)
                        {
                            c = 1;
                            n = i+1;
                            m = j+1;
                        }
        }
    }
    printf("%d %d\n", n, m);
    return 0;
}
