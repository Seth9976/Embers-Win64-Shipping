// 函数: sub_1406d0c20
// 地址: 0x1406d0c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = _mm_cvtps_pd((*(arg2 + 8)).q)

if (zmm6.q f> 0.04045)
    zmm6.q = zmm6.q f* 0.94786729857819907
    zmm6.q = zmm6.q f+ 0.052132701421800952
    zmm6 = pow(zmm6.q, 0x4003333333333333)
else
    zmm6.q = zmm6.q f* 0.077399380804953566

int128_t zmm7 = _mm_cvtps_pd((*(arg2 + 4)).q)

if (zmm7.q f> 0.04045)
    zmm7.q = zmm7.q f* 0.94786729857819907
    zmm7.q = zmm7.q f+ 0.052132701421800952
    zmm7 = pow(zmm7.q, 0x4003333333333333)
else
    zmm7.q = zmm7.q f* 0.077399380804953566

int128_t zmm0 = _mm_cvtps_pd((*arg2).q)

if (zmm0.q f> 0.04045)
    zmm0.q = zmm0.q f* 0.94786729857819907
    zmm0.q = zmm0.q f+ 0.052132701421800952
    zmm0 = pow(zmm0.q, 0x4003333333333333)
else
    zmm0.q = zmm0.q f* 0.077399380804953566

zmm0.d = fconvert.s(zmm0.q)
arg1[3] = 0x3f800000
*arg1 = zmm0.d
zmm0.d = fconvert.s(zmm6.q)
int64_t zmm1
zmm1.d = fconvert.s(zmm7.q)
arg1[2] = zmm0.d
arg1[1] = zmm1.d
return arg1
