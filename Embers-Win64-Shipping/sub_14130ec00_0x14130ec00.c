// 函数: sub_14130ec00
// 地址: 0x14130ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg7
sub_1410e0370(arg1)
int64_t* rax_1 = *(rbp + 0x18)
int64_t* rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx = &rdi_2[1]

if (rcx u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rdi_2[1]

*(arg1 + 0x30) = rcx
*rdi_2 = rax_1
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[6]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[6]

*(arg1 + 0x30) = rax_2
void**** rax_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_3 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rdi_2
rcx_4[4] = 2
rcx_4[5] = 0
uint128_t var_78
sub_1419a2ec0(*(arg2 + 0x5150), &var_78, &data_143eb4660, 0)
uint128_t zmm0 = var_78
int64_t var_58 = *arg3
uint128_t var_68 = zmm0
var_78.d = 1
var_78:4.d = 1
int64_t var_48 = data_14396ee58
int64_t var_40 = *(rbp + 0x18)
int32_t var_38 = *arg4
int32_t var_34 = arg4[1]
int64_t var_50 = *arg5
var_78:8.d = 1
uint64_t var_30 = *arg6
var_78.q = var_78.q
sub_1412ecb60(arg1, &var_68, &var_58, &var_78)
int64_t* rax_12 = *(rbp + 0x18)
int64_t* rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_11 = &rdi_7[1]

if (rcx_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_11 = &rdi_7[1]

*(arg1 + 0x30) = rcx_11
*rdi_7 = rax_12
void*** rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_15[6]

if (rax_13 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_15[6]

*(arg1 + 0x30) = rax_13
void**** rax_14 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_14 = rcx_15
*(arg1 + 8) = &rcx_15[1]
rcx_15[1] = 0
*rcx_15 = &data_142da7798
rcx_15[2].d = 1
rcx_15[3] = rdi_7
rcx_15[4].d = 0
*(rcx_15 + 0x24) = 3
rcx_15[5] = 0
return &data_142da7798
