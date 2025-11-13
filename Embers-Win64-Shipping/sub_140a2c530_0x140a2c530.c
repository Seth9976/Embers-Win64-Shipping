// 函数: sub_140a2c530
// 地址: 0x140a2c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = *(arg1 + 0x40000) - *(arg1 + 0x40008)

if (r8_1 u> 0x40000000)
    memset(arg1, 0, 0x20000)
    memset(arg1 + 0x20000, 0xff, 0x20000)
    r8_1 = 0

*(arg1 + 0x40000) = arg2
*(arg1 + 0x40020) = (r8_1 + 0x10000).d
int64_t result = arg2 - (r8_1 + 0x10000)
*(arg1 + 0x40018) = (r8_1 + 0x10000).d
*(arg1 + 0x40008) = result
*(arg1 + 0x40010) = result
*(arg1 + 0x4001c) = (r8_1 + 0x10000).d
return result
