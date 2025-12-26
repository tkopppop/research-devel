#include <stdio.h>
void reverse(char s[]) {
        int i, j;
        char c;

        for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
                c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}
void itoa(int n, char s[]) {
        int i, sign;

        if((sign = n) < 0)
                n = -n;
        i = 0;
        do {
                s[i++] = n % 10 + '0';
        } while ((n /= 10) > 0);
        if (sign < 0)
                s[i++] = '-';
        s[i] = '\0';
        reverse(s);
}

int main() {
int op = 1;
int op2 = 2;
int op3 = 3;
char ch[3];

itoa(op, &ch);

if (ch[0] == '1')
        printf("%d\n", op3);

}
