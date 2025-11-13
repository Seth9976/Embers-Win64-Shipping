// 函数: sub_1408480e0
// 地址: 0x1408480e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    int32_t r8_1 = arg1[5]
    int64_t rbp_1 = sx.q(arg2[4])
    int64_t r14_1 = *(arg2 + 8)
    arg1[4] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&arg1[2], rbp_1.d, r8_1)
        memcpy(*(arg1 + 8), r14_1, (rbp_1 << 4).d)
    else
        arg1[5] = rbp_1.d

arg1[6] = arg2[6]
arg1[7].b = arg2[7].b
arg1[8] ^= (arg1[8] ^ arg2[8]) & 1
int32_t rcx_5 = ((arg1[8] ^ arg2[8]) & 2) ^ arg1[8]
arg1[8] = rcx_5
arg1[8] = ((rcx_5 ^ arg2[8]) & 4) ^ rcx_5
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
return arg1
