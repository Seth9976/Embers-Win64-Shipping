// 函数: sub_14229b0c0
// 地址: 0x14229b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = zx.o(*arg3)
int32_t var_e8
int32_t* rbx = &var_e8
uint128_t zmm3 = zx.o(*(arg3 + 0xc))
int128_t zmm9 = arg7
int128_t zmm10 = arg6
var_e8 = arg3[1].d
float var_d0 = var_e8[0]
float zmm0[0x4] = zmm2
int32_t var_c0 = (*(arg3 + 0x14)).d
int32_t var_84 = _mm_shuffle_ps(zmm3, zmm3, 0x55).d
int32_t var_b8 = zmm2.d
int32_t var_a8 = zmm3.d
float var_94 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
int32_t var_cc = 0x3f800000
int32_t var_bc = 0x3f800000
int32_t var_ac = 0x3f800000
int32_t var_9c = 0x3f800000
uint64_t var_f0 = zmm2.q
int32_t var_8c = 0x3f800000
uint64_t var_e4 = zmm3.q
int32_t var_7c = 0x3f800000
int32_t* arg_18 = &var_e8
int64_t var_f8 = 2
int64_t result
bool cond:0_1

do
    zmm0 = rbx[-2]
    int32_t* rsi_1 = &var_e8
    uint128_t zmm1 = rbx[-1]
    int64_t i_1 = 2
    zmm2 = *rbx
    float var_d8_1 = zmm0[0]
    float var_c8_1 = zmm0[0]
    int32_t var_b4_1 = zmm1.d
    int32_t var_a4_1 = zmm1.d
    int32_t var_90_1 = zmm2.d
    int32_t var_80_1 = zmm2.d
    int64_t i
    
    do
        zmm2 = var_d8_1.o
        int32_t zmm5 = rsi_1[-1]
        int64_t rax_2 = *arg1
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm5
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_d8_1.o = zmm2
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        int64_t var_128_1 = 0
        float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        int32_t var_120_1 = 0
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        zmm3 = _mm_add_ps(zmm3, temp0_7)
        zmm1 = _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3]))
        zmm2 = var_c8_1.o
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm5
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_c8_1.o = zmm2
        zmm3 = _mm_add_ps(zmm3, zmm1)
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        int32_t var_108 = zmm3.d
        float temp0_19[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_100_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        float var_104_1 = temp0_19[0]
        float temp0_24[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
        zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_24), _mm_add_ps(zmm1, zmm2))
        int32_t var_118 = zmm3.d
        float temp0_30[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_110_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        float var_114_1 = temp0_30[0]
        (*(rax_2 + 0x30))(arg1, &var_108, &var_118, arg4, arg5, zmm10.d, zmm9.d, arg8, 0, 0, 
            var_118, var_110_1, var_108, var_100_1, var_f8, var_f0)
        zmm2 = var_b8.o
        int32_t zmm5_1 = *rsi_1
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm5_1
        int64_t var_128_2 = 0
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        int32_t var_120_2 = 0
        var_b8.o = zmm2
        zmm3 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2]), 
            __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3]))
        int64_t rax_3 = *arg1
        zmm1 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2), 
            __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1]))
        zmm2 = var_a8.o
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm5_1
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm3 = _mm_add_ps(zmm3, zmm1)
        var_a8.o = zmm2
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        var_108 = zmm3.d
        float temp0_49[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_100_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        float var_104_2 = temp0_49[0]
        float temp0_54[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
        zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_54), _mm_add_ps(zmm1, zmm2))
        var_118 = zmm3.d
        float temp0_60[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_110_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        float var_114_2 = temp0_60[0]
        (*(rax_3 + 0x30))(arg1, &var_108, &var_118, arg4, arg5, zmm10.d, zmm9.d, arg8, 0, 0, 
            var_118, var_110_2, var_108, var_100_2)
        int32_t zmm5_2 = rsi_1[-2]
        zmm2.d = zmm5_2
        int64_t var_128_3 = 0
        uint128_t var_98 = zmm2
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        int32_t var_120_3 = 0
        float temp0_65[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        zmm3 = _mm_add_ps(zmm3, temp0_65)
        zmm1 = _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1]))
        zmm2.d = zmm5_2
        uint128_t var_88 = zmm2
        zmm3 = _mm_add_ps(zmm3, zmm1)
        var_108 = zmm3.d
        float temp0_73[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_100_3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        float var_104_3 = temp0_73[0]
        int64_t rax_4 = *arg1
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
        float temp0_78[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
        zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_78), 
            _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
        var_118 = zmm3.d
        float temp0_86[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        int32_t var_110_3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
        float var_114_3 = temp0_86[0]
        result = (*(rax_4 + 0x30))(arg1, &var_108, &var_118, arg4, arg5, zmm10.d, zmm9.d, arg8, 0, 
            0, var_118, var_110_3, var_108, var_100_3)
        rsi_1 = &rsi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = &arg_18[3]
    cond:0_1 = var_f8 != 1
    arg_18 = rbx
    var_f8 -= 1
while (cond:0_1)
return result
