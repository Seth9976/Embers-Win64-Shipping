// 函数: sub_14130e910
// 地址: 0x14130e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410e0370(arg1)
int64_t* rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* rax = *arg9
void* rcx = &rdi_2[1]

if (rcx u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rdi_2[1]

*(arg1 + 0x30) = rcx
*rdi_2 = rax
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[6]

if (rax_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[6]

*(arg1 + 0x30) = rax_1
void**** rax_2 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_2 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[5] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rdi_2
rcx_4[4].d = 2
*(rcx_4 + 0x24) = 3
uint128_t var_a8
sub_1419a2ec0(*(arg2 + 0x5150), &var_a8, &data_143eb4760, 0)
uint128_t zmm0 = var_a8
int32_t r8 = *arg4
int32_t r10 = arg4[2]
int32_t r11 = arg4[1]
int32_t r9_1 = arg4[3] - r11
int64_t var_98 = *arg3
int64_t var_78 = *arg9
int32_t var_68 = r8
var_a8:4.d = r9_1
int32_t var_60 = r10
int64_t var_88 = data_14396ee58
int64_t var_90 = *arg5
uint128_t var_38 = zmm0
int32_t var_64 = r11
int64_t var_80 = *arg8
int32_t var_5c = arg4[3]
int32_t var_58 = *arg6
int32_t var_50 = arg6[2]
int32_t var_4c = arg6[3]
int32_t var_54 = arg6[1]
var_a8:8.d = 1
int32_t var_48 = *arg7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r10 - r8)
int32_t rdx_4 = temp0 & 0x1f
int32_t var_44 = arg7[1]
int32_t rax_14 = temp1 + rdx_4
int32_t r8_2 = rax_14 s>> 5

if ((rax_14 & 0x1f) != rdx_4)
    r8_2 += 1

var_a8.d = r8_2
var_a8.q = var_a8.q
sub_1412ec840(arg1, &var_38, &var_98, &var_a8)
int64_t* rax_16 = *arg9
int64_t** rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_17 = &rdi_7[1]

if (rcx_17 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_17 = &rdi_7[1]

*(arg1 + 0x30) = rcx_17
*rdi_7 = rax_16
void*** rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_21[6]

if (rax_17 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_21[6]

*(arg1 + 0x30) = rax_17
void**** rax_18 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_18 = rcx_21
*(arg1 + 8) = &rcx_21[1]
rcx_21[1] = 0
*rcx_21 = &data_142da7798
rcx_21[2].d = 1
rcx_21[3] = rdi_7
rcx_21[4].d = 0
*(rcx_21 + 0x24) = 1
rcx_21[5] = 0
return sub_1405d1550(arg9, 0) __tailcall
