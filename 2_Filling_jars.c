#include<stdio.h>
int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    int total=0;

    for (int i=0; i<M; i++) {
        int a, b, k;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &k);

        if (b<=N) {
            total+=(b-a+1) * k;
        }
        else {
            break;
        }
    }
    int avg = total/N;
    printf("%d", avg);
}