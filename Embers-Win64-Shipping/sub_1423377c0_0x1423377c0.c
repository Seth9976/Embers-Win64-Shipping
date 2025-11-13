// 函数: sub_1423377c0
// 地址: 0x1423377c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) += 0xe0
int64_t r9_2 = (sx.q(*(arg1 + 0x5c)) << 6) + *(arg2 + 8)
*(arg2 + 8) = r9_2
int64_t result = (sx.q(*(arg1 + 0x74)) << 4) + r9_2
*(arg2 + 8) = result
return result
