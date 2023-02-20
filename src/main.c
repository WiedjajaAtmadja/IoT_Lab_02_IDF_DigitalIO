#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define HIGH 1
#define LOW 0

#define LED_BUILTIN GPIO_NUM_2
#define LED_MERAH GPIO_NUM_21
#define LED_KUNING GPIO_NUM_19
#define LED_HIJAU GPIO_NUM_18

void app_main() {
    gpio_set_direction(LED_BUILTIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_MERAH, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_KUNING, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_HIJAU, GPIO_MODE_OUTPUT);
    while (1)
    {
        printf("Hello world!\n");
        gpio_set_level(LED_BUILTIN, HIGH);
        gpio_set_level(LED_MERAH, HIGH);
        gpio_set_level(LED_KUNING, HIGH);
        gpio_set_level(LED_HIJAU, HIGH);

        vTaskDelay(1000 / portTICK_PERIOD_MS);
        
        gpio_set_level(LED_BUILTIN, LOW);
        gpio_set_level(LED_MERAH, LOW);
        gpio_set_level(LED_KUNING, LOW);
        gpio_set_level(LED_HIJAU, LOW);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }   
}