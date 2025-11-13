// 函数: sub_14117a8e0
// 地址: 0x14117a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7].q = 0
int64_t rbp = sx.q(*(arg2 + 0x78))
int64_t r14 = arg2[7].q
*(arg1 + 0x78) = rbp.d

if (rbp.d != 0)
    sub_14119a4e0(&arg1[7], rbp.d, 0)
    memcpy(arg1[7].q, r14, (rbp * 0xc0).d)
else
    *(arg1 + 0x7c) = 0

arg1[8].q = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x88))
int64_t r14_1 = arg2[8].q
*(arg1 + 0x88) = rbp_1.d

if (rbp_1.d != 0)
    sub_14119a5a0(&arg1[8], rbp_1.d, 0)
    memcpy(arg1[8].q, r14_1, (rbp_1 * 0x28).d)
else
    *(arg1 + 0x8c) = 0

arg1[9].q = 0
int64_t rbp_2 = sx.q(*(arg2 + 0x98))
int64_t r14_2 = arg2[9].q
*(arg1 + 0x98) = rbp_2.d

if (rbp_2.d != 0)
    sub_14119a550(&arg1[9], rbp_2.d, 0)
    memcpy(arg1[9].q, r14_2, (rbp_2 << 3).d)
else
    *(arg1 + 0x9c) = 0

arg1[0xa] = arg2[0xa]
arg1[0xb].q = arg2[0xb].q
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
arg1[0xd].b = arg2[0xd].b
return arg1
