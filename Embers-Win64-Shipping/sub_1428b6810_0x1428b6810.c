// 函数: sub_1428b6810
// 地址: 0x1428b6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t _ElementSize = sx.q(arg3)

if (*(arg1 + 0x20) == 0 || arg2 == 0)
    return 0

int32_t result = fwrite(arg2, _ElementSize, 1, *(arg1 + 0x38))

if (result != 0)
    return _ElementSize.d

return result
