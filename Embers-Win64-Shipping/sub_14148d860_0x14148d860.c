// 函数: sub_14148d860
// 地址: 0x14148d860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) = *arg2
*(arg1 + 0xd0) = arg2[1]
*(arg1 + 0xe0) = arg2[2]
*(arg1 + 0xf0) = arg2[3]
*(arg1 + 0x280) = *arg2
*(arg1 + 0x290) = arg2[1]
*(arg1 + 0x2a0) = arg2[2]
*(arg1 + 0x2b0) = arg2[3]
uint32_t var_48[0x4][0x4]
uint32_t (* result)[0x4] = sub_140631b10(arg2, &var_48)
*(arg1 + 0x2c0) = *result
*(arg1 + 0x2d0) = result[1]
*(arg1 + 0x2e0) = result[2]
*(arg1 + 0x2f0) = result[3]
return result
