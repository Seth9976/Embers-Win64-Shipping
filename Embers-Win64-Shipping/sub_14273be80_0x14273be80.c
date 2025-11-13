// 函数: sub_14273be80
// 地址: 0x14273be80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 8) = 0
arg2[4] = 0x44800000
arg2[5] = 0x44800000
arg2[6] = 0x41200000
arg2[7] = 0x41200000
*(arg2 + 0x20) = 0x41200000
arg2[0xa] = 0
int32_t result = (arg2[0xb] & 0xffffffde) | 0x1e
arg2[0xb] = result
return result
