// 函数: sub_141188fd0
// 地址: 0x141188fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]
int32_t* rdi = arg2
void* r15 = *arg1
uint32_t i_1 = arg2[1]
int64_t var_60
sub_14118bdf0(&var_60, arg2)
int64_t rbx

if ((*rdi & 0xfffffffd) == 0)
    int32_t var_c4_1 = rdi[2]
    rbx = rdi[1].q
else
    int32_t var_b4_1 = rdi[1]
    rbx = rdi[2].q

void* var_98
sub_1419a2ec0(rsi, &var_98, &data_143e6aec0, 0)
void* var_90
void* r14 = var_90
void* r13 = var_98
void* arg_8 = r14
sub_1410e0370(r15)
void* rsi_1 = nullptr

if (r13 != 0)
    int64_t* r14_1 = *(r14 + 0x10)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    int64_t* rsi_2 = r14_1[3]
    
    if (rsi_2[rdx_1] == 0)
        sub_1419ccf30(r14_1, rdx_1.d)
        rsi_2 = r14_1[3]
    
    rsi_1 = rsi_2[rdx_1]
    r14 = arg_8

*(r15 + 0x1b0) = rsi_1
sub_14198aa60(rsi_1)
void*** rcx_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_7[3]

if (rax_4 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x20)
    rcx_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_7[3]

*(r15 + 0x30) = rax_4
int64_t r8 = 0
void**** rax_5 = *(r15 + 8)
*(r15 + 0x14) += 1
*rax_5 = rcx_7
*(r15 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = rsi_1

if (r13 != 0)
    int64_t* rsi_3 = *(r14 + 0x10)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rcx_11 = rsi_3[3]
    
    if (rcx_11[rdx_2] == 0)
        sub_1419ccf30(rsi_3, rdx_2.d)
        rcx_11 = rsi_3[3]
    
    r8 = rcx_11[rdx_2]

uint32_t r9 = zx.d(*(r13 + 0x11c))
void* rax_8 = *arg6
void* var_b0 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int64_t var_78
sub_14117b1d0(&var_78, r15, r8, r9, &var_b0)
int32_t rcx_14 = 0
int32_t var_c8
var_c8.q = 0
int64_t var_88 = 0
uint32_t i = i_1
int64_t var_80 = rbx

if (i_1 != 0)
    do
        rcx_14 += 1
        i u>>= 1
    while (i != 0)

int32_t var_bc = arg3
int64_t rax_10 = *(r15 + 0x1b0)
int32_t var_c0 = rcx_14
int64_t r8_2 = *arg4
void* var_a8 = r15
int64_t var_a0 = rax_10
sub_14117ec10(&var_a8, r13 + 0x118, r8_2)
int32_t rcx_16
rcx_16.b = (*rdi & 0xfffffffd) == 0
int32_t rdx_7 = rcx_16 | 2

if (*rdi u> 1)
    rdx_7 = rcx_16

arg_8.d = rdx_7

if (arg7 != 0)
    arg_8.d = rdx_7 | 4

sub_14115f810(
    sub_14115f810(
        sub_14115fa70(
            sub_14115fa70(sub_14115f810(&var_a8, r13 + 0x120, &arg_8), r13 + 0x126, arg5), 
            r13 + 0x12c, &var_88), 
        r13 + 0x132, &var_c0), 
    r13 + 0x138, &var_bc)
void*** rcx_24 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_24[4]

if (rax_16 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x28)
    rcx_24 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_24[4]

*(r15 + 0x30) = rax_16
void**** rax_17 = *(r15 + 8)
*(r15 + 0x14) += 1
int64_t r14_3 = var_78
*rax_17 = rcx_24
*(r15 + 8) = &rcx_24[1]
rcx_24[3].d = i_1 u>> 1
rcx_24[1] = 0
*rcx_24 = &data_142ef57a8
rcx_24[2].d = 1
*(rcx_24 + 0x14) = 1
void* var_70
void*** rcx_30 = (*(var_70 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_30[5]

if (rax_19 u> *(var_70 + 0x38))
    sub_140b0e3d0(var_70 + 0x30, 0x30)
    rcx_30 = (*(var_70 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_30[5]

*(var_70 + 0x30) = rax_19
int64_t* rax_20 = *(var_70 + 8)
*(var_70 + 0x14) += 1
*rax_20 = rcx_30
*(var_70 + 8) = &rcx_30[1]
rcx_30[1] = 0
*rcx_30 = &data_142da77d8
rcx_30[2] = r14_3
int32_t var_68
rcx_30[3].d = var_68
rcx_30[4] = 0
int64_t rcx_34 = var_60

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

return sub_1405d1550(arg6) __tailcall
