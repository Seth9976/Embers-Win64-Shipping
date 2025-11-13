// 函数: sub_141759780
// 地址: 0x141759780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0x10)
float zmm0[0x2] = *(arg1 + 0x18)
_mm_cvtps_pd(*(arg1 + 0x14))
zmm2 = _mm_cvtps_pd(zmm2)
zmm0 = _mm_cvtps_pd(zmm0)
int128_t zmm6 = *(arg1 + 0x1c)
float var_38[0x2] = zmm0
int16_t* var_28
sub_140a2e390(&var_28, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
int16_t* const r8_1 = &data_142d40450
_mm_cvtps_pd(zmm6.q)
int32_t var_20

if (var_20 != 0)
    r8_1 = var_28

sub_140a2e390(arg2, u"TSphere Center:%s, Radius:%f", r8_1)
int16_t* rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
