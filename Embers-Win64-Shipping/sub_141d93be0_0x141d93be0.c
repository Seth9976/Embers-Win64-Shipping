// 函数: sub_141d93be0
// 地址: 0x141d93be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
uint32_t count = arg2[3].d
int64_t r14 = arg2[2]
arg1[3].d = count

if (count != 0)
    sub_1405da9e0(&arg1[2], count, 0)
    memcpy(arg1[2], r14, count)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
uint32_t count_1 = arg2[5].d
int64_t rsi_1 = arg2[4]
arg1[5].d = count_1

if (count_1 != 0)
    sub_1405da9e0(&arg1[4], count_1, 0)
    memcpy(arg1[4], rsi_1, count_1)
else
    *(arg1 + 0x2c) = 0

return arg1
