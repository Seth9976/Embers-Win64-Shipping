// 函数: sub_1421119f0
// 地址: 0x1421119f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_14210eb80(arg1 + 0x2c0, 1, arg2)
int64_t rdx

if (result.d != 0xffffffff)
    rdx = sx.q(result.d)

if (result.d != 0xffffffff && (arg4 == 0 || *(rdx + *(arg1 + 0x330)) != 0))
    result.b = 1
    *arg3 = *(*(arg1 + 0x410) + rdx * 0x10)
else
    result.b = 0

return result
