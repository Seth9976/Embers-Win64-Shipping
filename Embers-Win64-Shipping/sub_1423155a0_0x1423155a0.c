// 函数: sub_1423155a0
// 地址: 0x1423155a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x158)
int64_t rax_1 = (*(*rcx + 0x50))(rcx)
int64_t rbx = sx.q(arg2[1].d)
int32_t r9 = *(arg1 + 0x1a0)
int32_t r8 = r9 + rbx.d

if (r8 s> rbx.d)
    arg2[1].d = r8
    
    if (r8 s> *(arg2 + 0xc))
        sub_1405c4e40(arg2)
else if (r8 s< rbx.d)
    int32_t r9_1 = neg.d(r9)
    
    if (r9_1 != 0)
        arg2[1].d = rbx.d - r9_1

int32_t* rdx_1 = *(arg1 + 0x198)
int64_t result = sx.q(*(arg1 + 0x1a0))
void* r9_2 = &rdx_1[result * 9]

if (rdx_1 != r9_2)
    void* rcx_3 = &rdx_1[3]
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    float zmm12[0x4]
    float var_78_1[0x4] = zmm12
    int32_t var_ac_1 = 0x3f800000
    int32_t var_9c_1 = 0
    int64_t r10_2 = rbx << 5
    
    do
        float zmm3[0x4] = *(arg1 + 0x80)
        float zmm4_1[0x4] = *(arg1 + 0x90)
        float zmm5_1[0x4] = *(arg1 + 0xa0)
        zmm6 = *(arg1 + 0xb0)
        int128_t* rax_6 = (sx.q(*rdx_1) << 6) + *rax_1
        float zmm2[0x4] = *rax_6
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        float temp0_6[0x4] = _mm_mul_ps(temp0_1, zmm4_1)
        float temp0_7[0x4] = _mm_mul_ps(temp0_2, zmm5_1)
        float temp0_11[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_3, zmm3), temp0_6), temp0_7), temp0_5)
        zmm2 = rax_6[1]
        float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        float temp0_17[0x4] = _mm_mul_ps(temp0_12, zmm4_1)
        float temp0_18[0x4] = _mm_mul_ps(temp0_13, zmm5_1)
        float temp0_22[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_14, zmm3), temp0_17), temp0_18), temp0_16)
        zmm2 = rax_6[2]
        float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        float temp0_28[0x4] = _mm_mul_ps(temp0_23, zmm4_1)
        float temp0_29[0x4] = _mm_mul_ps(temp0_24, zmm5_1)
        float temp0_33[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_25, zmm3), temp0_28), temp0_29), temp0_27)
        zmm2 = rax_6[3]
        float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        float temp0_39[0x4] = _mm_mul_ps(temp0_34, zmm3)
        zmm3 = zx.o(0)
        float temp0_40[0x4] = _mm_mul_ps(temp0_35, zmm4_1)
        float temp0_41[0x4] = _mm_mul_ps(temp0_36, zmm5_1)
        float temp0_42[0x4] = _mm_add_ps(temp0_39, temp0_40)
        float temp0_43[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x55)
        temp0_43[0] = temp0_43[0] * temp0_43[0]
        float temp0_44[0x4] = _mm_add_ps(temp0_42, temp0_41)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xaa)
        temp0_45[0] = temp0_45[0] * temp0_45[0]
        float temp0_46[0x4] = _mm_add_ps(temp0_44, temp0_38)
        temp0_11[0] = temp0_11[0] * temp0_11[0]
        temp0_11[0] = temp0_11[0] + temp0_43[0]
        temp0_11[0] = temp0_11[0] + temp0_45[0]
        
        if (not(temp0_11[0] <= 9.99999994e-09f))
            zmm3 = _mm_sqrt_ss(0, temp0_11[0])
        
        temp0_22[0] = temp0_22[0] * temp0_22[0]
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
        zmm9 = zx.o(0)
        temp0_48[0] = temp0_48[0] * temp0_48[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
        temp0_49[0] = temp0_49[0] * temp0_49[0]
        temp0_22[0] = temp0_22[0] + temp0_48[0]
        temp0_22[0] = temp0_22[0] + temp0_49[0]
        
        if (not(temp0_22[0] <= 9.99999994e-09f))
            zmm9 = _mm_sqrt_ss(zmm9[0], temp0_22[0])
        
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
        temp0_51[0] = temp0_51[0] * temp0_51[0]
        temp0_33[0] = temp0_33[0] * temp0_33[0]
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
        temp0_52[0] = temp0_52[0] * temp0_52[0]
        temp0_33[0] = temp0_33[0] + temp0_51[0]
        float zmm0[0x4] = zx.o(0)
        temp0_33[0] = temp0_33[0] + temp0_52[0]
        
        if (not(temp0_33[0] <= 9.99999994e-09f))
            zmm0 = _mm_sqrt_ss(0, temp0_33[0])
        
        float zmm1[0x4] = *(rcx_3 - 4)
        float temp0_54[0x4] = _mm_max_ss(zmm9[0], zmm3[0])
        zmm2 = *rcx_3
        int64_t* r8_2 = *arg2 + r10_2
        int64_t var_98_1 = 0
        r10_2 += 0x20
        float temp0_55[0x4] = _mm_max_ss(temp0_54[0], zmm0[0])
        int32_t var_90_1 = 0
        float var_b8[0x4]
        var_b8[0] = (*(rcx_3 - 8))[0]
        int64_t var_98_2 = 0
        float temp0_56[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
        temp0_56[0] = zmm1[0]
        int32_t var_90_2 = 0
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc6)
        temp0_57[0] = zmm2[0]
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
        var_b8 = temp0_58
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
        float temp0_62[0x4] = _mm_mul_ps(temp0_60, temp0_33)
        float temp0_63[0x4] = _mm_mul_ps(temp0_61, temp0_22)
        float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_11)
        float temp0_66[0x4] = _mm_mul_ps(temp0_59, temp0_46)
        float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_65)
        float temp0_69[0x4] = _mm_add_ps(_mm_add_ps(temp0_66, temp0_62), temp0_67)
        float var_d0_1 = _mm_shuffle_ps(temp0_69, temp0_69, 0xaa)[0]
        *r8_2 = (_mm_unpacklo_ps(temp0_69, _mm_shuffle_ps(temp0_69, temp0_69, 0x55)[0].q)).q
        r8_2[1].d = var_d0_1
        temp0_55[0] = temp0_55[0] f* *(rcx_3 + 4)
        *(r8_2 + 0xc) = temp0_55[0]
        zmm0 = *(rcx_3 + 0x10)
        float var_a8[0x4]
        var_a8[0] = (*(rcx_3 + 8))[0]
        zmm2 = *(rcx_3 + 0xc)
        float temp0_73[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
        temp0_73[0] = zmm2[0]
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc6)
        temp0_74[0] = zmm0[0]
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
        var_a8 = temp0_75
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xff)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xaa)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x55), temp0_22)
        float temp0_80[0x4] = _mm_mul_ps(temp0_77, temp0_33)
        float temp0_81[0x4] = _mm_mul_ps(temp0_76, temp0_46)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0), temp0_11)
        zmm6 = _mm_add_ps(_mm_add_ps(temp0_81, temp0_80), _mm_add_ps(temp0_79, temp0_83))
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        zmm7[0] = zmm7[0] + zmm6[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        
        if (zmm7[0] <= 9.99999994e-09f)
            zmm6 = zx.o(0)
            zmm7 = zx.o(0)
            zmm8 = zx.o(0)
        else
            zmm3 = zx.o(0)
            zmm4_1 = zx.o(0)
            zmm4_1[0] = 0x3f000000
            zmm3[0] = zmm7[0]
            float temp0_89[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_89[0] = temp0_89[0] * temp0_89[0]
            zmm3[0] = zmm3[0] * temp0_89[0]
            zmm4_1[0] = zmm4_1[0] - zmm3[0]
            temp0_89[0] = temp0_89[0] * zmm4_1[0]
            temp0_89[0] = temp0_89[0] + temp0_89[0]
            temp0_89[0] = temp0_89[0] * temp0_89[0]
            zmm3[0] = zmm3[0] * temp0_89[0]
            zmm4_1[0] = 0.5f - zmm3[0]
            temp0_89[0] = temp0_89[0] * zmm4_1[0]
            temp0_89[0] = temp0_89[0] + temp0_89[0]
            zmm6[0] = zmm6[0] * temp0_89[0]
            zmm7[0] = zmm7[0] * temp0_89[0]
            zmm8[0] = zmm8[0] * temp0_89[0]
        
        result = zx.q(zmm8[0])
        rdx_1 = &rdx_1[9]
        r8_2[2] = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
        r8_2[3].d = result.d
        temp0_55[0] = temp0_55[0] f* *(rcx_3 + 0x14)
        rcx_3 += 0x24
        *(r8_2 + 0x1c) = temp0_55[0]
    while (rdx_1 != r9_2)

return result
