// 函数: sub_141142490
// 地址: 0x141142490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg2 + 0x1a0)
int64_t var_58 = arg4
int64_t r9 = *(arg3 + 0x10)
int64_t arg_8 = r14
sub_141080ac0(arg1, arg2, r14, r9)
void* r9_1 = data_143a2dd48
int32_t var_50 = *(r9_1 + 0x60)
int32_t var_4c = *(r9_1 + 0x64)
int32_t var_48 = *(r9_1 + 0x68)
sub_141118600(arg1 + 0x118, arg2, r14, &data_143e570b0, r9_1, &var_50, 0)
sub_1411180a0(arg1 + 0x14a, arg2, r14, arg5)
void* rbp = *(*(arg3 + 8) + 0xd40)
int64_t r12 = *(rbp + 0x20)

if (*(arg1 + 0x190) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x18e))
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d5ebf8
    rcx_4[2] = r14
    rcx_4[3].d = r15_1
    rcx_4[4] = r12

int64_t r15_2 = *(rbp + 0x40)

if (*(arg1 + 0x194) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x192))
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
    *rcx_10 = &data_142d5ebf8
    rcx_10[2] = r14
    rcx_10[3].d = r12_1
    rcx_10[4] = r15_2

sub_1405d0cd0(arg2, &arg_8, arg1 + 0x168, rbp + 0xd0, 0)
sub_141118b20(arg1 + 0x16e, arg2, &arg_8, rbp + 0x50)
sub_141118b20(arg1 + 0x176, arg2, &arg_8, rbp + 0x70)
sub_141118b20(arg1 + 0x17e, arg2, &arg_8, rbp + 0x90)
sub_141118b20(arg1 + 0x186, arg2, &arg_8, rbp + 0xb0)
return sub_1405d0cd0(arg2, &arg_8, arg1 + 0x196, &var_58, 0)
