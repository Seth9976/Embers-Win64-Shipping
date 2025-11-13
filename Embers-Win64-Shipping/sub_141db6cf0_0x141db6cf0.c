// 函数: sub_141db6cf0
// 地址: 0x141db6cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[0xd] = arg2[0xd]
*(arg1 + 0x38) = 0
int64_t rbp = sx.q(arg2[0x10])
int64_t r14 = *(arg2 + 0x38)
arg1[0x10] = rbp.d

if (rbp.d != 0)
    sub_1407c3650(&arg1[0xe], rbp.d, 0)
    memcpy(*(arg1 + 0x38), r14, (rbp * 0xc).d)
else
    arg1[0x11] = 0

arg1[0x12].b = arg2[0x12].b
*(arg1 + 0x49) = *(arg2 + 0x49)
*(arg1 + 0x4a) ^= (*(arg1 + 0x4a) ^ *(arg2 + 0x4a)) & 1
*(arg1 + 0x4a) ^= (*(arg2 + 0x4a) ^ *(arg1 + 0x4a)) & 2
return arg1
