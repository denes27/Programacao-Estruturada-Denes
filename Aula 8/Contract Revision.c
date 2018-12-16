#include <stdio.h>
#include <string.h>

int main() {

    int i, j, k = 0, l = 0;
    char n[1000], d;

    while(1) {
            scanf("%c %s", &d, &n);

            if(d == '0' && strcmp(n, "0") == 0){
               l == 1;
                break;
            }

            if(l == 0){
            for(i = 0; n[i] != '\0'; ++i){
                if(n[i] == d){
                   for(j = i; n[j] != '\0' ; ++j){
                        n[j] = n[j + 1];
                   }
                   --i;
                }
            k = 0;
            if(n[0] == '0'){
            while(k != 1){
                for(j = 0; n[j] != 0 ; ++j){
                    n[j] = n[j+1];
                }
                --i;
            if(n[0] != '0')
                k = 1;
            }
                    }

            }

            if(n[0] == 0){
                n[0] = '0';
                n[1] = 0;
            }
            printf("%s\n", n);
            getchar();
        }
            }

return 0;
}
