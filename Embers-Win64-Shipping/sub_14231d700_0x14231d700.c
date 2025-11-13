// 函数: sub_14231d700
// 地址: 0x14231d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*(arg1 + 0x11c))

if (rsi.d u>= 0x40)
    rsi = 0x40

uint32_t arg_20

if (rsi.d != 0)
    uint32_t rax_1 = zx.d(*(arg1 + 0x11a))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_20 = zx.d(*(arg1 + 0x118))
    int64_t rax_3 = *(arg2 + 0x188)
    int64_t rax_4 = rsi + rbx_3
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rsi + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_4 = rsi + rbx_3
    
    *(arg2 + 0x30) = rax_4
    memcpy(rbx_3, arg3, rsi.d)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_4[6]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_5
    void** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d549d8
    rcx_4[2] = rax_3
    rcx_4[4].d = arg_20
    *(rcx_4 + 0x24) = rax_1
    rcx_4[3] = rbx_3
    rcx_4[5].d = rsi.d

uint32_t zmm0

zmm0 = arg4 == 0 ? 0x3f800000 : 0xbf800000

uint64_t rdi = zx.q(*(arg1 + 0x122))
void** const result = 4
arg_20 = zmm0

if (rdi.d u>= 4)
    rdi = 4

if (rdi.d != 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x120))
    uint32_t r12_1 = zx.d(*(arg1 + 0x11e))
    int64_t rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t r13_1 = *(arg2 + 0x188)
    int64_t rax_11 = rdi + rbx_8
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rdi + 0x10).d)
        rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_11 = rdi + rbx_8
    
    *(arg2 + 0x30) = rax_11
    memcpy(rbx_8, &arg_20, rdi.d)
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_12[6]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_12[6]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    result = &data_142d549d8
    *rcx_12 = &data_142d549d8
    rcx_12[2] = r13_1
    rcx_12[3] = rbx_8
    rcx_12[4].d = r12_1
    *(rcx_12 + 0x24) = r15_1
    rcx_12[5].d = rdi.d

return result
