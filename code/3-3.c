#include <stdio.h>
#include <stdarg.h>


int average(int count, ...) {
    va_list ap;
    int sum = 0;

    va_start(ap, count);

    for(int i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);

    if (count == 0) return 0;
    return sum / count;
}

int main() {
    printf("%d\n",average(3,10,20,30));
    printf("%d\n",average(3,10,20,30,40,50));
    return 0;
}
