#include<stdio.h>
int main() {
    int T;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // printf("Enter Test-Cases: ");
    scanf("%d", &T);

    while (T>0) {
        int N=0,count=0,count_digit=0;
        // printf("Enter a number: ");
        scanf("%d", &N);
        int temp=N, temp_1 = N;
        while(temp>0) {
            temp=temp/10;
            count++;
        }
        int a[count];
        for (int i=0; i<count; i++) {
            a[i] = 0;
        }
        for (int i=0; i<count; i++) {
            a[i] += N%10;
            N=N/10;
        }
        // for (int i=0; i<count; i++) {
        //     printf("%d \t", a[i]);
        // }
        for (int i=0; i<count; i++) {
            if (a[i] != 0 && temp_1 % a[i] == 0) {
                count_digit++;
            }
        }
        printf("\n%d\n", count_digit);
        T--;
    }
    
}
