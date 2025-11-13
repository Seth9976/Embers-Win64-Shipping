// 函数: sub_1411b9820
// 地址: 0x1411b9820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] u> 0)
    uint32_t r14_1 = zx.d(*arg1)
    void*** r10_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r10_3[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r10_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r10_3[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r10_3
    *(arg2 + 8) = &r10_3[1]
    r10_3[1] = 0
    *r10_3 = &data_142d99560
    r10_3[2] = arg3
    r10_3[3].d = r14_1
    r10_3[4] = arg4

uint64_t rdi = zx.q(arg1[4])
void** const result = 4

if (rdi.d u>= 4)
    rdi = 4

if (rdi.d != 0)
    uint32_t rbp_1 = zx.d(arg1[3])
    uint32_t r13_1 = zx.d(arg1[2])
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_4 = rdi + rbx_3
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rdi + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_4 = rdi + rbx_3
    
    *(arg2 + 0x30) = rax_4
    void arg_28
    memcpy(rbx_3, &arg_28, rdi.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_5[6]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_142d99550
    rcx_5[4].d = r13_1
    *rcx_5 = &data_142d99550
    rcx_5[2] = arg3
    rcx_5[3] = rbx_3
    *(rcx_5 + 0x24) = rbp_1
    rcx_5[5].d = rdi.d

return result
