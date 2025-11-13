// 函数: sub_14118a010
// 地址: 0x14118a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
void* r14 = *arg1
int32_t rsi = arg2[1]
int64_t var_78
sub_14118bdf0(&var_78, arg2)
uint32_t rsi_1 = rsi u>> 0xb
bool cond:0 = (*arg2 & 0xfffffffd) != 0
int128_t var_a8 = *arg4
uint32_t arg_8 = rsi_1

if (cond:0)
    var_a8:0xc.d = (var_a8.q u>> 0x20).d + 0x800
else
    var_a8:8.d = var_a8.d + 0x800

void* var_88
sub_1419a2ec0(rdi, &var_88, &data_143e6adc0, 0)
void* var_80
void* rdi_1 = var_80
void* r13 = var_88
void* arg_20 = rdi_1
sub_1410e0370(r14)
void* rbx_1 = nullptr

if (r13 != 0)
    int64_t* rdi_2 = *(rdi_1 + 0x10)
    int64_t rdx_1 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_2 = rdi_2[3]
    
    if (rbx_2[rdx_1] == 0)
        sub_1419ccf30(rdi_2, rdx_1.d)
        rbx_2 = rdi_2[3]
    
    rbx_1 = rbx_2[rdx_1]
    rsi_1 = arg_8
    rdi_1 = arg_20

*(r14 + 0x1b0) = rbx_1
sub_14198aa60(rbx_1)
void*** rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[3]

if (rax_5 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x20)
    rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[3]

*(r14 + 0x30) = rax_5
int64_t r8 = 0
void**** rax_6 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_6 = rcx_7
*(r14 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = rbx_1

if (r13 != 0)
    int64_t* rbx_3 = *(rdi_1 + 0x10)
    int64_t rdx_2 = sx.q(*(r13 + 0x10c))
    int64_t* rax_8 = rbx_3[3]
    
    if (rax_8[rdx_2] == 0)
        sub_1419ccf30(rbx_3, rdx_2.d)
        rax_8 = rbx_3[3]
    
    r8 = rax_8[rdx_2]

uint32_t r9 = zx.d(*(r13 + 0x11c))
void* rax_10 = *arg5
void* var_b0 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t var_68
sub_14117b1d0(&var_68, r14, r8, r9, &var_b0)
arg_20.d = rsi
int64_t rax_12 = *(r14 + 0x1b0)
uint32_t var_b8 = rsi_1
int64_t r8_2 = *arg3
void* var_98 = r14
int64_t var_90 = rax_12
sub_14117ec10(&var_98, r13 + 0x118, r8_2)
uint32_t rdx_5
rdx_5.b = (*arg2 & 0xfffffffd) == 0
uint32_t rcx_15 = rdx_5 | 2

if (*arg2 u> 1)
    rcx_15 = rdx_5

arg_8 = rcx_15
sub_14115f810(
    sub_14115f810(sub_14115fa70(sub_14115f810(&var_98, r13 + 0x120, &arg_8), r13 + 0x126, &var_a8), 
        r13 + 0x12c, &arg_20), 
    r13 + 0x132, &var_b8)
int32_t rbx_5 = var_a8:8.d - var_a8.d

if ((*arg2 & 0xfffffffd) == 0)
    rbx_5 = var_a8:0xc.d - var_a8:4.d

void*** rcx_22 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_22[4]

if (rax_19 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x28)
    rcx_22 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_22[4]

*(r14 + 0x30) = rax_19
int64_t* rax_20 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_20 = rcx_22
*(r14 + 8) = &rcx_22[1]
int64_t r14_1 = var_68
rcx_22[3].d = rbx_5
rcx_22[1] = 0
*rcx_22 = &data_142ef57a8
rcx_22[2].d = 1
*(rcx_22 + 0x14) = 1
void* var_60
void*** rcx_28 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_28[5]

if (rax_22 u> *(var_60 + 0x38))
    sub_140b0e3d0(var_60 + 0x30, 0x30)
    rcx_28 = (*(var_60 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_28[5]

*(var_60 + 0x30) = rax_22
int64_t* rax_23 = *(var_60 + 8)
*(var_60 + 0x14) += 1
*rax_23 = rcx_28
*(var_60 + 8) = &rcx_28[1]
rcx_28[1] = 0
*rcx_28 = &data_142da77d8
rcx_28[2] = r14_1
int32_t var_58
rcx_28[3].d = var_58
rcx_28[4] = 0
int64_t rcx_32 = var_78

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

return sub_1405d1550(arg5)
