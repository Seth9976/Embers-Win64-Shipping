// 函数: sub_141900cd0
// 地址: 0x141900cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
arg2.b = 1
int64_t rax = sub_1418c0cc0(*(arg1 + 0x58) + 0x10, arg2.b)
int64_t rax_1 = sub_1418c0cc0(*(arg1 + 0x58) + 0x10, 0)
int64_t rcx_4 = -1
rsi[2] = -1
*rsi = rax

if (rax != 0)
    rcx_4 = rax

rsi[1] = rax_1
rsi[3] = rcx_4
int64_t rcx_6 = sx.q(data_143f0f1f8) << 0xa
rsi[4] = rcx_6
rsi[5] = rcx_6
int64_t result = data_143f0f200
rsi[6] = result
rsi[7].d = 0
return result
