// 函数: sub_141d1cbd0
// 地址: 0x141d1cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg1)
void* rdi_2 = r15 * 0x50 + *(arg3 + 8)
uint64_t result = zx.q(*(rdi_2 + 8) - *(rdi_2 + 0x34))

if (result.d s> 0)
    int32_t rcx = 0
    int32_t rsi_1 = *(rdi_2 + 0x28)
    int32_t r8 = 0
    int32_t var_108_1 = 0
    int32_t var_104_1 = 1
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (rsi_1 != 0)
        void* rax_1 = *(rdi_2 + 0x20)
        void* r9 = rdi_2 + 0x10
        
        if (rax_1 != 0)
            r9 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rsi_1 - 1)
        int32_t rdx_2 = *r9
        
        if (rdx_2 != 0)
        label_141d1cc9b:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_104_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_f4_1.d = r8 - rax_9 + 0x1f
            
            if (r8 - rax_9 + 0x1f s> rsi_1)
                var_f4_1.d = rsi_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_f4_1:4.d = r8
                var_108_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                int32_t var_f8_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141d1cc9b
            
            var_f4_1.d = rsi_1
    
    int32_t rdx_4 = *(rdi_2 + 0x28)
    int128_t var_a8_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
    float var_b8_1[0x4] = var_108_1.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r9_2 = rdx_4 & 0xffffffe0
    int64_t var_c8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_f8_3 = r14_1
    var_f4_1.d = rdx_4
    float var_e8[0x4] = rdi_2.o
    
    if (rdx_4 != rsi_1)
        void* rax_11 = *(rdi_2 + 0x20)
        void* r10_1 = rdi_2 + 0x10
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_1 - 1)
        int32_t rcx_6 = *(r10_1 + (sx.q(r8_3) << 2)) & r14_1
        
        if (rcx_6 != 0)
        label_141d1cd73:
            int32_t rax_18 = neg.d(rcx_6) & rcx_6
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_f4_1.d = r9_2 - r11_1 + 0x1f
            
            if (r9_2 - r11_1 + 0x1f s> rsi_1)
                var_f4_1.d = rsi_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rcx_6 = *(r10_1 + (rcx_7 << 2) + 4)
                var_f8_3 = 0xffffffff
                
                if (rcx_6 != 0)
                    goto label_141d1cd73
            
            var_f4_1.d = rsi_1
    
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    
    while (true)
        result = sx.q(var_b8_1[3])
        int64_t* rdx_7 = var_e8[0].q
        
        if (result.d == (var_f8_3.q u>> 0x20).d && var_b8_1[0].q == rdi_2 + 0x10 && rdx_7 == rdi_2)
            break
        
        int64_t rdx_8 = *arg4
        int64_t rcx_10 = sx.q(*(*rdx_7 + result * 0xc))
        float (* rax_23)[0x4] = rcx_10 * 0x30 + *(arg2 + 8)
        float zmm3[0x4] = *rax_23
        zmm11 = rax_23[1]
        float temp0_5[0x4] = _mm_add_ps(zmm3, zmm3)
        double zmm2[0x2] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm3, temp0_5)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
        float temp0_14[0x4] =
            _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x1a), _mm_shuffle_ps(temp0_8, temp0_8, 1))
        float temp0_15[0x4] = _mm_mul_ps(temp0_7, temp0_11)
        float zmm1[0x4] = rax_23[2]
        float temp0_16[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        int128_t* rax_26 = (r15 << 6) + rdx_8
        float temp0_17[0x4] = _mm_add_ps(temp0_15, zmm2)
        zmm2 = _mm_sub_ps(zmm2, temp0_15)
        zmm3 = data_143f36f70
        zmm7 = rax_26[1]
        zmm8 = rax_26[2]
        zmm9 = rax_26[3]
        float temp0_19[0x4] = _mm_mul_ps(temp0_17, zmm1)
        float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm2)
        zmm2 = _mm_sub_ps(zmm3, temp0_14)
        zmm3[0].q = zmm11 u>> 0x40
        float temp0_22[0x4] = _mm_shuffle_ps(zmm11, zmm3, 0xc4)
        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(zmm2, zmm1), data_143f36f80)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_20, zmm2, 0x32)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm2, 0), temp0_25, 0x82)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_19, zmm2, 0x31)
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
        float temp0_31[0x4] = _mm_shuffle_ps(temp0_19, temp0_20, 0x12)
        float zmm5[0x4] = *rax_26
        float temp0_32[0x4] = _mm_mul_ps(temp0_29, zmm5)
        float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm2, 0x10), temp0_28, 0x88)
        float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0x55), zmm7)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), zmm9)
        float temp0_39[0x4] = _mm_add_ps(temp0_32, temp0_36)
        float temp0_40[0x4] = _mm_mul_ps(temp0_30, zmm8)
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_31, zmm2, 0xe8)
        float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x55), zmm7)
        float temp0_45[0x4] = _mm_add_ps(_mm_add_ps(temp0_39, temp0_40), temp0_38)
        float temp0_48[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0), zmm5), temp0_43)
        int64_t r8_5 = rcx_10 << 6
        float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xaa), zmm8)
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
        zmm2 = _mm_shuffle_ps(temp0_22, temp0_22, 0)
        float temp0_54[0x4] = _mm_add_ps(temp0_48, temp0_50)
        float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm7)
        *(r8_5 + rdx_8) = temp0_45
        float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xaa), zmm8)
        float temp0_58[0x4] = _mm_mul_ps(temp0_51, zmm5)
        zmm2 = _mm_mul_ps(zmm2, zmm5)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xff)
        float temp0_61[0x4] = _mm_add_ps(temp0_58, temp0_55)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
        float temp0_63[0x4] = _mm_mul_ps(temp0_60, zmm9)
        float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x55), zmm7)
        float temp0_66[0x4] = _mm_add_ps(temp0_61, temp0_57)
        float temp0_67[0x4] = _mm_mul_ps(temp0_62, zmm9)
        float temp0_68[0x4] = _mm_add_ps(temp0_54, temp0_63)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
        zmm2 = _mm_add_ps(zmm2, temp0_65)
        float temp0_71[0x4] = _mm_mul_ps(temp0_69, zmm8)
        float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_67)
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xff)
        *(r8_5 + rdx_8 + 0x10) = temp0_68
        float temp0_74[0x4] = _mm_mul_ps(temp0_73, zmm9)
        zmm2 = _mm_add_ps(zmm2, temp0_71)
        *(r8_5 + rdx_8 + 0x20) = temp0_72
        *(r8_5 + rdx_8 + 0x30) = _mm_add_ps(zmm2, temp0_74)
        sub_141d1cbd0(rcx_10, arg2, arg3, arg4, var_108_1, rdi_2 + 0x10, var_f8_3)
        var_b8_1[2] &= not.d(var_e8[3])
        sub_14059bdd0(&var_e8[2])

return result
