// 函数: sub_1420b7c40
// 地址: 0x1420b7c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *arg2
float zmm0[0x2] = arg2[1].d
_mm_cvtps_pd(*(arg2 + 4))
zmm2 = _mm_cvtps_pd(zmm2)
float var_18[0x2] = _mm_cvtps_pd(zmm0)
sub_140a2e390(arg1, u"P=%f Y=%f R=%f", zmm2)
return arg1
