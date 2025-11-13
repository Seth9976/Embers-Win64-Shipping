// 函数: sub_1408d9bb0
// 地址: 0x1408d9bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_1407c3650(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi * 0xc).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1406387e0(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], r14, (rbp_1 << 3).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int64_t rbp_2 = sx.q(arg2[5].d)
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_2.d

if (rbp_2.d != 0)
    sub_1405c4a90(&arg1[4], rbp_2.d, 0)
    memcpy(arg1[4], r14_1, (rbp_2 << 2).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int64_t rbp_3 = sx.q(arg2[7].d)
int64_t r14_2 = arg2[6]
arg1[7].d = rbp_3.d

if (rbp_3.d != 0)
    sub_1405c4a90(&arg1[6], rbp_3.d, 0)
    memcpy(arg1[6], r14_2, (rbp_3 << 2).d)
else
    *(arg1 + 0x3c) = 0

arg1[8] = 0
int64_t rbp_4 = sx.q(arg2[9].d)
int64_t r14_3 = arg2[8]
arg1[9].d = rbp_4.d

if (rbp_4.d != 0)
    sub_1405c4a90(&arg1[8], rbp_4.d, 0)
    memcpy(arg1[8], r14_3, (rbp_4 << 2).d)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int64_t rbp_5 = sx.q(arg2[0xb].d)
int64_t r14_4 = arg2[0xa]
arg1[0xb].d = rbp_5.d

if (rbp_5.d != 0)
    sub_1407c3650(&arg1[0xa], rbp_5.d, 0)
    memcpy(arg1[0xa], r14_4, (rbp_5 * 0xc).d)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = 0
int64_t rbp_6 = sx.q(arg2[0xd].d)
int64_t r14_5 = arg2[0xc]
arg1[0xd].d = rbp_6.d

if (rbp_6.d != 0)
    sub_1407c3650(&arg1[0xc], rbp_6.d, 0)
    memcpy(arg1[0xc], r14_5, (rbp_6 * 0xc).d)
else
    *(arg1 + 0x6c) = 0

*(arg1 + 0x70) = *(arg2 + 0x70)
arg1[0x10] = arg2[0x10]
arg1[0x11].d = arg2[0x11].d
arg1[0x12] = 0
int64_t rbp_7 = sx.q(arg2[0x13].d)
int64_t r14_6 = arg2[0x12]
arg1[0x13].d = rbp_7.d

if (rbp_7.d != 0)
    sub_1405c4a90(&arg1[0x12], rbp_7.d, 0)
    memcpy(arg1[0x12], r14_6, (rbp_7 << 2).d)
else
    *(arg1 + 0x9c) = 0

arg1[0x14] = arg2[0x14]
return arg1
