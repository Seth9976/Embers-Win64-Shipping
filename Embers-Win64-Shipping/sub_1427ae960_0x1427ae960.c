// 函数: sub_1427ae960
// 地址: 0x1427ae960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm14

if (*(arg1 + 0x44c) == 0)
    zmm14 = 0x3f800000
else
    zmm14 = *(arg1 + 0x420)

bool cond:1 = *(arg1 + 0x425) == 0
uint128_t zmm10 = *(arg1 + 0x448)
float zmm13[0x4] = *(arg1 + 0x1e0)
uint128_t zmm11
zmm11.d = zmm10.d f* *(arg1 + 0x43c)
float zmm12[0x4] = zmm10
zmm12[0] = zmm12[0] f* *(arg1 + 0x440)
zmm10.d = zmm10.d f* *(arg1 + 0x444)
float zmm7[0x4] = *(arg1 + 0x1c0)
float var_f8
float var_f4
float var_f0
int64_t var_e8
int64_t* rax_1
uint128_t zmm0
float zmm2[0x4]
uint128_t zmm3

if (cond:1)
    rax_1 = &var_f8
    zmm2 = *(arg1 + 0x42c)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x428), (*(arg1 + 0x430)).q)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    float temp0_5[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), zmm13)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_11[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_3), zmm0)
    float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_3)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_6)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), temp0_12)
    zmm3 = _mm_add_ps(_mm_sub_ps(zmm3, zmm0), _mm_add_ps(temp0_18, temp0_5))
    var_f8 = zmm3.d
    zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    var_f0 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
    var_f4 = zmm0.d
else
    int32_t var_e0_1 = *(arg1 + 0x430)
    rax_1 = &var_e8
    var_e8 = *(arg1 + 0x428)

zmm0 = data_143dbb200
zmm3 = data_143dbb1f8
float temp0_24[0x4] = _mm_unpacklo_ps(data_143dbb1fc, zx.o(0)[0].q)
uint128_t zmm9 = zx.o(*rax_1)
float zmm4[0x4] = *(arg1 + 0x1d0)
int32_t rax_2 = rax_1[1].d
zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), temp0_24[0].q)
float temp0_27[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
zmm3 = _mm_mul_ps(zmm3, zmm13)
float temp0_29[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_30[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_31[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_27)
float temp0_35[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_31, temp0_29), zmm0)
float temp0_36[0x4] = _mm_add_ps(temp0_35, temp0_35)
float temp0_37[0x4] = _mm_mul_ps(temp0_30, temp0_36)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xc9), temp0_27)
float temp0_41[0x4] = _mm_add_ps(temp0_37, zmm3)
float temp0_42[0x4] = _mm_mul_ps(temp0_38, temp0_29)
zmm3 = _mm_unpacklo_ps(zmm11, zmm10.q)
float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(temp0_42, zmm0), temp0_41)
zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, _mm_unpacklo_ps(zmm12, 0)[0].q), zmm13)
float temp0_49[0x4] = _mm_add_ps(temp0_45, zmm4)
float temp0_50[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_27)
float temp0_54[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_50, temp0_29), zmm0)
float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xc9), temp0_27)
float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_29)
float temp0_60[0x4] = _mm_mul_ps(temp0_55, temp0_30)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)
float temp0_62[0x4] = _mm_sub_ps(temp0_59, zmm0)
float temp0_63[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x55)
float temp0_66[0x4] = _mm_add_ps(_mm_add_ps(temp0_62, _mm_add_ps(temp0_60, zmm3)), zmm4)
zmm0 = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
temp0_66[0] = temp0_66[0] - temp0_49[0]
float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
zmm0.d = zmm0.d f- temp0_63[0]
temp0_68[0] = temp0_68[0] - temp0_61[0]
temp0_66[0] = temp0_66[0] f* zmm14.d
temp0_68[0] = temp0_68[0] f* zmm14.d
zmm0.d = zmm0.d f* zmm14.d
temp0_49[0] = temp0_49[0] + temp0_66[0]
temp0_61[0] = temp0_61[0] + temp0_68[0]
zmm2 = zmm9
temp0_63[0] = temp0_63[0] f+ zmm0.d
float zmm1[0x4] = rax_2
int32_t var_d0 = arg4[1].d
int32_t var_c0 = arg3[1].d
zmm1[0] = zmm1[0] f* zmm14.d
zmm2[0] = zmm2[0] f* zmm14.d
zmm0.d = temp0_61.d f+ zmm1[0]
zmm3.d = _mm_shuffle_ps(zmm9, zmm9, 0x55).d f* zmm14.d
temp0_61[0] = temp0_61[0] - zmm1[0]
temp0_49[0] = temp0_49[0] - zmm2[0]
var_e8 = zmm9.q
temp0_49[0] = temp0_49[0] + zmm2[0]
float var_e0_3 = zmm0.d
temp0_63[0] = temp0_63[0] f- zmm3.d
zmm0 = zx.o(*arg4)
temp0_63[0] = temp0_63[0] f+ zmm3.d
uint64_t var_d8 = zmm0.q
uint64_t var_c8 = *arg3
zmm0 = _mm_unpacklo_ps(temp0_49, temp0_63[0].q)
float var_b0 = temp0_61[0]
float var_a0_1 = var_e0_3
uint64_t var_b8 = zmm0.q
uint64_t var_a8 = (_mm_unpacklo_ps(temp0_49, temp0_63[0].q)).q
sub_140adfbe0(&var_a8, &var_b8, &var_c8, &var_d8, &var_e8, &var_f8)
float zmm1_1 = var_f8 f- var_e8.d
float zmm0_1 = var_f0 - var_e0_3
float zmm2_1 = var_f4 f- var_e8:4.d
uint32_t result

if (_mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1)
        <= *(arg1 + 0x420) f* *(arg1 + 0x41c))
    sub_140d3a3a0(arg2 + 0x70, arg1)
    float zmm4_1[0x4] = var_f8
    int64_t zmm3_1 = var_f4
    zmm4_1[0] = zmm4_1[0] f- *arg3
    zmm2_1 = zmm3_1.d f- *(arg3 + 4)
    float zmm0_2 = var_f0 f- arg3[1].d
    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
    zmm2_1 = zmm2_1 * zmm2_1 + zmm4_1[0]
    *(arg2 + 0x1c) = (_mm_unpacklo_ps(zmm4_1, zmm3_1)).q
    *(arg2 + 0x24) = var_f0
    result.b = 1
    *(arg2 + 0xc) = _mm_sqrt_ss(0, zmm2_1 + zmm0_2 * zmm0_2)
else
    result.b = 0

return result
