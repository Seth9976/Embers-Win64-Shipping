// 函数: sub_141c25710
// 地址: 0x141c25710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*(arg1 + 0x32) |= 2
*arg1 = &data_14309cc10
arg1[0x44] = 0
arg1[0x45].d = 0x43fa0000
*(arg1 + 0x22c) = 0
int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"TransformComponent", 1)
int64_t* rax_1 = sub_1425881f0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x46] = rax_2
arg1[0x26] = rax_2
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"CraneYawControl", 1)
int64_t* rax_4 = sub_1425881f0()
void* rax_5
uint32_t zmm7[0x4]
float zmm8[0x4]
rax_5, zmm7, zmm8 = sub_140cd9110(arg1, rbx_1, rax_4, rax_4, 1, 0)
void* rdx_2 = arg1[0x46]
arg1[0x47] = rax_5
arg_8 = 0
sub_141f4a650(rax_5, rdx_2, 0)
int64_t* rbx_2 = arg1[0x47]
int32_t var_70 = 0x428c0000
uint128_t zmm0 = zx.o(rbx_2[0x25])
bool cond:0 = zmm0.d f!= rbx_2[0x36].d
int32_t var_60 = 0x428c0000
int32_t rax_6 = rbx_2[0x26].d
int64_t var_68 = (_mm_unpacklo_ps(zx.o(0), 0)).q
uint64_t var_78 = zmm0.q
float var_58[0x4]

if (cond:0 || var_78:4.d.d f!= *(rbx_2 + 0x1b4) || not(rax_6.d f== rbx_2[0x37].d))
    zmm7 = data_143f346a0
    uint128_t zmm4_1 = zx.o(rbx_2[0x25])
    uint32_t zmm5_1[0x4] = data_143f346b0
    zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    uint32_t temp0_2[0x4] = _mm_and_ps(zmm5_1, zmm7)
    uint128_t zmm2_1 = _mm_unpacklo_ps(zmm0, 0)
    uint128_t zmm6_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_6[0].q), zmm2_1.q)
    zmm2_1 = data_143f346c0
    uint128_t zmm3_1 = _mm_div_ps(zmm6_1, zmm7)
    var_78 = zmm4_1.q
    zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3_1))
    zmm6_1 = _mm_sub_ps(zmm6_1, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(zmm3_1, data_143f346b0), 2), 
                zmm4_1 ^ zmm3_1) ^ zmm4_1, 
            zmm7))
    zmm2_1 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), _mm_min_ps(zmm6_1, temp0_2))
    float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2_1, 2)
    float temp0_18[0x4] = _mm_add_ps(zmm2_1, zmm7)
    zmm8 = _mm_and_ps(temp0_17, temp0_18 ^ zmm2_1) ^ temp0_18
    zmm0 = _mm_cmpeq_ps(data_143f34690, zmm8, 1)
    zmm2_1 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_70_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
    rbx_2[0x36] = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
    rbx_2[0x37].d = var_70_3
    float (* rax_8)[0x4]
    rax_8, zmm7, zmm8 = sub_140ade170(&rbx_2[0x36], &var_58)
    *(rbx_2 + 0x1a0) = *rax_8

