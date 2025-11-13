// 函数: sub_141c35330
// 地址: 0x141c35330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = *arg1
int512_t result
result.o = zx.o(0)

if (zmm1 f>= 0f)
    zmm1 = __minss_xmmss_memss(zmm1, 0x3f7ff972)
else
    zmm1 = (zx.o(0)).d

float zmm2 = arg1[1]
*arg1 = zmm1

if (zmm2 >= 0f)
    zmm2 = __minss_xmmss_memss(zmm2, 0x447a0000)
else
    zmm2 = (zx.o(0)).d

zmm1 = arg1[2]
arg1[1] = zmm2

if (zmm1 f>= 0f)
    zmm1 = _mm_min_ss(zmm1, 0x3f7fff58)
else
    zmm1 = (zx.o(0)).d

zmm2 = arg1[3]
arg1[2] = zmm1
zmm1 = 0x38d1b717

if (not(zmm2 < 9.99999975e-05f))
    zmm1 = __minss_xmmss_memss(zmm2, 0x3f800000)

arg1[3] = zmm1
zmm1 = arg1[4]

if (zmm1 f>= 0f)
    arg1[4] = _mm_min_ss(zmm1, 0x3f7fff58)
    return result

arg1[4] = 0
return result
