// 函数: sub_142be8e30
// 地址: 0x142be8e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
int32_t r8 = *(arg1 + 0x2c)

if (arg2 u> r8)
    *(arg1 + 0x38) = arg3
    *(arg1 + 0x30) = sub_142b99a90(arg3, 4, r8, arg2, *(arg1 + 0x30), &result_1)
    int32_t result = result_1
    
    if (result != 0)
        return result
    
    *(arg1 + 0x2c) = arg2

return 0
