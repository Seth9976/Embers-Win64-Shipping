// 函数: sub_14210f8e0
// 地址: 0x14210f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_14210eb80(arg1 + 0x2c0, 3, arg2)
int64_t rdx

if (result.d != 0xffffffff)
    rdx = sx.q(result.d)

if (result.d != 0xffffffff && (arg5 == 0 || *(rdx + *(arg1 + 0x3b0)) != 0))
    result.b = 1
    *arg3 = *(*(arg1 + 0x430) + (rdx << 3))
    *arg4 = *(*(arg1 + 0x440) + (rdx << 2))
else
    *arg3 = 0
    result.b = 0
    *arg4 = 0xffffffff

return result
