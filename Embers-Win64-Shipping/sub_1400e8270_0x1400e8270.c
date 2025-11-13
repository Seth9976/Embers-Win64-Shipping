// 函数: sub_1400e8270
// 地址: 0x1400e8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm12[0x4]
float var_68[0x4] = zmm12
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm9[0x4]
float var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_c8[0x4] = zmm6
int32_t rdi_4 = ((arg7 s>> 0x1f u>> 0x1e) + arg7) & 0xfffffffc
int32_t result
uint64_t rbx
uint32_t zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]

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
            zmm3 = *(arg4 + rax_2)
            zmm0 = *(arg4 + rax_2 + 0x10)
            zmm1 = *(arg4 + rax_2 + 0x20)
            zmm4 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm3, 0x4e), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
                zmm1, 0xc4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 5)
            zmm3 = _mm_shuffle_ps(zmm3, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm3, zmm0, 0xf8), 0x22), 0x28)
            uint32_t var_1e8_1[0x4] = zmm4
            int128_t var_1d8_1 = zx.o(0)
            zmm5 = *(arg3 + 0xc)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            uint32_t var_148_1[0x4] = zmm5
            uint32_t var_138_1[0x4] = zmm5
            uint32_t var_128_1[0x4] = zmm5
            uint32_t var_118_1[0x4] = zmm5
            zmm14 = *arg3
            zmm8 = *(arg3 + 4)
            zmm15 = *(arg3 + 8)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            float temp0_13[0x4] = _mm_mul_ps(temp0_12, zmm4)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            float temp0_15[0x4] = _mm_mul_ps(temp0_14, temp0_6)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm0 = _mm_mul_ps(temp0_16, zmm3)
            float temp0_19[0x4] = _mm_sub_ps(temp0_13, _mm_mul_ps(zmm3, temp0_14))
            float temp0_21[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(zmm4, temp0_16))
            zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(temp0_6, temp0_12))
            float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_19)
            float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_21)
            zmm0 = _mm_add_ps(zmm0, zmm0)
            float temp0_27[0x4] = _mm_mul_ps(zmm5, temp0_24)
            zmm4 = _mm_mul_ps(zmm5, temp0_25)
            zmm5 = _mm_mul_ps(zmm5, zmm0)
            float temp0_30[0x4] = __addps_xmmps_memps(temp0_27, temp0_6)
            zmm4 = __addps_xmmps_memps(zmm4, zmm3)
            zmm5 = __addps_xmmps_memps(zmm5, var_1e8_1)
            zmm6 = _mm_mul_ps(zmm0, temp0_12)
            float temp0_34[0x4] = _mm_mul_ps(temp0_24, temp0_14)
            zmm3 = _mm_mul_ps(temp0_25, temp0_16)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_25, temp0_14)), temp0_30)
            float temp0_41[0x4] = _mm_add_ps(_mm_sub_ps(temp0_34, _mm_mul_ps(zmm0, temp0_16)), zmm4)
            zmm3 = _mm_add_ps(_mm_sub_ps(zmm3, _mm_mul_ps(temp0_24, temp0_12)), zmm5)
            zmm2 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_41)
            zmm1 = *(arg3 + 0x18)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
            zmm5 = *arg1
            zmm3 = *arg2
            zmm4 = (*arg2)[1]
            float temp0_52[0x4] = _mm_sub_ps(temp0_46, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm0 = _mm_sub_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm3 = (*arg2)[2]
            float temp0_56[0x4] = _mm_sub_ps(temp0_50, _mm_shuffle_ps(zmm3, zmm3, 0))
            float temp0_58[0x4] = _mm_add_ps(_mm_mul_ps(temp0_52, temp0_52), zx.o(0))
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), temp0_58)
            float temp0_62[0x4] = _mm_add_ps(_mm_mul_ps(temp0_56, temp0_56), zmm0)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm0 = _mm_rsqrt_ps(temp0_62)
            float temp0_69[0x4] = _mm_mul_ps(
                _mm_mul_ps(_mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_62, zmm0), zmm0)), zmm0), 
                zmm9)
            zmm0 = _mm_rcp_ps(temp0_69)
            zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_sub_ps(zmm11, _mm_mul_ps(temp0_69, zmm0)), zmm0))
            zmm0 = *arg6
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(zmm5, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
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
                        label_1400e8561:
                            uint32_t var_1a8[0x4] = zmm5
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg6 = var_1a8[rbp_2][0]
                            uint32_t var_198[0x4] = zmm0
                            *arg5 = var_198[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400e8561
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
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm10, zmm10), zmm10) & zmm9
        int64_t rsi_1 = sx.q(zmm1[0])
        void* rax_5 = arg4 + (rsi_1 << 2)
        zmm3 = *(arg4 + (rsi_1 << 2))
        int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
        void* rsi_3 = arg4 + (rdi_5 << 2)
        zmm3 = _mm_unpacklo_ps(zmm3, (*(arg4 + (rdi_5 << 2)))[0].q)
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
        void* rdi_7 = arg4 + (rbx_1 << 2)
        zmm2 = *(arg4 + (rbx_1 << 2))
        int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
        void* rbx_3 = arg4 + (rbp_3 << 2)
        float temp0_89[0x4] = _mm_unpacklo_ps(zmm2, (*(arg4 + (rbp_3 << 2)))[0].q)
        zmm3 = zmm3[0].q | temp0_89[0].q << 0x40
        zmm1 = data_142fc95e0 & zmm9
        float temp0_91[0x4] = _mm_unpacklo_ps(*(zx.q(zmm1[0]) + rax_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rsi_3))[0].q)
        float temp0_94[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rdi_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rbx_3))[0].q)
        zmm11 = temp0_91[0].q | temp0_94[0].q << 0x40
        zmm1 = data_142fc95f0 & zmm9
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm1[0]) + rax_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rsi_3))[0].q)
        float temp0_99[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rdi_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rbx_3))[0].q)
        zmm6 = zmm6[0].q | temp0_99[0].q << 0x40
        float var_188_1[0x4] = zmm3
        float var_168_1[0x4] = zmm6
        zmm8 = zx.o(0)
        zmm7 = *(arg3 + 0xc)
        float temp0_100[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float var_148_2[0x4] = temp0_100
        float var_138_2[0x4] = temp0_100
        float var_128_2[0x4] = temp0_100
        float var_118_2[0x4] = temp0_100
        zmm2 = *arg3
        zmm0 = *(arg3 + 4)
        zmm4 = *(arg3 + 8)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_102[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_103[0x4] = _mm_mul_ps(zmm11, temp0_102)
        float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        zmm3 = _mm_mul_ps(zmm3, zmm4)
        float temp0_109[0x4] = _mm_mul_ps(temp0_100, zmm8)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm4, zmm11))
        zmm3 = _mm_sub_ps(zmm3, temp0_104)
        float temp0_113[0x4] = _mm_sub_ps(temp0_103, zmm0)
        float temp0_114[0x4] = _mm_sub_ps(temp0_109, temp0_109)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_113)
        float temp0_118[0x4] = _mm_add_ps(temp0_114, temp0_114)
        uint32_t var_208_2[0x4] = zmm6
        uint32_t var_1f8_2[0x4] = zmm3
        float var_1e8_2[0x4] = temp0_117
        float var_1d8_2[0x4] = temp0_118
        float temp0_119[0x4] = _mm_mul_ps(temp0_118, temp0_100)
        float temp0_120[0x4] = _mm_mul_ps(temp0_100, zmm6)
        float temp0_121[0x4] = _mm_mul_ps(temp0_100, zmm3)
        float temp0_122[0x4] = _mm_mul_ps(temp0_100, temp0_117)
        float temp0_123[0x4] = __addps_xmmps_memps(temp0_120, var_188_1)
        float temp0_124[0x4] = __addps_xmmps_memps(temp0_121, zmm11)
        float temp0_125[0x4] = __addps_xmmps_memps(temp0_122, var_168_1)
        float var_108_1[0x4] = temp0_123
        float var_f8_1[0x4] = temp0_124
        float var_e8_1[0x4] = temp0_125
        float var_d8_1[0x4] = __addps_xmmps_memps(temp0_119, zmm8)
        zmm5 = *arg3
        zmm2 = *(arg3 + 4)
        zmm4 = *(arg3 + 8)
        float temp0_127[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_129[0x4] = _mm_mul_ps(zmm3, zmm5)
        zmm5 = _mm_mul_ps(zmm5, temp0_117)
        zmm0 = _mm_mul_ps(temp0_117, temp0_127)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_133[0x4] = _mm_mul_ps(temp0_127, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm4)
        zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(zmm4, zmm3))
        zmm6 = _mm_sub_ps(zmm6, zmm5)
        float temp0_138[0x4] = _mm_sub_ps(temp0_129, temp0_133)
        zmm0 = _mm_add_ps(zmm0, temp0_123)
        zmm6 = _mm_add_ps(zmm6, temp0_124)
        float temp0_141[0x4] = _mm_add_ps(temp0_138, temp0_125)
        zmm5 = arg3[1].d
        zmm4 = *(arg3 + 0x14)
        zmm5 = _mm_add_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm0)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
        zmm2 = *(arg3 + 0x18)
        float temp0_147[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_141)
        zmm3 = *arg1
        zmm0 = *arg2
        zmm1 = (*arg2)[1]
        zmm5 = _mm_sub_ps(zmm5, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm4 = _mm_sub_ps(zmm4, _mm_shuffle_ps(zmm1, zmm1, 0))
        zmm0 = (*arg2)[2]
        float temp0_153[0x4] = _mm_sub_ps(temp0_147, _mm_shuffle_ps(zmm0, zmm0, 0))
        zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), zmm8)
        zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm4), zmm5)
        float temp0_159[0x4] = _mm_add_ps(_mm_mul_ps(temp0_153, temp0_153), zmm4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_rsqrt_ps(temp0_159)
        float temp0_163[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_159, zmm0), zmm0)
        float temp0_166[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_163), zmm0), data_142d3f640)
        zmm0 = _mm_rcp_ps(temp0_166)
        float temp0_168[0x4] = _mm_mul_ps(temp0_166, zmm0)
        zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_168), zmm0))
        zmm0 = *arg6
        uint32_t i_3 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm3, _mm_shuffle_ps(zmm0, zmm0, 0), 1), zmm9))
        
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
                label_1400e8921:
                    uint32_t var_1c8[0x4] = zmm3
                    uint64_t rdx_1 = zx.q(rdx.d) & 3
                    *arg6 = var_1c8[rdx_1][0]
                    float var_1b8[0x4] = zmm10
                    *arg5 = var_1b8[rdx_1]
            else
                uint64_t rflags_2
                rdx, rflags_2 = _bit_scan_forward(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400e8921
            result.b = 1
        while (i_1 != 0)

return result
