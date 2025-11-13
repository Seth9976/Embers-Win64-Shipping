// 函数: sub_141c30fb0
// 地址: 0x141c30fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
*arg1 = 0
arg1[1] = 0
int32_t rsi = 0
arg1[2] = 0
arg1[3] = 0
int32_t rax = *(arg1 + 0xc)
arg1[1].d = 0

if (rax s< 0 && rax != 0)
    sub_140775b10(arg1, 0)
    rsi = arg1[1].d

int32_t rax_1 = rsi + rbp.d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_140775270(arg1)

int64_t count = rbp << 2
memset(*arg1 + (sx.q(rsi) << 2), 0, count)
int32_t rax_3 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_140775b10(&arg1[2], 0)

int64_t rsi_1 = sx.q(arg1[3].d)
int32_t rax_4 = (rsi_1 + rbp).d
arg1[3].d = rax_4

if (rax_4 s> *(arg1 + 0x1c))
    sub_140775270(&arg1[2])

memset(arg1[2] + (rsi_1 << 2), 0, count)
return arg1
