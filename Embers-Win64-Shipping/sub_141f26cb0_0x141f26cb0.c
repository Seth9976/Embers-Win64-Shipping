// 函数: sub_141f26cb0
// 地址: 0x141f26cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x80) = *arg2
*(arg1 + 0x90) = arg2[1]
*(arg1 + 0xa0) = arg2[2]
*(arg1 + 0xb0) = arg2[3]
float var_48[0x4][0x4]
float (* result)[0x4] = sub_1408041d0(arg2, &var_48)
*(arg1 + 0x40) = *result
*(arg1 + 0x50) = result[1]
*(arg1 + 0x60) = result[2]
*(arg1 + 0x70) = result[3]
*(arg1 + 0x20) = *arg3
return result
