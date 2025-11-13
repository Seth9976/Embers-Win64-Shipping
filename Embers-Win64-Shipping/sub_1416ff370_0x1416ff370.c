// 函数: sub_1416ff370
// 地址: 0x1416ff370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r14)[0x4] = arg3
int32_t zmm3
int32_t var_f0 = zmm3
int64_t var_d0
float zmm9[0x4] = sub_141553620(&var_d0, *(arg1 + 0xb0), arg2, *(arg1 + 0xb8), arg3)
int32_t i_4 = 0
float zmm11[0x4] = zx.o(0)
uint128_t result_4 = var_d0.d
int32_t var_b8
float zmm13[0x4] = var_b8
int32_t var_c8
uint128_t zmm5 = var_c8
uint128_t zmm4 = var_d0:4.d
*(arg1 + 0x84) = var_d0
int64_t var_c4
*(arg1 + 0x90) = var_c4
*(arg1 + 0x8c) = var_c8
int32_t result_3
int32_t* result = zx.q(result_3)
*(arg1 + 0x9c) = zmm13[0]
*(arg1 + 0x98) = result.d
uint128_t zmm0
zmm0.d = result_4.d f- *(arg1 + 0xe0)
float zmm10[0x4]
float zmm14[0x4]
uint32_t zmm15[0x4]

if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
label_1416ff4cc:
    float var_48_1[0x4] = zmm9
    *(arg1 + 0x130) = 0
    
    if (*(arg1 + 0x134) s<= 0xffffffff)
        sub_141750700(arg1 + 0xf8, 0)
        zmm5 = var_c8
        zmm4 = var_d0:4.d
        zmm13 = var_b8
        result_4 = var_d0.d
    
    float temp0_3[0x4] = __mulps_xmmps_memps(*r14, data_143ef7590)
    zmm14 = var_c4.d
    zmm15 = data_143ef7300
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm4, 0)
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(result_4, zmm5.q), temp0_4[0].q)
    zmm5.d = zmm5.d f* zmm13[0]
    zmm0 = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, temp0_9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float temp0_12[0x4] = _mm_mul_ps(temp0_8, temp0_11)
    result_4.d = result_4.d f* zmm13[0]
    zmm4.d = zmm4.d f* zmm13[0]
    zmm13 = var_c4:4.d
    float temp0_13[0x4] = _mm_sub_ps(temp0_12, zmm0)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    zmm13[0] = zmm13[0] f- zmm4.d
    zmm4 = r14[2]
    float temp0_15[0x4] = _mm_add_ps(temp0_13, temp0_13)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), temp0_9)
    float temp0_20[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), temp0_11), zmm0)
    zmm0 = _mm_mul_ps(temp0_14, temp0_15)
    float temp0_22[0x4] = _mm_unpacklo_ps(zmm13, 0)
    zmm0 = _mm_add_ps(zmm0, temp0_6)
    zmm14[0] = zmm14[0] f- result_4.d
    result_4 = result_3
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm0)
    int32_t var_e0_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa).d
    zmm0.d = result_4.d f- zmm5.d
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
    zmm5 =
        __subps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm0.q), temp0_22[0].q), r14[1])
    float temp0_30[0x4] = _mm_rcp_ps(zmm4)
    zmm5 = _mm_and_ps(zmm5, zmm15)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_9)
    float temp0_36[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_11), zmm0)
    zmm0 = _mm_mul_ps(temp0_30, temp0_30)
    float temp0_38[0x4] = _mm_add_ps(temp0_30, temp0_30)
    float temp0_39[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_41[0x4] = _mm_sub_ps(temp0_38, _mm_mul_ps(zmm0, zmm4))
    zmm0 = _mm_mul_ps(temp0_41, temp0_41)
    float temp0_45[0x4] = _mm_sub_ps(_mm_add_ps(temp0_41, temp0_41), _mm_mul_ps(zmm0, zmm4))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc9), temp0_9)
    zmm4 = __andps_xmmxud_memxud(zmm4, data_143ef7580)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xd2)
    float temp0_50[0x4] = _mm_mul_ps(temp0_14, temp0_39)
    *(arg1 + 0xd8) = 1
    float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_11)
    *(arg1 + 0xdc) = 0xffffffff
    float temp0_52[0x4] = _mm_add_ps(temp0_50, zmm5)
    float temp0_54[0x4] = _mm_add_ps(_mm_sub_ps(temp0_51, zmm0), temp0_52)
    zmm10 = data_143ef7570
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, 
        _mm_and_ps(_mm_cmpeq_ps(zmm4, zmm10, 2), temp0_45 ^ zx.o(0)) ^ temp0_45)
    int32_t result_2 = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa).d
    *(arg1 + 0xe0) = (_mm_unpacklo_ps(temp0_24, temp0_26[0].q)).q
    zmm0 = _mm_unpacklo_ps(temp0_57, _mm_shuffle_ps(temp0_57, temp0_57, 0x55)[0].q)
    *(arg1 + 0xe8) = var_e0_1
    result = zx.q(result_2)
    *(arg1 + 0xec) = zmm0.q
    *(arg1 + 0xf4) = result.d
else
    zmm0.d = zmm4.d f- *(arg1 + 0xe4)
    
    if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
        goto label_1416ff4cc
    
    zmm0.d = zmm5.d f- *(arg1 + 0xe8)
    
    if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f || *(arg1 + 0x130) == 0)
        goto label_1416ff4cc
    
    result_4 = result_3
    zmm13 = var_c4:4.d
    zmm14 = var_c4.d
    zmm15 = data_143ef7300
    zmm10 = data_143ef7570

