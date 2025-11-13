// 函数: sub_1412e4db0
// 地址: 0x1412e4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg2 + 0x1b0)
int64_t arg_8 = 0

if (*(arg1 + 0x138) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x136))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = rbp_1
    *rcx_2 = &data_142da77d8
    rcx_2[2] = rdi
    rcx_2[4] = 0

sub_1405d1550(&arg_8)
void** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_7 = *(arg5 + 8)
void* rax_5 = &rbx_2[1]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rbx_2[1]

*(arg2 + 0x30) = rax_5
*rbx_2 = rcx_7
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_11[6]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_11[6]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142da7798
rcx_11[3] = rbx_2
rcx_11[5] = arg6
rcx_11[2].d = 1
rcx_11[4].d = arg3
*(rcx_11 + 0x24) = arg4
return arg6
