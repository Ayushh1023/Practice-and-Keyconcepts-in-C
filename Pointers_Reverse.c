    #include<stdio.h>

    int main() {

        int n, rem, rev = 0;
        int *num;

        printf("Enter any number:");
        scanf("%d", &n);

        num = &n;

        while (*num > 0) {
            rem = *num % 10;
            rev = rev * 10 + rem;
            *num = *num / 10;
        }

        printf("Reversed number:%d", rev);

        return 0;
    }