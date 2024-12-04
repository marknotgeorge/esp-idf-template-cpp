#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <iostream>

extern "C"
{
    void app_main(void);
}

void app_main(void)
{
    int i{};
    while (1)
    {
        std::cout << "[" << i << "] Hello world!" << std::endl;
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
