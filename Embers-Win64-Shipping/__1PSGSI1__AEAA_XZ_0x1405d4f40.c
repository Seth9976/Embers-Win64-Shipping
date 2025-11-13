// 函数: ??1PSGSI1@@AEAA@XZ
// 地址: 0x1405d4f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d56f80
arg1[1] = *(arg2 + 8)
arg1[2].d = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
arg1[3] = *(arg2 + 0x18)
void* rax_6 = *(arg2 + 0x20)
arg1[4] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

*arg1 = &data_142d56fd0
arg1[5] = 0
uint64_t rsi = *(arg2 + 0x30)
int64_t rbp = *(arg2 + 0x28)
arg1[6] = rsi

if (rsi != 0)
    sub_1405daa60(&arg1[5], rsi, 0)
    memcpy(arg1[5], rbp, (rsi << 2).d)
else
    arg1[7] = 0

return arg1
