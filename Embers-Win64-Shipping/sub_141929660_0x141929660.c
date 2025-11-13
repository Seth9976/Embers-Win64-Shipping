// 函数: sub_141929660
// 地址: 0x141929660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int64_t rbp = sx.q(arg2[4])
int64_t r14 = *(arg2 + 8)
arg1[4] = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[2], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp << 2).d)
else
    arg1[5] = 0

*(arg1 + 0x18) = 0
int64_t rbp_1 = sx.q(arg2[8])
int64_t r14_1 = *(arg2 + 0x18)
arg1[8] = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a90(&arg1[6], rbp_1.d, 0)
    memcpy(*(arg1 + 0x18), r14_1, (rbp_1 << 2).d)
else
    arg1[9] = 0

*(arg1 + 0x28) = 0
int64_t rbp_2 = sx.q(arg2[0xc])
int64_t r14_2 = *(arg2 + 0x28)
arg1[0xc] = rbp_2.d

if (rbp_2.d != 0)
    sub_1405c4a90(&arg1[0xa], rbp_2.d, 0)
    memcpy(*(arg1 + 0x28), r14_2, (rbp_2 << 2).d)
else
    arg1[0xd] = 0

*(arg1 + 0x38) = 0
int64_t rbp_3 = sx.q(arg2[0x10])
int64_t rbx_1 = *(arg2 + 0x38)
arg1[0x10] = rbp_3.d

if (rbp_3.d != 0)
    sub_1405c4a90(&arg1[0xe], rbp_3.d, 0)
    memcpy(*(arg1 + 0x38), rbx_1, (rbp_3 << 2).d)
else
    arg1[0x11] = 0

return arg1
