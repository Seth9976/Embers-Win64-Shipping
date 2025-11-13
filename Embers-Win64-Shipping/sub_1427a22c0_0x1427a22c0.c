// 函数: sub_1427a22c0
// 地址: 0x1427a22c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
sub_1422f9c00(arg1, &var_28, arg2)
int32_t var_1c
int128_t zmm6
zmm6.d = var_1c.d f* 0.00999999978f
float arg_8
sub_1427b9fb0(&arg_8, arg1, arg2)
float zmm1 = (*(arg1 + 0x354) f+ *(arg1 + 0x350)) f* zmm6.d f+ *(arg2 + 4)
float var_38 = (*(arg1 + 0x344) f+ *(arg1 + 0x340)) f* zmm6.d f+ *arg2
float zmm0 = (*(arg1 + 0x364) f+ *(arg1 + 0x360)) f* zmm6.d f+ *(arg2 + 8)
float arg_10
sub_1427b9fb0(&arg_10, arg1, &var_38)
double zmm5 = arg_8
float zmm2[0x2] = *arg2
double zmm3[0x2] = *(arg2 + 4)
float zmm1_1[0x2] = *(arg2 + 8)
double zmm0_1[0x2] = _mm_cvtps_pd(arg_10[0])
zmm3 = _mm_cvtps_pd(zmm3[0])
float zmm4[0x2] = _mm_cvtps_pd(arg3)
zmm5 = _mm_cvtps_pd(zmm5)
zmm2 = _mm_cvtps_pd(zmm2)
zmm5 = zmm5 - zmm0_1[0]
zmm0_1 = _mm_cvtps_pd(arg4[0])
zmm1_1 = _mm_cvtps_pd(zmm1_1)
zmm4 = zmm4 f- zmm0_1[0]
zmm2 = zmm2 f- _mm_cvtps_pd(var_38[0])[0]
zmm0_1 = _mm_cvtps_pd(zmm1[0])
zmm3[0] = zmm3[0] - zmm0_1[0]
zmm0_1 = _mm_cvtps_pd(zmm0[0])
zmm3[0] = zmm3[0] * zmm3[0]
zmm1_1 = zmm1_1 f- zmm0_1[0]
zmm3[0] = zmm3[0] f+ zmm2 f* zmm2
zmm3[0] = zmm3[0] f+ zmm1_1 f* zmm1_1
zmm3[0] = zmm3[0] f/ (zmm4 f* zmm4 f+ zmm5 * zmm5)
return _mm_cvtpd_ps(_mm_sqrt_pd(zmm3))
