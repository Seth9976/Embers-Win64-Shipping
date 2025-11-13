// 函数: sub_14118a660
// 地址: 0x14118a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* rsi = arg1[1]
void* rdi = *arg1
int32_t rbx = arg2[1]
int64_t var_78
sub_14118bdf0(&var_78, arg2)
int32_t rdx = *arg2
int32_t rcx_1 = ((rbx u>> 1) + 1) * 2

if (rdx u> 1)
    rcx_1 = rbx

int64_t rax_3

if ((rdx & 0xfffffffd) == 0)
    int32_t var_b4_1 = arg2[2]
    rax_3 = arg2[1].q
else
    int32_t arg_14 = arg2[1]
    rax_3 = arg2[2].q

int64_t arg_8 = rax_3

if ((rdx & 0xfffffffd) != 0)
    arg_8:4.d = rcx_1
else
    arg_8.d = rcx_1

void* var_98
sub_1419a2ec0(rsi, &var_98, &data_143e6afc0, 0)
void* var_90
void* r13 = var_90
void* r15 = var_98
void* var_b0 = r13
sub_1410e0370(rdi)
void* rbx_1 = nullptr

if (r15 != 0)
    int64_t* rsi_1 = *(r13 + 0x10)
    int64_t rdx_2 = sx.q(*(r15 + 0x10c))
    int64_t* rbx_2 = rsi_1[3]
    
    if (rbx_2[rdx_2] == 0)
        sub_1419ccf30(rsi_1, rdx_2.d)
        rbx_2 = rsi_1[3]
    
    rbx_1 = rbx_2[rdx_2]
    r13 = var_b0

*(rdi + 0x1b0) = rbx_1
sub_14198aa60(rbx_1)
void*** rcx_8 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_8[3]

if (rax_6 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_8 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_8[3]

*(rdi + 0x30) = rax_6
int64_t r8 = 0
void**** rax_7 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_7 = rcx_8
*(rdi + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142dd5b40
rcx_8[2] = rbx_1

if (r15 != 0)
    int64_t* rbx_3 = *(r13 + 0x10)
    int64_t rdx_3 = sx.q(*(r15 + 0x10c))
    int64_t* rax_9 = rbx_3[3]
    
    if (rax_9[rdx_3] == 0)
        sub_1419ccf30(rbx_3, rdx_3.d)
        rax_9 = rbx_3[3]
    
    r8 = rax_9[rdx_3]

int64_t* r13_3 = arg_20
uint32_t r9 = zx.d(*(r15 + 0x11c))
void* rax_10 = *r13_3
var_b0 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t var_68
sub_14117b1d0(&var_68, rdi, r8, r9, &var_b0)
int32_t arg_10
arg_10.q = 0
int64_t var_88 = 0
int64_t r8_2 = *arg3
int64_t var_80 = arg_8
int64_t var_a0 = *(rdi + 0x1b0)
void* var_a8 = rdi
sub_14117ec10(&var_a8, r15 + 0x118, r8_2)
int32_t rdx_6
rdx_6.b = (*arg2 & 0xfffffffd) == 0
int32_t rcx_16 = rdx_6 | 2

if (*arg2 u> 1)
    rcx_16 = rdx_6

arg_20.d = rcx_16
sub_14115fa70(sub_14115f810(&var_a8, r15 + 0x120, &arg_20), r15 + 0x126, &var_88)
void*** rcx_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_21[4]

if (rax_15 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x28)
    rcx_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_21[4]

*(rdi + 0x30) = rax_15
int64_t* rax_16 = *(rdi + 8)
*(rdi + 0x14) += 1
int64_t r14_1 = var_68
*rax_16 = rcx_21
*(rdi + 8) = &rcx_21[1]
rcx_21[1] = 0
*rcx_21 = &data_142ef57a8
rcx_21[2].d = 1
*(rcx_21 + 0x14) = 1
rcx_21[3].d = (rbx u>> 1) + 1
void* var_60
void*** rcx_27 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_27[5]

if (rax_18 u> *(var_60 + 0x38))
    sub_140b0e3d0(var_60 + 0x30, 0x30)
    rcx_27 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_27[5]

*(var_60 + 0x30) = rax_18
int64_t* rax_19 = *(var_60 + 8)
*(var_60 + 0x14) += 1
*rax_19 = rcx_27
*(var_60 + 8) = &rcx_27[1]
rcx_27[1] = 0
*rcx_27 = &data_142da77d8
rcx_27[2] = r14_1
int32_t var_58
rcx_27[3].d = var_58
rcx_27[4] = 0
int64_t rcx_31 = var_78

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

return sub_1405d1550(r13_3) __tailcall
