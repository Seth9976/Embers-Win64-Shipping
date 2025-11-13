// 函数: sub_1429c8d50
// 地址: 0x1429c8d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)

if (not(arg2 > 0f))
    int32_t rcx = 0
    int32_t r8 = 0
    int32_t r9 = 0
    int64_t i = 0
    
    if (rax s>= 2)
        do
            int32_t rax_1
            rax_1.b = *(arg4 + (i << 2)) > 0f
            r8 += rax_1
            int32_t rax_2
            rax_2.b = *(arg4 + (i << 2) + 4) > 0f
            i += 2
            r9 += rax_2
        while (i s< rax - 1)
    
    if (i s< rax)
        rcx.b = *(arg4 + (i << 2)) > 0f
    
    int32_t rcx_1 = rcx + r9 + r8
    
    if (rcx_1 s<= 2)
        return zx.q(1 << rcx_1.b)

return 8
