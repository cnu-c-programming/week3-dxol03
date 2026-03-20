#include <stdio.h>
#include <stdarg.h>


int average(int count, ...) {
    va_list ap;
    int sum = 0;

    va_start(ap, count);

    for(int i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }

    return sum / count;
    va_end(ap);

}

int main() {
    printf("%d\n",average(3,10,20,30));
    printf("%d\n",average(5,10,20,30,40,50));
    return 0;
}
