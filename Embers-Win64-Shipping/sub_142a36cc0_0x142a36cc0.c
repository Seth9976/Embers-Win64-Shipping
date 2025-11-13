// 函数: sub_142a36cc0
// 地址: 0x142a36cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0xa0 && arg2 != 0xa3)
    return -1

int32_t rax_1 = *(arg1 + 0x3c)

if (rax_1 s>= 0)
    int32_t rcx_1 = arg1[7].d
    
    if (rax_1 s>= rcx_1)
        int32_t r12_1 = rcx_1 * 2
        int64_t rcx_2 = sx.q(r12_1)
        int64_t rax_4 = 8 * rcx_2
        
        if (mulu.dp.q(8, rcx_2) u>> 0x40 != zx.o(0))
            rax_4 = -1
        
        int64_t* rax_5 = j_sub_140a82f30(rax_4)
        
        if (rax_5 == 0)
            return 0xffffffff
        
        int64_t rax_6 = sx.q(*(arg1 + 0x3c))
        int64_t rdx_2 = 0
        int64_t* r8 = arg1[6]
        int64_t* r9 = rax_5
        uint64_t r10_2 = ((rax_6 << 3) + 7) u>> 3
        
        if (r8 u> &r8[rax_6])
            r10_2 = 0
        
        if (r10_2 != 0)
            do
                rdx_2 += 1
                *r9 = *r8
                r9 = &r9[1]
                r8 = &r8[1]
            while (rdx_2 != r10_2)
        
        arg5 = j_sub_140a74f90(arg1[6])
        arg1[6] = rax_5
        arg1[7].d = r12_1
else
    int64_t rax_2 = 0x2000
    arg1[7].d = 0x400
    
    if (mulu.dp.q(8, 0x400) u>> 0x40 != zx.o(0))
        rax_2 = -1
    
    int64_t rax_3 = j_sub_140a82f30(rax_2)
    arg1[6] = rax_3
    
    if (rax_3 == 0)
        return 0xffffffff
    
    *(arg1 + 0x3c) = 0

if (arg2 != 0xa0)
    return sub_142a372f0(arg1, arg3, arg4, arg5)

return sub_142a36e20(arg1, arg3, arg4, arg6, arg5)
