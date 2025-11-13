// 函数: sub_142252b90
// 地址: 0x142252b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2090) = *arg2
*(arg1 + 0x20a0) = arg2[1]
*(arg1 + 0x20b0) = arg2[2]
int128_t zmm1 = arg2[1]
int128_t result = arg2[2]
*(arg1 + 0x1e40) = *arg2
*(arg1 + 0x1e50) = zmm1
*(arg1 + 0x1e60) = result
return result
