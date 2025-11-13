// 函数: sub_14118a9c0
// 地址: 0x14118a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
int64_t* rbx = arg1[1]
int32_t* rbp = arg2
void* r14 = *arg1
uint32_t i_2 = arg2[1]
int64_t var_78
sub_14118bdf0(&var_78, arg2)
uint32_t i = i_2 u>> 0xb
void* var_88
sub_1419a2ec0(rbx, &var_88, &data_143e6acc0, 0)
void* var_80
void* rsi = var_80
void* r13 = var_88
void* arg_8 = rsi
sub_1410e0370(r14)
void* rbx_1 = nullptr

if (r13 != 0)
    int64_t* rsi_1 = *(rsi + 0x10)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_2 = rsi_1[3]
    
    if (rbx_2[rdx_1] == 0)
        sub_1419ccf30(rsi_1, rdx_1.d)
        rbx_2 = rsi_1[3]
    
    rbx_1 = rbx_2[rdx_1]
    rbp = arg_10
    rsi = arg_8

*(r14 + 0x1b0) = rbx_1
sub_14198aa60(rbx_1)
void*** rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_7[3]

if (rax u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x20)
    rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_7[3]

*(r14 + 0x30) = rax
int64_t r8 = 0
void**** rax_1 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_1 = rcx_7
*(r14 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = rbx_1

if (r13 != 0)
    int64_t* rbx_3 = *(rsi + 0x10)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rcx_11 = rbx_3[3]
    
    if (rcx_11[rdx_2] == 0)
        sub_1419ccf30(rbx_3, rdx_2.d)
        rcx_11 = rbx_3[3]
    
    r8 = rcx_11[rdx_2]

uint32_t r9 = zx.d(*(r13 + 0x11c))
void* rax_4 = *arg6
void* var_a0 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t var_68
sub_14117b1d0(&var_68, r14, r8, r9, &var_a0)
int64_t rax_5 = *(r14 + 0x1b0)
void* var_98 = r14
int64_t var_90 = rax_5
sub_14117ec10(&var_98, r13 + 0x118, *arg4)
int32_t rcx_15
rcx_15.b = (*rbp & 0xfffffffd) == 0
int32_t rdx_6 = rcx_15 | 2

if (*rbp u> 1)
    rdx_6 = rcx_15

arg_10.d = rdx_6

if (arg7 != 0)
    arg_10.d = rdx_6 | 4

int32_t rax_7 = 0

for (; i != 0; i u>>= 1)
    rax_7 += 1

int32_t rcx_16 = 0
int32_t var_a8 = rax_7 - 1
uint32_t i_1 = i_2

if (i_2 != 0)
    do
        rcx_16 += 1
        i_1 u>>= 1
    while (i_1 != 0)

arg_8.d = rcx_16 - 1
sub_14115f810(
    sub_14115f810(
        sub_14115fa70(
            sub_14115fa70(sub_14115f810(&var_98, r13 + 0x120, &arg_10), r13 + 0x126, arg3), 
            r13 + 0x12c, arg5), 
        r13 + 0x132, &arg_8), 
    r13 + 0x138, &var_a8)
void*** rcx_24 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_24[4]

if (rax_14 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x28)
    rcx_24 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_24[4]

*(r14 + 0x30) = rax_14
void**** rax_15 = *(r14 + 8)
*(r14 + 0x14) += 1
int64_t rbp_2 = var_68
*rax_15 = rcx_24
*(r14 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142ef57a8
rcx_24[2].d = 1
*(rcx_24 + 0x14) = 1
rcx_24[3].d = i_2 u>> 1
void* var_60
void*** rcx_30 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_30[5]

if (rax_17 u> *(var_60 + 0x38))
    sub_140b0e3d0(var_60 + 0x30, 0x30)
    rcx_30 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_30[5]

*(var_60 + 0x30) = rax_17
int64_t* rax_18 = *(var_60 + 8)
*(var_60 + 0x14) += 1
*rax_18 = rcx_30
*(var_60 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142da77d8
rcx_30[2] = rbp_2
int32_t var_58
rcx_30[3].d = var_58
rcx_30[4] = 0
int64_t rcx_34 = var_78

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

return sub_1405d1550(arg6) __tailcall
