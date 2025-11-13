// 函数: sub_140885c30
// 地址: 0x140885c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
*(arg2 + 0x1b0) = arg3
int32_t arg_30
int32_t arg_20 = arg4 - arg_30
sub_14198aa60(arg3)
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rdx_2[3]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rdx_2[3]

*(arg2 + 0x30) = rax_2
int64_t* rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142dd5b40
rdx_2[2] = arg3
sub_14077c370(arg1 + 0x118, arg2, &arg_18, arg5)

if (*(arg1 + 0x122) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x120))
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_5[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_5[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    rcx_5[4] = arg6
    *rcx_5 = &data_142d99560
    rcx_5[2] = arg3
    rcx_5[3].d = r14_1

sub_140741e30(arg2, &arg_18, arg1 + 0x124, &arg_20, 0)
sub_140741e30(arg2, &arg_18, arg1 + 0x12a, &arg_30, 0)
sub_1419cd1c0(arg2, arg1, (arg4 + 0x3f) u>> 6, 1, 1)
uint32_t r14_2 = zx.d(*(arg1 + 0x11c))
void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_14[5]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_14[5]

*(arg2 + 0x30) = rax_9
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_14
*(arg2 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142da77d8
rcx_14[2] = arg3
rcx_14[3].d = r14_2
rcx_14[4] = 0
uint32_t rbp_1 = zx.d(*(arg1 + 0x120))
void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_20[5]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_20[5]

*(arg2 + 0x30) = rax_12
void**** rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_20
*(arg2 + 8) = &rcx_20[1]
rcx_20[1] = 0
*rcx_20 = &data_142d99560
rcx_20[2] = arg3
rcx_20[3].d = rbp_1
rcx_20[4] = 0
return &rcx_20[1]
