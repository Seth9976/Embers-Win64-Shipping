// 函数: sub_141edd0b0
// 地址: 0x141edd0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x6d0))()
float zmm1 = arg1[0x46].d
float zmm4 = *(arg1 + 0x22c)
float zmm2 = *(arg1 + 0x234)
zmm4 = zmm4 * zmm4 + zmm1 * zmm1 + zmm2 * zmm2

if (zmm4 <= 0f || arg2 f<= 9.99999994e-09f)
    return (zx.o(0)).d

zmm1 = _mm_sqrt_ss(0, zmm4) f* 1f f/ arg2

if (zmm1 < 0f)
    return (zx.o(0)).d

return _mm_min_ss(zmm1, 0x3f800000)
