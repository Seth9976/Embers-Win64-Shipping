// 函数: sub_142110350
// 地址: 0x142110350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_14210eb80(arg1 + 0x2c0, 4, arg2)
int64_t rdx

if (result.d != 0xffffffff)
    rdx = sx.q(result.d)

if (result.d != 0xffffffff && (arg4 == 0 || *(rdx + *(arg1 + 0x3f0)) != 0))
    result.b = 1
    *arg3 = *(*(arg1 + 0x450) + (rdx << 3))
else
    *arg3 = 0
    result.b = 0

return result
