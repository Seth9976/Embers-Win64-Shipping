// 函数: sub_14219fb10
// 地址: 0x14219fb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
void* r15 = *(arg2 + 0x18)
int32_t rbx = 0
int32_t arg_18 = arg3
float zmm6[0x4]
float var_48[0x4] = zmm6
int32_t* result_2 = nullptr
int32_t* result_1
__builtin_memset(&result_1, 0, 0x38)
int32_t* arg_10 = nullptr
int32_t* var_128 = nullptr
int64_t var_100
int64_t var_f8
int64_t var_f0
int64_t var_e8
int64_t var_e0
int64_t var_d8
int32_t* result = (*(rax + 0x388))(arg1, arg4, arg5, &arg_18, &result_2, &var_d8, &var_e0, &var_e8, 
    &var_f0, &var_f8, &result_1, &var_100, &arg_10, &var_128)
float zmm2[0x4]

if (*(arg2 + 0x1d8) == 0)
    zmm2 = *(r15 + 0x1d0)
    int64_t* result_5 = result_2
    zmm6 = data_142d4cc00
    float var_130_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *result_5 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    result_5[1].d = var_130_1
    float temp0_4[0x4] = __mulps_xmmps_memps(zmm6, *(r15 + 0x1e0))
    int32_t* result_6 = result_2
    float zmm5_1[0x4] = *(r15 + 0x1c0)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_5)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_21[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18)
    float var_130_2 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
    *(result_6 + 0xc) = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
    result_6[5] = var_130_2
    result = result_2
    result[6] = 0x3f800000

float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm0[0x4]

