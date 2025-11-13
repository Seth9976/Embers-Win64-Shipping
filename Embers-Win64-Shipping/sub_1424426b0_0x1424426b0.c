// 函数: sub_1424426b0
// 地址: 0x1424426b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x4008))
int32_t result = 0x4000
int32_t result_1 = *(arg1 + 0x400c)

if (r8.d u> 0x4000)
    int32_t r9_2 = result_1 - r8.d
    
    if ((r9_2 u>= 0x4000 || (r8 * 3).d s< result_1 * 2) && (r9_2 s> 0x40 || r8.d == 0))
        result = r8.d
        
        if (r8.d s> 0)
            result = sub_140a846a0(r8, 0)
            result_1 = *(arg1 + 0x400c)
    else
        result = result_1

if (result == result_1)
    return result

uint32_t rdx = *(arg1 + 0x4008)
*(arg1 + 0x400c) = result
return sub_142442560(arg1, rdx, result, 1) __tailcall
