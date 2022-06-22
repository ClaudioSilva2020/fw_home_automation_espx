/**
 * @file main.c
 * @brief
 * @author Claudio Silva
 * @version 1.0
 * @date 22 de jun. de 2022
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
    while (true)
    {
        printf("Hello from app_main!\n");
        sleep(1);
    }
}
