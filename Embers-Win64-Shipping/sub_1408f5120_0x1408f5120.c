// 函数: sub_1408f5120
// 地址: 0x1408f5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x2] = *(arg2 + 4)
float zmm2[0x2] = *arg2
float zmm1[0x2] = arg2[1].d
float zmm0[0x2] = _mm_cvtps_pd(*(arg2 + 0xc))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_10[0x2] = zmm0
float var_18[0x2] = _mm_cvtps_pd(zmm1)
sub_140a2e390(arg1, u"Confidence: %0.2f, ValidRadius: %0.2f, RotErr: %0.2f, TransErr: %0.2f", zmm2)
return arg1
