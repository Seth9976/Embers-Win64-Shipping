// 函数: sub_142a6c9f0
// 地址: 0x142a6c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_3 = arg4 - *(arg1 + 0x100) - arg3 + 1
int32_t r11_4 = r11_3 s% 7
int32_t r9 = r11_4 + 7

if (r11_3 s% 7 s>= 0)
    r9 = r11_4

int32_t rdx_7 = (arg2 - 1 + r9) s/ 7

if (7 - r9 s< zx.d(*(arg1 + 0x104)))
    return zx.q(rdx_7)

return zx.q(rdx_7 + 1)
