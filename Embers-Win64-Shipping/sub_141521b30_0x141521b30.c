// 函数: sub_141521b30
// 地址: 0x141521b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm1[0x2] = *arg3
arg4[0] = arg4[0] f+ *(arg3 + 0x14)
uint128_t zmm2 = *(arg3 + 4)
zmm1[0].d = zmm1[0].d f- arg4[0]
arg4[0] = arg4[0] f+ *(arg3 + 0xc)
zmm2.d = zmm2.d f- arg4[0]
int64_t zmm4
zmm4.d = arg4[0].q.d f+ arg3[1].d
float var_44 = arg4[0]
float zmm0[0x4] = *(arg3 + 8)
zmm0[0] = zmm0[0] - arg4[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
float var_50 = zmm0[0]
int64_t var_34 = (_mm_unpacklo_ps(arg4, zmm4)).q
float var_38 = var_50
float var_2c = var_44
float var_40[0x4]
var_40[0].q = temp0.q
*arg3 = var_40
arg3[1].q = var_34
*(arg3 + 0x18) = 1.d
zmm0 = *(arg3 + 0x14)
zmm0[0] = zmm0[0] f- *(arg3 + 8)
zmm1 = arg3[1].d
zmm1[0].d = zmm1[0].d f- *(arg3 + 4)
int32_t rcx = arg2[1].d
arg4 = _mm_cvtps_pd(zmm0[0].q)
zmm0 = *(arg3 + 0xc)
zmm0[0] = zmm0[0] f- *arg3
zmm2 = _mm_cvtps_pd(zmm1[0])
int32_t arg_8
int32_t arg_10[0x4]
int32_t arg_20
sub_141529090(rcx, _mm_cvtps_pd(zmm0[0].q), zmm2, arg4, &arg_10, &arg_8, &arg_20)
int32_t* rax_3 = j_sub_140a82f30(0x170)

if (rax_3 != 0)
    int32_t rcx_1 = arg_20
    int32_t rax_4 = arg_8
    float zmm4_1[0x2] = *(arg3 + 8)
    float zmm5_1[0x2] = arg3[1].d
    arg4 = *(arg3 + 4)
    double zmm2_1[0x2] = *(arg3 + 0xc)
    uint128_t zmm1_1 = *arg3
    int32_t rax_5 = arg_10[0]
    float temp0_5[0x2] = _mm_cvtps_pd(*(arg3 + 0x14))
    float temp0_6[0x2] = _mm_cvtps_pd(zmm4_1)
    float temp0_7[0x2] = _mm_cvtps_pd(zmm5_1)
    arg4 = _mm_cvtps_pd(arg4[0].q)
    double temp0_9[0x2] = _mm_cvtps_pd(zmm2_1[0])
    rax_3 = sub_141528360(rax_3, _mm_cvtps_pd(zmm1_1.q), temp0_9, arg4, temp0_7, temp0_6, temp0_5, 
        rax_5, rax_4, rcx_1, 0, 0, 0, 0xa)

*arg1 = rax_3

if (arg5[0] <= (zx.o(0)).q[0])
    sub_1415217b0(rax_3, arg2, 0)
    return arg1

sub_141521870(rax_3, arg2, 0)
return arg1
