#include <stdio.h>
#include "pico/stdlib.h"
#include "jvm.h"

int main()
{
    stdio_init_all();
    jvm_process();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }

    return 0;
}
