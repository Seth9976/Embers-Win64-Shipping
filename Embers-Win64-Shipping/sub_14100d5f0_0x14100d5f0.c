// 函数: sub_14100d5f0
// 地址: 0x14100d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = *(arg2 + 0x10)
*(arg1 + 0xc) = arg3
arg1[2].d = arg7
*(arg1 + 0x14) = arg6
arg1[3] = 0
int32_t rsi = arg4[1].d
int64_t rbp = *arg4
arg1[4].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[3], rsi, 0)
    memcpy(arg1[3], rbp, rsi * 2)
else
    *(arg1 + 0x24) = 0

*(arg1 + 0x2c) = arg5
arg1[5].b = 0
InitializeCriticalSection(&arg1[6])
SetCriticalSectionSpinCount(&arg1[6], 0xfa0)
__builtin_memset(&arg1[0xb], 0, 0x14)
return arg1
