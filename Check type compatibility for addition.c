#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_numeric_type(const char* type) {
    const char* numeric_types[] = {"int", "float", "double", "char"};
    int num_types = sizeof(numeric_types) / sizeof(numeric_types[0]);

    for (int i = 0; i < num_types; i++) {
        if (strcmp(type, numeric_types[i]) == 0) {
            return true;
        }
    }
    return false;
}



int main() {
    char type1[20], var1[20], type2[20], var2[20];

    printf("--- Type Compatibility Checker ---\n");
    printf("Enter input (format: type1 var1 type2 var2): ");

    if (scanf("%19s %19s %19s %19s", type1, var1, type2, var2) != 4) {
        printf("Result: Invalid input format.\n");
        return 1;
    }

    if (is_numeric_type(type1) && is_numeric_type(type2)) {
        printf("Result: Types are compatible for addition.\n");
    } else {
        printf("Result: Types are not compatible for addition.\n");
    }

    return 0;
}


