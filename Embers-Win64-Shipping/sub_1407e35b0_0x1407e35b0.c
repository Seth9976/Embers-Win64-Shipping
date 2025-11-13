// 函数: sub_1407e35b0
// 地址: 0x1407e35b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a90(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi << 2).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a90(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], r14, (rbp_1 << 2).d)
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
int64_t rdi_1 = arg2[6]
arg1[7].d = rbp_3.d

if (rbp_3.d != 0)
    sub_1405c4a90(&arg1[6], rbp_3.d, 0)
    memcpy(arg1[6], rdi_1, (rbp_3 << 2).d)
else
    *(arg1 + 0x3c) = 0

return arg1
