#pragma once

#include <stdint.h>

// ADC值 三个采集通道加一个校准通道 由DMA更改
#define CHANNEL_NUL 4
extern volatile uint16_t ADCValue[CHANNEL_NUL];

void adcInit(void);