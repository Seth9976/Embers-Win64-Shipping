// 函数: sub_141a6ea00
// 地址: 0x141a6ea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].q = 0
int64_t rbp = sx.q(*(arg2 + 0x28))
int64_t r14 = arg2[2].q
*(arg1 + 0x28) = rbp.d

if (rbp.d != 0)
    sub_1407c3650(&arg1[2], rbp.d, 0)
    memcpy(arg1[2].q, r14, (rbp * 0xc).d)
else
    *(arg1 + 0x2c) = 0

arg1[3].q = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x38))
int64_t r14_1 = arg2[3].q
*(arg1 + 0x38) = rbp_1.d

if (rbp_1.d != 0)
    sub_14083a1f0(&arg1[3], rbp_1.d, 0)
    memcpy(arg1[3].q, r14_1, (rbp_1 << 5).d)
else
    *(arg1 + 0x3c) = 0

arg1[4].q = 0
int64_t rbp_2 = sx.q(*(arg2 + 0x48))
int64_t r14_2 = arg2[4].q
*(arg1 + 0x48) = rbp_2.d

if (rbp_2.d != 0)
    sub_1407c3650(&arg1[4], rbp_2.d, 0)
    memcpy(arg1[4].q, r14_2, (rbp_2 * 0xc).d)
else
    *(arg1 + 0x4c) = 0

arg1[5].q = 0
int64_t rbp_3 = sx.q(*(arg2 + 0x58))
int64_t rbx_1 = arg2[5].q
*(arg1 + 0x58) = rbp_3.d

if (rbp_3.d != 0)
    sub_1407c3650(&arg1[5], rbp_3.d, 0)
    memcpy(arg1[5].q, rbx_1, (rbp_3 * 0xc).d)
else
    *(arg1 + 0x5c) = 0

return arg1
