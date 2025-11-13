// 函数: sub_14152d8b0
// 地址: 0x14152d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x60)
int64_t rdi
rdi.b = 0
int64_t rsi = sx.q(arg2)
int32_t i = 0
double zmm5 = arg3

if (*(result + (rsi << 2)) s> 0)
    do
        int64_t rdx = sx.q(*(arg1 + 0x4c) * i)
        int64_t rcx = *(*(arg1 + 0x58) + (rsi << 3))
        double zmm1 = *(rcx + (rdx << 3)) - zmm5
        arg3 = *(rcx + (rdx << 3) + 8) - arg4
        double zmm0 = *(rcx + (rdx << 3) + 0x10) - arg5
        arg3 = arg3 * arg3 + zmm1 * zmm1 + zmm0 * zmm0
        
        if (not(arg3 f>= *arg10))
            *arg10 = arg3
            rdi.b = 1
            arg9[1] = i
        
        result = *(arg1 + 0x60)
        i += 1
    while (i s< *(result + (rsi << 2)))
    
    if (rdi.b != 0)
        arg9[2] = arg6
        arg9[3] = arg7
        result = zx.q(arg8)
        arg9[4] = result.d
        *arg9 = rsi.d

return result
