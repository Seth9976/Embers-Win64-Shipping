// 函数: sub_1428079e0
// 地址: 0x1428079e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (*(arg1 + 0x3c) != 0)
    int32_t r9_1 = *arg2
    int32_t rcx_3 = not.d(r9_1 << 0xf) + r9_1
    uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
    uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
    uint64_t rax_9 = zx.q(not.d(rcx_5 << 0xb) + rcx_5)
    rax = *(arg1 + 0x20)
    uint64_t rdx_3 = (zx.q(rax_9.d) u>> 0x10 ^ rax_9) & zx.q(*(arg1 + 0x2c) - 1)
    int32_t* r8_1 = rax + (rdx_3 << 2)
    
    if (*(rax + (rdx_3 << 2)) != 0xffffffff)
        uint64_t rcx_8
        
        do
            rcx_8 = zx.q(*r8_1)
            
            if (*((zx.q(rcx_8.d) << 4) + *(arg1 + 0x10)) == r9_1)
                break
            
            rax = *(arg1 + 0x18)
            r8_1 = rax + (rcx_8 << 2)
        while (*(rax + (rcx_8 << 2)) != 0xffffffff)
        uint64_t rdx_5 = zx.q(*r8_1)
        
        if (rdx_5.d != 0xffffffff)
            *r8_1 = *(*(arg1 + 0x18) + (rdx_5 << 2))
            *(arg1 + 0x3c) -= 1
            *(arg1 + 0x38) += 1
            
            if (rdx_5.d != *(arg1 + 0x3c))
                sub_142809c40(arg1, rdx_5.d)
            
            *(arg1 + 0x34) -= 1
            int64_t rax_11
            rax_11.b = 1
            return rax_11

rax.b = 0
return rax
