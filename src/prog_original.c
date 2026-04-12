#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    while (x > 0) {
        if (y > x) {
            y = y - x;
        } else if (y < x) {
            x = x - y;
        } else {
            x = x - 1;
            y = y - 1;
        }
    }

    printf("%d\n", y);
    return 0;
}
