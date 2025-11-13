// 函数: sub_142709c70
// 地址: 0x142709c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_64 = -1
int32_t var_5c = 0
int32_t var_58
float zmm6_1 = sub_1426f1f40(&var_58) f+ *(arg1 + 0x128)
var_64.d = *arg2
sub_140d3a3a0(&var_64:4, arg4)
int64_t rbx_1 = sx.q(*(arg1 + 0x110))
int32_t rax_1 = *(arg5 + 0x14)
int64_t zmm1 = *(arg5 + 4)
int32_t rax_2 = arg5[4].d
int64_t rax_3 = *(arg5 + 0x24)
char rax_4 = *(arg5 + 0x2c)
int64_t rax_5 = arg5[6]
var_58 = (*arg5).d
int32_t var_54 = zmm1.d
int32_t var_50 = arg5[1].d.d
int64_t var_4c = *(arg5 + 0xc)
int64_t var_40 = arg5[3]
int32_t var_20
int32_t rax_7 = var_20 ^ ((arg5[7].d ^ var_20) & 7)
int32_t rax_8 = (rbx_1 + 1).d
*(arg1 + 0x110) = rax_8

if (rax_8 s> *(arg1 + 0x114))
    sub_140a05ee0(arg1 + 0x108)

int32_t* rdx_3 = rbx_1 * 0x4c + *(arg1 + 0x108)
*rdx_3 = zmm6_1.d
rdx_3[1] = var_64.d
*(rdx_3 + 8) = var_64
rdx_3[4] = var_58.d
rdx_3[5] = var_54.d
rdx_3[6] = var_50.d
*(rdx_3 + 0x1c) = var_4c
rdx_3[9] = rax_1
*(rdx_3 + 0x28) = var_40
rdx_3[0xc] = rax_2
*(rdx_3 + 0x34) = rax_3
rdx_3[0xf].b = rax_4
*(rdx_3 + 0x40) = rax_5
rdx_3[0x12] ^= (rdx_3[0x12] ^ rax_7) & 1
int32_t rcx_10 = ((rdx_3[0x12] ^ rax_7) & 2) ^ rdx_3[0x12]
rdx_3[0x12] = rcx_10
int32_t result = ((rcx_10 ^ rax_7) & 4) ^ rcx_10
rdx_3[0x12] = result
return result
