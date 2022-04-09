#include<string.h>

#include<stdio.h>

int LCS( char *A, char *B, int x, int y )

{

    int L[x+1][y+1];

    int i, j; 

    for(i =0; i<=x; i++){

        for(j=0; j<=y; j++){

            if( i==0|| j==0)

                 L[i][j] = 0;

            else if(A[i-1] == B[j-1]){

                L[i][j] = L[i-1][j-1] + 1;

            }

            else{

                L[i][j] = maximum(L[i-1][j], L[i][j-1]);

            }

        }

    }

    return L[x][y];

}

int maximum(int a, int b)

{

    return (a > b)? a : b;

} 

int main()

{

char A[] = "XY";

char B[] = "XPYQ";

int x = strlen(A);

int y = strlen(B);

printf("The Length of Longest Common Subsequence is %d", LCS( A, B, x, y ) );

return 0;

}
