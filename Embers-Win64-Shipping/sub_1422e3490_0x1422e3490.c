// 函数: sub_1422e3490
// 地址: 0x1422e3490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 4) |= 0xc0
*(arg2 + 5) |= 7
*(arg2 + 0x180) = *arg1
*(arg2 + 0x184) = arg1[1]
*(arg2 + 0x188) = arg1[2]
*(arg2 + 0x18c) = arg1[3]
int32_t result = arg1[4]
*(arg2 + 0x190) = result
return result
