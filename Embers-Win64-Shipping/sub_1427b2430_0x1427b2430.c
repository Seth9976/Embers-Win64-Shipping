// 函数: sub_1427b2430
// 地址: 0x1427b2430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm1[0x2] = *(arg1 + 0x174)
float zmm0[0x2] = *(arg1 + 0x178)
void* result = *(arg1 + 0xc0)

if (zmm1[0].d f> zmm0[0])
    zmm0 = (zx.o(0)).q
else
    zmm0[0] = zmm0[0] f- zmm1[0].d
    zmm0[0] = zmm0[0] f* *(result + 0x50)
    zmm0[0] = zmm0[0] f+ zmm1[0].d

zmm1 = _mm_cvtps_pd(zmm0)
zmm1[0] = zmm1[0] * 0.5
*(arg1 + 0x180) = zmm1.q

if (*(result + 0x54) == 0)
    *(result + 0x58) = _mm_cvtpd_ps(zmm1)[0]
    return result

*(arg1 + 0x180) = _mm_cvtps_pd(*(result + 0x58))
return result
