#include <stdio.h>
#include <stdint.h>
#include "def.h" /* Заголовочный файл объявляет несколько целочисленных типов и макросов */

// Инициализируем первичный массив с числами
int32_t mas_in[] = {1,10,6,8,10,17,0,25,26,90};
// Элемент массива, который нужно найти 
int32_t number = 0;
// Номер элемент массива number
int32_t num = 0;
// Объявляем пустые массивы с размером первичного массива
int32_t mas_out[sizeof(mas_in)/sizeof(int32_t)] = {0};
int32_t mas_out1[sizeof(mas_in)/sizeof(int32_t)] = {0};

int main(void)
{
	/*Вызываем функцию написанную на ассемблере func_asem_num.
    Поиска номера элемента number в массиве    
	Размерность массива такая же как у оригинального массива.*/
    num = func_asem_num(mas_in, sizeof(mas_in), number);
    
 	/*Вызываем функцию написанную на ассемблере func_asem_mas_out_even_numbers.
    Поиска четных элементов в массиве после номера num, найденного в func_asem_num   
	Размерность массива такая же как у оригинального массива.*/   
    func_asem_mas_out_even_numbers(mas_in, sizeof(mas_in), mas_out1, num);

	/*Вызываем функцию def_c_num.
    Поиска номера элемента number в массиве    
	Функция возвратит номер этого элемента. 
	Размерность массива такая же как у оригинального массива.*/
	num = def_c_num(mas_in, sizeof(mas_in)/sizeof(int32_t), number);

    /*Вызываем функцию def_mas_out_even_numbers.
    Поиска четных элементов в массиве после номера num, найденного в def_c_num   
	Функция запишет четные числа в массив mas_out. 
	Размерность массива такая же как у оригинального массива.*/
    def_mas_out_even_numbers(mas_in, sizeof(mas_in)/sizeof(int32_t), num, mas_out);

    
    
	while(1)
	{
		
	}
	return 0;
}



