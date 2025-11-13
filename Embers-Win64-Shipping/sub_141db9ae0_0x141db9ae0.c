// 函数: sub_141db9ae0
// 地址: 0x141db9ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[8])
int32_t rax = (rdi + 1).d
arg1[8] = rax

if (rax s> arg1[9])
    sub_1405c5060(&arg1[6])

sub_141db6cf0(rdi * 0x50 + *(arg1 + 0x18), arg2)
int32_t rax_1 = *arg1
int32_t rax_2 = arg1[0x12]
*arg1 = (((*arg2 | rax_1) ^ rax_1) & 1) ^ rax_1
int32_t rcx_14 = ((((zx.d(*(arg2 + 0x4a)) * 2) | rax_2) ^ rax_2) & 2) ^ rax_2
arg1[0x12] = rcx_14
int32_t result = ((((zx.d(*(arg2 + 0x4a)) * 2) | rcx_14) ^ rcx_14) & 4) ^ rcx_14
arg1[0x12] = result
return result
