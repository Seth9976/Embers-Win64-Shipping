// 函数: sub_1400bf4f0
// 地址: 0x1400bf4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm12[0x4]
float var_78[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_88[0x4] = zmm11
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
float zmm7[0x4]
float var_c8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_d8[0x4] = zmm6
int32_t rdi_4 = ((arg7 s>> 0x1f u>> 0x1e) + arg7) & 0xfffffffc
int32_t result
uint64_t rbx
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
uint32_t zmm4[0x4]
float zmm5[0x4]

if (rdi_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    zmm10 = data_142ef1890
    zmm9 = data_142d3f640
    zmm11 = data_142d3f6c0
    rbx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            int64_t rax_2 = sx.q((rbx << 2).d * 3)
            zmm0 = *(arg4 + rax_2)
            zmm5 = *(arg4 + rax_2 + 0x10)
            zmm3 = *(arg4 + rax_2 + 0x20)
            uint32_t temp0_1[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
            uint32_t temp0_2[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm0 = _mm_shuffle_ps(zmm0, zmm5, 0xec)
            zmm1 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0x44), zmm0, 0x3f)
            zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xf0), temp0_1, 3)
            zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0xa4), zmm0, 0x3f)
            zmm6 = _mm_shuffle_ps(_mm_blend_epi16(temp0_2, zmm5, 0xc), zmm3, 0xc4)
            uint32_t var_218_1[0x4] = zmm1
            int128_t var_1e8_1 = zx.o(0)
            zmm5 = *(arg3 + 0xc)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float var_158_1[0x4] = temp0_12
            float var_148_1[0x4] = temp0_12
            float var_138_1[0x4] = temp0_12
            float var_128_1[0x4] = temp0_12
            zmm14 = *arg3
            zmm8 = *(arg3 + 4)
            zmm15 = *(arg3 + 8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_14[0x4] = _mm_mul_ps(temp0_13, zmm6)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_16[0x4] = _mm_mul_ps(temp0_15, zmm1)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm0 = _mm_mul_ps(temp0_17, zmm2)
            float temp0_20[0x4] = _mm_sub_ps(temp0_14, _mm_mul_ps(zmm2, temp0_15))
            float temp0_22[0x4] = _mm_sub_ps(temp0_16, _mm_mul_ps(zmm6, temp0_17))
            zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm1, temp0_13))
            float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
            float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_22)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            zmm1 = _mm_mul_ps(temp0_12, temp0_25)
            float temp0_29[0x4] = _mm_mul_ps(temp0_12, temp0_26)
            float temp0_30[0x4] = _mm_mul_ps(temp0_12, zmm0)
            zmm1 = __addps_xmmps_memps(zmm1, var_218_1)
            float temp0_32[0x4] = __addps_xmmps_memps(temp0_29, zmm2)
            float temp0_33[0x4] = __addps_xmmps_memps(temp0_30, zmm6)
            zmm4 = _mm_mul_ps(zmm0, temp0_13)
            float temp0_35[0x4] = _mm_mul_ps(temp0_25, temp0_15)
            zmm6 = _mm_mul_ps(temp0_26, temp0_17)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_26, temp0_15)), zmm1)
            float temp0_42[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_35, _mm_mul_ps(zmm0, temp0_17)), temp0_32)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_25, temp0_13)), temp0_33)
            zmm2 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_47[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_42)
            zmm1 = *(arg3 + 0x18)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6)
            zmm5 = *arg1
            zmm3 = *arg2
            zmm4 = (*arg2)[1]
            float temp0_53[0x4] = _mm_sub_ps(temp0_47, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm3 = (*arg2)[2]
            zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm3, zmm3, 0))
            float temp0_59[0x4] = _mm_add_ps(_mm_mul_ps(temp0_53, temp0_53), zx.o(0))
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), temp0_59)
            zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm1), zmm0)
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_rsqrt_ps(zmm1)
            float temp0_70[0x4] = _mm_mul_ps(
                _mm_mul_ps(_mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(zmm1, zmm0), zmm0)), zmm0), zmm9)
            zmm0 = _mm_rcp_ps(temp0_70)
            float temp0_75[0x4] = _mm_sub_ps(temp0_64, 
                _mm_mul_ps(_mm_sub_ps(zmm11, _mm_mul_ps(temp0_70, zmm0)), zmm0))
            zmm0 = *arg6
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_75, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
            if (i_2 == 0)
                result = 0
                rbx = zx.q(rbx.d + 4)
                
                if (rbx.d s>= rdi_4)
                    break
                
                continue
            else
                zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rbp_1
                    
                    if (i == 0)
                        rbp_1 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400bf7e1:
                            float var_1b8[0x4] = temp0_75
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg6 = var_1b8[rbp_2][0]
                            uint32_t var_1a8[0x4] = zmm0
                            *arg5 = var_1a8[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400bf7e1
                    result.b = 1
                while (i != 0)
        
        rbx = zx.q(rbx.d + 4)
        
        if (rbx.d s>= rdi_4)
            break

if (rbx.d s< arg7)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm10 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx.d), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg7), 0), zmm10)
        zmm1 = _mm_mullo_epi32(data_142fc95c0, zmm10) & zmm9
        int64_t rax_5 = sx.q(zmm1[0])
        void* rbx_1 = arg4 + (rax_5 << 2)
        zmm3 = *(arg4 + (rax_5 << 2))
        int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* r14_1 = arg4 + (rbp_3 << 2)
        int64_t rax_7 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* r15_1 = arg4 + (rax_7 << 2)
        int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm1, 3))
        void* rdi_6 = arg4 + (rsi_2 << 2)
        float temp0_90[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm3, *(arg4 + (rbp_3 << 2)), 0x10), 
                *(arg4 + (rax_7 << 2)), 0x20), 
            *(arg4 + (rsi_2 << 2)), 0x30)
        zmm1 = data_142fc95e0 & zmm9
        zmm11 = *(zx.q(zmm1[0]) + rbx_1)
        uint64_t rax_9 = zx.q(_mm_extract_epi32(zmm1, 1))
        uint64_t rbp_4 = zx.q(_mm_extract_epi32(zmm1, 2))
        int32_t* rsi_3 = zx.q(_mm_extract_epi32(zmm1, 3))
        zmm11 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm11, *(rax_9 + r14_1), 0x10), 
                *(rbp_4 + r15_1), 0x20), 
            *(rsi_3 + rdi_6), 0x30)
        zmm1 = data_142fc95f0 & zmm9
        zmm6 = *(zx.q(zmm1[0]) + rbx_1)
        int32_t* rax_11 = zx.q(_mm_extract_epi32(zmm1, 1))
        int32_t* rbp_5 = zx.q(_mm_extract_epi32(zmm1, 2))
        int32_t* rbx_2 = zx.q(_mm_extract_epi32(zmm1, 3))
        zmm6 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rax_11 + r14_1), 0x10), 
                *(rbp_5 + r15_1), 0x20), 
            *(rbx_2 + rdi_6), 0x30)
        uint32_t var_188_1[0x4] = zmm11
        float var_178_1[0x4] = zmm6
        zmm8 = zx.o(0)
        zmm7 = *(arg3 + 0xc)
        float temp0_103[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float var_158_2[0x4] = temp0_103
        float var_148_2[0x4] = temp0_103
        float var_138_2[0x4] = temp0_103
        float var_128_2[0x4] = temp0_103
        zmm2 = *arg3
        zmm0 = *(arg3 + 4)
        zmm4 = *(arg3 + 8)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_105[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_106[0x4] = _mm_mul_ps(zmm11, temp0_105)
        float temp0_107[0x4] = _mm_mul_ps(temp0_105, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_mul_ps(zmm0, temp0_90)
        float temp0_111[0x4] = _mm_mul_ps(temp0_90, zmm4)
        zmm1 = _mm_mul_ps(temp0_103, zmm8)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm11))
        float temp0_115[0x4] = _mm_sub_ps(temp0_111, temp0_107)
        float temp0_116[0x4] = _mm_sub_ps(temp0_106, zmm0)
        zmm1 = _mm_sub_ps(zmm1, zmm1)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        float temp0_119[0x4] = _mm_add_ps(temp0_115, temp0_115)
        float temp0_120[0x4] = _mm_add_ps(temp0_116, temp0_116)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        uint32_t var_218_2[0x4] = zmm6
        float var_208_2[0x4] = temp0_119
        float var_1f8_2[0x4] = temp0_120
        uint32_t var_1e8_2[0x4] = zmm1
        zmm1 = _mm_mul_ps(zmm1, temp0_103)
        float temp0_123[0x4] = _mm_mul_ps(temp0_103, zmm6)
        float temp0_124[0x4] = _mm_mul_ps(temp0_103, temp0_119)
        zmm11 = _mm_mul_ps(temp0_103, temp0_120)
        float temp0_126[0x4] = __addps_xmmps_memps(temp0_123, temp0_90)
        float temp0_127[0x4] = __addps_xmmps_memps(temp0_124, var_188_1)
        zmm11 = __addps_xmmps_memps(zmm11, var_178_1)
        float var_118_1[0x4] = temp0_126
        float var_108_1[0x4] = temp0_127
        uint32_t var_f8_1[0x4] = zmm11
        uint32_t var_e8_1[0x4] = __addps_xmmps_memps(zmm1, zmm8)
        zmm5 = *arg3
        zmm2 = *(arg3 + 4)
        zmm4 = *(arg3 + 8)
        float temp0_130[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_131[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm1 = _mm_mul_ps(temp0_119, temp0_131)
        float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_120)
        zmm0 = _mm_mul_ps(temp0_120, temp0_130)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_136[0x4] = _mm_mul_ps(temp0_130, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm4)
        zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm4, temp0_119))
        zmm6 = _mm_sub_ps(zmm6, temp0_133)
        zmm1 = _mm_sub_ps(zmm1, temp0_136)
        zmm0 = _mm_add_ps(zmm0, temp0_126)
        zmm6 = _mm_add_ps(zmm6, temp0_127)
        zmm1 = _mm_add_ps(zmm1, zmm11)
        zmm5 = arg3[1].d
        zmm4 = *(arg3 + 0x14)
        float temp0_146[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm0)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
        zmm2 = *(arg3 + 0x18)
        float temp0_150[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm1)
        zmm3 = *arg1
        zmm0 = *arg2
        zmm1 = (*arg2)[1]
        float temp0_152[0x4] = _mm_sub_ps(temp0_146, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm4 = _mm_sub_ps(zmm4, _mm_shuffle_ps(zmm1, zmm1, 0))
        zmm0 = (*arg2)[2]
        float temp0_156[0x4] = _mm_sub_ps(temp0_150, _mm_shuffle_ps(zmm0, zmm0, 0))
        float temp0_158[0x4] = _mm_add_ps(_mm_mul_ps(temp0_152, temp0_152), zmm8)
        zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), temp0_158)
        float temp0_162[0x4] = _mm_add_ps(_mm_mul_ps(temp0_156, temp0_156), zmm4)
        float temp0_163[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_rsqrt_ps(temp0_162)
        float temp0_166[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_162, zmm0), zmm0)
        zmm1 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_166), zmm0), 
            data_142d3f640)
        zmm0 = _mm_rcp_ps(zmm1)
        zmm1 = _mm_mul_ps(zmm1, zmm0)
        float temp0_174[0x4] =
            _mm_sub_ps(temp0_163, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm1), zmm0))
        zmm0 = *arg6
        uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
            _mm_cmpeq_ps(temp0_174, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm9))
        
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
                label_1400bfb81:
                    float var_1d8[0x4] = temp0_174
                    uint64_t rdx_1 = zx.q(rdx.d) & 3
                    *arg6 = var_1d8[rdx_1][0]
                    float var_1c8[0x4] = zmm10
                    *arg5 = var_1c8[rdx_1]
            else
                uint64_t rflags_2
                rdx, rflags_2 = _bit_scan_forward(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400bfb81
            result.b = 1
        while (i_1 != 0)

return result
