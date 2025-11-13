// 函数: sub_140efb7a0
// 地址: 0x140efb7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x88) |= 1
void* i = *(arg1 + 0x18)

for (void* rdx_1 = sx.q(*(arg1 + 0x20)) * 0x70 + i; i != rdx_1; i += 0x70)
    *(i + 0x68) |= 7

return i
