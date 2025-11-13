// 函数: sub_142b60e50
// 地址: 0x142b60e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2d0) != 0)
    return *(arg1 + 0x2d0)

int64_t* result = sub_142a586f0(arg1 + 0x148, arg2)
*(arg1 + 0x2d0) = result

if (*arg2 s<= 0)
    if (result != 0)
        return result
    
    *arg2 = 7
    return *(arg1 + 0x2d0)

if (result != 0)
    int64_t r8_1 = *result
    (*r8_1)(result, 1, r8_1)

*(arg1 + 0x2d0) = 0
return *(arg1 + 0x2d0)
