// 函数: sub_1426700a0
// 地址: 0x1426700a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
arg1[4] = 0
sub_1407473e0(&arg1[2], &arg2[2])
*(arg1 + 0x18) = 0
sub_14266e0d0(&arg1[6], *(arg2 + 0x18), arg2[8], 0, 0)
*(arg1 + 0x28) = 0
sub_14266e220(&arg1[0xa], *(arg2 + 0x28), arg2[0xc], 0, 0)
*(arg1 + 0x38) = 0
int64_t rbp = sx.q(arg2[0x10])
int64_t r14 = *(arg2 + 0x38)
arg1[0x10] = rbp.d

if (rbp.d != 0)
    sub_140808ed0(&arg1[0xe], rbp.d, 0)
    memcpy(*(arg1 + 0x38), r14, (rbp * 0x50).d)
else
    arg1[0x11] = 0

arg1[0x12] ^= (arg1[0x12] ^ arg2[0x12]) & 1
int32_t rcx_8 = ((arg1[0x12] ^ arg2[0x12]) & 2) ^ arg1[0x12]
arg1[0x12] = rcx_8
int32_t rax_7 = ((rcx_8 ^ arg2[0x12]) & 4) ^ rcx_8
arg1[0x12] = rax_7
int32_t rcx_12 = ((rax_7 ^ arg2[0x12]) & 8) ^ rax_7
arg1[0x12] = rcx_12
arg1[0x12] = ((rcx_12 ^ arg2[0x12]) & 0x10) ^ rcx_12
return arg1
