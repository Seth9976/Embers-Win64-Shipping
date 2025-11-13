// 函数: sub_141f69690
// 地址: 0x141f69690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg7 = data_143dbb1f8.q
arg7[1].d = data_143dbb200
*arg8 = data_143dbb1f8.q
arg8[2] = data_143dbb200
sub_140d3c6e0(arg1 + 0x438)
uint64_t r12_1 = zx.q(arg5 + *(arg2 + 0x10))
char r8 = *(arg3 + 0x81)
int32_t r15 = *(arg4 + 0x24)
int64_t rcx_1 = *(arg3 + 0x60)
uint64_t result = zx.q(r12_1.d) * 2
uint128_t zmm1
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r8 == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_1 + (r12_1 << 3))), 0), 0)
    zmm1 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
    zmm2 = zmm1
    zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx_1 + (result << 3))), 0)
    zmm2 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)
    zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm5 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)

int64_t var_d8 = 0
uint128_t zmm0

if (r8 == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_1 + (r12_1 << 3) + 4)), 0), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx_1 + (result << 3) + 8)), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)

int32_t r14_1 = 0
var_d8.o = zmm0

if (r15 s> 0)
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
        int64_t rax_4 = sx.q(sub_1422c5b30(arg4, zx.q(r12_1.d), r14_1))
        uint32_t rbx_1 = zx.d(*(*(arg2 + 0x28) + (rax_4 << 1)))
        uint32_t rax_6 = zx.d(sub_1422c5bb0(arg4, zx.q(r12_1.d), r14_1))
        temp0_24[0].q = 0
        r14_1 += 1
        temp0_24[2] = 0
        temp0_24[0].q = 0
        result = (zx.q(rbx_1) << 6) + *arg6
        temp0_24[2] = 0
        uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_6))
        zmm0 = __mulps_xmmps_memps(temp0_29, *(result + 0x10))
        float temp0_38[0x4] = __mulps_xmmps_memps(temp0_31, *result)
        zmm1 = __mulps_xmmps_memps(temp0_25, *(result + 0x30))
        zmm3.d = zmm3.d f* 0.00392156886f
        float temp0_43[0x4] = _mm_add_ps(_mm_add_ps(temp0_38, zmm0), 
            _mm_add_ps(zmm1, __mulps_xmmps_memps(temp0_27, *(result + 0x20))))
        zmm1 = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
        temp0_45[0] = temp0_45[0] f* zmm3.d
        zmm0.d = temp0_43.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm3.d
        temp0_45[0] = temp0_45[0] f+ arg7[1].d
        zmm0.d = zmm0.d f+ *arg7
        zmm1.d = zmm1.d f+ *(arg7 + 4)
        arg7[1].d = temp0_45[0]
        *arg7 = zmm0.d
        *(arg7 + 4) = zmm1.d
        zmm0 = __mulps_xmmps_memps(temp0_33, *(result + 0x20))
        float temp0_47[0x4] = __mulps_xmmps_memps(temp0_32, *(result + 0x30))
        zmm1 = __mulps_xmmps_memps(temp0_34, *(result + 0x10))
        float temp0_52[0x4] = _mm_add_ps(_mm_add_ps(temp0_47, zmm0), 
            _mm_add_ps(zmm1, __mulps_xmmps_memps(temp0_35, *result)))
        zmm1 = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
        temp0_54[0] = temp0_54[0] f* zmm3.d
        zmm0.d = temp0_52.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm3.d
        temp0_54[0] = temp0_54[0] f+ arg8[2]
        zmm0.d = zmm0.d f+ *arg8
        zmm1.d = zmm1.d f+ arg8[1]
        arg8[2] = temp0_54[0]
        *arg8 = zmm0.d
        arg8[1] = zmm1.d
    while (r14_1 s< r15)

return result
