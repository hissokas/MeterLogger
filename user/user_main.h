ICACHE_FLASH_ATTR void static sample_mode_timer_func(void *arg);
ICACHE_FLASH_ATTR void static config_mode_timer_func(void *arg);
ICACHE_FLASH_ATTR void static sample_timer_func(void *arg);
#ifndef EN61107
ICACHE_FLASH_ATTR void static kmp_request_send_timer_func(void *arg);
#else
ICACHE_FLASH_ATTR void static en61107_request_send_timer_func(void *arg);
#endif
#ifdef IMPULSE
ICACHE_FLASH_ATTR void static impulse_meter_timer_func(void *arg);
#ifdef POWER_WD
ICACHE_FLASH_ATTR void static power_wd_timer_func(void *arg);
#endif
#endif
ICACHE_FLASH_ATTR void wifi_changed_cb(uint8_t status);
ICACHE_FLASH_ATTR void mqttConnectedCb(uint32_t *args);
ICACHE_FLASH_ATTR void mqttDisconnectedCb(uint32_t *args);
ICACHE_FLASH_ATTR void mqttPublishedCb(uint32_t *args);
ICACHE_FLASH_ATTR void mqttDataCb(uint32_t *args, const char* topic, uint32_t topic_len, const char *data, uint32_t data_len);

#ifdef IMPULSE
ICACHE_FLASH_ATTR void gpio_int_init();
void gpio_int_handler();
ICACHE_FLASH_ATTR void impulse_meter_init(void);
#endif

ICACHE_FLASH_ATTR void user_init(void);
ICACHE_FLASH_ATTR void system_init_done(void);
