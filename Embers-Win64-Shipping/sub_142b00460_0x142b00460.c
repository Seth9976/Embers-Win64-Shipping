// 函数: sub_142b00460
// 地址: 0x142b00460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x38) & 0xf

if (result u> 2)
    *arg3 = 1
    return result

if (result == 2 && *(arg2 + 8) == 0)
    *(arg1 + 0x30) = &data_143664fb0
    result = 0xfdff
    **(arg1 + 0x28) = 0xfdff

*(arg1 + 0x4c) = 0
*(arg1 + 0x50) = 1
return result
