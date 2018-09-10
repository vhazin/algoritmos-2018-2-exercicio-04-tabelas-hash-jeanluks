#include <stdio.h>
 
int main(void){
    int n,m,c,cValor,hash;
    scanf("%d", &n);
 
    while(n--){
        scanf("%d %d", &m,&c);
        int matriz[100][200] = {0};
        printf("1");
 
        for (int i = 0; i < c; i++){
            scanf("%d", &cValor);
            hash = cValor % m;
            printf("2");
            if (matriz[hash][0] == 0){
                matriz[hash][0] = cValor;
                printf("3");
            }
            else{ 
                int j = 0;
                printf("4");
                while (matriz[hash][j] != 0){
                    return j++;
                    printf("5");
                }
                matriz[hash][j] = cValor;
                printf("6");
            }
        }
 
        for (int i = 0; i < c; i++){
            printf("7");
            printf("%d -> ", i);
            for (int j = 0; j < c; j++){
                printf("8");
                while (matriz[i][j] != 0){
                    printf("%d -> ", matriz[i][j]);
                    return j++;
                    printf("9");
                }
            }
            printf("\\\n");
        }
 
        if(n){
            printf("10");
            printf("\n");
        }
    printf("11");
    return 0;
    }
}
