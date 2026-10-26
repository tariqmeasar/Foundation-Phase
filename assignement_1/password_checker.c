#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char password[] = "Tariq@123";

    int length = strlen(password);

    bool has_min_length = length > 8;
    bool has_capital_letters = true;
    bool has_small_letters = true;
    bool has_numbers = true;
    bool has_symbols = true;

    bool is_password_strong = has_min_length &&
                              has_capital_letters &&
                              has_small_letters &&
                              has_numbers &&
                              has_symbols;

    printf("Password length: %d\n", length);

    if (is_password_strong) {
        printf("Password is Strong\n");
    } else {
        printf("Password is Weak\n");
    }

    return 0;
}
