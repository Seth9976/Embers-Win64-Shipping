// 函数: sub_14117b2a0
// 地址: 0x14117b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = 0
int32_t rbp = arg2[4].d
int64_t r14 = arg2[3]
arg1[4].d = rbp

if (rbp != 0)
    sub_140afef10(&arg1[3], rbp, 0)
    memcpy(arg1[3], r14, rbp * 0x58)
else
    *(arg1 + 0x24) = 0

arg1[5] = 0
int32_t rbp_1 = arg2[6].d
int64_t r14_1 = arg2[5]
arg1[6].d = rbp_1

if (rbp_1 != 0)
    sub_140874c00(&arg1[5], rbp_1, 0)
    memcpy(arg1[5], r14_1, rbp_1 * 0x38)
else
    *(arg1 + 0x34) = 0

arg1[7].d = arg2[7].d
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
return arg1
