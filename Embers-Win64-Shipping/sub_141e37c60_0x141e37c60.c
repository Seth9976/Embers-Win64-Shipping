// 函数: sub_141e37c60
// 地址: 0x141e37c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rdi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rdi.d

if (rdi.d != 0)
    sub_140638750(arg1, rdi.d, 0)
    memcpy(*arg1, rbp, (rdi << 2).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t rsi_1 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_140638750(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], rsi_1, (rbp_1 << 2).d)
else
    *(arg1 + 0x1c) = 0

return arg1