int32_t temp0_62 = *(arg1 + 0x130)
zmm5 = arg2[2]
float temp0_63[0x4] = __mulps_xmmps_memps(*arg2, data_143ef7590)
float temp0_64[0x4] = _mm_unpacklo_ps(zmm13, 0)
zmm4 = _mm_rcp_ps(zmm5)
float temp0_68[0x4] =
    __subps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, result_4.q), temp0_64[0].q), arg2[1])
float temp0_69[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xd2)
float temp0_70[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc9)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
float zmm7_1[0x4] = _mm_and_ps(temp0_68, zmm15)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9), temp0_69)
float temp0_77[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2), temp0_70), zmm0)
zmm0 = _mm_mul_ps(zmm4, zmm4)
zmm4 = _mm_add_ps(zmm4, zmm4)
float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_77)
zmm0 = _mm_mul_ps(zmm0, zmm5)
float temp0_82[0x4] = _mm_mul_ps(temp0_71, temp0_80)
zmm4 = _mm_sub_ps(zmm4, zmm0)
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xd2), temp0_70)
float temp0_86[0x4] = _mm_add_ps(temp0_82, zmm7_1)
zmm0 = _mm_mul_ps(zmm4, zmm4)
zmm4 = _mm_add_ps(zmm4, zmm4)
zmm0 = _mm_mul_ps(zmm0, zmm5)
zmm5 = _mm_cmpeq_ps(__andps_xmmxud_memxud(zmm5, data_143ef7580), zmm10, 2)
zmm4 = _mm_sub_ps(zmm4, zmm0)
float temp0_95[0x4] =
    _mm_sub_ps(temp0_85, _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xc9), temp0_69))
zmm5 = _mm_and_ps(zmm5, zmm4 ^ zx.o(0)) ^ zmm4
float temp0_98[0x4] = _mm_mul_ps(_mm_add_ps(temp0_95, temp0_86), zmm5)
float var_e8 = temp0_98[0]
float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
zmm5 = _mm_shuffle_ps(temp0_98, temp0_98, 0xaa)
float var_e4 = temp0_99[0]
int32_t result_1 = zmm5.d

if (temp0_62 s< 4)
    void* rbx_1 = arg1 + 0xf8
    int64_t rdi = sx.q(*(rbx_1 + 0x38))
    int32_t rax_2 = (rdi + 1).d
    *(rbx_1 + 0x38) = rax_2
    
    if (rax_2 s> *(rbx_1 + 0x3c))
        sub_140775760(rbx_1, rdi.d)
    
    void* rax_3 = *(rbx_1 + 0x30)
    int64_t rcx_3 = rdi * 3
    
    if (rax_3 != 0)
        rbx_1 = rax_3
    
    result = zx.q(result_1)
    *(rbx_1 + (rcx_3 << 2)) = var_e8.q
    *(rbx_1 + (rcx_3 << 2) + 8) = result.d
else if (temp0_62 == 4)
    void* rax_4 = *(arg1 + 0x128)
    void* rdx_2 = arg1 + 0xf8
    float zmm3_1[0x4] = zx.o(0)
    zmm4 = zx.o(0)
    int64_t i_2 = 4
    
    if (rax_4 != 0)
        rdx_2 = rax_4
    
    int64_t rax_5 = 0
    int64_t i
    
    do
        zmm11[0] = zmm11[0] f+ *(rdx_2 + rax_5)
        zmm3_1[0] = zmm3_1[0] f+ *(rdx_2 + rax_5 + 4)
        zmm4.d = zmm4.d f+ *(rdx_2 + rax_5 + 8)
        rax_5 += 0xc
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t i_1 = 0
    zmm11[0] = zmm11[0] * 0.25f
    result = nullptr
    zmm3_1[0] = zmm3_1[0] * 0.25f
    zmm4.d = zmm4.d f* 0.25f
    zmm11[0] = zmm11[0] - temp0_98[0]
    zmm3_1[0] = zmm3_1[0] - temp0_99[0]
    zmm0.d = zmm4.d f- zmm5.d
    zmm5 = 0x7f7fffff
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
    zmm0.d = zmm0.d f* zmm0.d
    zmm3_1[0] = zmm3_1[0] + zmm11[0]
    zmm3_1[0] = zmm3_1[0] f+ zmm0.d
    int32_t i_3
    float temp0_101[0x4]
    
    do
        zmm3_1[0] = zmm3_1[0] f- *(result + rdx_2 + 4)
        zmm11[0] = zmm11[0] f- *(result + rdx_2)
        i_3 = i_1
        zmm0.d = zmm4.d f- *(result + rdx_2 + 8)
        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
        zmm11[0] = zmm11[0] * zmm11[0]
        zmm0.d = zmm0.d f* zmm0.d
        zmm3_1[0] = zmm3_1[0] + zmm11[0]
        zmm3_1[0] = zmm3_1[0] f+ zmm0.d
        bool cond:3_1 = zmm5.d f<= zmm3_1[0]
        temp0_101 = _mm_min_ss(zmm3_1[0], zmm5.d)
        
        if (cond:3_1)
            i_3 = i_4
        
        i_1 += 1
        result = &result[3]
        i_4 = i_3
        zmm5 = temp0_101
    while (i_1 s< 4)
    
    if (not(zmm3_1[0] <= temp0_101[0]))
        int64_t rcx_4 = sx.q(i_3) * 3
        result = zx.q(result_1)
        *(rdx_2 + (rcx_4 << 2)) = var_e8.q
        *(rdx_2 + (rcx_4 << 2) + 8) = result.d

return result
