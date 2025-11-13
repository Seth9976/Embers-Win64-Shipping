// 函数: sub_140d8b1e0
// 地址: 0x140d8b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = arg1[1]
int128_t* rax = *arg1
*arg2 = *rax
arg2[1] = rax[1]
arg2[2].w = *r8
*(arg2 + 0x24) = *(r8 + 4)
*(arg2 + 0x34) = *(r8 + 0x14)
*(arg2 + 0x44) = *(r8 + 0x24)
*(arg2 + 0x54) = *(r8 + 0x34)
*(arg2 + 0x5c) = *(r8 + 0x3c)
arg2[6].q = 0
int64_t rsi = sx.q(*(r8 + 0x48))
int64_t rbp = *(r8 + 0x40)
*(arg2 + 0x68) = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg2[6], rsi.d, 0)
    memcpy(arg2[6].q, rbp, (rsi << 3).d)
else
    *(arg2 + 0x6c) = 0

return arg2
