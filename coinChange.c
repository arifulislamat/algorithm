#include <stdio.h>

#define MAX 1000
#define COIN_ARRAY_SIZE 4

void makeChange(int coin[], int n, int value)
{
    int i, j, k;
    int min_coin[MAX];

    int count[MAX + 1][COIN_ARRAY_SIZE] = {0}; // zeroing
    int min;

    //int count[MAX];
    min_coin[0] = 0;

    for (i=1; i <= value; i++)
    {
        min = 999;
        for (j = 0; j<n; j++)
        {
            if (coin[j] <= i)
            {
                if (min > min_coin[i-coin[j]]+1)
                {
                    min = min_coin[i-coin[j]]+1;
                    for(k = 0; k < n; ++k)
                    {
                        count[i][k] = count[i-coin[j]][k]; // copy coin counts when value=i-coin[j]
                    }
                    count[i][j]++; // use a coin[j], increase the count
                }
            }
        }
        min_coin[i] = min;
    }
 
    for(int i = 0; i < COIN_ARRAY_SIZE; ++i){
        printf("%d: %d\n", coin[i], count[value][i]);
    }
    printf("minimum coins required %d \n\n", min_coin[value]);
}
 int main(){
    int coin[COIN_ARRAY_SIZE] = {5,3,2,1};
    makeChange(coin, 4, 8);
    makeChange(coin, 4, 10);
};   