// 函数: sub_142a6a670
// 地址: 0x142a6a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 1
*(arg1 + 0x14) = *(arg1 + 0x11c)
*(arg1 + 0x88) = 1
*(arg1 + 0x6a) = 1
*(arg1 + 0x20) = *(arg1 + 0x124)
*(arg1 + 0x94) = 1
*(arg1 + 0x6d) = 0x101
int32_t result = *(arg1 + 0x120)
*(arg1 + 0x24) = result
*(arg1 + 0x98) = 1
int32_t result_1 = *(arg1 + 0x118)
*(arg1 + 0x58) = result_1
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1

if (result_1 s< 1)
    r8 = 0
    result = 1 - result_1
    result_1 = result

*(arg1 + 0xc) = r8
*(arg1 + 0x80) = 1
*(arg1 + 0x68) = 0x101
*(arg1 + 0x10) = result_1
*(arg1 + 0x84) = 1
return result
