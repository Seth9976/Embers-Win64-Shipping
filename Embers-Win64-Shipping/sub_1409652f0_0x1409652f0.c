// 函数: sub_1409652f0
// 地址: 0x1409652f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x40)

for (void* rdx_1 = sx.q(*(arg1 + 0x48)) * 0x78 + i; i != rdx_1; i += 0x78)
    if (*(i + 0x70) == 0)
        i.b = 1
        return i

i.b = 0
return i
