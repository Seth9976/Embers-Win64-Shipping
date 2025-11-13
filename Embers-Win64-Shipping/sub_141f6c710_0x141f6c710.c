// 函数: sub_141f6c710
// 地址: 0x141f6c710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = 0
int64_t result

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x578))
    int64_t r8 = sx.q(arg3) * 5
    result = *(arg1 + 0x570)
    
    if (arg2 s>= 0 && arg2 s< *(result + (r8 << 3) + 8))
        r9 = *(sx.q(arg2) + *(result + (r8 << 3)))

result.b = r9 == 0
return result
