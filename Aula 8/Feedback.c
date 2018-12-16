#include <stdio.h>

main()
{
    int N,K,feed,i,j;
    scanf("%d",&N);
    if(1 < N && N < 100)
    {
        for(i = 0 ; i < N ; i++)
        {
            scanf("%d",&K);
            if(1 < K && K < 50)
            {
                for(j = 0 ; j < K ; j++)
                {
                    scanf("%d",&feed);
                    switch (feed)
                        {
                            case 1:
                                printf("Rolien\n"); break;
                            case 2:
                                printf("Naej\n");
                                break;
                            case 3:
                                printf("Elehcim\n"); break;
                            case 4:
                                printf("Odronoel\n"); break;
                        }
                }
            }
        }
    }
}
