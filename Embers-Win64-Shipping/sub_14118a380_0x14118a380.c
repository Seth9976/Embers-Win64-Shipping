// 函数: sub_14118a380
// 地址: 0x14118a380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
void* rsi = *arg1
int32_t* r12 = arg2
int32_t rbx = arg2[1]
int64_t var_58
sub_14118bdf0(&var_58, arg2)
void* var_68
sub_141190860(&var_68, rdi, rbx)
sub_1410e0370(rsi)
void* rdi_1 = var_68
void* r14 = nullptr
void* var_60

if (rdi_1 != 0)
    int64_t* rbx_1 = *(var_60 + 0x10)
    int64_t rdx_1 = sx.q(*(rdi_1 + 0x10c))
    int64_t* r14_1 = rbx_1[3]
    
    if (r14_1[rdx_1] == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        r14_1 = rbx_1[3]
    
    r14 = r14_1[rdx_1]

*(rsi + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_7[3]

if (rax u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x20)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_7[3]

*(rsi + 0x30) = rax
int64_t r8_1 = 0
void**** rax_1 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_1 = rcx_7
*(rsi + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = r14

if (rdi_1 != 0)
    int64_t* r14_2 = *(var_60 + 0x10)
    int64_t rdx_2 = sx.q(*(rdi_1 + 0x10c))
    int64_t* rax_3 = r14_2[3]
    
    if (rax_3[rdx_2] == 0)
        sub_1419ccf30(r14_2, rdx_2.d)
        rax_3 = r14_2[3]
    
    r8_1 = rax_3[rdx_2]

int64_t* arg_28
int64_t* r14_3 = arg_28
uint32_t r9 = zx.d(*(rdi_1 + 0x11c))
int64_t* rax_4 = *r14_3
arg_28 = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1
    rdi_1 = var_68

int64_t var_48
sub_14117b1d0(&var_48, rsi, r8_1, r9, &arg_28)
int64_t var_78 = arg6
sub_14119be50(rdi_1, rsi, r12, arg3, arg4, arg5)
int32_t rdi_3

if ((*r12 & 0xfffffffd) != 0)
    rdi_3 = arg4[2] - *arg4
else
    rdi_3 = arg4[3] - arg4[1]

void*** rcx_16 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_16[4]

if (rax_7 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x28)
    rcx_16 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_16[4]

*(rsi + 0x30) = rax_7
int64_t* rax_8 = *(rsi + 8)
*(rsi + 0x14) += 1
int64_t rbp_1 = var_48
*rax_8 = rcx_16
*(rsi + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142ef57a8
rcx_16[2].d = 1
*(rcx_16 + 0x14) = 1
rcx_16[3].d = rdi_3
void* var_40
void*** rcx_22 = (*(var_40 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_22[5]

if (rax_10 u> *(var_40 + 0x38))
    sub_140b0e3d0(var_40 + 0x30, 0x30)
    rcx_22 = (*(var_40 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_22[5]

*(var_40 + 0x30) = rax_10
int64_t* rax_11 = *(var_40 + 8)
*(var_40 + 0x14) += 1
*rax_11 = rcx_22
*(var_40 + 8) = &rcx_22[1]
rcx_22[1] = 0
*rcx_22 = &data_142da77d8
rcx_22[2] = rbp_1
int32_t var_38
rcx_22[3].d = var_38
rcx_22[4] = 0
int64_t rcx_26 = var_58

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return sub_1405d1550(r14_3) __tailcall
