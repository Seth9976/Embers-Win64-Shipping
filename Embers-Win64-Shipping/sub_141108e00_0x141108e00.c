// 函数: sub_141108e00
// 地址: 0x141108e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf80)
uint64_t result

if (rcx != 0 && *(rcx + 8) != 0 && sub_1413faff0(rcx).b == 0)
    char rcx_1 = *(*(arg1 + 0xf80) + 0x20)
    
    if ((rcx_1 & 2) == 0 && (rcx_1 & 4) == 0 && (*(arg2 + 0x2c) & 0x80000) != 0)
        result = sx.q(*(arg1 + 8))
        
        if (result.d s>= 3 && sub_1410f95b0((*U"1111")[result]).b == 0)
            result.b = 1
            return result

result.b = 0
return result
