// 函数: sub_14278eb50
// 地址: 0x14278eb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(*arg2)
int64_t r9 = sx.q((r8_1 * 3).d)
int64_t r10 = r8_1 * 0xc
*(**arg1 + (r9 << 2)) = *(r10 + *(*arg1[1] + 0x10))
*(**arg1 + (r9 << 2) + 4) = *(*(*arg1[1] + 0x10) + r10 + 4)
int32_t result = *(*(*arg1[1] + 0x10) + r10 + 8)
*(**arg1 + (r9 << 2) + 8) = result
return result
