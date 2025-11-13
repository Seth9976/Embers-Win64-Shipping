// 函数: sub_141189360
// 地址: 0x141189360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg3[2] - *arg3
char rsi = arg2
void* r14 = *arg1
int32_t rax_3 = arg3[3] - arg3[1]
void* var_88
sub_1419a2ec0(arg1[1], &var_88, &data_143e6b1c0, 0)
void* r13 = var_88
sub_1410e0370(r14)
void* rbx = nullptr
void* var_80

if (r13 != 0)
    int64_t* rdi_1 = *(var_80 + 0x10)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_1 = rdi_1[3]
    
    if (rbx_1[rdx_1] == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rbx_1 = rdi_1[3]
    
    rbx = rbx_1[rdx_1]
    rsi = arg2

*(r14 + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_6[3]

if (rax_4 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x20)
    rcx_6 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_6[3]

*(r14 + 0x30) = rax_4
int64_t r8 = 0
void**** rax_5 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_5 = rcx_6
*(r14 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rbx

if (r13 != 0)
    int64_t* rbx_2 = *(var_80 + 0x10)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rax_7 = rbx_2[3]
    
    if (rax_7[rdx_2] == 0)
        sub_1419ccf30(rbx_2, rdx_2.d)
        rax_7 = rbx_2[3]
    
    r8 = rax_7[rdx_2]

uint32_t r9 = zx.d(*(r13 + 0x120))
void* rax_9 = *arg6
void* var_90 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int64_t var_68
sub_14117b1d0(&var_68, r14, r8, r9, &var_90)
uint32_t arg_8 = zx.d(rsi)
int64_t r8_2 = *arg4
int64_t var_70 = *(r14 + 0x1b0)
void* var_78 = r14
sub_14115f810(
    sub_14115fa70(sub_14117ec10(sub_14117ec10(&var_78, r13 + 0x118, r8_2), r13 + 0x11c, *arg5), 
        r13 + 0x124, arg3), 
    r13 + 0x12a, &arg_8)
int32_t rbx_3 = rax_1

if (arg2 != 0)
    rbx_3 = rax_3

void*** rcx_18 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_18[4]

if (rax_16 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x28)
    rcx_18 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_18[4]

*(r14 + 0x30) = rax_16
int64_t* rax_17 = *(r14 + 8)
*(r14 + 0x14) += 1
int64_t rbp_1 = var_68
*rax_17 = rcx_18
*(r14 + 8) = &rcx_18[1]
rcx_18[3].d = rbx_3
rcx_18[1] = 0
*rcx_18 = &data_142ef57a8
rcx_18[2].d = 1
*(rcx_18 + 0x14) = 1
void* var_60
void*** rcx_24 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_24[5]

if (rax_19 u> *(var_60 + 0x38))
    sub_140b0e3d0(var_60 + 0x30, 0x30)
    rcx_24 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_24[5]

*(var_60 + 0x30) = rax_19
int64_t* rax_20 = *(var_60 + 8)
*(var_60 + 0x14) += 1
*rax_20 = rcx_24
*(var_60 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142da77d8
rcx_24[2] = rbp_1
int32_t var_58
rcx_24[3].d = var_58
rcx_24[4] = 0
return sub_1405d1550(arg6) __tailcall
