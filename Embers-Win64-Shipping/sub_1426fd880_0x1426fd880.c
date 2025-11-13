// 函数: sub_1426fd880
// 地址: 0x1426fd880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
(*(*arg1 + 0x278))(arg1, &var_18)
float zmm2[0x2] = var_18
int32_t var_14
_mm_cvtps_pd(var_14)
zmm2 = _mm_cvtps_pd(zmm2)
int32_t var_10
float var_28[0x2] = _mm_cvtps_pd(var_10)
sub_140a2e390(arg2, u"(X=%.0f,Y=%.0f,Z=%.0f)", zmm2)
return arg2
