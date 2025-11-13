// 函数: sub_141a8d0e0
// 地址: 0x141a8d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3].q = arg2[3].q
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[4].q = 0
int64_t rbp = sx.q(*(arg2 + 0x48))
int64_t r14 = arg2[4].q
*(arg1 + 0x48) = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[4], rbp.d, 0)
    memcpy(arg1[4].q, r14, (rbp << 2).d)
else
    *(arg1 + 0x4c) = 0

arg1[5].q = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x58))
int64_t r14_1 = arg2[5].q
*(arg1 + 0x58) = rbp_1.d

if (rbp_1.d != 0)
    sub_1405a4b40(&arg1[5], rbp_1.d, 0)
    memcpy(arg1[5].q, r14_1, (rbp_1 * 0x30).d)
else
    *(arg1 + 0x5c) = 0

sub_141a8ff40(&arg1[6], &arg2[6])
return arg1
