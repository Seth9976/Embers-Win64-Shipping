// 函数: sub_141c353d0
// 地址: 0x141c353d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *arg1

if (zmm0 f>= 0f)
    zmm0 = __minss_xmmss_memss(zmm0, 0x44fa0000)
else
    zmm0 = (zx.o(0)).d

float zmm2 = arg1[2]
*arg1 = zmm0
arg1[1] = _mm_min_ss(arg1[1], 0)

if (zmm2 >= 0f)
    zmm2 = _mm_min_ss(zmm2, 0x3f7fff58)
else
    zmm2 = (zx.o(0)).d

zmm0 = arg1[4]
arg1[2] = zmm2

if (zmm0 f>= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f7fff58)
else
    zmm0 = (zx.o(0)).d

arg1[4] = zmm0
zmm0 = arg1[3]

if (zmm0 f>= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f7fff58)
else
    zmm0 = (zx.o(0)).d

zmm2 = arg1[5]
arg1[3] = zmm0
zmm0 = 0x38d1b717

if (not(zmm2 < 9.99999975e-05f))
    zmm0 = _mm_min_ss(zmm2, 0x3f800000)

arg1[5] = zmm0
zmm0 = arg1[6]

if (not(zmm0 f>= 0f))
    arg1[6] = 0
    return zmm0

int32_t temp0_7 = _mm_min_ss(zmm0, 0x3f800000)
arg1[6] = temp0_7
return temp0_7
