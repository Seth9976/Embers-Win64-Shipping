// 函数: sub_141257960
// 地址: 0x141257960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1a0)
sub_141080ac0(arg1, arg2, r12, *(arg3 + 0x10))
uint64_t r14 = zx.q(*(arg1 + 0x11c))

if (r14.d u>= 0xc)
    r14 = 0xc

if (r14.d != 0)
    uint32_t rax_1 = zx.d(*(arg1 + 0x118))
    uint32_t r13_1 = zx.d(*(arg1 + 0x11a))
    int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_2 = r14 + rdi_3
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r14 + 0x10).d)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = r14 + rdi_3
    
    *(arg2 + 0x30) = rax_2
    memcpy(rdi_3, arg4, r14.d)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_4[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d549d8
    *(rcx_4 + 0x24) = r13_1
    rcx_4[4].d = rax_1
    rcx_4[2] = r12
    rcx_4[3] = rdi_3
    rcx_4[5].d = r14.d

void** const result = arg5
int64_t rsi = result[2]

if (*(arg1 + 0x120) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x11e))
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_10[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_10[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    result = &data_142d5ebf8
    *rcx_10 = &data_142d5ebf8
    rcx_10[2] = r12
    rcx_10[3].d = rbp_1
    rcx_10[4] = rsi

return result