var_78.o = *(rbx_2 + 0x1a0)
float zmm10[0x4]
sub_141f48240(rbx_2, &var_68, &var_78, 0, zmm7, zmm8, zx.o(0), zmm10, 0, 0)
int64_t* rcx_7 = arg1[0x47]
var_68 = _mm_unpacklo_ps(zx.o(0), *(arg1 + 0x224))
int32_t var_70_4 = 0
int32_t var_60_1 = 0
sub_141f48c80(rcx_7, &var_68, 0, 0, 0)
uint64_t rbx_3 = *sub_140b58260(&arg_8, u"CranePitchControl", 1)
int64_t* rax_10 = sub_1425881f0()
void* rax_11
int64_t zmm9_1
rax_11, zmm9_1 = sub_140cd9110(arg1, rbx_3, rax_10, rax_10, 1, 0)
void* rdx_7 = arg1[0x47]
arg1[0x48] = rax_11
arg_8 = 0
sub_141f4a650(rax_11, rdx_7, 0)
int64_t* rcx_11 = arg1[0x48]
var_68 = (_mm_unpacklo_ps(arg1[0x44].d, zmm9_1)).q
int32_t var_70_5 = 0
int32_t var_60_2 = 0
float zmm10_1[0x4] = sub_141f48c80(rcx_11, &var_68, 0, 0, 0)
uint64_t rbx_4 = *sub_140b58260(&arg_8, u"CraneCameraMount", 1)
int64_t* rax_13 = sub_1425881f0()
void* rax_14
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_2[0x4]
rax_14, zmm7_1, zmm8_1, zmm9_2 = sub_140cd9110(arg1, rbx_4, rax_13, rax_13, 1, 0)
void* rdx_10 = arg1[0x48]
arg1[0x49] = rax_14
arg_8 = 0
sub_141f4a650(rax_14, rdx_10, 0)
int64_t* rbx_5 = arg1[0x49]
int32_t var_70_6 = 0xc1700000
uint128_t zmm0_3 = zx.o(rbx_5[0x25])
var_68 = (_mm_unpacklo_ps(arg1[0x45].d, zmm9_2[0].q)).q
int32_t var_60_3 = 0xc1700000
int32_t rax_15 = rbx_5[0x26].d
bool cond:1 = zmm0_3.d f!= rbx_5[0x36].d
var_78 = zmm0_3.q

if (cond:1 || var_78:4.d.d f!= *(rbx_5 + 0x1b4) || not(rax_15.d f== rbx_5[0x37].d))
    zmm8_1 = data_143f346a0
    uint128_t zmm4_2 = zx.o(rbx_5[0x25])
    uint32_t zmm5_2[0x4] = data_143f346b0
    zmm0_3 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
    uint32_t temp0_30[0x4] = _mm_and_ps(zmm5_2, zmm8_1)
    uint128_t zmm2_2 = _mm_unpacklo_ps(zmm0_3, 0)
    float temp0_33[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, rax_15[0].q), zmm2_2.q)
    zmm2_2 = data_143f346c0
    float temp0_34[0x4] = _mm_div_ps(temp0_33, zmm8_1)
    var_78 = zmm4_2.q
    zmm4_2 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_34))
    zmm2_2 = _mm_and_ps(_mm_cmpeq_ps(zmm2_2, __andps_xmmxud_memxud(temp0_34, data_143f346b0), 2), 
        zmm4_2 ^ temp0_34) ^ zmm4_2
    float temp0_44[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_30), 
        _mm_min_ps(_mm_sub_ps(temp0_33, _mm_mul_ps(zmm2_2, zmm8_1)), temp0_30))
    zmm0_3 = _mm_add_ps(temp0_44, zmm8_1)
    zmm2_2 = _mm_and_ps(zmm0_3 ^ temp0_44, _mm_cmpeq_ps(zx.o(0), temp0_44, 2)) ^ zmm0_3
    zmm0_3 = _mm_cmpeq_ps(data_143f34690, zmm2_2, 1)
    float zmm3_2[0x4] = _mm_and_ps(_mm_sub_ps(zmm2_2, zmm8_1) ^ zmm2_2, zmm0_3) ^ zmm2_2
    int32_t var_70_9 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa).d
    rbx_5[0x36] = (_mm_unpacklo_ps(zmm3_2, _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)[0].q)).q
    rbx_5[0x37].d = var_70_9
    float (* rax_17)[0x4]
    rax_17, zmm7_1, zmm8_1 = sub_140ade170(&rbx_5[0x36], &var_58)
    *(rbx_5 + 0x1a0) = *rax_17

var_78.o = *(rbx_5 + 0x1a0)
sub_141f48240(rbx_5, &var_68, &var_78, 0, zmm7_1, zmm8_1, zmm9_2, zmm10_1, 0, 0)
return arg1
