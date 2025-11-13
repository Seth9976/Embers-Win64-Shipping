// 函数: sub_142afc870
// 地址: 0x142afc870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg3)

if (arg3 s<= 0)
    return 0xffff

int32_t i_1 = 0
int32_t r8 = 0
int64_t rbx = *(arg1 + 0x38)
int32_t rbp = 1
int64_t rdi = *(arg1 + 0x48)
int32_t i = *(rbx + (((zx.q(*(arg1 + 0x31)) << 8) + zx.q(*arg2)) << 2))

if (i s>= 0)
    void* r10_1 = 1
    
    do
        r8 += i & 0xffffff
        
        if (r10_1 == r14)
            return 0xffff
        
        uint64_t rax_4 = zx.q(*(r10_1 + arg2))
        rbp += 1
        r10_1 += 1
        i = *(rbx + (((zx.q((i u>> 0x18).b) << 8) + rax_4) << 2))
    while (i s>= 0)

uint8_t rax_6 = (i u>> 0x14).b & 0xf
uint32_t rdx_1

if (rax_6 == 4)
    uint64_t r8_1 = zx.q(r8 + zx.d(i.w))
    rdx_1 = zx.d(*(rdi + (r8_1 << 1)))
    
    if (rdx_1 != 0xfffe)
        goto label_142afca40
    
    int32_t rdx_2 = *(arg1 + 0x34)
    
    if (rdx_2 == 0)
    label_142afca3b:
        rdx_1 = 0xfffe
        goto label_142afca40
    
    int64_t r10_2 = *(arg1 + 0x50)
    
    if (rdx_2 != 1)
        do
            uint64_t rcx_7 = zx.q((i_1 + rdx_2) u>> 1)
            
            if (r8_1.d u>= *(r10_2 + (rcx_7 << 3)))
                i_1 = rcx_7.d
            else
                rdx_2 = rcx_7.d
        while (i_1 u< rdx_2 - 1)
    
    uint64_t i_2 = zx.q(i_1)
    
    if (r8_1.d != *(r10_2 + (i_2 << 3)))
        goto label_142afca3b
    
    rdx_1 = *(r10_2 + (i_2 << 3) + 4)
    goto label_142afca40

if (rax_6 == 0)
    rdx_1 = zx.d(i.w)
label_142afca40:
    
    if (rbp == r14.d)
        if (rdx_1 == 0xfffe)
            void* rcx_9 = *(arg1 + 0x120)
            
            if (rcx_9 != 0)
                return sub_142b6cc80(rcx_9, arg2, r14.d)
        
        return zx.q(rdx_1)
else if (rax_6 != 5)
    if (rax_6 == 1)
        rdx_1 = (i & 0xfffff) + 0x10000
        goto label_142afca40
    
    if (rax_6 == 2)
        rdx_1 = zx.d(i.w)
        goto label_142afca40
    
    if (rax_6 == 3)
        rdx_1 = (i & 0xfffff) + 0x10000
        goto label_142afca40
    
    if (rax_6 == 6)
        goto label_142afca3b
else
    uint64_t r8_2 = zx.q(r8 + zx.d(i.w))
    rdx_1 = zx.d(*(rdi + (r8_2 << 1)))
    uint64_t r8_3 = zx.q(r8_2.d + 1)
    
    if (rdx_1 u< 0xd800)
        goto label_142afca40
    
    if (rdx_1 u<= 0xdfff)
        rdx_1 = (((rdx_1 & 0x3ff) + 9) << 0xa) + zx.d(*(rdi + (r8_3 << 1)))
        goto label_142afca40
    
    if ((rdx_1 & 0xfffe) == 0xe000)
        rdx_1 = zx.d(*(rdi + (r8_3 << 1)))
        goto label_142afca40
    
    if (rdx_1 != 0xffff)
        goto label_142afca3b

return 0xffff
