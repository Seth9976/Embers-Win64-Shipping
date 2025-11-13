// 函数: sub_140d7b580
// 地址: 0x140d7b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 &= 0xfffe
uint16_t r10 = (((((zx.w(*(arg1 + 0xff)) & 1) << 3 | (zx.w(*(arg1 + 0xfe)) & 1)) * 2)
    | (zx.w(*(arg1 + 0xfd)) & 1)) * 2) | (zx.w(*(arg1 + 0xfc)) & 1)
*arg2 = (((((r10 * 2) | (zx.w(*(arg1 + 0xfb)) & 1)) * 2) | (zx.w(*(arg1 + 0xfa)) & 1)) * 2)
    | (((zx.w(*(arg1 + 0xf9)) & 1) | *arg2) & 0xfe01)
return arg2
