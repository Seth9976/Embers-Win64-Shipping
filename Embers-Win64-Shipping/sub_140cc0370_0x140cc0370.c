// 函数: sub_140cc0370
// 地址: 0x140cc0370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x18)

for (void* rdx_1 = (sx.q(*(arg1 + 0x20)) << 7) + i; i != rdx_1; i -= -0x80)
    void* rcx = *(i + 0x40)
    
    if (rcx != 0 && (*(rcx + 8) & 0x1400) != 0)
        i.b = 1
        return i

i.b = 0
return i
