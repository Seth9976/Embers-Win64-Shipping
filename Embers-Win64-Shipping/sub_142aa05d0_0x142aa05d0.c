// 函数: sub_142aa05d0
// 地址: 0x142aa05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    sub_142a7dcd0(rcx)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x48) = 0

int64_t result = sub_142a7dd00(sx.q(arg3 + 1) * 2)
*(arg1 + 0x40) = result

if (result != 0)
    *(arg1 + 0x48) = arg3
    sub_142a8bca0(result, arg2, arg3)
    result = *(arg1 + 0x40)
    *(result + (sx.q(*(arg1 + 0x48)) << 1)) = 0

return result
