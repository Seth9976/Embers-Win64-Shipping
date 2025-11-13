// 函数: sub_1414c3d80
// 地址: 0x1414c3d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

float zmm6[0x4]
float var_28_1[0x4] = zmm6
uint128_t zmm7
uint128_t var_38_1 = zmm7
int64_t i = 0
uint128_t zmm8
uint128_t var_48_1 = zmm8
uint128_t zmm9
uint128_t var_58_1 = zmm9
uint128_t zmm10 = 0x40490fdb
uint128_t zmm11
uint128_t var_78_1 = zmm11
uint128_t zmm12 = 0x3bb60b61
uint128_t zmm13
uint128_t var_98_1 = zmm13
uint128_t zmm14
uint128_t var_a8_1 = zmm14
uint128_t zmm15
uint128_t var_b8_1 = zmm15

do
    zmm11 = *(data_143ee74a8 + 4)
    int32_t var_154_1 = zmm11.d
    
    if (i != 0)
        zmm7 = zmm11
        zmm11 = *(data_143ee7558 + 4)
        var_154_1 = zmm11.d
    else
        zmm7 = zx.o(0)
    
    zmm9 = 0x3f800000
    zmm6 = 0x3f490fdb
    zmm8 = 0x3f800000
    int32_t var_168_1 = zmm7.d
    float zmm0[0x4]
    uint128_t zmm1
    
    if (not(1f f<= *(arg1 + 0x2bc)))
        zmm0 = 0x3f800000
        zmm0[0] = 1f f/ *(arg1 + 0x6b0)
        float zmm0_1[0x4] = atanf(zmm0[0])
        zmm1.d = data_1439b70a4.d f* zmm10.d
        zmm1.d = zmm1.d f* zmm12.d
        float temp0_1[0x4] = _mm_max_ss(zmm0_1[0], zmm1.d)
        zmm1.d = data_1439b70a8.d f* zmm10.d
        zmm1.d = zmm1.d f* zmm12.d
        temp0_1[0] = temp0_1[0] f+ zmm1.d
        zmm0, zmm6, zmm7, zmm9 = sub_140a454f0(temp0_1, zmm1)
        zmm8 = *(arg1 + 0x6c4)
        zmm6[0] = zmm6[0] - zmm0[0]
        zmm8.d = zmm8.d f/ *(arg1 + 0x6b0)
    
    uint128_t zmm0_2 = tanf(zmm6[0])
    uint128_t zmm3 = *(arg1 + 0x794)
    float zmm2[0x4] = *(arg1 + 0x774)
    zmm12 = *(arg1 + 0x770)
    zmm13 = *(arg1 + 0x780)
    zmm14 = *(arg1 + 0x790)
    int32_t rax_3 = *(arg1 + 0xa44)
    zmm15.d = zmm9.d f/ zmm8.d
    zmm1.d = zmm7.d f* zmm0_2.d
    uint128_t zmm4_1
    zmm4_1.d = zmm0_2.d f* zmm11.d
    zmm0_2.d = zmm15.d f* zmm1.d
    zmm6 = zmm2
    zmm15.d = zmm15.d f* zmm4_1.d
    uint128_t zmm5_1
    zmm5_1.d = zmm12.d f* zmm1.d
    zmm11 = zmm15
    zmm7.d = zmm13.d f* zmm1.d
    zmm10.d = zmm14.d f* zmm1.d
    zmm1 = *(arg1 + 0x784)
    zmm6[0] = zmm6[0] f* zmm0_2.d
    zmm8.d = zmm1.d f* zmm0_2.d
    zmm9.d = zmm3.d f* zmm0_2.d
    zmm0_2 = *(arg1 + 0x358)
    zmm12.d = zmm12.d f* zmm4_1.d
    zmm13.d = zmm13.d f* zmm4_1.d
    zmm14.d = zmm14.d f* zmm4_1.d
    zmm4_1 = zmm15
    zmm15.d = zmm15.d f* zmm3.d
    zmm3.d = (*(arg1 + 0x348)).d f* var_168_1
    int32_t var_150_1 = zmm15.d
    zmm11.d = zmm11.d f* zmm1.d
    zmm1 = zx.o(*(arg1 + 0xa3c))
    zmm3.d = zmm3.d f+ zmm1.d
    uint64_t var_108_1 = zmm1.q
    zmm4_1.d = zmm4_1.d f* zmm2[0]
    zmm2 = *(arg1 + 0x368)
    int32_t var_15c_1 = zmm3.d
    zmm3.d = zmm3.d f+ zmm5_1.d
    int32_t var_158_1 = zmm3.d
    zmm3.d = zmm3.d f+ zmm6[0]
    int32_t var_130_1 = zmm3.d
    zmm3.d = zmm0_2.d f* var_168_1
    zmm3.d = zmm3.d f+ var_108_1:4.d
    int32_t var_14c_1 = zmm3.d
    zmm3.d = zmm3.d f+ zmm7.d
    int32_t var_164_1 = zmm3.d
    zmm15.d = zmm3.d f+ zmm8.d
    zmm3.d = zmm2.d f* var_168_1
    zmm3.d = zmm3.d f+ rax_3
    int32_t var_148_1 = zmm15.d
    int32_t var_168_2 = zmm3.d
    zmm3.d = zmm3.d f+ zmm10.d
    int32_t var_160_1 = zmm3.d
    zmm3.d = zmm3.d f+ zmm9.d
    int32_t var_124_1 = zmm3.d
    zmm3.d = var_158_1.d f- zmm6[0]
    int32_t var_158_2 = zmm3.d
    zmm3.d = var_164_1.d f- zmm8.d
    int32_t var_164_2 = zmm3.d
    zmm3.d = var_160_1.d f- zmm9.d
    int32_t var_160_2 = zmm3.d
    zmm3.d = var_15c_1.d f- zmm5_1.d
    zmm15 = zmm3
    zmm3.d = zmm3.d f- zmm6[0]
    zmm5_1.d = var_14c_1.d f- zmm7.d
    zmm15.d = zmm15.d f+ zmm6[0]
    int32_t var_15c_2 = zmm3.d
    zmm3 = var_154_1
    zmm0_2.d = zmm0_2.d f* zmm3.d
    zmm7.d = zmm5_1.d f+ zmm8.d
    zmm2[0] = zmm2[0] f* zmm3.d
    zmm5_1.d = zmm5_1.d f- zmm8.d
    zmm8 = var_15c_2
    int32_t var_12c_1 = zmm7.d
    zmm7.d = var_168_2.d f- zmm10.d
    int32_t var_14c_2 = zmm5_1.d
    int32_t var_11c_1 = zmm15.d
    zmm10 = zmm7
    zmm7.d = zmm7.d f- zmm9.d
    zmm10.d = zmm10.d f+ zmm9.d
    int32_t var_168_3 = zmm7.d
    zmm7.d = (*(arg1 + 0x348)).d f* zmm3.d
    zmm3.d = var_108_1:4.d.d f+ zmm0_2.d
    int32_t var_128_1 = zmm10.d
    zmm7.d = zmm7.d f+ zmm1.d
    zmm1.d = rax_3.d f+ zmm2[0]
    zmm2 = zmm14
    zmm10.d = zmm13.d f+ zmm3.d
    zmm3.d = zmm3.d f- zmm13.d
    zmm9.d = zmm7.d f+ zmm12.d
    zmm2[0] = zmm2[0] f+ zmm1.d
    zmm1.d = zmm1.d f- zmm14.d
    zmm7.d = zmm7.d f- zmm12.d
    zmm14.d = zmm11.d f+ zmm3.d
    zmm0_2.d = zmm4_1.d f+ zmm9.d
    zmm3.d = zmm3.d f- zmm11.d
    zmm9.d = zmm9.d f- zmm4_1.d
    zmm12.d = zmm4_1.d f+ zmm7.d
    zmm7.d = zmm7.d f- zmm4_1.d
    int32_t var_10c_1 = zmm14.d
    int32_t var_154_2 = zmm0_2.d
    zmm0_2.d = zmm11.d f+ zmm10.d
    int32_t var_140_1 = zmm3.d
    zmm10.d = zmm10.d f- zmm11.d
    int32_t var_118_1 = zmm9.d
    zmm11 = var_12c_1
    int32_t var_110_1 = zmm12.d
    int32_t var_144_1 = zmm7.d
    int32_t var_13c_1 = zmm0_2.d
    zmm0_2 = var_150_1
    zmm6 = zmm0_2
    int32_t var_114_1 = zmm10.d
    zmm6[0] = zmm6[0] + zmm2[0]
    zmm2[0] = zmm2[0] f- zmm0_2.d
    float var_138_1 = zmm6[0]
    zmm6 = var_158_2
    float var_120_1 = zmm2[0]
    zmm2 = zmm0_2
    zmm2[0] = zmm2[0] f+ zmm1.d
    zmm1.d = zmm1.d f- zmm0_2.d
    zmm0_2.d = zmm6.d f+ var_130_1
    float var_134_1 = zmm2[0]
    zmm2 = zmm5_1
    zmm5_1 = var_164_2
    zmm2[0] = zmm2[0] f+ zmm11.d
    int32_t var_150_2 = zmm1.d
    zmm1.d = zmm8.d f+ zmm15.d
    zmm1.d = zmm1.d f+ zmm0_2.d
    zmm1.d = zmm1.d f* 0.0227272734f
    zmm10.d = zmm10.d f+ var_13c_1
    zmm15 = var_148_1
    zmm13.d = zmm9.d f+ var_154_2
    zmm9 = var_168_3
    zmm0_2.d = zmm5_1.d f+ zmm15.d
    zmm10.d = zmm10.d f+ zmm14.d
    zmm14 = var_120_1
    zmm13.d = zmm13.d f+ zmm12.d
    zmm2[0] = zmm2[0] f+ zmm0_2.d
    zmm10.d = zmm10.d f+ zmm3.d
    zmm13.d = zmm13.d f+ zmm7.d
    zmm7 = var_128_1
    zmm2[0] = zmm2[0] * 0.0227272734f
    zmm12.d = zmm9.d f+ zmm7.d
    zmm10.d = zmm10.d f* 0.227272734f
    zmm13.d = zmm13.d f* 0.227272734f
    zmm10.d = zmm10.d f+ zmm2[0]
    zmm2 = var_160_2
    zmm0_2.d = zmm2.d f+ var_124_1
    zmm13.d = zmm13.d f+ zmm1.d
    int32_t var_15c_3 = zmm10.d
    zmm4_1.d = zmm10.d f- zmm15.d
    zmm12.d = zmm12.d f+ zmm0_2.d
    zmm0_2.d = zmm14.d f+ var_138_1
    zmm3.d = zmm10.d f- zmm5_1.d
    int32_t var_148_2 = zmm13.d
    zmm1.d = zmm13.d f- var_130_1
    zmm12.d = zmm12.d f* 0.0227272734f
    zmm0_2.d = zmm0_2.d f+ var_134_1
    zmm4_1.d = zmm4_1.d f* zmm4_1.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm0_2.d = zmm0_2.d f+ var_150_2
    zmm3.d = zmm3.d f* zmm3.d
    zmm4_1.d = zmm4_1.d f+ zmm1.d
    zmm1.d = zmm13.d f- zmm6[0]
    zmm0_2.d = zmm0_2.d f* 0.227272734f
    zmm12.d = zmm12.d f+ zmm0_2.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_164_3 = zmm12.d
    zmm0_2.d = zmm12.d f- var_124_1
    zmm0_2.d = zmm0_2.d f* zmm0_2.d
    zmm4_1.d = zmm4_1.d f+ zmm0_2.d
    zmm4_1 = _mm_max_ss(zmm4_1.d, 0)
    zmm0_2.d = zmm12.d f- zmm2[0]
    int32_t var_158_3 = zmm4_1.d
    zmm0_2.d = zmm0_2.d f* zmm0_2.d
    zmm3.d = zmm3.d f+ zmm0_2.d
    
    if (not(zmm4_1.d f>= zmm3.d))
        var_158_3 = zmm3.d
    
    zmm1.d = zmm13.d f- var_11c_1
    zmm15.d = zmm13.d f- var_144_1
    zmm5_1.d = zmm13.d f- var_154_2
    zmm0_2.d = zmm10.d f- zmm11.d
    zmm2 = zmm10
    zmm2[0] = zmm2[0] f- var_14c_2
    zmm1.d = zmm1.d f* zmm1.d
    int32_t var_144_2 = zmm15.d
    zmm3.d = zmm12.d f- zmm9.d
    zmm15 = zmm0_2.d
    zmm9.d = zmm13.d f- var_118_1
    zmm0_2.d = zmm12.d f- zmm7.d
    zmm15.d = zmm15.d f* zmm15.d
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm7.d = zmm13.d f- zmm8.d
    zmm3.d = zmm3.d f* zmm3.d
    zmm15.d = zmm15.d f+ zmm1.d
    zmm0_2.d = zmm0_2.d f* zmm0_2.d
    zmm5_1.d = zmm5_1.d f* zmm5_1.d
    zmm8.d = zmm10.d f- var_13c_1
    zmm7.d = zmm7.d f* zmm7.d
    zmm4_1.d = zmm12.d f- var_138_1
    zmm9.d = zmm9.d f* zmm9.d
    zmm11.d = zmm10.d f- var_114_1
    zmm6 = zmm12
    zmm8.d = zmm8.d f* zmm8.d
    zmm6[0] = zmm6[0] f- zmm14.d
    zmm4_1.d = zmm4_1.d f* zmm4_1.d
    zmm12 = zmm13
    zmm7.d = zmm7.d f+ zmm2[0]
    zmm11.d = zmm11.d f* zmm11.d
    zmm8.d = zmm8.d f+ zmm5_1.d
    zmm13.d = var_15c_3.d f- var_140_1
    zmm14.d = zmm10.d f- var_10c_1
    zmm12.d = zmm12.d f- var_110_1
    zmm7.d = zmm7.d f+ zmm3.d
    zmm10.d = var_164_3.d f- var_134_1
    int32_t var_140_2 = zmm13.d
    zmm8.d = zmm8.d f+ zmm4_1.d
    zmm11.d = zmm11.d f+ zmm9.d
    zmm13.d = var_164_3.d f- var_150_2
    zmm1 = zmm15
    zmm14.d = zmm14.d f* zmm14.d
    zmm15 = var_144_2
    zmm1.d = zmm1.d f+ zmm0_2.d
    zmm0_2 = var_140_2
    zmm0_2.d = zmm0_2.d f* zmm0_2.d
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm1 = __maxss_xmmss_memss(zmm1.d, var_158_3)
    zmm12.d = zmm12.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm6[0]
    zmm10.d = zmm10.d f* zmm10.d
    zmm15.d = zmm15.d f* zmm15.d
    zmm14.d = zmm14.d f+ zmm12.d
    zmm13.d = zmm13.d f* zmm13.d
    zmm0_2.d = zmm0_2.d f+ zmm15.d
    zmm14.d = zmm14.d f+ zmm10.d
    zmm0_2.d = zmm0_2.d f+ zmm13.d
    zmm7 = _mm_sqrt_ss(0, 
        _mm_max_ss(
            _mm_max_ss(_mm_max_ss(_mm_max_ss(_mm_max_ss(zmm1.d, zmm7.d).d, zmm8.d).d, zmm11.d).d, 
                zmm14.d).d, 
            zmm0_2.d).d)
    zmm6 = zmm7
    zmm6[0] = zmm6[0] f+ zmm7.d
    zmm0_2.d = float.s(sub_1414ccda0())
    zmm6[0] = zmm6[0] f/ zmm0_2.d
    float zmm0_3[0x4]
    float zmm6_1[0x4]
    float zmm8_1
    zmm0_3, zmm6_1, zmm8_1 = sub_140a454f0(var_148_2, zmm6)
    zmm0_3[0]
    float zmm0_4[0x4]
    float zmm6_2[0x4]
    float zmm9_2
    zmm0_4, zmm6_2, zmm9_2 = sub_140a454f0(var_15c_3, zmm6_1)
    zmm0_4[0]
    zmm0, zmm6, zmm7, zmm8, zmm9 = sub_140a454f0(var_164_3, zmm6_2)
    zmm10 = 0x40490fdb
    zmm6[0] = zmm6[0] - zmm0[0]
    zmm12 = 0x3bb60b61
    float (* rcx)[0x4] = i * 0x1c
    zmm2 = zmm9
    zmm6[0] = zmm6[0] f+ zmm7.d
    zmm3.d = zmm8.d f+ zmm7.d
    zmm2[0] = zmm2[0] f+ zmm7.d
    zmm6[0] = zmm6[0] f- zmm7.d
    zmm8.d = zmm8.d f- zmm7.d
    i += 1
    float var_c8_1 = zmm6[0]
    zmm9.d = zmm9.d f- zmm7.d
    int64_t var_ec_1 = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    float var_f0_1 = zmm6[0]
    float var_e4_1 = var_c8_1
    float var_f8[0x4]
    var_f8[0].q = (_mm_unpacklo_ps(zmm8, zmm9.q)).q
    *(rcx + arg2) = var_f8
    *(rcx + arg2 + 0x10) = var_ec_1
    *(rcx + arg2 + 0x18) = 1.d
while (i s< sx.q(arg3))
