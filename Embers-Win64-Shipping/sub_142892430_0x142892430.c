// 函数: sub_142892430
// 地址: 0x142892430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x6c)
int32_t r8 = r8_1 & 0xfffffeff

if (arg2 == 0)
    r8 = r8_1 | 0x100

*(arg1 + 0x6c) = r8
return 1
