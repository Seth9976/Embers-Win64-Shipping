// 函数: sub_1419f11b0
// 地址: 0x1419f11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((_fpclass(_mm_cvtps_pd(*arg1)) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(*(arg1 + 4))) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(arg1[1].d)) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd(*(arg1 + 0xc))) & 0x207) == 0)
    result.b = 1
    return result

result.b = 0
return result
