// tutorial.h
#pragma once

#include "esp_err.h"
#include "esp_log.h"

#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_wifi.h"

#include "freertos/FreeRTOS.h"

#define WIFI_SSID CONFIG_WIFI_SSID
#define WIFI_PASS CONFIG_WIFI_PASSWORD

esp_err_t lgp_wifi_init(void);

esp_err_t lgp_wifi_connect(char *wifi_ssid, char *wifi_password);

esp_err_t lgp_wiifi_disconnect(void);

esp_err_t lgp_wifi_deinit(void);
