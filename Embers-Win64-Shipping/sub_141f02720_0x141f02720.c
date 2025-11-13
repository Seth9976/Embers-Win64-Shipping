// 函数: sub_141f02720
// 地址: 0x141f02720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14325a238
arg1[1] = *(arg2 + 8)
arg1[2].b = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3] = 0
uint32_t count = *(arg2 + 0x20)
int64_t r14 = *(arg2 + 0x18)
arg1[4].d = count

if (count != 0)
    sub_1405da9e0(&arg1[3], count, 0)
    memcpy(arg1[3], r14, count)
else
    *(arg1 + 0x24) = 0

arg1[5] = 0
int64_t rbp = sx.q(*(arg2 + 0x30))
int64_t r14_1 = *(arg2 + 0x28)
arg1[6].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[5], rbp.d, 0)
    memcpy(arg1[5], r14_1, (rbp << 4).d)
else
    *(arg1 + 0x34) = 0

arg1[7] = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x40))
int64_t r14_2 = *(arg2 + 0x38)
arg1[8].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a00(&arg1[7], rbp_1.d, 0)
    memcpy(arg1[7], r14_2, (rbp_1 << 3).d)
else
    *(arg1 + 0x44) = 0

arg1[9] = 0
int64_t rbp_2 = sx.q(*(arg2 + 0x50))
int64_t rbx_1 = *(arg2 + 0x48)
arg1[0xa].d = rbp_2.d

if (rbp_2.d != 0)
    sub_1405c4a00(&arg1[9], rbp_2.d, 0)
    memcpy(arg1[9], rbx_1, (rbp_2 << 3).d)
else
    *(arg1 + 0x54) = 0

return arg1
