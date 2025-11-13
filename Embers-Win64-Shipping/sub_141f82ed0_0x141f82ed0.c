// 函数: sub_141f82ed0
// 地址: 0x141f82ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
result.b = not.b((*(arg1 + 0x30) u>> 7).b)

if ((result.b & 1) != 0)
    int32_t rax = *(arg1 + 0x118)
    
    if (rax == *(arg1 + 0x144) && *(arg1 + 0x100) == rax - *(arg1 + 0x144))
        result.b = 1
        return result

result.b = 0
return result
