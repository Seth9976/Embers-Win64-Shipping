// 函数: sub_142347540
// 地址: 0x142347540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1b0)
void* rsi = *(arg5 + 0x38)
int64_t rbp = r15
int64_t arg_8 = r15
arg5 = rsi

if (rsi != 0)
    *(rsi + 8) += 1
    rbp = arg_8

if (*(arg1 + 0x11a) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = r12_1
    *rcx_2 = &data_142da77d8
    rcx_2[2] = r15
    rcx_2[4] = rsi

sub_1405d1550(&arg5)
uint64_t result = sub_14077c870(arg2, &arg_8, arg1 + 0x134, arg3, 0)
int64_t r15_1 = *(arg4 + 0x18)

if (*(arg1 + 0x13c) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x13a))
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_10[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_10[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    result = &data_142d99560
    *rcx_10 = &data_142d99560
    rcx_10[2] = rbp
    rcx_10[3].d = r14_1
    rcx_10[4] = r15_1

int64_t rsi_1 = *(arg4 + 0x28)

if (*(arg1 + 0x140) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x13e))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_16[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    result = &data_142d99560
    *rcx_16 = &data_142d99560
    rcx_16[2] = rbp
    rcx_16[3].d = r14_2
    rcx_16[4] = rsi_1

return result
