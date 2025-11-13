// 函数: sub_142008e40
// 地址: 0x142008e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* i = arg1[0x1a]
int64_t rdx = sx.q(arg1[0x1b].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg2)
        return 

int32_t rax_1 = (rdx + 1).d
void* rbp_1 = *arg1
arg1[0x1b].d = rax_1

if (rax_1 s> *(arg1 + 0xdc))
    sub_1405a4d70(&arg1[0x1a])

*((rdx << 3) + arg1[0x1a]) = arg2
int64_t rsi_2 = sx.q(arg2[0x1b].d)
int32_t rax_3 = (rsi_2 + 1).d
arg2[0x1b].d = rax_3

if (rax_3 s> *(arg2 + 0xdc))
    sub_1405a4d70(&arg2[0x1a])

*(arg2[0x1a] + (rsi_2 << 3)) = arg1
sub_141ffdd80(rbp_1)
sub_141ffdd80(*arg2)
