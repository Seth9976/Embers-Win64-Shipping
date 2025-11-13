// 函数: sub_1400be400
// 地址: 0x1400be400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_48[0x4] = zmm13
float zmm12[0x4]
float var_58[0x4] = zmm12
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm10[0x4]
float var_78[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_88[0x4] = zmm9
int32_t zmm8[0x4]
int32_t var_98[0x4] = zmm8
float zmm7[0x4]
float var_a8[0x4] = zmm7
float zmm6[0x4]
float var_b8[0x4] = zmm6
int32_t rbx_4 = ((arg7 s>> 0x1f u>> 0x1e) + arg7) & 0xfffffffc
int32_t result
uint64_t rdi
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]

if (rbx_4 s<= 0)
    rdi = 0
    result = 0
else
    result = 0
    zmm8 = data_142e11d00
    rdi = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            int64_t rax_2 = sx.q((rdi << 2).d * 3)
            zmm0 = *(arg4 + rax_2)
            zmm2 = *(arg4 + rax_2 + 0x10)
            zmm4 = *(arg4 + rax_2 + 0x20)
            uint32_t temp0_1[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_2[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm2, 0xec)
            zmm1 = _mm_blend_epi16(_mm_shuffle_epi32(zmm4, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xf0), temp0_1, 3)
            zmm5 = _mm_blend_epi16(_mm_shuffle_epi32(zmm4, 0xa4), zmm0, 0x3f)
            zmm3 = _mm_shuffle_ps(_mm_blend_epi16(temp0_2, zmm2, 0xc), zmm4, 0xc4)
            uint32_t var_1f8_1[0x4] = zmm1
            int128_t var_1c8_1 = zx.o(0)
            zmm2 = *(arg3 + 0xc)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float var_138_1[0x4] = temp0_12
            float var_128_1[0x4] = temp0_12
            float var_118_1[0x4] = temp0_12
            float var_108_1[0x4] = temp0_12
            zmm11 = *arg3
            zmm10 = *(arg3 + 4)
            zmm12 = *(arg3 + 8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            zmm0 = _mm_mul_ps(temp0_13, zmm3)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_16[0x4] = _mm_mul_ps(temp0_15, zmm1)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            float temp0_18[0x4] = _mm_mul_ps(temp0_17, zmm5)
            zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm5, temp0_15))
            float temp0_22[0x4] = _mm_sub_ps(temp0_16, _mm_mul_ps(zmm3, temp0_17))
            float temp0_24[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(zmm1, temp0_13))
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_22)
            float temp0_27[0x4] = _mm_add_ps(temp0_24, temp0_24)
            zmm1 = _mm_mul_ps(temp0_12, zmm0)
            float temp0_29[0x4] = _mm_mul_ps(temp0_12, temp0_26)
            float temp0_30[0x4] = _mm_mul_ps(temp0_12, temp0_27)
            zmm1 = __addps_xmmps_memps(zmm1, var_1f8_1)
            float temp0_32[0x4] = __addps_xmmps_memps(temp0_29, zmm5)
            float temp0_33[0x4] = __addps_xmmps_memps(temp0_30, zmm3)
            zmm5 = _mm_mul_ps(temp0_27, temp0_13)
            zmm4 = _mm_mul_ps(zmm0, temp0_15)
            zmm3 = _mm_mul_ps(temp0_26, temp0_17)
            zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_26, temp0_15)), zmm1)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_27, temp0_17)), temp0_32)
            zmm3 = _mm_add_ps(_mm_sub_ps(zmm3, _mm_mul_ps(zmm0, temp0_13)), temp0_33)
            zmm2 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_47[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm5)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4)
            zmm1 = *(arg3 + 0x18)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
            zmm3 = *arg2
            zmm4 = (*arg2)[1]
            float temp0_53[0x4] = _mm_sub_ps(temp0_47, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm3 = (*arg2)[2]
            zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm3 = *arg1
            zmm4 = (*arg1)[1]
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_53)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0), zmm3)
            zmm2 = (*arg1)[2]
            float temp0_65[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1), zmm4)
            zmm0 = *arg6
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_65, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_2 == 0)
                result = 0
                rdi = zx.q(rdi.d + 4)
                
                if (rdi.d s>= rbx_4)
                    break
                
                continue
            else
                zmm3 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rdi.d), 0), zmm8)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rbp_1
                    
                    if (i == 0)
                        rbp_1 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400be6b1:
                            float var_198[0x4] = temp0_65
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg6 = zx.o(var_198[rbp_2])[0]
                            uint32_t var_188[0x4] = zmm3
                            *arg5 = var_188[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400be6b1
                    result.b = 1
                while (i != 0)
        
        rdi = zx.q(rdi.d + 4)
        
        if (rdi.d s>= rbx_4)
            break

if (rdi.d s< arg7)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        int32_t temp0_71[0x4] =
            __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
        int32_t temp0_73[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg7), 0), temp0_71)
        zmm0 = _mm_mullo_epi32(data_142fc95c0, temp0_71) & temp0_73
        int64_t rax_5 = sx.q(zmm0[0])
        void* rbx_5 = arg4 + (rax_5 << 2)
        zmm2 = *(arg4 + (rax_5 << 2))
        int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm0, 1))
        void* r14_1 = arg4 + (rbp_3 << 2)
        int64_t rax_7 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* r15_1 = arg4 + (rax_7 << 2)
        int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        void* rdi_2 = arg4 + (rsi_2 << 2)
        float temp0_80[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, *(arg4 + (rbp_3 << 2)), 0x10), 
                *(arg4 + (rax_7 << 2)), 0x20), 
            *(arg4 + (rsi_2 << 2)), 0x30)
        zmm0 = data_142fc95e0 & temp0_73
        zmm10 = *(zx.q(zmm0[0]) + rbx_5)
        uint64_t rax_9 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rbp_4 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rsi_3 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_86[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm10, *(rax_9 + r14_1), 0x10), 
                *(rbp_4 + r15_1), 0x20), 
            *(rsi_3 + rdi_2), 0x30)
        zmm0 = data_142fc95f0 & temp0_73
        zmm6 = *(zx.q(zmm0[0]) + rbx_5)
        int32_t* rax_11 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rbp_5 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_6 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_92[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_11 + r14_1), 0x10), 
                *(rbp_5 + r15_1), 0x20), 
            *(rbx_6 + rdi_2), 0x30)
        zmm4 = zx.o(0)
        uint32_t var_148_1[0x4] = zmm4
        zmm7 = *(arg3 + 0xc)
        float temp0_93[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float var_138_2[0x4] = temp0_93
        float var_128_2[0x4] = temp0_93
        float var_118_2[0x4] = temp0_93
        float var_108_2[0x4] = temp0_93
        zmm0 = *arg3
        zmm1 = *(arg3 + 4)
        zmm3 = *(arg3 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm5 = _mm_mul_ps(temp0_86, zmm0)
        zmm0 = _mm_mul_ps(zmm0, temp0_92)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, zmm1)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm1 = _mm_mul_ps(zmm1, temp0_80)
        float temp0_101[0x4] = _mm_mul_ps(temp0_80, zmm3)
        zmm4 = _mm_mul_ps(zmm4, temp0_93)
        float temp0_104[0x4] = _mm_sub_ps(temp0_98, _mm_mul_ps(zmm3, temp0_86))
        float temp0_105[0x4] = _mm_sub_ps(temp0_101, zmm0)
        zmm5 = _mm_sub_ps(zmm5, zmm1)
        zmm4 = _mm_sub_ps(zmm4, zmm4)
        float temp0_108[0x4] = _mm_add_ps(temp0_104, temp0_104)
        float temp0_109[0x4] = _mm_add_ps(temp0_105, temp0_105)
        zmm5 = _mm_add_ps(zmm5, zmm5)
        zmm4 = _mm_add_ps(zmm4, zmm4)
        float var_1f8_2[0x4] = temp0_108
        float var_1e8_2[0x4] = temp0_109
        uint32_t var_1d8_2[0x4] = zmm5
        uint32_t var_1c8_2[0x4] = zmm4
        zmm0 = _mm_mul_ps(temp0_93, temp0_108)
        float temp0_113[0x4] = _mm_mul_ps(temp0_93, temp0_109)
        float temp0_114[0x4] = _mm_mul_ps(temp0_93, zmm5)
        zmm0 = __addps_xmmps_memps(zmm0, temp0_80)
        float temp0_116[0x4] = __addps_xmmps_memps(temp0_113, temp0_86)
        float temp0_117[0x4] = __addps_xmmps_memps(temp0_114, temp0_92)
        uint32_t var_f8_1[0x4] = zmm0
        float var_e8_1[0x4] = temp0_116
        float var_d8_1[0x4] = temp0_117
        uint32_t var_c8_1[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm4, temp0_93), var_148_1)
        zmm7 = *arg3
        zmm1 = *(arg3 + 4)
        zmm3 = *(arg3 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_121[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm4 = _mm_mul_ps(temp0_109, temp0_121)
        float temp0_123[0x4] = _mm_mul_ps(temp0_121, zmm5)
        zmm5 = _mm_mul_ps(zmm5, zmm1)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm1 = _mm_mul_ps(zmm1, temp0_108)
        float temp0_127[0x4] = _mm_mul_ps(temp0_108, zmm3)
        zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(zmm3, temp0_109))
        float temp0_130[0x4] = _mm_sub_ps(temp0_127, temp0_123)
        zmm4 = _mm_sub_ps(zmm4, zmm1)
        zmm5 = _mm_add_ps(zmm5, zmm0)
        float temp0_133[0x4] = _mm_add_ps(temp0_130, temp0_116)
        zmm4 = _mm_add_ps(zmm4, temp0_117)
        zmm2 = arg3[1].d
        zmm0 = *(arg3 + 0x14)
        float temp0_136[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm5)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_133)
        zmm1 = *(arg3 + 0x18)
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm4)
        zmm3 = *arg2
        zmm4 = (*arg2)[1]
        float temp0_142[0x4] = _mm_sub_ps(temp0_136, _mm_shuffle_ps(zmm3, zmm3, 0))
        zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0))
        zmm3 = (*arg2)[2]
        zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm3, zmm3, 0))
        zmm3 = *arg1
        zmm4 = (*arg1)[1]
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_142)
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0), zmm3)
        zmm2 = (*arg1)[2]
        float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1), zmm4)
        zmm0 = *arg6
        uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
            _mm_cmpeq_ps(temp0_154, _mm_shuffle_ps(zmm0, zmm0, 0), 1), temp0_73))
        
        if (i_3 == 0)
            return 0
        
        uint64_t i_1 = zx.q(i_3)
        result = 0
        
        do
            uint64_t rdx
            
            if (i_1 == 0)
                rdx = 0x40
                i_1 &= 0xfffffffffffffffe
                
                if ((result.b & 1) == 0)
                label_1400bea21:
                    float var_1b8[0x4] = temp0_154
                    uint64_t rdx_1 = zx.q(rdx.d) & 3
                    *arg6 = var_1b8[rdx_1][0]
                    int32_t var_1a8[0x4] = temp0_71
                    *arg5 = var_1a8[rdx_1]
            else
                uint64_t rflags_2
                rdx, rflags_2 = _bit_scan_forward(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400bea21
            result.b = 1
        while (i_1 != 0)

return result
