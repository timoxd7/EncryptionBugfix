#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

void app_main(void) {
    ESP_LOGI("main", "Main entered");
    while (true) { vTaskDelay(1000); }
}
