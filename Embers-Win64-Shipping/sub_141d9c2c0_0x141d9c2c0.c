// 函数: sub_141d9c2c0
// 地址: 0x141d9c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_1432399e0
*(arg2 + 0x18) = *(arg1 + 8)
void* r8_1 = *(arg1 + 0x10)
*(arg2 + 0x20) = r8_1

if (r8_1 != 0)
    *(r8_1 + 8) += 1

*(arg2 + 0x10) = &data_143239a00
return arg2 + 0x18
