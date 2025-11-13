// 函数: sub_1426d3ad0
// 地址: 0x1426d3ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0x3f800000
int32_t var_54 = 0
int32_t result
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
result, zmm6, zmm7, zmm8 = sub_1426cd370(arg1, arg2, &var_58)

if (result.b != 0)
    uint128_t zmm0_1 = zx.o(*arg3)
    int32_t rax = arg3[1].d
    uint128_t var_18_1 = zmm6
    uint128_t var_28_1 = zmm7
    uint128_t var_38_1 = zmm8
    zmm8 = var_58
    zmm6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    uint128_t zmm9 = var_54
    var_58.q = zmm0_1.q
    zmm7 = var_58
    uint128_t zmm1_1
    zmm1_1.d = zmm6.d f* zmm6.d
    zmm0_1.d = zmm7.d f* zmm7.d
    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
    double zmm2_1
    uint128_t zmm3_1
    
    if (not(zmm1_1.d f<= 9.99999994e-09f))
        float zmm5_1[0x4] = 0x3f000000
        zmm3_1.d = zmm1_1.d
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
        zmm3_1.d = zmm3_1.d f* 0.5f
        zmm0_1.d = temp0_2.d f* temp0_2[0]
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = temp0_2.d f* zmm2_1.d
        temp0_2[0] = temp0_2[0] f+ zmm0_1.d
        zmm1_1.d = temp0_2.d f* temp0_2[0]
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5_1[0] = 0.5f f- zmm3_1.d
        zmm0_1.d = temp0_2.d f* zmm5_1[0]
        temp0_2[0] = temp0_2[0] f+ zmm0_1.d
        zmm7.d = zmm7.d f* temp0_2[0]
        zmm6.d = zmm6.d f* temp0_2[0]
    
    zmm1_1.d = zmm9.d f* zmm9.d
    zmm0_1.d = zmm8.d f* zmm8.d
    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
    
    if (not(zmm1_1.d f<= 9.99999994e-09f))
        float zmm4_1[0x4] = 0x3f000000
        float temp0_3[0x4] = _mm_rsqrt_ss(zmm1_1[0], zmm1_1.d)
        zmm3_1.d = zmm1_1.d f* 0.5f
        zmm0_1.d = temp0_3.d f* temp0_3[0]
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = temp0_3.d f* zmm2_1.d
        temp0_3[0] = temp0_3[0] f+ zmm0_1.d
        zmm1_1.d = temp0_3.d f* temp0_3[0]
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm4_1[0] = 0.5f f- zmm3_1.d
        zmm0_1.d = temp0_3.d f* zmm4_1[0]
        temp0_3[0] = temp0_3[0] f+ zmm0_1.d
        zmm8.d = zmm8.d f* temp0_3[0]
        zmm9.d = zmm9.d f* temp0_3[0]
    
    zmm0_1 = 0xbf800000
    zmm7.d = zmm7.d f* zmm8.d
    zmm6.d = zmm6.d f* zmm9.d
    zmm6.d = zmm6.d f+ zmm7.d
    
    if (not(zmm6.d f< -1f))
        zmm0_1 = __minss_xmmss_memss(zmm6.d, 0x3f800000)
    
    *(arg1 + 0xc4)
    sub_140a2e390(&var_58, u"Angle: %.0f (%s cone)", fconvert.d(acosf(zmm0_1.d) * 57.2957764f))
    int64_t rdi_1 = sx.q(arg4[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg4[1].d = rax_1
    
    if (rax_1 s> *(arg4 + 0xc))
        sub_1405a4f90(arg4)
    
    int64_t* rcx_4 = (rdi_1 << 4) + *arg4
    *rcx_4 = 0
    *rcx_4 = var_58.q
    var_58.q = 0
    rcx_4[1].d = rax
    int32_t result_1
    result = result_1
    *(rcx_4 + 0xc) = result
    int64_t rcx_5 = var_58.q
    int32_t var_50_1
    var_50_1.q = 0
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)

return result
