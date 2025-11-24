#include <stdio.h>
#include <string.h>

int main() {
    char t[] = "ababcabcababc";
    char p[] = "abc";

    int n = strlen(t);
    int m = strlen(p);

    int i, j;

    int hp = 0;

    for (i = 0; i < m; i++) {
        hp = hp + (p[i] - 'a' + 1);   // a=1 b=2
    }

    for (i = 0; i <= n - m; i++) {

        int ht = 0;   // re-calc hash from zero

        for (j = 0; j < m; j++) {
            ht = ht + (t[i + j] - 'a' + 1);
        }

        if (ht == hp) {
            for (j = 0; j < m; j++) {
                if (t[i + j] != p[j]) break;
            }
            if (j == m) {
                printf("match at index %d\n", i);
            }
        }
    }

    return 0;
}
