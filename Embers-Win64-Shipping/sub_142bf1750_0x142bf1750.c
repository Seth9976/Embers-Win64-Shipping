// 函数: sub_142bf1750
// 地址: 0x142bf1750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[6]
void* rsi = arg1[2]

if (rsi != 0)
    sub_140374100(rsi + 0x18)
    __builtin_memset(rsi + 0x48, 0, 0x18)
    *(rsi + 0x28) = 0
    *(rsi + 0x30) = 0
    __builtin_memset(rsi, 0, 0x24)
    sub_142b99980(rbp, rsi)
    arg1[2] = 0

if (arg1[4] == 0)
    sub_142b99980(rbp, *arg1)
    *arg1 = 0
