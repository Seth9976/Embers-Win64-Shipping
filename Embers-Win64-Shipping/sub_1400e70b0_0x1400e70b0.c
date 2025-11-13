// 函数: sub_1400e70b0
// 地址: 0x1400e70b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_38[0x4] = zmm13
float zmm12[0x4]
float var_48[0x4] = zmm12
float zmm11[0x4]
float var_58[0x4] = zmm11
float zmm10[0x4]
float var_68[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_78[0x4] = zmm9
int32_t zmm8[0x4]
int32_t var_88[0x4] = zmm8
float zmm7[0x4]
float var_98[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_a8[0x4] = zmm6
int32_t rbx_4 = ((arg7 s>> 0x1f u>> 0x1e) + arg7) & 0xfffffffc
int32_t result
uint64_t rdi
float zmm0[0x4]
float zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]

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
            zmm6 = *(arg4 + rax_2)
            zmm2 = *(arg4 + rax_2 + 0x10)
            zmm1 = *(arg4 + rax_2 + 0x20)
            float temp0_4[0x4] = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm6, 0x4e), 
                    _mm_shuffle_epi32(zmm2, 0xe5)[0].q), 
                zmm1, 0xc4)
            zmm3 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm2, 0x21), 0x2c)
            zmm6 = _mm_shuffle_ps(zmm6, zmm2, 5)
            zmm6 = _mm_shuffle_ps(zmm6, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm6, zmm2, 0xf8), 0x22), 0x28)
            int128_t var_1b8_1 = zx.o(0)
            zmm2 = *(arg3 + 0xc)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            uint32_t var_128_1[0x4] = zmm2
            uint32_t var_118_1[0x4] = zmm2
            uint32_t var_108_1[0x4] = zmm2
            uint32_t var_f8_1[0x4] = zmm2
            zmm11 = *arg3
            zmm10 = *(arg3 + 4)
            zmm12 = *(arg3 + 8)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_13[0x4] = _mm_mul_ps(temp0_12, temp0_4)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
            float temp0_15[0x4] = _mm_mul_ps(temp0_14, zmm3)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            float temp0_17[0x4] = _mm_mul_ps(temp0_16, zmm6)
            float temp0_19[0x4] = _mm_sub_ps(temp0_13, _mm_mul_ps(zmm6, temp0_14))
            float temp0_21[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(temp0_4, temp0_16))
            float temp0_23[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(zmm3, temp0_12))
            float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_19)
            float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_21)
            float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_23)
            float temp0_27[0x4] = _mm_mul_ps(zmm2, temp0_24)
            float temp0_28[0x4] = _mm_mul_ps(zmm2, temp0_25)
            zmm2 = _mm_mul_ps(zmm2, temp0_26)
            float temp0_30[0x4] = __addps_xmmps_memps(temp0_27, zmm3)
            float temp0_31[0x4] = __addps_xmmps_memps(temp0_28, zmm6)
            zmm2 = __addps_xmmps_memps(zmm2, temp0_4)
            zmm3 = _mm_mul_ps(temp0_26, temp0_12)
            zmm4 = _mm_mul_ps(temp0_24, temp0_14)
            zmm6 = _mm_mul_ps(temp0_25, temp0_16)
            zmm3 = _mm_add_ps(_mm_sub_ps(zmm3, _mm_mul_ps(temp0_25, temp0_14)), temp0_30)
            zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_26, temp0_16)), temp0_31)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(temp0_24, temp0_12)), zmm2)
            zmm2 = arg3[1].d
            zmm0 = *(arg3 + 0x14)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4)
            zmm1 = *(arg3 + 0x18)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6)
            zmm3 = *arg2
            zmm4 = (*arg2)[1]
            zmm2 = _mm_sub_ps(zmm2, _mm_shuffle_ps(zmm3, zmm3, 0))
            float temp0_54[0x4] = _mm_sub_ps(temp0_48, _mm_shuffle_ps(zmm4, zmm4, 0))
            zmm3 = (*arg2)[2]
            float temp0_56[0x4] = _mm_sub_ps(temp0_50, _mm_shuffle_ps(zmm3, zmm3, 0))
            zmm3 = *arg1
            zmm4 = (*arg1)[1]
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm2)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_54), zmm3)
            zmm2 = (*arg1)[2]
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_56), zmm4)
            zmm0 = *arg6
            char i_2 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_shuffle_ps(zmm0, zmm0, 0), 1))
            
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
                        label_1400e7361:
                            uint32_t var_188[0x4] = zmm2
                            uint64_t rbp_2 = zx.q(rbp_1.d) & 3
                            *arg6 = zx.o(var_188[rbp_2])[0]
                            uint32_t var_178[0x4] = zmm3
                            *arg5 = var_178[rbp_2]
                    else
                        uint64_t rflags_1
                        rbp_1, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rbp_1 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400e7361
                    result.b = 1
                while (i != 0)
        
        rdi = zx.q(rdi.d + 4)
        
        if (rdi.d s>= rbx_4)
            break

