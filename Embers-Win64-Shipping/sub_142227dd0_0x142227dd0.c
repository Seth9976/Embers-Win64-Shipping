// 函数: sub_142227dd0
// 地址: 0x142227dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((_fpclass(_mm_cvtps_pd(*arg1)) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(*(arg1 + 4))) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(arg1[1].d)) & 0x207) == 0)
    result.b = 1
    return result

result.b = 0
return result