if (*(arg2 + 0x1e0) == 0 && *(arg2 + 0x218) == 0)
    zmm0 = sub_141fe5610(&arg1[0xc], *(arg5 + 0xc), r15, nullptr)
    float zmm4_2[0x4] = *(r15 + 0x1c0)
    float temp0_25[0x4] = __mulps_xmmps_memps(data_142d4cc00, *(r15 + 0x1e0))
    float temp0_26[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
    float temp0_28[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
    float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xc9), temp0_26)
    float temp0_33[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xd2), temp0_27), temp0_30)
    float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
    float temp0_35[0x4] = _mm_mul_ps(temp0_28, temp0_34)
    float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), temp0_27)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
    float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_25)
    zmm6 = _mm_add_ps(_mm_sub_ps(temp0_37, _mm_mul_ps(temp0_38, temp0_26)), temp0_39)
    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    float temp0_44[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    temp0_44[0] = temp0_44[0] * temp0_44[0]
    zmm8[0] = zmm8[0] + zmm6[0]
    zmm8[0] = zmm8[0] + temp0_44[0]
    
    if (not(zmm8[0] <= 9.99999994e-09f))
        zmm4_2 = 0x3f000000
        float zmm3_1[0x4] = zx.o(0)
        zmm2 = 0x3f000000
        zmm3_1[0] = zmm8[0]
        float temp0_45[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        temp0_45[0] = temp0_45[0] * temp0_45[0]
        zmm3_1[0] = zmm3_1[0] * temp0_45[0]
        zmm2[0] = 0.5f - zmm3_1[0]
        temp0_45[0] = temp0_45[0] * zmm2[0]
        temp0_45[0] = temp0_45[0] + temp0_45[0]
        temp0_45[0] = temp0_45[0] * temp0_45[0]
        zmm3_1[0] = zmm3_1[0] * temp0_45[0]
        zmm4_2[0] = 0.5f - zmm3_1[0]
        temp0_45[0] = temp0_45[0] * zmm4_2[0]
        temp0_45[0] = temp0_45[0] + temp0_45[0]
        arg5.d = temp0_45[0]
        temp0_45[0] = temp0_45[0] * zmm6[0]
        temp0_45[0] = temp0_45[0] * zmm8[0]
        zmm6 = temp0_45
        temp0_44[0] = temp0_44[0] * temp0_45[0]
        zmm8 = temp0_45
    
    int32_t* result_7 = result_2
    temp0_44[0] = temp0_44[0] * zmm0[0]
    zmm6[0] = zmm6[0] * zmm0[0]
    temp0_44[0] = temp0_44[0] f+ result_7[2]
    zmm8[0] = zmm8[0] * zmm0[0]
    zmm6[0] = zmm6[0] f+ *result_7
    zmm8[0] = zmm8[0] f+ result_7[1]
    float var_130_3 = temp0_44[0]
    *(result_7 + 0x1c) = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
    result_7[9] = var_130_3
    int32_t* result_8 = result_2
    float var_130_4 = (temp0_44 ^ 0x80000000)[0]
    *(result_8 + 0x28) = (_mm_unpacklo_ps(zmm6 ^ 0x80000000, (zmm8 ^ 0x80000000)[0].q)).q
    result_8[0xc] = var_130_4
    result = result_2
    result[0xd] = 0x3f800000

int32_t* rdi_1 = arg_10
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
int64_t var_138
int32_t var_118
int32_t var_114
int32_t var_110
int32_t var_10c

if (rdi_1 != 0)
    char rcx_2 = (*rdi_1).b
    
    if ((rcx_2 & 1) != 0)
        int32_t* result_3 = result_2
        zmm0 = *result_3
        
        if ((rcx_2 & 2) != 0)
            zmm0[0] = zmm0[0] f* rdi_1[1]
            *result_3 = zmm0[0]
            zmm0 = rdi_1[2]
            zmm0[0] = zmm0[0] f* result_3[1]
            result_3[1] = zmm0[0]
            arg4 = rdi_1[3]
            arg4[0] = arg4[0] f* result_3[2]
        else
            zmm0[0] = zmm0[0] f+ rdi_1[1]
            *result_3 = zmm0[0]
            zmm0 = rdi_1[2]
            zmm0[0] = zmm0[0] f+ result_3[1]
            result_3[1] = zmm0[0]
            arg4 = rdi_1[3]
            arg4[0] = arg4[0] f+ result_3[2]
        
        result_3[2] = arg4[0]
        rdi_1 = arg_10
    
    void* rax_5 = *(arg2 + 0x1f0)
    char rcx_4
    
    if (rax_5 == 0)
        rcx_4 = 0
    else
        rcx_4 = (*(rax_5 + 0xd0)).b & 1
    
    int32_t* result_9 = result_2
    
    if ((*rdi_1 & 4) != 0)
        if (rcx_4 != 0)
            arg4 = zx.o(*(rdi_1 + 0x10))
            int32_t rax_7 = rdi_1[6]
            zmm11 = _mm_shuffle_ps(arg4, arg4, 0x55)
            zmm12 = rax_7
            var_138 = arg4.q
            zmm13 = var_138.d
        else
            var_138 = 0x3f800000
            int32_t var_130_5 = 0
            sub_140ad6660(&var_118, &var_138, &result_9[3])
            zmm9 = var_114
            zmm11 = var_110
            zmm13 = zmm9
            zmm12 = var_118
            zmm0 = zx.o(*(rdi_1 + 0x10))
            float zmm3_2[0x4] = var_10c
            int32_t rax_6 = rdi_1[6]
            var_138 = zmm0.q
            float zmm5_3[0x4] = var_138.d
            float temp0_48[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm5_3[0] = zmm5_3[0] * zmm11[0]
            temp0_48[0] = temp0_48[0] * zmm11[0]
            zmm10 = rax_6
            float zmm4_3 = temp0_48[0] * zmm12[0]
            zmm10[0] = zmm10[0] * zmm9[0]
            zmm10[0] = zmm10[0] - temp0_48[0]
            zmm10[0] = zmm10[0] * zmm12[0]
            zmm5_3[0] = zmm5_3[0] - zmm10[0]
            zmm5_3[0] = zmm5_3[0] * zmm9[0]
            zmm10[0] = zmm10[0] + zmm10[0]
            zmm4_3 = zmm4_3 - zmm5_3[0]
            zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
            zmm11[0] = zmm11[0] * zmm10[0]
            zmm3_2[0] = zmm3_2[0] * zmm10[0]
            zmm4_3 = zmm4_3 + zmm4_3
            zmm9[0] = zmm9[0] * zmm10[0]
            zmm11[0] = zmm11[0] * zmm5_3[0]
            zmm5_3[0] = zmm5_3[0] + zmm3_2[0]
            zmm3_2[0] = zmm3_2[0] * zmm5_3[0]
            zmm13[0] = zmm13[0] * zmm4_3
            zmm3_2[0] = zmm3_2[0] * zmm4_3
            temp0_48[0] = temp0_48[0] + zmm3_2[0]
            zmm13[0] = zmm13[0] - zmm11[0]
            zmm12[0] = zmm12[0] * zmm5_3[0]
            zmm12[0] = zmm12[0] * zmm4_3
            zmm10[0] = zmm10[0] + zmm3_2[0]
            zmm12[0] = zmm12[0] - zmm9[0]
            zmm13[0] = zmm13[0] + zmm5_3[0]
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm12[0] = zmm12[0] + zmm10[0]
            zmm11[0] = zmm11[0] + temp0_48[0]
        
        zmm0 = result_9[3]
        arg4 = result_9[4]
        zmm2 = result_9[5]
        
        if (((*rdi_1).b & 8) != 0)
            zmm13[0] = zmm13[0] * zmm0[0]
            zmm11[0] = zmm11[0] * arg4[0]
            zmm12[0] = zmm12[0] * zmm2[0]
        else
            zmm13[0] = zmm13[0] + zmm0[0]
            zmm11[0] = zmm11[0] + arg4[0]
            zmm12[0] = zmm12[0] + zmm2[0]
        
        result_9[3] = zmm13[0]
        result_9[4] = zmm11[0]
        result_9[5] = zmm12[0]
        rdi_1 = arg_10
    
    char rcx_6 = (*rdi_1).b
    result = result_2
    
    if ((rcx_6 & 0x10) != 0)
        arg4 = rdi_1[7]
        zmm0 = result[6]
        
        if ((rcx_6 & 0x20) != 0)
            zmm0[0] = zmm0[0] * arg4[0]
        else
            zmm0[0] = zmm0[0] + arg4[0]
        
        result[6] = zmm0[0]

int32_t* rdi_2 = var_128

if (rdi_2 != 0)
    char rcx_7 = (*rdi_2).b
    int32_t* result_4 = result_2
    
    if ((rcx_7 & 1) != 0)
        if ((rcx_7 & 2) != 0)
            zmm0 = rdi_2[1]
            zmm0[0] = zmm0[0] f* result_4[7]
            result_4[7] = zmm0[0]
            arg4 = rdi_2[2]
            arg4[0] = arg4[0] f* result_4[8]
            result_4[8] = arg4[0]
            zmm0 = rdi_2[3]
            zmm0[0] = zmm0[0] f* result_4[9]
        else
            zmm0 = result_4[7]
            zmm0[0] = zmm0[0] f+ rdi_2[1]
            result_4[7] = zmm0[0]
            arg4 = rdi_2[2]
            arg4[0] = arg4[0] f+ result_4[8]
            result_4[8] = arg4[0]
            zmm0 = rdi_2[3]
            zmm0[0] = zmm0[0] f+ result_4[9]
        
        result_4[9] = zmm0[0]
        rdi_2 = var_128
    
    void* rax_9 = *(arg2 + 0x200)
    char rcx_9
    
    if (rax_9 == 0)
        rcx_9 = 0
    else
        rcx_9 = (*(rax_9 + 0xd0)).b & 1
    
    int32_t* result_10 = result_2
    
    if ((*rdi_2 & 4) != 0)
        if (rcx_9 != 0)
            arg4 = zx.o(*(rdi_2 + 0x10))
            int32_t rax_11 = rdi_2[6]
            zmm11 = _mm_shuffle_ps(arg4, arg4, 0x55)
            zmm12 = rax_11
            var_138 = arg4.q
            zmm13 = var_138.d
        else
            var_138 = 0x3f800000
            int32_t var_130_8 = 0
            sub_140ad6660(&var_118, &var_138, &result_10[0xa])
            zmm9 = var_114
            zmm11 = var_110
            zmm13 = zmm9
            zmm12 = var_118
            zmm0 = zx.o(*(rdi_2 + 0x10))
            float zmm3_3[0x4] = var_10c
            int32_t rax_10 = rdi_2[6]
            var_138 = zmm0.q
            float zmm5_4[0x4] = var_138.d
            float temp0_50[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm5_4[0] = zmm5_4[0] * zmm11[0]
            temp0_50[0] = temp0_50[0] * zmm11[0]
            zmm10 = rax_10
            float zmm4_4 = temp0_50[0] * zmm12[0]
            zmm10[0] = zmm10[0] * zmm9[0]
            zmm10[0] = zmm10[0] - temp0_50[0]
            zmm10[0] = zmm10[0] * zmm12[0]
            zmm5_4[0] = zmm5_4[0] - zmm10[0]
            zmm5_4[0] = zmm5_4[0] * zmm9[0]
            zmm10[0] = zmm10[0] + zmm10[0]
            zmm4_4 = zmm4_4 - zmm5_4[0]
            zmm5_4[0] = zmm5_4[0] + zmm5_4[0]
            zmm11[0] = zmm11[0] * zmm10[0]
            zmm3_3[0] = zmm3_3[0] * zmm10[0]
            zmm4_4 = zmm4_4 + zmm4_4
            zmm9[0] = zmm9[0] * zmm10[0]
            zmm11[0] = zmm11[0] * zmm5_4[0]
            zmm5_4[0] = zmm5_4[0] + zmm3_3[0]
            zmm3_3[0] = zmm3_3[0] * zmm5_4[0]
            zmm13[0] = zmm13[0] * zmm4_4
            zmm3_3[0] = zmm3_3[0] * zmm4_4
            temp0_50[0] = temp0_50[0] + zmm3_3[0]
            zmm13[0] = zmm13[0] - zmm11[0]
            zmm12[0] = zmm12[0] * zmm5_4[0]
            zmm12[0] = zmm12[0] * zmm4_4
            zmm10[0] = zmm10[0] + zmm3_3[0]
            zmm12[0] = zmm12[0] - zmm9[0]
            zmm13[0] = zmm13[0] + zmm5_4[0]
            zmm11[0] = zmm11[0] - zmm12[0]
            zmm12[0] = zmm12[0] + zmm10[0]
            zmm11[0] = zmm11[0] + temp0_50[0]
        
        zmm0 = result_10[0xa]
        arg4 = result_10[0xb]
        zmm2 = result_10[0xc]
        
        if (((*rdi_2).b & 8) != 0)
            zmm13[0] = zmm13[0] * zmm0[0]
            zmm11[0] = zmm11[0] * arg4[0]
            zmm12[0] = zmm12[0] * zmm2[0]
        else
            zmm13[0] = zmm13[0] + zmm0[0]
            zmm11[0] = zmm11[0] + arg4[0]
            zmm12[0] = zmm12[0] + zmm2[0]
        
        result_10[0xa] = zmm13[0]
        result_10[0xb] = zmm11[0]
        result_10[0xc] = zmm12[0]
        rdi_2 = var_128
    
    char rcx_11 = (*rdi_2).b
    result = result_2
    
    if ((rcx_11 & 0x10) != 0)
        zmm0 = rdi_2[7]
        arg4 = result[0xd]
        
        if ((rcx_11 & 0x20) != 0)
            zmm0[0] = zmm0[0] * arg4[0]
        else
            zmm0[0] = zmm0[0] + arg4[0]
        
        result[0xd] = zmm0[0]

if (arg1[0x12].b != 0)
    void* rcx_12 = *(arg2 + 0x1e8)
    int32_t rdx_6
    
    if (rcx_12 == 0 || (*(rcx_12 + 0x30) & 1) == 0)
        int32_t rdx_7 = arg1[9].d
        
        if (rdx_7 == 0)
            rdx_6 = 2
        else
            rdx_6 = rdx_7 + 1
    else
        int32_t rax_14 = *(rcx_12 + 0x150)
        int32_t rcx_13 = 1
        
        if (rax_14 != 0)
            rcx_13 = rax_14
        
        rdx_6 = ((result_2[0xe] s>> 0xc & 0xfff) + 1) * rcx_13
    
    result = zx.q(rdx_6 - 1)
    int128_t zmm14
    zmm14.d = 1f / _mm_cvtepi32_ps(zx.o(result.d))[0]
    
    if (rdx_6 s> 0)
        int64_t i = 0
        
        do
            float temp0_53[0x4] = _mm_cvtepi32_ps(zx.o(rbx))
            temp0_53[0] = temp0_53[0] f* zmm14.d
            int128_t zmm0_1
            int512_t zmm1
            int512_t zmm6_1
            int128_t zmm7_1
            zmm0_1, zmm1, zmm6_1, zmm7_1 = sub_141fe5610(&arg1[0x13], temp0_53, r15, nullptr)
            zmm1.o = zmm7_1
            zmm6_1.o = zmm0_1
            int32_t zmm0_2
            zmm0_2, zmm6 = sub_141fe5610(&arg1[0x19], zmm1, r15, nullptr)
            result = result_1
            rbx += 1
            zmm6[0] = zmm6[0] f* zmm0_2
            result[i] = zmm6[0]
            i += 1
        while (i s< sx.q(rdx_6))

return result
