#include <stdio.h>
#include <stdarg.h>


void my_sum(char c,int count, ...) {
    va_list ap;
    va_start(ap,count);
    int sum = 0;

    if(c == 'S') {
        for (int i = 0; i < count; i++) {
            printf("%s",(va_arg(ap,char*)));
            if (i < count -1) {
                printf(" ");
             }
        }
        printf("\n");
        
    } else if (c == 'C') {
        for (int i = 0; i < count; i++) {
            printf("%c",(va_arg(ap, int)));
        }
            printf("\n");
    } else if (c == 'D') {
        for (int i = 0; i < count; i++) {
            sum += va_arg(ap,int);
        }
        printf("%d\n",sum);
    }
    va_end(ap);
}

int main() {
    my_sum('S',2,"Hello","World");
    my_sum('C',3,'C','N','U');
    my_sum('D',4,10,20,30,40);

    return 0;
}
