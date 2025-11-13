// 函数: sub_141189670
// 地址: 0x141189670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg4[2] - *arg4
int32_t rax_1 = arg4[3] - arg4[1]
void* rsi = *arg1
int32_t r12
r12.b = modu.dp.d(0:rax_1, 0x20) != 0
void* var_68
sub_1419a2ec0(arg1[1], &var_68, &data_143e6b0c0, 0)
void* rbp = var_68
sub_1410e0370(rsi)
void* rbx = nullptr
void* var_60

if (rbp != 0)
    int64_t* rdi_1 = *(var_60 + 0x10)
    int64_t rdx_4 = sx.q(*(rbp + 0x10c))
    int64_t* rbx_1 = rdi_1[3]
    
    if (rbx_1[rdx_4] == 0)
        sub_1419ccf30(rdi_1, rdx_4.d)
        rbx_1 = rdi_1[3]
    
    rbx = rbx_1[rdx_4]

*(rsi + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[3]

if (rax_3 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x20)
    rcx_6 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[3]

*(rsi + 0x30) = rax_3
int64_t r8 = 0
void**** rax_4 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_4 = rcx_6
*(rsi + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rbx

if (rbp != 0)
    int64_t* rbx_2 = *(var_60 + 0x10)
    int64_t rdx_5 = sx.q(*(rbp + 0x10c))
    int64_t* rax_6 = rbx_2[3]
    
    if (rax_6[rdx_5] == 0)
        sub_1419ccf30(rbx_2, rdx_5.d)
        rax_6 = rbx_2[3]
    
    r8 = rax_6[rdx_5]

int64_t* arg_28
int64_t* r15_1 = arg_28
uint32_t r9 = zx.d(*(rbp + 0x11c))
int64_t* rax_7 = *r15_1
arg_28 = rax_7

if (rax_7 != 0)
    rax_7[1].d += 1

int64_t var_58
sub_14117b1d0(&var_58, rsi, r8, r9, &arg_28)
int64_t rax_8 = *(rsi + 0x1b0)
void* var_78 = rsi
int64_t var_70 = rax_8
sub_14117ec10(&var_78, rbp + 0x118, *arg3)
sub_14115fba0(sub_14115fa70(sub_14115fa70(&var_78, rbp + 0x120, arg2), rbp + 0x126, arg4), 
    rbp + 0x12c, arg5)
void*** rcx_18 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_18[4]

if (rax_11 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x28)
    rcx_18 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_18[4]

*(rsi + 0x30) = rax_11
int64_t* rax_12 = *(rsi + 8)
*(rsi + 0x14) += 1
int64_t rbp_1 = var_58
*rax_12 = rcx_18
*(rsi + 8) = &rcx_18[1]
rcx_18[1] = 0
*rcx_18 = &data_142ef57a8
rcx_18[2].d = rdx_1
*(rcx_18 + 0x14) = r12 + divu.dp.d(0:rax_1, 0x20)
rcx_18[3].d = 1
void* var_50
void*** rcx_24 = (*(var_50 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_24[5]

if (rax_15 u> *(var_50 + 0x38))
    sub_140b0e3d0(var_50 + 0x30, 0x30)
    rcx_24 = (*(var_50 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_24[5]

*(var_50 + 0x30) = rax_15
int64_t* rax_16 = *(var_50 + 8)
*(var_50 + 0x14) += 1
*rax_16 = rcx_24
*(var_50 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142da77d8
rcx_24[2] = rbp_1
int32_t var_48
rcx_24[3].d = var_48
rcx_24[4] = 0
return sub_1405d1550(r15_1) __tailcall
