// File: 03_storage_classes_demo.c
// Purpose: Demonstrate scope, lifetime, and behavior of auto, static, register, and extern variables
// Output: Shows how static persists across calls while auto resets every call

#include <stdio.h>

void counter_demo(void);
void extern_demo(void);

int main() {
    // 1. auto vs static across multiple function calls
    printf("--- 1. auto vs static Storage Classes ---\n");
    for (int i = 1; i <= 3; i++) {
        printf("Function Call #%d -> ", i);
        counter_demo();
    }

    // 2. register storage class (hints compiler to store variable in CPU register)
    printf("\n--- 2. register Storage Class ---\n");
    register int fast_sum = 0;
    for (register int i = 1; i <= 10; i++) {
        fast_sum += i;
    }
    printf("Sum of 1 to 10 using register loop variable = %d\n", fast_sum);

    // 3. extern storage class (accessing a global variable defined later in the file)
    printf("\n--- 3. extern Storage Class ---\n");
    extern int shared_global;
    printf("Inside main()        : shared_global = %d\n", shared_global);
    shared_global += 50;
    extern_demo();

    return 0;
}

void counter_demo(void) {
    auto int local_count = 0;    // Re-initialized to 0 on every call
    static int static_count = 0; // Initialized once; retains value across calls

    local_count++;
    static_count++;

    printf("auto = %d | static = %d\n", local_count, static_count);
}

void extern_demo(void) {
    extern int shared_global;
    printf("Inside extern_demo() : shared_global = %d (updated value visible globally)\n", shared_global);
}

// Definition of the external global variable at file scope
int shared_global = 100;
