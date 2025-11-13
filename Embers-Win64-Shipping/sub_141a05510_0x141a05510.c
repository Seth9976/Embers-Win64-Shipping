// 函数: sub_141a05510
// 地址: 0x141a05510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x618)

for (void* rdx = i + (sx.q(*(arg1 + 0x620)) << 3); i != rdx; i += 8)
    if ((*(i + 4) & 0x10) == 0)
        i.b = 1
        return i

i.b = 0
return i
