// 函数: sub_142ae70c0
// 地址: 0x142ae70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142ae7310(arg1, *(arg1 + 8) + 1, arg3)

if (result.b != 0)
    *(*(arg1 + 0x10) + (sx.q(*(arg1 + 8)) << 3)) = 0
    result = *(arg1 + 0x10)
    *(result + (sx.q(*(arg1 + 8)) << 3)) = arg2
    *(arg1 + 8) += 1

return result
