// 函数: sub_141ee6f90
// 地址: 0x141ee6f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142008300(arg1 + 0x4d8)

if (result.b == 0)
    void* rcx_1 = *(arg1 + 0x148)
    
    if (rcx_1 != 0)
        result = sub_141ea5ff0(rcx_1)
    
    if (rcx_1 == 0 || result.b == 0 || *(*(arg1 + 0x148) + 0x280) == 0)
        result.b = 0
        return result

result.b = 1
return result
