// 函数: sub_142be20c0
// 地址: 0x142be20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = arg2
uint32_t r8_6 = ((zx.d(*(arg2 + 0xc)) << 8 | zx.d(*(arg2 + 0xd))) << 8 | zx.d(*(arg2 + 0xe))) << 8
    | zx.d(*(arg2 + 0xf))
*(arg1 + 0x28) = 0
*(arg1 + 0x38) = r8_6
return 0
