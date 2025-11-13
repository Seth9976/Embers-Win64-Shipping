// 函数: sub_142bf1f80
// 地址: 0x142bf1f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *(arg1 + 0x20)
int32_t rdi = *(arg1 + 0x3c)
int32_t r10 = *(arg1 + 0x18)

if (rdx != 0 || r10 u>= *(arg1 + 0x1c) || *(arg1 + 0x40) u>= *(arg1 + 0x44))
    if (*(arg1 + 0x40) u>= *(arg1 + 0x44))
        rdi += 1
        *(arg1 + 0x3c) = rdi
        
        if (rdi u> 0x10)
            return 0xffffffff
        
        int32_t rax_4
        
        if (rdi u>= *(arg1 + 0x30))
            rax_4 = *(arg1 + 0x38) + 1
        else
            rax_4 = (1 << rdi.b) - 0x100
        
        *(arg1 + 0x44) = rax_4
    
    if (rdx != 0)
        rdi = 9
        *(arg1 + 0x44) = 0x100
        *(arg1 + 0x3c) = 9
        *(arg1 + 0x20) = 0
    
    if (*(arg1 + 4) != 0)
        return 0xffffffff
    
    int64_t rax_6 = sub_142b97130(*(arg1 + 0xc8), arg1 + 8, *(arg1 + 0x3c), arg2)
    int32_t rdx_2 = *(arg1 + 0x3c)
    r10 = 0
    *(arg1 + 0x28) += zx.q(rax_6.d)
    *(arg1 + 0x18) = 0
    int32_t rcx_3
    rcx_3.b = rax_6.d u< rdx_2
    *(arg1 + 4) = rcx_3
    int32_t rcx_4 = (rax_6 << 3).d
    *(arg1 + 0x1c) = rcx_4
    
    if (rcx_4 u<= rdx_2)
        return 0xffffffff
    
    *(arg1 + 0x1c) = rcx_4 - rdx_2 + 1
    
    if (rax_6.d == 0)
        return 0xffffffff

int32_t r10_1 = r10 & 7
void* rdx_5 = (zx.q(r10) u>> 3) + arg1
*(arg1 + 0x18) = r10 + rdi
int32_t r9 = 8 - r10_1
int32_t rdi_1 = rdi - r9
void* rdx_6 = rdx_5 + 9
uint32_t r8_3 = zx.d(*(rdx_5 + 8)) u>> r10_1.b

if (rdi_1 u>= 8)
    uint32_t rax_9 = zx.d(*rdx_6) << r9.b
    rdx_6 += 1
    r8_3 |= rax_9
    r9 += 8
    rdi_1 -= 8

if (rdi_1 != 0)
    r8_3 |= (((1 << rdi_1.b) - 1) & zx.d(*rdx_6)) << r9.b

return zx.q(r8_3)
