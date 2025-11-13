// 函数: sub_141f3d610
// 地址: 0x141f3d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x334) != 0)
    return 1f

int32_t temp0 = _mm_sqrt_ss(0, *(arg1 + 0x33c) f* *(arg1 + 0x338))

if (not(temp0 f!= 0f))
    return __minss_xmmss_memss(0x3d4ccccd, 0x3f800000)

int32_t zmm1 = temp0 f* 0.00499999989f

if (zmm1 f< 9.99999975e-05f)
    return 9.99999975e-05f

return __minss_xmmss_memss(zmm1, 0x3f800000)
