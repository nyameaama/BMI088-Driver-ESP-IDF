#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "esp_timer.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/i2c.h"
#include "bmi088.h"

static const char *TAG = "BM1088 Module";
extern "C"{
void app_main(void)
{
    BMI088_IMU *obj = new BMI088_IMU();
    obj -> IMU_INIT();
    while(1){
    ESP_LOGI(TAG, "accel_read_rawX = %f", obj -> accel_read_rawX());
    ESP_LOGI(TAG, "accel_read_rawY = %f", obj -> accel_read_rawY());
    ESP_LOGI(TAG, "accel_read_rawZ = %f", obj -> accel_read_rawZ());

    ESP_LOGI(TAG, "pitch = %f", obj -> angle_read_pitch());
    ESP_LOGI(TAG, "roll = %f", obj -> angle_read_roll());
    delete obj;
    vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
}