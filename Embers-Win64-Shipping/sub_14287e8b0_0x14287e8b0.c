// 函数: sub_14287e8b0
// 地址: 0x14287e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 == 0)
    *arg2 = arg3
    return zx.q((arg3 + 1).d)

uint32_t count = *arg3

if (count s< 0 || count s> arg4)
    return 0

memcpy(arg1, *(arg3 + 8), count)
*arg2 = sx.q(*arg3)
return 1
