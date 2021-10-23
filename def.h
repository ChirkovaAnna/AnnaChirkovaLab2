#include <stdio.h>
#include <stdint.h>
// Объявляем прототип функции поиска номера заданного элемента number в массиве, написанной на языке ассемблер
// Функция принимает: указатель на исходный массив, размер массива. Функция возвращает номер заданного элемента
int32_t func_asem_num(int32_t* mas_in, int32_t size, int32_t number);

// Объявляем прототип функции записи всех четных элементов после номера элемента number, написанной на языке ассемблер
int32_t func_asem_mas_out_even_numbers(int32_t* mas_in, int32_t size,  int32_t* mas_out1, int32_t num);

// Объявляем прототип функции поиска номера заданного элемента number в массиве, написанной на языке C
int32_t def_c_num(int32_t* mas_in, int32_t size, int32_t number);
    
// Объявляем прототип функции записи всех четных элементов после номера элемента number, написанной на языке C
int32_t def_mas_out_even_numbers(int32_t* mas_in, int32_t size, int32_t num, int32_t* mas_out);

