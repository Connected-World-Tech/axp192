/*

SPDX-License-Identifier: MIT

MIT License

Copyright (c) 2019-2020 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#ifndef _AXP192_CONFIG_H
#define _AXP192_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "sdkconfig.h"

/* This requires you to run menuconfig first. */

#define CONFIG_AXP192_EXTEN_DCDC2_CONTROL ( \
    CONFIG_AXP192_EXTEN_DCDC2_CONTROL_BIT2 | \
    CONFIG_AXP192_EXTEN_DCDC2_CONTROL_BIT0 \
)

#define CONFIG_AXP192_DCDC13_LDO23_CONTROL ( \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT6 | \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT4 | \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT3 | \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT2 | \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT1 | \
    CONFIG_AXP192_DCDC13_LDO23_CONTROL_BIT0 \
)

#define CONFIG_AXP192_LDO23_VOLTAGE ( \
    CONFIG_AXP192_LDO23_VOLTAGE_BIT74 | \
    CONFIG_AXP192_LDO23_VOLTAGE_BIT30 \
)

#define CONFIG_AXP192_ADC_ENABLE_1 ( \
    CONFIG_AXP192_ADC_ENABLE_1_BIT7 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT6 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT5 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT4 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT3 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT2 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT1 | \
    CONFIG_AXP192_ADC_ENABLE_1_BIT0 \
)

#define CONFIG_AXP192_CHARGE_CONTROL_1 ( \
    CONFIG_AXP192_CHARGE_CONTROL_1_BIT7 | \
    CONFIG_AXP192_CHARGE_CONTROL_1_BIT65 | \
    CONFIG_AXP192_CHARGE_CONTROL_1_BIT4 | \
    CONFIG_AXP192_CHARGE_CONTROL_1_BIT30 \
)

/*
0x33 -> 0x80 | 0x40 | 0x10 | 0x00

0x80 : 0b10000000
0x40 : 0b01000000
0x10 : 0b00010000

*/
#ifdef __cplusplus
}
#endif
#endif
