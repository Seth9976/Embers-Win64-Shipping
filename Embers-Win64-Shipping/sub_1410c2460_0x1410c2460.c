// 函数: sub_1410c2460
// 地址: 0x1410c2460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf80)
uint64_t result

if (rcx == 0 || (*(rcx + 0x20) & 4) != 0)
    result.b = 0
else if (sub_1413faff0(rcx).b == 0)
    result.b = 1
else if (sub_1410a09e0((*U"1111")[sx.q(*(arg1 + 8))]).b == 0)
    result.b = 0
else
    result.b = 1

if (arg2 u<= 1)
    if (result.b == 0)
        result.b = 0
        return result
    
    if (*(*(arg1 + 0x6328) + 1) == 0 || (*(*(arg1 + 0xf80) + 0x20) & 2) == 0)
        if ((*(*(arg1 + 0xf80) + 0x20) & 2) != 0)
            result.b = 0
            return result
        
        int32_t rbx_1 = (*U"1111")[sx.q(*(arg1 + 8))]
        
        if (sub_1410a09e0(rbx_1).b == 0 && sub_1419a4830(rbx_1).b == 0
                && sub_1410a0ce0((*1111")[sx.q(*(arg1 + 8))]).b == 0)
            result.b = 0
            return result
else
    if (result.b == 0)
        result.b = 0
        return result
    
    if (*(*(arg1 + 0x6328) + 1) == 0 && (*(*(arg1 + 0xf80) + 0x20) & 2) != 0)
        result.b = 0
        return result

result.b = 1
return result
