// 函数: sub_1426436f0
// 地址: 0x1426436f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int64_t rbp = sx.q(arg2[4])
int64_t r14 = *(arg2 + 8)
arg1[4] = rbp.d

if (rbp.d != 0)
    sub_140809010(&arg1[2], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp * 0x48).d)
else
    arg1[5] = 0

*(arg1 + 0x18) = 0
int64_t rbp_1 = sx.q(arg2[8])
int64_t r14_1 = *(arg2 + 0x18)
arg1[8] = rbp_1.d

if (rbp_1.d != 0)
    sub_1409da0d0(&arg1[6], rbp_1.d, 0)
    memcpy(*(arg1 + 0x18), r14_1, (rbp_1 * 0x60).d)
else
    arg1[9] = 0

*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
arg1[0x18] = arg2[0x18]
arg1[0x19] ^= (arg1[0x19] ^ arg2[0x19]) & 1
int32_t rcx_7 = ((arg2[0x19] ^ arg1[0x19]) & 2) ^ arg1[0x19]
arg1[0x19] = rcx_7
arg1[0x19] = ((arg2[0x19] ^ rcx_7) & 4) ^ rcx_7
return arg1
