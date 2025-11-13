// 函数: sub_1427b9fb0
// 地址: 0x1427b9fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_1422f9c00(arg2, &var_18, arg3)
int32_t var_c
float zmm0[0x2] = var_c
double zmm4 = 1.0
double zmm5

if (zmm0[0] <= 0f)
    zmm5 = -1.0
else
    zmm5 = zmm4

zmm5 = zmm5 f/ _mm_cvtps_pd(zmm0)
int32_t var_14

if (data_1439c7a1c[0] <= 0f)
    zmm4 = zmm4 f- _mm_cvtps_pd(var_14)
else
    zmm4 = _mm_cvtps_pd(var_14)
int32_t rcx_1 = *(arg2 + 0x258)
uint128_t zmm3 = 0x3fe0000000000000
zmm0 = var_18
zmm0[0] = zmm0[0] * 0.5f
int32_t rax_1 = *(arg2 + 0x260) - rcx_1
double zmm2[0x2] = _mm_cvtps_pd(zmm0)
int32_t rax_2 = *(arg2 + 0x264)
zmm2[0] = zmm2[0] * zmm5
int32_t rcx_2 = *(arg2 + 0x25c)
zmm2[0] = zmm2[0] f+ zmm3.q
zmm3.q = zmm3.q f- zmm4 f* zmm3.q * zmm5
zmm2[0] = zmm2[0] f* float.d(rax_1)
zmm2[0] = zmm2[0] f+ float.d(rcx_1)
*arg1 = _mm_cvtpd_ps(zmm2)[0]
zmm3.q = zmm3.q f* float.d(rax_2 - rcx_2)
zmm3.q = zmm3.q f+ float.d(rcx_2)
arg1[1] = _mm_cvtpd_ps(zmm3)[0]
return arg1
