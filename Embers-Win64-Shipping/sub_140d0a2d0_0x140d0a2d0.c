// 函数: sub_140d0a2d0
// 地址: 0x140d0a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x7b) != 0xff
*(arg1 + 0x3c) = zx.d(*(arg1 + 0x78))

if (not(cond:0))
    *(arg1 + 0x40) |= 0x1040000200
    return 0x1040000200

int64_t result = (*(arg1 + 0x40) & 0xffffffffbffffdff) | 0x1000000000
*(arg1 + 0x40) = result
return result
