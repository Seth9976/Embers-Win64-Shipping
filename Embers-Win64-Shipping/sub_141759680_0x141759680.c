// 函数: sub_141759680
// 地址: 0x141759680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0x1c)
float zmm0[0x2] = *(arg1 + 0x24)
_mm_cvtps_pd(*(arg1 + 0x20))
zmm2 = _mm_cvtps_pd(zmm2)
float var_38[0x2] = _mm_cvtps_pd(zmm0)
int16_t* var_18
sub_140a2e390(&var_18, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
int16_t* const rsi = &data_142d40450
zmm2 = *(arg1 + 0x10)
float zmm0_1[0x2] = *(arg1 + 0x18)
_mm_cvtps_pd(*(arg1 + 0x14))
zmm2 = _mm_cvtps_pd(zmm2)
float var_38_1[0x2] = _mm_cvtps_pd(zmm0_1)
int16_t* var_28
sub_140a2e390(&var_28, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
int32_t var_20

if (var_20 != 0)
    rsi = var_28

sub_140a2e390(arg2, u"TAABB Min:%s, Max:%s", rsi)
int16_t* rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
