// 函数: sub_141189970
// 地址: 0x141189970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
void* rsi = *arg1
int32_t* r14 = arg2
int32_t r15 = arg2[1]
int64_t var_68
sub_14118bdf0(&var_68, arg2)
int64_t rbx

if ((*r14 & 0xfffffffd) == 0)
    int32_t arg_14 = r14[2]
    rbx = r14[1].q
else
    int32_t arg_c = r14[1]
    rbx = r14[2].q

void* var_78
sub_14118c120(&var_78, rdi, r15)
sub_1410e0370(rsi)
void* r15_1 = var_78
void* r12 = nullptr
int64_t var_70
int64_t var_88 = var_70
int64_t var_98

if (r15_1 != 0)
    int64_t rdx_1 = sx.q(*(r15_1 + 0x10c))
    int64_t* rdi_1 = *(var_70 + 0x10)
    int64_t rax_5 = rdx_1
    var_98 = rdx_1
    int64_t r12_1 = rdi_1[3]
    
    if (*(r12_1 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_5 = var_98
        r12_1 = rdi_1[3]
    
    r12 = *(r12_1 + (rax_5 << 3))

*(rsi + 0x1b0) = r12
sub_14198aa60(r12)
void*** rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_7[3]

if (rax_6 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x20)
    rcx_7 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_7[3]

*(rsi + 0x30) = rax_6
int64_t r8_1 = 0
void**** rax_7 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_7 = rcx_7
*(rsi + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = r12

if (r15_1 != 0)
    int64_t rdx_2 = sx.q(*(r15_1 + 0x10c))
    int64_t r12_2 = var_88
    int64_t rcx_11 = rdx_2
    var_88 = rdx_2
    int64_t* r12_3 = *(r12_2 + 0x10)
    int64_t rax_9 = r12_3[3]
    
    if (*(rax_9 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(r12_3, rdx_2.d)
        rax_9 = r12_3[3]
        rcx_11 = var_88
    
    r8_1 = *(rax_9 + (rcx_11 << 3))

int64_t* arg_28
int64_t* r12_4 = arg_28
uint32_t r9 = zx.d(*(r15_1 + 0x11c))
int64_t* rax_10 = *r12_4
arg_28 = rax_10

if (rax_10 != 0)
    rax_10[1].d += 1
    r15_1 = var_78

int64_t var_58
sub_14117b1d0(&var_58, rsi, r8_1, r9, &arg_28)
arg_28 = nullptr
var_98 = 0
int64_t* var_a8 = &var_88
var_88.d = 0x7f7fffff
var_88:4.d = 0xff7fffff
int32_t var_80 = 0
int64_t var_90 = rbx
sub_14119be50(r15_1, rsi, r14, arg3, arg4, &var_98)
int32_t rbx_2

if ((*r14 & 0xfffffffd) != 0)
    rbx_2 = arg4[2] - *arg4
else
    rbx_2 = arg4[3] - arg4[1]

void*** rcx_17 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_17[4]

if (rax_11 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x28)
    rcx_17 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_17[4]

*(rsi + 0x30) = rax_11
int64_t* rax_12 = *(rsi + 8)
*(rsi + 0x14) += 1
int64_t r14_1 = var_58
*rax_12 = rcx_17
*(rsi + 8) = &rcx_17[1]
rcx_17[3].d = rbx_2
rcx_17[1] = 0
*rcx_17 = &data_142ef57a8
rcx_17[2].d = 1
*(rcx_17 + 0x14) = 1
void* var_50
void*** rcx_23 = (*(var_50 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_23[5]

if (rax_14 u> *(var_50 + 0x38))
    sub_140b0e3d0(var_50 + 0x30, 0x30)
    rcx_23 = (*(var_50 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_23[5]

*(var_50 + 0x30) = rax_14
int64_t* rax_15 = *(var_50 + 8)
*(var_50 + 0x14) += 1
*rax_15 = rcx_23
*(var_50 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142da77d8
rcx_23[2] = r14_1
int32_t var_48
rcx_23[3].d = var_48
rcx_23[4] = 0
int64_t rcx_27 = var_68

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return sub_1405d1550(r12_4) __tailcall
