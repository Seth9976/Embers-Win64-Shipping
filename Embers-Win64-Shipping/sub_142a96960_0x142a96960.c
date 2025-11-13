// 函数: sub_142a96960
// 地址: 0x142a96960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int32_t result = *(*(*(arg1 + 0x1d8) + 0x20) + (sx.q(*(arg1 + 0x1e4)) << 2))
int32_t result_1 = result

if (result s> arg3)
    *arg4 = 0xf
    result_1 = arg3

int32_t r10 = 0
int64_t i = 0

if (result_1 s> 0)
    do
        int32_t rdx_3 = *(arg1 + 0x1e4) + 1 + r10
        r10 += 1
        *(arg2 + (i << 2)) = *(*(*(arg1 + 0x1d8) + 0x20) + (sx.q(rdx_3) << 2))
        i += 1
    while (i s< sx.q(result_1))

return result
