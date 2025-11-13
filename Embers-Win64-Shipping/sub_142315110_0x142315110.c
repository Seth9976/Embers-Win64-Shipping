// 函数: sub_142315110
// 地址: 0x142315110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg6 = data_143dbb1f8.q
arg6[1].d = data_143dbb200
*arg7 = data_143dbb1f8.q
arg7[2] = data_143dbb200
uint64_t r12_1 = zx.q(arg5 + *(arg2 + 0x10))
int32_t r14 = *(arg4 + 0x24)
char r9 = *(arg3 + 0x81)
int64_t rcx = *(arg3 + 0x60)
uint64_t result = zx.q(r12_1.d) * 2
uint128_t zmm1
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r9 == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx + (r12_1 << 3))), 0), 0)
    zmm1 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
    zmm2 = zmm1
    zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx + (result << 3))), 0)
    zmm2 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)
    zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm5 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)

int64_t var_d8 = 0
uint128_t zmm0

if (r9 == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx + (r12_1 << 3) + 4)), 0), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx + (result << 3) + 8)), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)

int32_t rsi = 0
var_d8.o = zmm0

if (r14 s> 0)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    int32_t var_bc_1 = 0
    float var_c8[0x4]
    var_c8[0] = zmm2[0]
    float temp0_22[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
    temp0_22[0] = zmm4[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
    temp0_23[0] = zmm5[0]
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
    int32_t var_bc_2 = 0
    temp0_24[0] = var_d8.d.d
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xe1)
    temp0_26[0] = var_d8:4.d.d
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
    temp0_28[0] = 0
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xff)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0)
    
    do
        sub_1422c5b30(arg4, zx.q(r12_1.d), rsi)
        char result_1 = sub_1422c5bb0(arg4, zx.q(r12_1.d), rsi)
        float zmm3[0x4] = data_14399f6e0
        zmm4 = data_14399f6f0
        zmm5 = data_14399f700
        zmm6 = data_14399f710
        rsi += 1
        zmm0 = _mm_mul_ps(temp0_29, zmm4)
        result = zx.q(result_1)
        float temp0_37[0x4] = _mm_mul_ps(temp0_31, zmm3)
        temp0_24[0].q = 0
        zmm1 = _mm_mul_ps(temp0_27, zmm5)
        temp0_24[2] = 0
        temp0_24[0].q = 0
        float temp0_39[0x4] = _mm_add_ps(temp0_37, zmm0)
        temp0_24[2] = 0
        zmm0 = _mm_mul_ps(temp0_25, zmm6)
        zmm7.d = _mm_cvtepi32_ps(zx.o(result.d)).d f* 0.00392156886f
        float temp0_43[0x4] = _mm_add_ps(temp0_39, _mm_add_ps(zmm1, zmm0))
        zmm1 = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
        temp0_45[0] = temp0_45[0] f* zmm7.d
        zmm0.d = temp0_43.d f* zmm7.d
        zmm1.d = zmm1.d f* zmm7.d
        temp0_45[0] = temp0_45[0] f+ arg6[1].d
        zmm0.d = zmm0.d f+ *arg6
        zmm1.d = zmm1.d f+ *(arg6 + 4)
        arg6[1].d = temp0_45[0]
        *arg6 = zmm0.d
        *(arg6 + 4) = zmm1.d
        zmm0 = _mm_mul_ps(temp0_34, zmm4)
        float temp0_47[0x4] = _mm_mul_ps(temp0_35, zmm3)
        zmm1 = _mm_mul_ps(temp0_33, zmm5)
        float temp0_52[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_47, zmm0), _mm_add_ps(zmm1, _mm_mul_ps(temp0_32, zmm6)))
        zmm1 = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
        temp0_54[0] = temp0_54[0] f* zmm7.d
        zmm0.d = temp0_52.d f* zmm7.d
        zmm1.d = zmm1.d f* zmm7.d
        temp0_54[0] = temp0_54[0] f+ arg7[2]
        zmm0.d = zmm0.d f+ *arg7
        zmm1.d = zmm1.d f+ arg7[1]
        arg7[2] = temp0_54[0]
        *arg7 = zmm0.d
        arg7[1] = zmm1.d
    while (rsi s< r14)

return result
