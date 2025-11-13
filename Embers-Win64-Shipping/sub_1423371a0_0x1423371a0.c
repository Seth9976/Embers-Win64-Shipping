// 函数: sub_1423371a0
// 地址: 0x1423371a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x30)
int32_t r8 = *(arg1 + 0x34)
int32_t r9 = -1
int64_t r8_1

if (r11 == 0xffffffff)
    r9 = r8
    r8_1 = 0
else if (r8 != 0xffffffff)
    r9 = r8
    r8_1.b = arg2 - r11 u<= arg2 - r8
else
    r8_1 = 1

if (r11 == arg2)
    r8_1 = 0

if (r9 == arg2)
    r8_1 = 1

return ((r8_1 + 1) << 6) + arg1
