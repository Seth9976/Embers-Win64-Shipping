// 函数: sub_142ab9200
// 地址: 0x142ab9200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = sx.d(arg2)
int64_t result = *(arg1 + (sx.q(((arg3 << 1) + 1).d + rcx + arg3.d) << 3) + 8)

if (result == 0 && arg3.d != 5)
    return *(arg1 + (sx.q(rcx + 0x10) << 3) + 8)

return result
