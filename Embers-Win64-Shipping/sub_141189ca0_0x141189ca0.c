// 函数: sub_141189ca0
// 地址: 0x141189ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
void* r14 = *arg1
int32_t rbx = arg2[1]
int64_t var_58
sub_14118bdf0(&var_58, arg2)
int32_t r12_1 = arg5[2] - *arg5

if ((*arg2 & 0xfffffffd) == 0)
    r12_1 = arg5[3] - arg5[1]

void* var_a0
sub_14118c2a0(&var_a0, rdi, rbx)
sub_1410e0370(r14)
void* r13 = var_a0
void* rbx_1 = nullptr
void* var_98
void* rdi_1 = var_98
void* arg_8 = rdi_1

if (r13 != 0)
    int64_t* rdi_2 = *(rdi_1 + 0x10)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_2 = rdi_2[3]
    
    if (rbx_2[rdx_1] == 0)
        sub_1419ccf30(rdi_2, rdx_1.d)
        rbx_2 = rdi_2[3]
    
    rbx_1 = rbx_2[rdx_1]
    rdi_1 = arg_8

*(r14 + 0x1b0) = rbx_1
sub_14198aa60(rbx_1)
void*** rcx_8 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_8[3]

if (rax_3 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x20)
    rcx_8 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_8[3]

*(r14 + 0x30) = rax_3
int64_t r8_1 = 0
void**** rax_4 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_4 = rcx_8
*(r14 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142dd5b40
rcx_8[2] = rbx_1

if (r13 != 0)
    int64_t* rbx_3 = *(rdi_1 + 0x10)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rax_6 = rbx_3[3]
    
    if (rax_6[rdx_2] == 0)
        sub_1419ccf30(rbx_3, rdx_2.d)
        rax_6 = rbx_3[3]
    
    r8_1 = rax_6[rdx_2]

uint32_t r9 = zx.d(*(r13 + 0x11c))
void* rax_8 = *arg6
void* var_b0 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1
    r13 = var_a0

int64_t var_70
sub_14117b1d0(&var_70, r14, r8_1, r9, &var_b0)
int32_t var_b8 = arg5[2] - *arg5
int64_t r8_3 = *arg4
int32_t var_b4 = arg5[3] - arg5[1]
void* var_90 = r14
int32_t rax_14 = *arg2
int32_t rdx_4
rdx_4.b = (rax_14 & 0xfffffffd) == 0
rax_14.b = rax_14 u<= 1
int32_t rcx_15 = rdx_4 | 2
int64_t var_88 = *(r14 + 0x1b0)

if (rax_14.b == 0)
    rcx_15 = rdx_4

arg_8.d = rcx_15 | 8
sub_14117ec10(&var_90, r13 + 0x118, r8_3)
sub_14115f810(
    sub_14115f940(sub_14115f940(sub_14115f940(&var_90, r13 + 0x120, arg5), r13 + 0x126, &arg5[2]), 
        r13 + 0x12c, &var_b8), 
    r13 + 0x132, &arg_8)
int64_t rax_19 = *(r14 + 0x1b0)
void* var_80 = r14
int64_t var_78 = rax_19
sub_14117ec10(&var_80, r13 + 0x138, *arg3)
void*** rcx_25 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rcx_25[4]

if (rax_20 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x28)
    rcx_25 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_25[4]

*(r14 + 0x30) = rax_20
int64_t* rax_21 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_21 = rcx_25
*(r14 + 8) = &rcx_25[1]
int64_t r14_1 = var_70
rcx_25[1] = 0
*rcx_25 = &data_142ef57a8
rcx_25[2].d = 1
*(rcx_25 + 0x14) = 1
rcx_25[3].d = r12_1
void* var_68
void*** rcx_31 = (*(var_68 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_31[5]

if (rax_23 u> *(var_68 + 0x38))
    sub_140b0e3d0(var_68 + 0x30, 0x30)
    rcx_31 = (*(var_68 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_31[5]

*(var_68 + 0x30) = rax_23
int64_t* rax_24 = *(var_68 + 8)
*(var_68 + 0x14) += 1
*rax_24 = rcx_31
*(var_68 + 8) = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142da77d8
rcx_31[2] = r14_1
int32_t var_60
rcx_31[3].d = var_60
rcx_31[4] = 0
int64_t rcx_35 = var_58

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

return sub_1405d1550(arg6) __tailcall
