// 函数: sub_1426d3640
// 地址: 0x1426d3640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0xb8)
int32_t var_88
int32_t result = sub_1426cd560(arg1, rdi, arg1 + 0x70, arg1 + 0xc0, &var_88)

if (result.b != 0)
    int32_t var_78
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm11_1[0x4]
    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1 =
        sub_1426cd560(arg1, rdi, arg1 + 0x70, arg1 + 0x98, &var_78)
    
    if (result.b != 0)
        float var_18_1[0x4] = zmm6_1
        zmm6_1 = var_78
        float var_28_1[0x4] = zmm7_1
        int32_t var_74
        zmm7_1 = var_74
        float var_38_1[0x4] = zmm8_1
        zmm8_1 = var_88
        float var_48_1[0x4] = zmm9_1
        int32_t var_84
        zmm9_1 = var_84
        float zmm10[0x4] = zmm6_1
        float var_68_1[0x4] = zmm11_1
        zmm11_1 = zmm7_1
        zmm7_1[0] = zmm7_1[0] * zmm11_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm10[0]
        zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
        double zmm2_1
        
        if (not(zmm7_1[0] <= 9.99999994e-09f))
            float zmm5_1[0x4] = 0x3f000000
            float zmm3_1[0x4] = zmm7_1
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm7_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm3_1[0] = zmm3_1[0] * temp0_1[0]
            zmm2_1.d = 0.5f - zmm3_1[0]
            temp0_1[0] = temp0_1[0] f* zmm2_1.d
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            zmm7_1 = temp0_1
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm3_1[0] = zmm3_1[0] * temp0_1[0]
            zmm5_1[0] = 0.5f - zmm3_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
            zmm7_1[0] = zmm7_1[0] + temp0_1[0]
            zmm6_1 = zmm7_1
            zmm7_1[0] = zmm7_1[0] * zmm11_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm10[0]
        
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm8_1[0] = zmm8_1[0] + zmm9_1[0]
        
        if (not(zmm8_1[0] <= 9.99999994e-09f))
            float zmm4_1[0x4] = 0x3f000000
            float temp0_2[0x4] = _mm_rsqrt_ss(zmm8_1[0], zmm8_1[0])
            zmm8_1[0] = zmm8_1[0] * 0.5f
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm8_1[0] = zmm8_1[0] * temp0_2[0]
            zmm2_1.d = 0.5f - zmm8_1[0]
            temp0_2[0] = temp0_2[0] f* zmm2_1.d
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm8_1[0] = zmm8_1[0] * temp0_2[0]
            zmm4_1[0] = 0.5f - zmm8_1[0]
            temp0_2[0] = temp0_2[0] * zmm4_1[0]
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            zmm8_1[0] = zmm8_1[0] * temp0_2[0]
            zmm9_1[0] = zmm9_1[0] * temp0_2[0]
        
        float zmm0_1[0x4] = 0xbf800000
        zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
        
        if (not(zmm6_1[0] < -1f))
            zmm0_1 = __minss_xmmss_memss(zmm6_1[0], 0x3f800000)
        
        (*(arg1 + 0xe8))[0] > zmm6_1[0]
        sub_140a2e390(&var_78, u"Angle: %.0f (%s cone)", fconvert.d(acosf(zmm0_1[0]) * 57.2957764f))
        int64_t rdi_1 = sx.q(arg3[1].d)
        int32_t rax = (rdi_1 + 1).d
        arg3[1].d = rax
        
        if (rax s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        int64_t* rcx_5 = (rdi_1 << 4) + *arg3
        *rcx_5 = 0
        *rcx_5 = var_78.q
        var_78.q = 0
        int32_t var_70
        rcx_5[1].d = var_70
        int32_t result_1
        result = result_1
        *(rcx_5 + 0xc) = result
        int64_t rcx_6 = var_78.q
        var_70.q = 0
        
        if (rcx_6 != 0)
            return sub_140a74f90(rcx_6)

return result