if (rdi.d s< arg7)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        int32_t temp0_70[0x4] =
            __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdi.d), 0), data_142e11d00)
        int32_t temp0_72[0x4] = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg7), 0), temp0_70)
        zmm0 = _mm_add_epi32(_mm_add_epi32(temp0_70, temp0_70), temp0_70) & temp0_72
        int64_t rsi_1 = sx.q(zmm0[0])
        void* rax_5 = arg4 + (rsi_1 << 2)
        zmm2 = *(arg4 + (rsi_1 << 2))
        int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        void* rsi_3 = arg4 + (rdi_1 << 2)
        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg4 + (rdi_1 << 2)))[0].q)
        int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        void* rdi_3 = arg4 + (rbx_5 << 2)
        zmm1 = *(arg4 + (rbx_5 << 2))
        int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        void* rbx_7 = arg4 + (rbp_3 << 2)
        float temp0_79[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rbp_3 << 2)))[0].q)
        zmm2 = zmm2[0].q | temp0_79[0].q << 0x40
        zmm0 = data_142fc95e0 & temp0_72
        float temp0_81[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rax_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_3))[0].q)
        float temp0_84[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbx_7))[0].q)
        zmm10 = temp0_81[0].q | temp0_84[0].q << 0x40
        zmm0 = data_142fc95f0 & temp0_72
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rax_5), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rsi_3))[0].q)
        float temp0_89[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbx_7))[0].q)
        zmm6 = zmm6[0].q | temp0_89[0].q << 0x40
        uint32_t var_168_1[0x4] = zmm2
        uint32_t var_148_1[0x4] = zmm6
        zmm4 = zx.o(0)
        uint32_t var_138_1[0x4] = zmm4
        zmm7 = *(arg3 + 0xc)
        float temp0_90[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float var_128_2[0x4] = temp0_90
        float var_118_2[0x4] = temp0_90
        float var_108_2[0x4] = temp0_90
        float var_f8_2[0x4] = temp0_90
        zmm0 = *arg3
        zmm1 = *(arg3 + 4)
        zmm3 = *(arg3 + 8)
        float temp0_91[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_92[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_93[0x4] = _mm_mul_ps(zmm10, temp0_92)
        float temp0_94[0x4] = _mm_mul_ps(temp0_92, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_91)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_97[0x4] = _mm_mul_ps(temp0_91, zmm2)
        zmm2 = _mm_mul_ps(zmm2, zmm3)
        zmm4 = _mm_mul_ps(zmm4, temp0_90)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(zmm3, zmm10))
        zmm2 = _mm_sub_ps(zmm2, temp0_94)
        float temp0_103[0x4] = _mm_sub_ps(temp0_93, temp0_97)
        zmm4 = _mm_sub_ps(zmm4, zmm4)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        float temp0_107[0x4] = _mm_add_ps(temp0_103, temp0_103)
        zmm4 = _mm_add_ps(zmm4, zmm4)
        uint32_t var_1e8_2[0x4] = zmm6
        uint32_t var_1d8_2[0x4] = zmm2
        float var_1c8_2[0x4] = temp0_107
        uint32_t var_1b8_2[0x4] = zmm4
        float temp0_109[0x4] = _mm_mul_ps(temp0_90, zmm6)
        float temp0_110[0x4] = _mm_mul_ps(temp0_90, zmm2)
        float temp0_111[0x4] = _mm_mul_ps(temp0_90, temp0_107)
        float temp0_112[0x4] = __addps_xmmps_memps(temp0_109, var_168_1)
        float temp0_113[0x4] = __addps_xmmps_memps(temp0_110, zmm10)
        float temp0_114[0x4] = __addps_xmmps_memps(temp0_111, var_148_1)
        float var_e8_1[0x4] = temp0_112
        float var_d8_1[0x4] = temp0_113
        float var_c8_1[0x4] = temp0_114
        uint32_t var_b8_1[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm4, temp0_90), var_138_1)
        zmm7 = *arg3
        zmm1 = *(arg3 + 4)
        zmm3 = *(arg3 + 8)
        float temp0_117[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_118[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm4 = _mm_mul_ps(zmm2, temp0_118)
        float temp0_120[0x4] = _mm_mul_ps(temp0_118, temp0_107)
        float temp0_121[0x4] = _mm_mul_ps(temp0_107, temp0_117)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_123[0x4] = _mm_mul_ps(temp0_117, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm3)
        float temp0_126[0x4] = _mm_sub_ps(temp0_121, _mm_mul_ps(zmm3, zmm2))
        zmm6 = _mm_sub_ps(zmm6, temp0_120)
        zmm4 = _mm_sub_ps(zmm4, temp0_123)
        float temp0_129[0x4] = _mm_add_ps(temp0_126, temp0_112)
        zmm6 = _mm_add_ps(zmm6, temp0_113)
        zmm4 = _mm_add_ps(zmm4, temp0_114)
        zmm2 = arg3[1].d
        zmm0 = *(arg3 + 0x14)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_129)
        float temp0_135[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
        zmm1 = *(arg3 + 0x18)
        float temp0_137[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm4)
        zmm3 = *arg2
        zmm4 = (*arg2)[1]
        zmm2 = _mm_sub_ps(zmm2, _mm_shuffle_ps(zmm3, zmm3, 0))
        float temp0_141[0x4] = _mm_sub_ps(temp0_135, _mm_shuffle_ps(zmm4, zmm4, 0))
        zmm3 = (*arg2)[2]
        float temp0_143[0x4] = _mm_sub_ps(temp0_137, _mm_shuffle_ps(zmm3, zmm3, 0))
        zmm3 = *arg1
        zmm4 = (*arg1)[1]
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm2)
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_141), zmm3)
        zmm2 = (*arg1)[2]
        zmm2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_143), zmm4)
        zmm0 = *arg6
        uint32_t i_3 = _mm_movemask_ps(_mm_and_ps(
            _mm_cmpeq_ps(zmm2, _mm_shuffle_ps(zmm0, zmm0, 0), 1), temp0_72))
        
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
                label_1400e76f1:
                    uint32_t var_1a8[0x4] = zmm2
                    uint64_t rdx_1 = zx.q(rdx.d) & 3
                    *arg6 = var_1a8[rdx_1][0]
                    int32_t var_198[0x4] = temp0_70
                    *arg5 = var_198[rdx_1]
            else
                uint64_t rflags_2
                rdx, rflags_2 = _bit_scan_forward(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400e76f1
            result.b = 1
        while (i_1 != 0)

return result
