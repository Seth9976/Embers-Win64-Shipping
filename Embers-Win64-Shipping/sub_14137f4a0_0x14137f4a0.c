// 函数: sub_14137f4a0
// 地址: 0x14137f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
uint64_t rdi = zx.q(*(arg1 + 0x11c))
void** const result = 4

if (rdi.d u>= 4)
    rdi = 4

if (rdi.d != 0)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
    int64_t r13_1 = *(arg2 + 0x1a8)
    int64_t rax = rdi + rbx_3
    uint32_t r15_1 = zx.d(*(arg1 + 0x11a))
    
    if (rax u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rdi + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax = rdi + rbx_3
    
    *(arg2 + 0x30) = rax
    memcpy(rbx_3, &arg_18, rdi.d)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_4[6]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    result = &data_142d549d8
    rcx_4[2] = r13_1
    rcx_4[3] = rbx_3
    rcx_4[4].d = r12_1
    *(rcx_4 + 0x24) = r15_1
    *rcx_4 = &data_142d549d8
    rcx_4[5].d = rdi.d

return result
