// 函数: sub_141b308b0
// 地址: 0x141b308b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x48))
int32_t r8 = *(arg1 + 0x4c)

if (rdx.d u> 4)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 4 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 4, 0)
            r8 = *(arg1 + 0x4c)
            rdx = rax u>> 4
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 4

if (rdx.d == r8)
    return 

int64_t rdi_1 = sx.q(*(arg1 + 0x48))
*(arg1 + 0x4c) = rdx.d
int64_t rcx_3 = *(arg1 + 0x40)

if (rdx.d u> 4)
    if (rcx_3 == 0)
        if (rdx.d != 0)
            int64_t rax_2 = sub_140a84c80(rcx_3, sx.q(rdx.d) << 4, 0)
            *(arg1 + 0x40) = rax_2
            rcx_3 = rax_2
        
        return memmove(rcx_3, arg1, (rdi_1 << 4).d) __tailcall
    
    *(arg1 + 0x40) = sub_140a84c80(rcx_3, sx.q(rdx.d) << 4, 0)
else if (rcx_3 != 0)
    memmove(arg1, rcx_3, (rdi_1 << 4).d)
    rcx_3 = *(arg1 + 0x40)
    
    if (rcx_3 != 0)
        *(arg1 + 0x40) = sub_140a84c80(rcx_3, 0, 0)
