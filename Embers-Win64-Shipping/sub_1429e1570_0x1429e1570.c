// 函数: sub_1429e1570
// 地址: 0x1429e1570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x428))
int64_t r8 = sx.q(*(arg1 + 0x424))
*(arg1 + 0x424) = result.d
*(arg1 + 0x428) = r8.d
*(arg1 + 0x448) = *(arg1 + (result << 3) + 0x430)
*(arg1 + 0x440) = *(arg1 + (r8 << 3) + 0x430)
return result
