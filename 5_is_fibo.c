#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int max=51;
    int a[N];
    int number;
    for (int i=0; i<N; i++) {
        scanf("%d", &number);
        a[i] = number;
    }
    int start=0;
    int term_1=1;
    int new_term;
    int sum=0;
    int fibo[max];
    for (int i=1; i<=max; i++) {
        new_term = start;
        start = start+term_1;
        term_1 = new_term;
        fibo[i-1] = term_1;
    }
    for (int i=0; i<N; i++) {
        int found = 0;
        for (int j=0; j<max; j++) {
            if (a[i] == fibo[j]) {
                found = 1;
                break;
            }
    }
        if (found) {
            printf("IsFibo\n");
        }
        else {
            printf("IsNotFibo\n");
        }
    }
}