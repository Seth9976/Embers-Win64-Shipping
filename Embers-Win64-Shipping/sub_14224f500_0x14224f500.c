// 函数: sub_14224f500
// 地址: 0x14224f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
*(arg2 + 8) += zx.q((*(arg1 + 0x8c) * 5 + ((*(arg1 + 0xac) + 0x1f) u>> 5) + arg1[0x19].d) << 2)
uint64_t result = zx.q((*(arg1 + 0xdc) * 5 + ((*(arg1 + 0xfc) + 0x1f) u>> 5) + arg1[0x23].d) << 2)
*(arg2 + 8) += result
return result
