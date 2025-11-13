// 函数: sub_142c35020
// 地址: 0x142c35020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 8)
int32_t r13 = *(rdi + 0x5c)

if (r13 == *(rdi + 0x60) && arg1[0x10] == 0)
    return 

void* const rbp_1 = &data_14369a5b4

if (zx.w(*(arg3 + 4)) * 0x100 + zx.w(*(arg3 + 5)) != 0xffff)
    int64_t r9_1 = *(arg1 + 0x20)
    char* r8 = r9_1 + (((zx.q(*(arg3 + 4)) << 8) + zx.q(*(arg3 + 5))) << 2)
    void* const rcx_3
    
    if (r8 u>= r9_1)
        rcx_3 = zx.q(r8[3]) + ((zx.q(r8[2]) + (((zx.q(*r8) << 8) + zx.q(r8[1])) << 8)) << 8) + r9_1
    else
        rcx_3 = &data_14369a5b4
    
    uint64_t r14_1 = zx.q(*(arg1 + 0x14))
    void* rax_9 = sub_142c31d20(rcx_3, *(*(rdi + 0x70) + r14_1 * 0x14), *(arg2 + 0x10))
    
    if (rax_9 != 0)
        int32_t r8_2 = *(rdi + 0x60)
        
        if (r13 + 1 u< r8_2)
            r8_2 = r13 + 1
        
        if (r8_2 - r14_1.d u>= 2)
            sub_142bf5c70(rdi, r14_1.d, r8_2)
        
        *(*(rdi + 0x70) + zx.q(*(arg1 + 0x14)) * 0x14) = (zx.d(*rax_9) << 8) + zx.d(*(rax_9 + 1))
        *arg1 = 1

uint64_t r10_2 = zx.q(*(rdi + 0x60) - 1)

if (*(rdi + 0x5c) u< r10_2.d)
    r10_2 = zx.q(*(rdi + 0x5c))

if (zx.w(*(arg3 + 6)) * 0x100 + zx.w(*(arg3 + 7)) != 0xffff)
    int64_t r9_2 = *(arg1 + 0x20)
    char* r8_3 = r9_2 + (((zx.q(*(arg3 + 6)) << 8) + zx.q(*(arg3 + 7))) << 2)
    
    if (r8_3 u>= r9_2)
        rbp_1 = zx.q(r8_3[3]) + ((zx.q(r8_3[2]) + ((zx.q(r8_3[1]) + (zx.q(*r8_3) << 8)) << 8)) << 8)
            + r9_2
    
    int64_t rax_21 = *(rdi + 0x70)
    uint64_t rdx_17 = r10_2 * 5
    void* rax_22 = sub_142c31d20(rbp_1, *(rax_21 + (rdx_17 << 2)), *(arg2 + 0x10))
    
    if (rax_22 != 0)
        *(rax_21 + (rdx_17 << 2)) = (zx.d(*rax_22) << 8) + zx.d(*(rax_22 + 1))
        *arg1 = 1

if (zx.w(*(arg3 + 2)) * 0x100 + zx.w(*(arg3 + 3)) s< 0)
    arg1[0x10] = 1
    *(arg1 + 0x14) = *(rdi + 0x5c)
