// 函数: sub_1423473b0
// 地址: 0x1423473b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg5
int64_t r15 = *(arg2 + 0x1b0)
int64_t r12 = arg3
int64_t arg_8 = r15
int64_t rbp = r15
void* rdi = *(rax + 0x38)
arg5 = rdi

if (rdi != 0)
    *(rdi + 8) += 1
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
    r12 = arg3
    *rcx_2 = &data_142da77d8
    rcx_2[2] = r15
    rcx_2[4] = rdi

sub_1405d1550(&arg5)
int64_t r14 = *(arg4 + 0x38)

if (*(arg1 + 0x11e) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x11c))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_9[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142d99560
    rcx_9[2] = rbp
    rcx_9[3].d = r15_1
    rcx_9[4] = r14

return sub_14077c870(arg2, &arg_8, arg1 + 0x132, r12, 0)
