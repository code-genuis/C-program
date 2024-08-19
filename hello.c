#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string first_name = get_string("What is your first name? ");
    string last_name = get_string("What is your last name? ");
    int age = get_int("What is your age? ");
    string phone_number = get_string("What is your phone number? ");


    printf("Name: %s %s\n", first_name, last_name);
    printf("Age: %i\n", age);
    printf("Phone number: %s\n", phone_number);

    printf("Nice to meet you, %s %s\n", first_name, last_name);

    return 0;
}