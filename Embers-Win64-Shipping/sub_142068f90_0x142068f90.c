// 函数: sub_142068f90
// 地址: 0x142068f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1b0)
int64_t arg_8 = r12
int32_t r15 = 0
sub_140741e30(arg2, &arg_8, arg1 + 0x128, arg4 + 0x4c, 0)
sub_140741e30(arg2, &arg_8, arg1 + 0x12e, arg4 + 0x50, 0)
sub_140741e30(arg2, &arg_8, arg1 + 0x134, arg4 + 0x54, 0)
int64_t r14 = *(arg5 + 8)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_5[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_5[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142da77d8
    rcx_5[2] = r12
    rcx_5[3].d = rbp_1
    rcx_5[4] = r14

uint64_t result = *(arg4 + 0x118)
int64_t rbp_2 = *(result + 8)

if (*(arg1 + 0x11e) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x11c))
    void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_11[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_11[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_11
    *(arg2 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    result = &data_142da77d8
    *rcx_11 = &data_142da77d8
    rcx_11[2] = r12
    rcx_11[3].d = r14_1
    rcx_11[4] = rbp_2

void* rbx = *(arg4 + 0x120)
void* const arg_10
int64_t arg_20
void* const rbx_1
int32_t rbp_3

if (rbx == 0)
    rbx_1 = nullptr
    rbp_3 = 2
    arg_20 = 0
else
    rbx_1 = *(rbx + 0x10)
    arg_10 = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 8) += 1
        r12 = arg_8
        rbx_1 = arg_10
    
    rbp_3 = 0
    r15 = 1

if (*(arg1 + 0x122) u> 0)
    arg5.d = zx.d(*(arg1 + 0x120))
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_17[5]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_17[5]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    result = zx.q(arg5.d)
    rcx_17[3].d = result.d
    *rcx_17 = &data_142d99560
    rcx_17[2] = r12
    rcx_17[4] = rbx_1

if (rbp_3 != 0)
    result = sub_1405ec8a0(&arg_20)

if (r15 != 0)
    result = sub_1405ec8a0(&arg_10)

int64_t rbp_4 = *(arg4 + 0x70)

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_25[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_25
    result = &rcx_25[1]
    *(arg2 + 8) = result
    *result = 0
    *rcx_25 = &data_142d99560
    rcx_25[2] = r12
    rcx_25[3].d = rsi_1
    rcx_25[4] = rbp_4

return result
