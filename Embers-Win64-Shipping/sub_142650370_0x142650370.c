// 函数: sub_142650370
// 地址: 0x142650370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t var_b0
int32_t* rbx = &var_b0
uint128_t zmm4 = zx.o(*arg3)
uint128_t zmm2 = *arg3 ^ 0x80000000
float zmm1[0x4] = arg3[1].d ^ 0x80000000
float zmm3[0x4] = *(arg3 + 4) ^ 0x80000000
int128_t zmm6
int128_t var_38 = zmm6
int64_t i_1 = 2
uint64_t var_ac = (_mm_unpacklo_ps(zmm2, zmm3[0].q)).q
float var_160 = zmm1[0]
var_b0 = arg3[1].d
float var_110 = zmm1[0]
zmm1 = var_b0
int32_t var_c4 = _mm_shuffle_ps(zmm4, zmm4, 0x55).d
float var_100 = zmm1[0]
int32_t var_f8 = zmm2.d
int32_t var_e8 = zmm4.d
float var_d4 = zmm3[0]
float var_a4 = var_160
int32_t var_10c = 0x3f800000
int32_t var_fc = 0x3f800000
int32_t var_ec = 0x3f800000
int32_t var_dc = 0x3f800000
int32_t var_cc = 0x3f800000
uint64_t var_b8 = zmm4.q
int32_t var_bc = 0x3f800000
int64_t result
int64_t i

do
    uint128_t zmm0 = rbx[-2]
    int32_t* rsi_1 = &var_b0
    zmm1 = rbx[-1]
    int64_t j_1 = 2
    zmm2 = *rbx
    int32_t var_118_1 = zmm0.d
    int32_t var_108_1 = zmm0.d
    float var_f4_1 = zmm1[0]
    float var_e4_1 = zmm1[0]
    int32_t var_d0_1 = zmm2.d
    int32_t var_c0_1 = zmm2.d
    int64_t j
    
    do
        zmm6 = rsi_1[-1]
        void var_a0
        sub_140acc920(&var_a0, &arg_20)
        zmm2 = var_118_1.o
        int64_t rax_2 = *arg1
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm6.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_118_1.o = zmm2
        float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        int64_t var_178_1 = 0
        uint128_t zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        int32_t var_170_1 = 0
        float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        float temp0_10[0x4] = _mm_add_ps(temp0_5, zmm0_1)
        float temp0_13[0x4] =
            _mm_add_ps(temp0_9, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3]))
        zmm2 = var_108_1.o
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm6.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_108_1.o = zmm2
        float temp0_16[0x4] = _mm_add_ps(temp0_10, temp0_13)
        float temp0_18[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        float var_15c = temp0_16[0]
        zmm0_1 = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
        float var_154_1 = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)[0]
        float temp0_22[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        int32_t var_158_1 = zmm0_1.d
        zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        float temp0_29[0x4] = _mm_add_ps(_mm_add_ps(temp0_22, zmm0_1), _mm_add_ps(temp0_18, zmm2))
        float var_150 = temp0_29[0]
        zmm0_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
        float var_148_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
        int32_t var_14c_1 = zmm0_1.d
        (*(rax_2 + 0x30))(arg1, &var_150, &var_15c, &var_a0, 0, 0, 0, 0, 0, 0)
        zmm6 = *rsi_1
        void var_90
        sub_140acc920(&var_90, &arg_20)
        zmm2 = var_f8.o
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm6.d
        int64_t var_178_2 = 0
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        int32_t var_170_2 = 0
        var_f8.o = zmm2
        float temp0_35[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        int64_t rax_3 = *arg1
        float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        float temp0_39[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_37)
        float temp0_43[0x4] =
            _mm_add_ps(temp0_39, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3]))
        zmm2 = var_e8.o
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm6.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        var_e8.o = zmm2
        float temp0_46[0x4] = _mm_add_ps(temp0_40, temp0_43)
        float temp0_48[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        float var_144 = temp0_46[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
        float var_13c_1 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
        float temp0_52[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        float var_140_1 = temp0_49[0]
        float temp0_54[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        float temp0_59[0x4] = _mm_add_ps(_mm_add_ps(temp0_52, temp0_54), _mm_add_ps(temp0_48, zmm2))
        float var_138 = temp0_59[0]
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
        float var_130_1 = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)[0]
        float var_134_1 = temp0_60[0]
        (*(rax_3 + 0x30))(arg1, &var_138, &var_144, &var_90, 0, 0, 0, 0, 0, 0)
        zmm6 = rsi_1[-2]
        void var_80
        sub_140acc920(&var_80, &arg_20)
        zmm2.d = zmm6.d
        int64_t var_178_3 = 0
        uint128_t var_d8 = zmm2
        float temp0_63[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        int32_t var_170_3 = 0
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        float temp0_67[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_63, zmm0), 
            _mm_add_ps(temp0_67, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
        float var_12c = temp0_72[0]
        zmm0 = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
        int64_t rax_4 = *arg1
        zmm2.d = zmm6.d
        float var_124_1 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)[0]
        int32_t var_128_1 = zmm0.d
        float temp0_76[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        float temp0_80[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        uint128_t var_c8 = zmm2
        float temp0_85[0x4] = _mm_add_ps(_mm_add_ps(temp0_76, zmm0), 
            _mm_add_ps(temp0_80, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
        float var_168 = temp0_85[0]
        zmm0 = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
        float var_160_1 = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)[0]
        int32_t var_164_1 = zmm0.d
        result = (*(rax_4 + 0x30))(arg1, &var_168, &var_12c, &var_80, 0, 0, 0, 0, 0, 0, var_168, 
            var_160_1, var_158_1, var_150, var_148_1, var_140_1, var_138, var_130_1, var_128_1)
        rsi_1 = &rsi_1[3]
        j = j_1
        j_1 -= 1
    while (j != 1)
    rbx = &rbx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
