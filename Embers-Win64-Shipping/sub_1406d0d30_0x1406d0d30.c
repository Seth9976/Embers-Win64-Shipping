// 函数: sub_1406d0d30
// 地址: 0x1406d0d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = _mm_cvtps_pd((*(arg1 + 8)).q)

if (zmm6.q f> 0.0031308)
    zmm6.q = pow(zmm6.q, 0x3fdaaaaaaaaaaaab).q f* 1.0549999999999999
    zmm6.q = zmm6.q f- 0.055
else
    zmm6.q = zmm6.q f* 12.92

int128_t zmm7 = _mm_cvtps_pd((*(arg1 + 4)).q)

if (zmm7.q f> 0.0031308)
    zmm7.q = pow(zmm7.q, 0x3fdaaaaaaaaaaaab).q f* 1.0549999999999999
    zmm7.q = zmm7.q f- 0.055
else
    zmm7.q = zmm7.q f* 12.92

int128_t result = _mm_cvtps_pd((*arg1).q)

if (result.q f> 0.0031308)
    result.q = pow(result.q, 0x3fdaaaaaaaaaaaab).q f* 1.0549999999999999
    result.q = result.q f- 0.055
else
    result.q = result.q f* 12.92

int64_t zmm1
zmm1.d = fconvert.s(zmm7.q)
result.d = fconvert.s(result.q)
*arg2 = result.d
arg2[1] = zmm1.d
arg2[2] = fconvert.s(zmm6.q)
arg2[3] = 0x3f800000
return result
