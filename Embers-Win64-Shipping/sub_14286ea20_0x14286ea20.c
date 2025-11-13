// 函数: sub_14286ea20
// 地址: 0x14286ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int16_t* r9 = *(arg1 + 0x16b0)
int32_t r11 = *(arg2 + 0x3c)
uint32_t r10 = zx.d(*r9)

if (r11 == r10)
    return &r9[2]

if (r11 != r10 + 1 || r9[0x10] == r10.w || *(arg2 + 4) - 0x15 u> 1)
    return 0

*arg3 = 1
return *(arg1 + 0x16b0) + 0x10
