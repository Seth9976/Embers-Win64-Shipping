// 函数: sub_140a45dc0
// 地址: 0x140a45dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12 = zx.q(arg5)
int64_t r9 = arg2

if (arg3 u> zx.q(r12.d) u>> 2)
    return sub_140b65600(r9) __tailcall

int32_t i = *arg7

if (i != 0)
    do
        int64_t r8 = *arg8
        
        if (i u< arg4 && r8 + arg3 u<= r12)
            break
        
        int64_t r15_1 = *arg6
        *arg8 = r8 - arg6[1]
        int32_t temp0_1 = *arg7
        *arg7 -= 1
        
        if (temp0_1 != 1)
            memmove(arg6, &arg6[2], *arg7 << 4)
        
        sub_140b65600(r15_1)
        i = *arg7
    while (i != 0)
    
    r9 = arg2

arg6[zx.q(i) * 2] = r9
uint64_t result = zx.q(*arg7) * 2
arg6[result + 1] = arg3
*arg8 += arg3
*arg7 += 1
return result
