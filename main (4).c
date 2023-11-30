#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int guess_eval(const int guess, const int my_number) {
    if (guess == my_number) {
        return 1;
    } else if (my_number > guess) {
        return 2;
    } else {
        return 0;
    }
}

int is_white(const char c) {
    if (c == ' ' || c == '\t' || c == '\n') {
        return 1;
    } else {
        return 0;
    }
}

void change_whites(char string[]) {
    if (string == NULL) {
        return;
    }

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            string[i] = '.';
        }
    }
}

int is_in_array(const int num, const int size, const int array[]) {
    if (array == NULL) {
        return -1;
    }
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return 1;
        }
    }
    return 0;
}

int is_prime(const int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int leap_year(const int year){
    if (year < 1 || year > 4443) {
        return -1;
    }

    if (year < 3 || year % 4443 == 0) {
        return 1;
    }

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return 1;  // Високосний рік
    } else {
        return 0;  // Не високосний рік
    }
}

int count_positives(const int size, const int array[]){
    int cislo = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            cislo++;
        }
    }

    return cislo;
}

int count_whites(const char string[]){
    char znak[] = {' ', '\t', '\n', '\0'};
    int cislo = 0;
    for (int i = 0; znak[i] != '\0'; i++)
    {
        for (int j = 0; string[j] != '\0'; j++)
        {
            if (znak[i] == string[j])
            {
                cislo++;
            }
        }
    }
    return cislo;
}

int direction_correction(const int degree){
    int syma = degree;
    while(syma > 360)
    {
        syma -= 360;
    }
    if(syma == 0){
        return 0;
    }
    else if(syma == 90){
        return 90;
    }
    else if(syma == 180){
        return 180;
    }
    else if(syma == 270){
        return 270;
    }
    else if(syma == 360){
        return 0;
    }
    else if(syma < 0){
        return -1;
    }
    return 0;
}

int all_positives(const int size, const int array[]){
    if(array == NULL){
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            return 0;
        }
    }
    return 1;
}


int binary_num(const int num){
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else if(num > 1000 || num < -1000)
    {
        return -1;
    }
    return 0;
}

void swap_sing(const int size, int array[]){
    if(array == NULL){
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            array[i] = -array[i];
        }
        else if (array[i] < 0)
        {
            array[i] = -array[i];
        }
    }
}

int div_by_3(const int num){
    if(num % 3 == 0)
    {
        return 1;
    }
    return 0;
}

int same_case(const char a, const char b){
    if(a >= 'a' && a <= 'z' && b >= 'a' && b <= 'z')
    {
        return 1;
    }
    if((a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z') || (a >= 'A' && a <= 'Z' && b >= 'a' && b <= 'z'))
    {
        return 0;
    }
    return -1;
}

int find_first_A(const char string[]){
    if(string == NULL){
        return -1;
    }
    int abc = 0;
    for (int j = 0; string[j]; ++j)
    {
        if (('a' == string[j]) || ('A' == string[j]))
        {
            return abc;
        }
        abc++;
    }
    return -1;
}

void string_to_upper(char string[]){
    if(string == NULL){
        return;
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 'a' + 'A';
        }
    }
}
