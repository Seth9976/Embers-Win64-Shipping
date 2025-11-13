// 函数: sub_1429dac80
// 地址: 0x1429dac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *arg2

if (r9 == 0)
    return 8

void* r8 = *(arg1 + 0x1a8)
*r9 = *(r8 + 0x2bec) + ((*(r8 + 0x2bf0) + (*(r8 + 0x2bf4) << 1)) << 1)
return 0
