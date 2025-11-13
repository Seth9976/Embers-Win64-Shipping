// 函数: sub_1424122a0
// 地址: 0x1424122a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x148)
int32_t r8 = *(arg1 + 0x14)

if ((*(r9 + 0x110) & 1) != 0)
    if (r8 == 1)
        r8 = zx.d(arg2) + 5
    else if (r8 == 2)
        int32_t r8_2 = zx.d(arg2) + 7
        
        if (*(r9 + 0x30) == (r8 - 1).b)
            r8_2 = 0xc
        
        return zx.q(r8_2)

if (*(r9 + 0x30) == 1)
    r8 = 0xc

return zx.q(r8)
