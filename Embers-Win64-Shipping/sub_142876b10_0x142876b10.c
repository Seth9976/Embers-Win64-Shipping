// 函数: sub_142876b10
// 地址: 0x142876b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
memset(arg2, 0, 0x58)
*arg2 = *arg1
*(arg2 + 8) = (zx.q(arg1[1]) << 8 | zx.q(arg1[2])) << 8 | zx.q(arg1[3])
*(arg2 + 0x10) = zx.w(arg1[4]) << 8 | zx.w(arg1[5])
*(arg2 + 0x18) = (zx.q(arg1[6]) << 8 | zx.q(arg1[7])) << 8 | zx.q(arg1[8])
uint64_t result = zx.q(arg1[0xb])
*(arg2 + 0x20) = (zx.q(arg1[9]) << 8 | zx.q(arg1[0xa])) << 8 | result
return result
