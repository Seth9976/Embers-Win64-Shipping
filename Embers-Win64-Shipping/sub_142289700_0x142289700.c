// 函数: sub_142289700
// 地址: 0x142289700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143314ec0
arg1[1] = 0
uint32_t count = *(arg2 + 0x10)
int64_t r14 = *(arg2 + 8)
arg1[2].d = count

if (count != 0)
    sub_1405da9e0(&arg1[1], count, 0)
    memcpy(arg1[1], r14, count)
else
    *(arg1 + 0x14) = 0

arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
void* rax_2 = *(arg2 + 0x20)
arg1[4] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* rax_3 = *(arg2 + 0x28)
arg1[5] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[6].b = *(arg2 + 0x30)
return arg1
