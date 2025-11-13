// 函数: sub_1411931e0
// 地址: 0x1411931e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 u> 1)
    void* rax_12 = arg5[2]
    void* var_38 = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    sub_14118a660(arg1, arg2, arg4, &var_38)
    void* r14_3 = *arg1
    int64_t rax_13 = arg5[2]
    int64_t* rbx_13 = (*(r14_3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_23 = &rbx_13[1]
    
    if (rcx_23 u> *(r14_3 + 0x38))
        sub_140b0e3d0(r14_3 + 0x30, 0x10)
        rbx_13 = (*(r14_3 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_23 = &rbx_13[1]
    
    *(r14_3 + 0x30) = rcx_23
    *rbx_13 = rax_13
    void*** rcx_27 = (*(r14_3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_27[6]
    
    if (rax_14 u> *(r14_3 + 0x38))
        sub_140b0e3d0(r14_3 + 0x30, 0x38)
        rcx_27 = (*(r14_3 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_27[6]
    
    *(r14_3 + 0x30) = rax_14
    void**** rax_15 = *(r14_3 + 8)
    *(r14_3 + 0x14) += 1
    char var_68_2 = 0
    *rax_15 = rcx_27
    *(r14_3 + 8) = &rcx_27[1]
    rcx_27[1] = 0
    rcx_27[5] = 0
    *rcx_27 = &data_142da7798
    rcx_27[2].d = 1
    rcx_27[3] = rbx_13
    rcx_27[4].d = 2
    *(rcx_27 + 0x24) = 3
    rbx_13.b = sub_141192aa0(arg1, arg2, arg3, &arg5[1], arg6, arg5) != 0
    sub_1411a4490(arg6, arg5)
    return zx.q(rbx_13.b)

int64_t* rbp
int32_t* r13

if (arg7[1] f<= *arg7)
    rbp = arg6
    char var_68_1 = 1
    r13.b = sub_141192aa0(arg1, arg2, arg3, arg4, arg5, rbp) != 0
    sub_1411a4490(arg5, rbp)
else
    void* rcx = arg5[2]
    void* arg_10 = rcx
    void* rax = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
        rax = arg_10
    
    void* var_58 = rax
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    int32_t* var_70 = arg7
    sub_141189670(arg1, arg3, arg4, arg3, &var_58)
    sub_1405d1550(&arg_10)
    void* r14_1 = *arg1
    int64_t rax_1 = arg5[2]
    int64_t* rbx_3 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_3 = &rbx_3[1]
    
    if (rcx_3 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x10)
        rbx_3 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_3 = &rbx_3[1]
    
    *(r14_1 + 0x30) = rcx_3
    *rbx_3 = rax_1
    void*** rcx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_7[6]
    
    if (rax_2 u> *(r14_1 + 0x38))
        sub_140b0e3d0(r14_1 + 0x30, 0x38)
        rcx_7 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_7[6]
    
    *(r14_1 + 0x30) = rax_2
    void**** rax_3 = *(r14_1 + 8)
    *(r14_1 + 0x14) += 1
    char var_68 = 1
    *rax_3 = rcx_7
    *(r14_1 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    rcx_7[5] = 0
    rbp = arg6
    *rcx_7 = &data_142da7798
    rcx_7[2].d = 1
    rcx_7[3] = rbx_3
    rcx_7[4].d = 2
    *(rcx_7 + 0x24) = 3
    r13.b = sub_141192aa0(arg1, arg2, arg3, &arg5[1], rbp, arg5) != 0

void* r14_2 = *arg1
int64_t rax_7 = rbp[2]
int64_t* rbx_8 = (*(r14_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_13 = &rbx_8[1]

if (rcx_13 u> *(r14_2 + 0x38))
    sub_140b0e3d0(r14_2 + 0x30, 0x10)
    rbx_8 = (*(r14_2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_13 = &rbx_8[1]

*(r14_2 + 0x30) = rcx_13
*rbx_8 = rax_7
void*** rcx_17 = (*(r14_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_17[6]

if (rax_8 u> *(r14_2 + 0x38))
    sub_140b0e3d0(r14_2 + 0x30, 0x38)
    rcx_17 = (*(r14_2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_17[6]

*(r14_2 + 0x30) = rax_8
void**** rax_9 = *(r14_2 + 8)
*(r14_2 + 0x14) += 1
*rax_9 = rcx_17
*(r14_2 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142da7798
rcx_17[2].d = 1
rcx_17[3] = rbx_8
rcx_17[4].d = 2
*(rcx_17 + 0x24) = 3
rcx_17[5] = 0
void* rcx_21 = arg5[2]
void* var_40 = rcx_21

if (rcx_21 != 0)
    *(rcx_21 + 8) += 1

sub_14118a660(arg1, arg2, &rbp[1], &var_40)
return zx.q(r13.b)
