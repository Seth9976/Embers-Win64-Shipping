// 函数: sub_142ba9ff0
// 地址: 0x142ba9ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[1]
int32_t r9 = *arg2
uint64_t result = zx.q(r10 - 1)

if (result.d u<= 2)
    result = zx.q(1 << (r10.b - 1))
    
    if (r9 == 0 || r9 == result.d)
        result.b = not.b(result.b)
        result.b &= *(arg1 + 0x1f4)
        result.b |= r9.b
        *(arg1 + 0x1f4) = result.b
        
        if (r10 == 3)
            result = *arg1
            
            if (*(*(result + 0x90) + 0x78) == 0x28)
                result.b = r9 != 4
                *(arg1 + 0x373) = result.b
    else if (*(arg1 + 0x315) != 0)
        arg1[3].d = 0x86
else if (*(arg1 + 0x315) != 0)
    arg1[3].d = 0x86

return result
