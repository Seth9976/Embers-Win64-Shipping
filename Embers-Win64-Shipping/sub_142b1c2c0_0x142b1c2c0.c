// 函数: sub_142b1c2c0
// 地址: 0x142b1c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_2 = (arg1 - 0xac00) s/ 0x1c
int32_t r9_1 = (arg1 - 0xac00) s% 0x1c
int16_t rdx_3 = (r8_2 s/ 0x15).w
*arg2 = 0x1100 + rdx_3
r8_2.w -= rdx_3 * 0x15
r8_2.w += 0x1161
arg2[1] = r8_2.w

if (r9_1 == 0)
    return 2

r9_1.w += 0x11a7
arg2[2] = r9_1.w
return 3
