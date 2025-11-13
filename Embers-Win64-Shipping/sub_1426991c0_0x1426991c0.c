// 函数: sub_1426991c0
// 地址: 0x1426991c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
uint64_t result = __security_cookie ^ &var_308
uint64_t result_2 = result
void* rdi = *(arg1 + 0xa0)
void* var_1d8 = rdi

if (rdi != 0)
    void* rax_1 = *(rdi + 0x130)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    uint32_t zmm15[0x4]
    uint32_t var_c8_1[0x4] = zmm15
    int128_t* rax_2
    
    if (rax_1 == 0)
        rax_2 = &data_143dbb0c0
    else
        rax_2 = rax_1 + 0x1c0
    
    int32_t i_4 = 0
    *(arg1 + 0x110) = *rax_2
    *(arg1 + 0x120) = rax_2[1]
    *(arg1 + 0x130) = rax_2[2]
    void (* var_248)(void* arg1, void* arg2)
    uint64_t var_228
    
    if (*(arg1 + 0x108) == 0)
        void* rsi_1 = *(rdi + 0x130)
        
        if (rsi_1 != 0)
            int32_t var_240_1 = 0
            var_248 = sub_14269b750
            void*** rax_3 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_3 != 0)
                *rax_3 = &data_14345b898
                sub_140d3a3a0(&rax_3[1], arg1)
                *(rax_3 + 0x10) = var_248.o
                rax_3[5] = sub_140a387b0()
                *rax_3 = &data_14345b8f0
            
            int64_t rbx_1 = 0
            
            if (rax_3 != 0)
                sub_140599630(rsi_1 + 0x158, 1)
                int64_t* rax_6 = (*rax_3)[6](rax_3, &var_228)
                int64_t r14_1 = sx.q(*(rsi_1 + 0x160))
                rbx_1 = *rax_6
                int32_t rax_7 = (r14_1 + 1).d
                *(rsi_1 + 0x160) = rax_7
                
                if (rax_7 s> *(rsi_1 + 0x164))
                    sub_1405a4f90(rsi_1 + 0x158)
                
                void** rax_10 = (r14_1 << 4) + *(rsi_1 + 0x158)
                *rax_10 = rax_3
                rax_10[1].d = 3
            
            rdi = var_1d8
            *(arg1 + 0x108) = rbx_1
    
    uint128_t zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_11 = data_143dbb200
    uint64_t var_20c_1 = zmm0.q
    int32_t var_210_1 = rax_11
    int32_t var_204_1 = rax_11
    zmm0.q = zmm0.q
    *(arg1 + 0xb8) = zmm0
    uint128_t var_218 = zmm0
    int64_t var_208
    *(arg1 + 0xc8) = var_208
    *(arg1 + 0xd0) = 0.d
    *(arg1 + 0x100) = 0
    
    if (*(arg1 + 0x104) s<= 0xffffffff)
        sub_1405a5220(arg1 + 0xf8, 0)
    
    void* r10_2 = rdi + 0x1a0
    int32_t var_1f4_1 = 1
    int32_t rdi_2 = *(r10_2 + 0x28)
    void* r12_1 = r10_2 + 0x10
    void* var_258_1 = r10_2
    int32_t rcx_5 = 0
    int32_t var_1f8_1 = 0
    int32_t r8_1 = 0
    void* var_1f0_1 = r12_1
    int32_t var_1e8_1 = 0xffffffff
    int64_t var_1e4_1 = 0
    
    if (rdi_2 != 0)
        void* rax_13 = *(r12_1 + 0x10)
        void* r9_1 = r12_1
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_2 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_142699459:
            int32_t rax_20 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
            int32_t var_1f4_2 = rax_20
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_2
            
            var_1e4_1.d = r8_1 - rax_21 + 0x1f
            
            if (r8_1 - rax_21 + 0x1f s> rdi_2)
                var_1e4_1.d = rdi_2
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_1e4_1:4.d = r8_1
                var_1f8_1 = rcx_5
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_1e8_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_142699459
            
            var_1e4_1.d = rdi_2
    
    int32_t rdx_9 = *(r10_2 + 0x28)
    void* var_288 = r10_2
    float zmm2[0x4] = var_1e8_1.o
    uint128_t var_280_1 = var_1f8_1.o
    int32_t r14_2 = 0xffffffff << (rdx_9.b & 0x1f)
    zmm0 = var_288.o
    int32_t r8_4 = rdx_9 s>> 5
    int32_t r9_3 = rdx_9 & 0xffffffe0
    float result_1 = zmm2[0]
    int64_t var_180_1 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
    float zmm1[0x4] = var_280_1
    var_280_1:8.d = r14_2
    var_280_1:0xc.d = rdx_9
    uint128_t var_1a0 = zmm0
    float var_190_1[0x4] = zmm1
    
    if (rdx_9 != rdi_2)
        void* rax_23 = *(r12_1 + 0x10)
        void* r10_1 = r12_1
        
        if (rax_23 != 0)
            r10_1 = rax_23
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_2 - 1)
        int32_t rdx_13 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_2
        
        if (rdx_13 != 0)
        label_142699525:
            int32_t rax_30 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t r11_1
            
            if (rax_30 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_280_1:0xc.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_2)
                var_280_1:0xc.d = rdi_2
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_1 + (rcx_10 << 2) + 4)
                var_280_1:8.d = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_142699525
            
            var_280_1:0xc.d = rdi_2
        
        r10_2 = var_258_1
    
    float zmm13[0x4] = 0x3f000000
    uint32_t zmm14[0x4] = data_143f71990
    uint64_t rax_33 = var_280_1:8.q u>> 0x20
    var_228 = rax_33
    uint64_t var_2e8
    float zmm3[0x4]
    float zmm4[0x4]
    uint128_t zmm5
    
    while (true)
        int64_t rdx_14 = sx.q(var_190_1[3])
        
        if (rdx_14.d != rax_33.d || var_190_1[0].q != r12_1)
            rax_33.b = 0
        else
            rax_33.b = 1
        
        int64_t* rcx_12 = var_1a0.q
        
        if (rax_33.b == 0 || rcx_12 != r10_2)
            rax_33.b = 1
        else
            rax_33.b = 0
        
        if (rax_33.b == 0)
            break
        
        int64_t* rsi_3 = *(*rcx_12 + rdx_14 * 0x10)
        
        if (rsi_3 != 0)
            void* rax_36 = sub_142577430()
            void* rdx_15 = rsi_3[2]
            int64_t rax_37 = sx.q(*(rax_36 + 0x38))
            
            if (rax_37.d s> *(rdx_15 + 0x38) || *(*(rdx_15 + 0x30) + (rax_37 << 3)) != rax_36 + 0x30
                    || (rsi_3[0x11].b & 1) == 0)
                zmm14 = data_143f71990
            else if ((*(*rsi_3 + 0x4c8))(rsi_3) == 0)
                zmm14 = data_143f71990
            else
                void* rax_42 = (*(*rsi_3 + 0x690))(rsi_3)
                
                if (rax_42 == 0)
                    zmm14 = data_143f71990
                else
                    zmm1 = *(rsi_3 + 0x1e0)
                    zmm5 = *(rsi_3 + 0x1c0)
                    zmm12 = data_143f719b0
                    zmm6 = *(rsi_3 + 0x1d0)
                    zmm14 = data_143f71990
                    zmm15 = _mm_and_ps(data_143f71980, zmm14)
                    var_2e8:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
                    var_2e8.d = zmm1[0]
                    float var_2e0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    float temp0_8[0x4] = _mm_mul_ps(zmm5, zmm5)
                    char var_f0_1 = 1
                    float var_238_1[0x4] = zmm6
                    float temp0_10[0x4] =
                        _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_8, temp0_8, 0x4e))
                    float temp0_12[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10)
                    float temp0_13[0x4] = _mm_rsqrt_ps(temp0_12)
                    float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm12)
                    float temp0_19[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm12, 
                                _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_13), temp0_14)), 
                            temp0_13), 
                        temp0_13)
                    zmm1 = rsi_3[0x22].d
                    zmm0 = _mm_mul_ps(_mm_mul_ps(temp0_19, temp0_19), temp0_14)
                    zmm3 = rsi_3[0x20].d
                    float temp0_22[0x4] = _mm_sub_ps(zmm12, zmm0)
                    zmm0 = _mm_cmpeq_ps(data_143f719c0, temp0_12, 2)
                    zmm4 = *(rsi_3 + 0x104)
                    zmm1[0] = zmm1[0] + zmm4[0]
                    zmm4[0] = zmm4[0] - zmm1[0]
                    float temp0_24[0x4] = _mm_mul_ps(temp0_22, temp0_19)
                    float var_f8_1 = zmm1[0]
                    float var_104_1 = zmm4[0]
                    float temp0_25[0x4] = _mm_add_ps(temp0_24, temp0_19)
                    zmm2 = *(rsi_3 + 0x10c)
                    zmm2[0] = zmm2[0] + zmm3[0]
                    zmm3[0] = zmm3[0] - zmm2[0]
                    float temp0_26[0x4] = _mm_mul_ps(temp0_25, zmm5)
                    zmm5 = rsi_3[0x21].d
                    float var_108 = zmm3[0]
                    float var_fc_1 = zmm2[0]
                    zmm12 = _mm_and_ps(temp0_26 ^ data_143f719a0, zmm0)
                    zmm0 = *(rsi_3 + 0x114)
                    zmm12 ^= data_143f719a0
                    zmm9.d = zmm0.d f+ zmm5.d
                    zmm5.d = zmm5.d f- zmm0.d
                    int32_t var_f4_1 = zmm9.d
                    int32_t var_100_1 = zmm5.d
                    
                    if (*(arg1 + 0xd0) == 0)
                        *(arg1 + 0xb8) = var_108.o
                        *(arg1 + 0xc8) = var_f8_1.q
                        *(arg1 + 0xd0) = var_f0_1.d
                    else
                        float temp0_28[0x4] = __minss_xmmss_memss(zmm3[0], *(arg1 + 0xb8))
                        float temp0_29[0x4] = __minss_xmmss_memss(zmm4[0], *(arg1 + 0xbc))
                        zmm5 = __minss_xmmss_memss(zmm5.d, *(arg1 + 0xc0))
                        float temp0_31[0x4] = __maxss_xmmss_memss(zmm2[0], *(arg1 + 0xc4))
                        float temp0_32[0x4] = __maxss_xmmss_memss(zmm1[0], *(arg1 + 0xc8))
                        zmm9 = __maxss_xmmss_memss(zmm9.d, *(arg1 + 0xcc))
                        *(arg1 + 0xb8) = temp0_28[0]
                        *(arg1 + 0xbc) = temp0_29[0]
                        *(arg1 + 0xc0) = zmm5.d
                        *(arg1 + 0xc4) = temp0_31[0]
                        *(arg1 + 0xc8) = temp0_32[0]
                        *(arg1 + 0xcc) = zmm9.d
                    
                    int32_t i = 0
                    float var_2c8[0x4]
                    uint64_t var_2b8
                    float result_3
                    
                    if (*(rax_42 + 0x30) s> 0)
                        zmm10 = var_238_1
                        zmm4 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        zmm1 = zx.o(0)
                        float var_1c8_1[0x4] = zmm4
                        int64_t rsi_4 = 0
                        
                        do
                            int64_t r14_3 = *(rax_42 + 0x28)
                            zmm6 = data_143f71980
                            zmm3 = var_2e8.d
                            zmm0.q = zmm1 u>> 0x40
                            zmm11 = *(rsi_4 + r14_3 + 0x30)
                            zmm13 = _mm_and_ps(zmm6, zmm14)
                            zmm2 = *(rsi_4 + r14_3 + 0x34)
                            zmm5 = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
                            float temp0_37[0x4] =
                                _mm_unpacklo_ps(zmm11, (*(rsi_4 + r14_3 + 0x38)).q)
                            float temp0_38[0x4] = _mm_unpacklo_ps(zmm3, var_2e0_1.q)
                            float temp0_40[0x4] =
                                _mm_unpacklo_ps(temp0_37, _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q)
                            float temp0_41[0x4] = _mm_unpacklo_ps(var_2e8:4.d, zmm1[0].q)
                            zmm1 = data_143f71a10
                            zmm0 = _mm_min_ps(zmm13, zmm15)
                            float temp0_43[0x4] = _mm_unpacklo_ps(temp0_38, temp0_41[0].q)
                            uint32_t temp0_45 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm1, 1))
                            zmm0 = zmm12
                            float temp0_46[0x4] = _mm_mul_ps(temp0_40, temp0_43)
                            var_248.o = zmm1
                            
                            if (temp0_45 == 0)
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 0)
                                zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), zmm0)
                                zmm0 = _mm_mul_ps(zmm5, zmm4)
                                float temp0_179[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
                                zmm9 = __mulps_xmmps_memps(zmm9, data_143f719f0)
                                float temp0_181[0x4] = _mm_mul_ps(temp0_46, zmm15)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                float temp0_184[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                                float temp0_186[0x4] =
                                    _mm_mul_ps(temp0_179, _mm_shuffle_ps(zmm12, zmm12, 0x55))
                                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm12, zmm12, 0xaa))
                                float temp0_189[0x4] =
                                    __mulps_xmmps_memps(temp0_186, data_143f719e0)
                                float temp0_190[0x4] = _mm_shuffle_ps(temp0_181, temp0_181, 0xd2)
                                zmm5 = __mulps_xmmps_memps(zmm5, data_143f719d0)
                                zmm0 = _mm_shuffle_ps(temp0_181, temp0_181, 0xc9)
                                zmm9 = _mm_add_ps(zmm9, temp0_189)
                                zmm0 = _mm_mul_ps(zmm0, temp0_184)
                                float temp0_195[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                                float temp0_196[0x4] = _mm_mul_ps(temp0_190, temp0_195)
                                zmm9 = _mm_add_ps(zmm9, zmm5)
                                float temp0_198[0x4] = _mm_sub_ps(temp0_196, zmm0)
                                float temp0_199[0x4] = _mm_add_ps(temp0_198, temp0_198)
                                float temp0_200[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xd2)
                                zmm0 = _mm_shuffle_ps(temp0_199, temp0_199, 0xc9)
                                float temp0_202[0x4] = _mm_mul_ps(temp0_200, temp0_195)
                                zmm0 = _mm_mul_ps(zmm0, temp0_184)
                                float temp0_204[0x4] = _mm_mul_ps(temp0_199, zmm4)
                                zmm8 = _mm_add_ps(
                                    _mm_add_ps(_mm_sub_ps(temp0_202, zmm0), 
                                        _mm_add_ps(temp0_204, temp0_181)), 
                                    zmm10)
                            else
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 4)
                                float temp0_48[0x4] = _mm_add_ps(zmm12, zmm12)
                                float temp0_50[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x29), zmm0)
                                float temp0_51[0x4] = _mm_mul_ps(temp0_48, zmm12)
                                float temp0_53[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x12), zmm4)
                                float temp0_54[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0x1a), 
                                    _mm_shuffle_ps(temp0_51, temp0_51, 1))
                                float temp0_58[0x4] = _mm_add_ps(temp0_53, temp0_50)
                                zmm3 = zmm5
                                float temp0_59[0x4] = _mm_sub_ps(temp0_50, temp0_53)
                                float temp0_60[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
                                float temp0_61[0x4] = _mm_mul_ps(temp0_58, zmm15)
                                float temp0_62[0x4] = _mm_mul_ps(temp0_54, temp0_59)
                                zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm6, zmm0), zmm15), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_62, zmm1, 0x32)
                                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_61, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_61, zmm1, 0x31)
                                float temp0_71[0x4] =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_62, zmm1, 0x10), zmm0, 0x88)
                                float temp0_73[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_61, temp0_62, 0x12), zmm1, 0xe8)
                                zmm0.q = var_238_1 u>> 0x40
                                float temp0_74[0x4] = _mm_shuffle_ps(var_238_1, zmm0, 0xc4)
                                float temp0_75[0x4] = _mm_add_ps(zmm5, zmm5)
                                float temp0_76[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                float temp0_78[0x4] = _mm_mul_ps(zmm3, temp0_75)
                                float temp0_80[0x4] =
                                    _mm_mul_ps(temp0_60, _mm_shuffle_ps(temp0_75, temp0_75, 0x29))
                                float temp0_81[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x12)
                                zmm0 = _mm_shuffle_ps(temp0_78, temp0_78, 0x1a)
                                zmm5 = _mm_mul_ps(zmm5, temp0_81)
                                zmm1 = data_143f71980
                                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_78, temp0_78, 1))
                                float temp0_86[0x4] = _mm_add_ps(zmm5, temp0_80)
                                float temp0_87[0x4] = _mm_sub_ps(temp0_80, zmm5)
                                float temp0_88[0x4] = _mm_sub_ps(zmm1, zmm0)
                                float temp0_89[0x4] = _mm_mul_ps(temp0_86, zmm13)
                                float temp0_90[0x4] = _mm_mul_ps(temp0_76, temp0_87)
                                zmm1 = _mm_and_ps(_mm_mul_ps(temp0_88, zmm13), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_90, zmm1, 0x32)
                                float temp0_95[0x4] =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_89, zmm1, 0x31)
                                zmm5 = _mm_shuffle_ps(temp0_90, zmm1, 0x10)
                                float temp0_98[0x4] = _mm_shuffle_ps(temp0_89, temp0_90, 0x12)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0x88)
                                data_143f71980
                                float temp0_100[0x4] = _mm_shuffle_ps(temp0_98, zmm1, 0xe8)
                                zmm0.q = temp0_46 u>> 0x40
                                float temp0_101[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x55)
                                float temp0_102[0x4] = _mm_shuffle_ps(temp0_46, zmm0, 0xc4)
                                float temp0_103[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xaa)
                                zmm0 = _mm_shuffle_ps(temp0_95, temp0_95, 0)
                                float temp0_106[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xff), temp0_74)
                                float temp0_107[0x4] = _mm_mul_ps(temp0_103, temp0_73)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_110[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_101, temp0_71), zmm0)
                                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
                                float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_107)
                                float temp0_115[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_73)
                                float temp0_116[0x4] = _mm_add_ps(temp0_113, temp0_106)
                                float temp0_118[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), temp0_71)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                var_2c8 = temp0_116
                                float temp0_120[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x55)
                                float temp0_121[0x4] = _mm_add_ps(temp0_118, zmm0)
                                float temp0_122[0x4] = _mm_mul_ps(temp0_120, temp0_71)
                                zmm5 = _mm_mul_ps(zmm5, temp0_74)
                                zmm0 = _mm_shuffle_ps(temp0_100, temp0_100, 0)
                                float temp0_125[0x4] = _mm_add_ps(temp0_121, temp0_115)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_128[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0xaa), temp0_73)
                                float temp0_129[0x4] = _mm_add_ps(temp0_125, zmm5)
                                float temp0_130[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xff)
                                float temp0_131[0x4] = _mm_add_ps(temp0_122, zmm0)
                                float temp0_132[0x4] = _mm_mul_ps(temp0_130, temp0_74)
                                zmm0 = _mm_shuffle_ps(temp0_102, temp0_102, 0)
                                var_2b8.o = temp0_129
                                float temp0_134[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
                                float temp0_135[0x4] = _mm_add_ps(temp0_131, temp0_128)
                                float temp0_136[0x4] = _mm_mul_ps(temp0_134, temp0_71)
                                float temp0_138[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_73)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_140[0x4] = _mm_add_ps(temp0_135, temp0_132)
                                float temp0_142[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), temp0_74)
                                float temp0_143[0x4] = _mm_add_ps(temp0_136, zmm0)
                                int96_t var_2a8_1 = temp0_140[0].12
                                int96_t var_298_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_143, temp0_138), temp0_142)[0].12
                                zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_2c8, 0x322bcc77)
                                float zmm2_1[0x4] = var_2c8[0]
                                float zmm1_1 = var_2c8[1]
                                float zmm4_1[0x4] = _mm_and_ps(
                                    _mm_cmpeq_ps(var_248.o, _mm_mul_ps(zmm13, zmm15), 2), 
                                    data_143f71a00 ^ data_143f71980)
                                uint32_t result_4[0x4] = var_2c8[2]
                                zmm4_1 ^= data_143f71a00
                                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                                zmm1_1 = zmm1_1 * zmm4_1[0]
                                result_4[0] = result_4[0] f* zmm4_1[0]
                                var_2c8[0] = zmm2_1[0]
                                var_2c8[1] = zmm1_1
                                var_2c8[2] = result_4[0]
                                result_4 = result_3
                                float temp0_149[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                zmm1_1 = var_2b8:4.d * temp0_149[0]
                                result_4[0] = result_4[0] f* temp0_149[0]
                                float zmm3_1 = var_2b8.d * temp0_149[0]
                                zmm2_1 = var_2a8_1.d
                                float temp0_150[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                                var_2b8:4.d = zmm1_1
                                result_3 = result_4[0]
                                result_4 = var_2a8_1:8.d
                                zmm1_1 = var_2a8_1:4.d * temp0_150[0]
                                result_4[0] = result_4[0] f* temp0_150[0]
                                zmm2_1[0] = zmm2_1[0] * temp0_150[0]
                                var_2a8_1:4.d = zmm1_1
                                var_2a8_1:8.d = result_4[0]
                                var_2b8.d = zmm3_1
                                var_2a8_1.d = zmm2_1[0]
                                uint32_t var_178[0x4]
                                sub_14077e4a0(&var_178, &var_2c8)
                                zmm5 = var_178
                                zmm9 = data_143f719b0
                                zmm10 = var_238_1
                                float temp0_151[0x4] = _mm_mul_ps(zmm5, zmm5)
                                float temp0_153[0x4] = _mm_add_ps(temp0_151, 
                                    _mm_shuffle_ps(temp0_151, temp0_151, 0x4e))
                                float temp0_155[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_153, temp0_153, 0x39), temp0_153)
                                float temp0_156[0x4] = _mm_rsqrt_ps(temp0_155)
                                float temp0_157[0x4] = _mm_mul_ps(temp0_155, zmm9)
                                float temp0_162[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm9, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_156, temp0_156), 
                                                temp0_157)), 
                                        temp0_156), 
                                    temp0_156)
                                zmm9 = _mm_sub_ps(zmm9, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_162, temp0_162), temp0_157))
                                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                    temp0_155, 2)
                                zmm9 = _mm_add_ps(_mm_mul_ps(zmm9, temp0_162), temp0_162)
                                float temp0_170[0x4] = _mm_unpacklo_ps(var_298_1:4.d, 0)
                                zmm9 = _mm_and_ps(_mm_mul_ps(zmm9, zmm5) ^ data_143f719a0, zmm0)
                                    ^ data_143f719a0
                                zmm8 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_298_1.d, var_298_1:8.d.q), temp0_170[0].q)
                                var_178 = zmm9
                            
                            zmm7 = *(rsi_4 + r14_3 + 0x3c)
                            int64_t r14_4 = sx.q(*(arg1 + 0x100))
                            zmm7[0] = zmm7[0] f* var_2e8.d
                            char var_f0_2 = 1
                            zmm7[0] = zmm7[0] * var_2e0_1
                            zmm7[0] = zmm7[0] f* var_2e8:4.d
                            float temp0_209[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                            zmm7[0] = zmm7[0] + zmm8[0]
                            float temp0_210[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                            zmm0.d = zmm7.d f+ temp0_209[0]
                            temp0_209[0] = temp0_209[0] - zmm7[0]
                            zmm5.d = zmm7.d f+ temp0_210[0]
                            zmm8[0] = zmm8[0] - zmm7[0]
                            temp0_210[0] = temp0_210[0] - zmm7[0]
                            float var_100_2 = temp0_209[0]
                            int32_t var_f4_2 = zmm0.d
                            var_fc_1.q = (_mm_unpacklo_ps(zmm7, zmm5.q)).q
                            zmm6 = var_108.o
                            result_1 = var_f0_2.d
                            int32_t rax_48 = (r14_4 + 1).d
                            zmm6[0].q = (_mm_unpacklo_ps(zmm8, temp0_210[0].q)).q
                            var_280_1:8.q = var_f8_1.q
                            var_108.o = zmm6
                            *(arg1 + 0x100) = rax_48
                            
                            if (rax_48 s> *(arg1 + 0x104))
                                sub_1405c4f50(arg1 + 0xf8)
                                zmm14 = data_143f71990
                            
                            int64_t rax_49 = *(arg1 + 0xf8)
                            int64_t rcx_21 = r14_4 * 6
                            zmm4 = var_1c8_1
                            i += 1
                            rsi_4 += 0x40
                            zmm1 = zx.o(0)
                            *(rax_49 + (rcx_21 << 3)) = zmm6
                            *(rax_49 + (rcx_21 << 3) + 0x10) = var_280_1
                            *(rax_49 + (rcx_21 << 3) + 0x20) = zmm9
                        while (i s< *(rax_42 + 0x30))
                        
                        zmm13 = 0x3f000000
                    
                    int32_t i_1 = 0
                    
                    if (*(rax_42 + 0x40) s> 0)
                        int64_t rsi_5 = 0
                        zmm11 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        var_108.o = zmm11
                        
                        do
                            void* r14_5 = *(rax_42 + 0x38)
                            float var_118[0x4]
                            zmm6 = sub_140ade170(r14_5 + 0x3c + rsi_5, &var_118)
                            zmm0 = *(rsi_5 + r14_5 + 0x38)
                            zmm13 = *(rsi_5 + r14_5 + 0x30)
                            zmm4 = data_14399f668
                            zmm8 = var_2e8:4.d
                            zmm10 = var_2e8.d
                            zmm9 = var_2e0_1
                            zmm5 = var_118
                            zmm14 = data_143f71990
                            float temp0_214[0x4] = _mm_unpacklo_ps(*(rsi_5 + r14_5 + 0x34), 0)
                            float temp0_215[0x4] = _mm_unpacklo_ps(zmm13, zmm0.q)
                            zmm0 = data_14399f670
                            float temp0_216[0x4] = _mm_unpacklo_ps(temp0_215, temp0_214[0].q)
                            float temp0_217[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                            float temp0_219[0x4] =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0.q), temp0_217[0].q)
                            float temp0_220[0x4] = _mm_unpacklo_ps(zmm10, zmm9.q)
                            zmm0 = _mm_min_ps(temp0_219, zmm15)
                            float temp0_223[0x4] =
                                _mm_unpacklo_ps(temp0_220, _mm_unpacklo_ps(zmm8, 0)[0].q)
                            zmm1 = data_143f71a10
                            uint32_t temp0_225 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm1, 1))
                            zmm0 = zmm12
                            float temp0_226[0x4] = _mm_mul_ps(temp0_216, temp0_223)
                            var_248.o = temp0_219
                            float var_1c8_2[0x4] = zmm1
                            
                            if (temp0_225 == 0)
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 0)
                                float temp0_357[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), zmm0)
                                zmm0 = _mm_mul_ps(zmm5, zmm11)
                                float temp0_359[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
                                float temp0_360[0x4] =
                                    __mulps_xmmps_memps(temp0_357, data_143f719f0)
                                float temp0_361[0x4] = _mm_mul_ps(temp0_226, zmm15)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
                                float temp0_363[0x4] = _mm_add_ps(temp0_360, zmm0)
                                float temp0_364[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                                float temp0_366[0x4] =
                                    _mm_mul_ps(temp0_359, _mm_shuffle_ps(zmm12, zmm12, 0x55))
                                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm12, zmm12, 0xaa))
                                float temp0_369[0x4] =
                                    __mulps_xmmps_memps(temp0_366, data_143f719e0)
                                float temp0_370[0x4] = _mm_shuffle_ps(temp0_361, temp0_361, 0xd2)
                                zmm5 = __mulps_xmmps_memps(zmm5, data_143f719d0)
                                zmm0 = _mm_shuffle_ps(temp0_361, temp0_361, 0xc9)
                                float temp0_373[0x4] = _mm_add_ps(temp0_363, temp0_369)
                                zmm0 = _mm_mul_ps(zmm0, temp0_364)
                                float temp0_375[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                                float temp0_376[0x4] = _mm_mul_ps(temp0_370, temp0_375)
                                zmm7 = _mm_add_ps(temp0_373, zmm5)
                                float temp0_378[0x4] = _mm_sub_ps(temp0_376, zmm0)
                                float temp0_379[0x4] = _mm_add_ps(temp0_378, temp0_378)
                                float temp0_380[0x4] = _mm_shuffle_ps(temp0_379, temp0_379, 0xd2)
                                zmm0 = _mm_shuffle_ps(temp0_379, temp0_379, 0xc9)
                                float temp0_382[0x4] = _mm_mul_ps(temp0_380, temp0_375)
                                zmm0 = _mm_mul_ps(zmm0, temp0_364)
                                float temp0_384[0x4] = _mm_mul_ps(temp0_379, zmm11)
                                zmm6 = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(temp0_382, zmm0), 
                                        _mm_add_ps(temp0_384, temp0_361)), 
                                    var_238_1)
                            else
                                zmm10 = data_143f71980
                                float temp0_227[0x4] = _mm_add_ps(zmm12, zmm12)
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 4)
                                float temp0_229[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                float temp0_231[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x29), zmm0)
                                float temp0_232[0x4] = _mm_mul_ps(temp0_227, zmm12)
                                float temp0_234[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x12), zmm11)
                                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0x1a), 
                                    _mm_shuffle_ps(temp0_232, temp0_232, 1))
                                float temp0_238[0x4] = _mm_add_ps(temp0_234, temp0_231)
                                float temp0_239[0x4] = _mm_sub_ps(temp0_231, temp0_234)
                                float temp0_240[0x4] = _mm_add_ps(zmm5, zmm5)
                                float temp0_241[0x4] = _mm_mul_ps(temp0_238, zmm15)
                                float temp0_242[0x4] = _mm_mul_ps(temp0_229, temp0_239)
                                float temp0_243[0x4] = _mm_mul_ps(temp0_240, zmm5)
                                zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm15), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_242, zmm1, 0x32)
                                zmm9 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_241, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_241, zmm1, 0x31)
                                float temp0_252[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_242, zmm1, 0x10), zmm0, 0x88)
                                zmm0.q = zmm6 u>> 0x40
                                float temp0_253[0x4] = _mm_shuffle_ps(zmm6, zmm0, 0xc4)
                                zmm0 = _mm_shuffle_ps(zmm5, zmm5, 4)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                float temp0_257[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_241, temp0_242, 0x12), zmm1, 0xe8)
                                float temp0_259[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x29), zmm0)
                                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_243, temp0_243, 0x1a), 
                                    _mm_shuffle_ps(temp0_243, temp0_243, 1))
                                float temp0_264[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x12), zmm5)
                                zmm5 = var_248.o
                                float temp0_265[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                                float temp0_266[0x4] = _mm_add_ps(temp0_264, temp0_259)
                                float temp0_267[0x4] = _mm_sub_ps(temp0_259, temp0_264)
                                float temp0_268[0x4] = _mm_mul_ps(temp0_266, zmm5)
                                float temp0_269[0x4] = _mm_mul_ps(temp0_265, temp0_267)
                                zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm5), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_269, zmm1, 0x32)
                                float temp0_275[0x4] =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_268, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_268, zmm1, 0x31)
                                zmm5 = _mm_shuffle_ps(temp0_269, zmm1, 0x10)
                                float temp0_278[0x4] = _mm_shuffle_ps(temp0_268, temp0_269, 0x12)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0x88)
                                float temp0_280[0x4] = _mm_shuffle_ps(temp0_278, zmm1, 0xe8)
                                float temp0_281[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0x55)
                                float temp0_283[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_275, temp0_275, 0xaa), temp0_257)
                                float temp0_284[0x4] = _mm_mul_ps(temp0_281, temp0_252)
                                zmm0.q = temp0_226 u>> 0x40
                                float temp0_285[0x4] = _mm_shuffle_ps(temp0_226, zmm0, 0xc4)
                                zmm0 = _mm_shuffle_ps(temp0_275, temp0_275, 0)
                                float temp0_288[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_275, temp0_275, 0xff), temp0_253)
                                float temp0_290[0x4] = _mm_add_ps(temp0_284, _mm_mul_ps(zmm0, zmm9))
                                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
                                float temp0_293[0x4] = _mm_add_ps(temp0_290, temp0_283)
                                float temp0_295[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_257)
                                float temp0_296[0x4] = _mm_add_ps(temp0_293, temp0_288)
                                float temp0_298[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), temp0_252)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                var_2c8 = temp0_296
                                float temp0_300[0x4] = _mm_shuffle_ps(temp0_280, temp0_280, 0x55)
                                float temp0_301[0x4] = _mm_add_ps(temp0_298, zmm0)
                                float temp0_302[0x4] = _mm_mul_ps(temp0_300, temp0_252)
                                zmm5 = _mm_mul_ps(zmm5, temp0_253)
                                zmm0 = _mm_shuffle_ps(temp0_280, temp0_280, 0)
                                float temp0_305[0x4] = _mm_add_ps(temp0_301, temp0_295)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_308[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_280, temp0_280, 0xaa), temp0_257)
                                float temp0_309[0x4] = _mm_add_ps(temp0_305, zmm5)
                                float temp0_310[0x4] = _mm_shuffle_ps(temp0_280, temp0_280, 0xff)
                                float temp0_311[0x4] = _mm_add_ps(temp0_302, zmm0)
                                float temp0_312[0x4] = _mm_mul_ps(temp0_310, temp0_253)
                                zmm0 = _mm_shuffle_ps(temp0_285, temp0_285, 0)
                                var_2b8.o = temp0_309
                                float temp0_314[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0x55)
                                float temp0_315[0x4] = _mm_add_ps(temp0_311, temp0_308)
                                float temp0_316[0x4] = _mm_mul_ps(temp0_314, temp0_252)
                                float temp0_318[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_285, temp0_285, 0xaa), temp0_257)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_320[0x4] = _mm_add_ps(temp0_315, temp0_312)
                                float temp0_322[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_285, temp0_285, 0xff), temp0_253)
                                float temp0_323[0x4] = _mm_add_ps(temp0_316, zmm0)
                                int96_t var_2a8_2 = temp0_320[0].12
                                int96_t var_298_2 =
                                    _mm_add_ps(_mm_add_ps(temp0_323, temp0_318), temp0_322)[0].12
                                zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_2c8, 0x322bcc77)
                                float zmm2_2[0x4] = var_2c8[0]
                                float zmm1_2 = var_2c8[1]
                                float zmm4_2[0x4] = _mm_and_ps(
                                    _mm_cmpeq_ps(var_1c8_2, _mm_mul_ps(var_248.o, zmm15), 2), 
                                    data_143f71a00 ^ zmm10)
                                uint32_t result_5[0x4] = var_2c8[2]
                                zmm4_2 ^= data_143f71a00
                                zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                zmm1_2 = zmm1_2 * zmm4_2[0]
                                var_2c8[0] = zmm2_2[0]
                                result_5[0] = result_5[0] f* zmm4_2[0]
                                var_2c8[1] = zmm1_2
                                float temp0_329[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                zmm1_2 = var_2b8:4.d * temp0_329[0]
                                var_2c8[2] = result_5[0]
                                result_5 = result_3
                                result_5[0] = result_5[0] f* temp0_329[0]
                                float zmm3_2 = var_2b8.d * temp0_329[0]
                                zmm2_2 = var_2a8_2.d
                                float temp0_330[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                var_2b8:4.d = zmm1_2
                                uint32_t var_2b0 = result_5[0]
                                result_5 = var_2a8_2:8.d
                                zmm1_2 = var_2a8_2:4.d * temp0_330[0]
                                result_5[0] = result_5[0] f* temp0_330[0]
                                zmm2_2[0] = zmm2_2[0] * temp0_330[0]
                                var_2a8_2:4.d = zmm1_2
                                var_2a8_2:8.d = result_5[0]
                                var_2b8.d = zmm3_2
                                var_2a8_2.d = zmm2_2[0]
                                uint32_t var_168[0x4]
                                sub_14077e4a0(&var_168, &var_2c8)
                                zmm5 = var_168
                                zmm7 = data_143f719b0
                                zmm9 = var_2e0_1
                                zmm8 = var_2e8:4.d
                                zmm10 = var_2e8.d
                                zmm11 = var_108.o
                                float temp0_331[0x4] = _mm_mul_ps(zmm5, zmm5)
                                float temp0_333[0x4] = _mm_add_ps(temp0_331, 
                                    _mm_shuffle_ps(temp0_331, temp0_331, 0x4e))
                                float temp0_335[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_333, temp0_333, 0x39), temp0_333)
                                float temp0_336[0x4] = _mm_rsqrt_ps(temp0_335)
                                float temp0_337[0x4] = _mm_mul_ps(temp0_335, zmm7)
                                float temp0_342[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm7, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_336, temp0_336), 
                                                temp0_337)), 
                                        temp0_336), 
                                    temp0_336)
                                float temp0_345[0x4] = _mm_sub_ps(zmm7, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_342, temp0_342), temp0_337))
                                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                    temp0_335, 2)
                                float temp0_349[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_345, temp0_342), temp0_342)
                                float temp0_350[0x4] = _mm_unpacklo_ps(var_298_2:4.d, 0)
                                zmm7 =
                                    _mm_and_ps(_mm_mul_ps(temp0_349, zmm5) ^ data_143f719a0, zmm0)
                                    ^ data_143f719a0
                                zmm6 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_298_2.d, var_298_2:8.d.q), temp0_350[0].q)
                                var_168 = zmm7
                            
                            zmm5 = *(rsi_5 + r14_5 + 0x48)
                            zmm9.d = zmm9.d f* *(rsi_5 + r14_5 + 0x50)
                            result_1.b = 1
                            zmm8[0] = zmm8[0] f* *(rsi_5 + r14_5 + 0x4c)
                            int64_t r14_6 = sx.q(*(arg1 + 0x100))
                            zmm13 = 0x3f000000
                            float temp0_389[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                            float temp0_390[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            zmm9.d = zmm9.d f* 0.5f
                            zmm8[0] = zmm8[0] * 0.5f
                            zmm0.d = temp0_389.d f+ zmm9.d
                            zmm5.d = zmm5.d f* zmm10[0]
                            temp0_389[0] = temp0_389[0] f- zmm9.d
                            temp0_390[0] = temp0_390[0] + zmm8[0]
                            zmm5.d = zmm5.d f* 0.5f
                            temp0_390[0] = temp0_390[0] - zmm8[0]
                            int32_t var_11c_1 = zmm0.d
                            float var_128_1 = temp0_389[0]
                            zmm6[0] = zmm6[0] f- zmm5.d
                            var_280_1.d = var_128_1
                            zmm6[0] = zmm6[0] f+ zmm5.d
                            var_280_1:0xc.d = var_11c_1
                            result_3 = result_1
                            float temp0_391[0x4] = _mm_unpacklo_ps(zmm6, temp0_390[0].q)
                            int32_t rax_54 = (r14_6 + 1).d
                            var_280_1:4.q = (_mm_unpacklo_ps(zmm6, temp0_390[0].q)).q
                            zmm6 = var_288.o
                            *(arg1 + 0x100) = rax_54
                            zmm6[0].q = temp0_391.q
                            var_2b8 = var_280_1:8.q
                            var_288.o = zmm6
                            
                            if (rax_54 s> *(arg1 + 0x104))
                                sub_1405c4f50(arg1 + 0xf8)
                                zmm14 = data_143f71990
                            
                            int64_t rax_55 = *(arg1 + 0xf8)
                            int64_t rcx_28 = r14_6 * 6
                            i_1 += 1
                            rsi_5 += 0x58
                            *(rax_55 + (rcx_28 << 3)) = zmm6
                            *(rax_55 + (rcx_28 << 3) + 0x10) = var_2b8.o
                            *(rax_55 + (rcx_28 << 3) + 0x20) = zmm7
                        while (i_1 s< *(rax_42 + 0x40))
                    
                    int32_t i_2 = 0
                    
                    if (*(rax_42 + 0x50) s> 0)
                        int64_t rsi_6 = 0
                        zmm10 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        float var_1c8_3[0x4] = zmm10
                        
                        do
                            void* r14_7 = *(rax_42 + 0x48)
                            sub_140ade170(r14_7 + 0x3c + rsi_6, &var_218)
                            zmm0 = *(rsi_6 + r14_7 + 0x38)
                            zmm13 = *(rsi_6 + r14_7 + 0x30)
                            zmm4 = data_14399f668
                            zmm8 = var_2e8:4.d
                            zmm7 = var_2e8.d
                            zmm9 = var_2e0_1
                            zmm5 = var_218
                            zmm14 = data_143f71990
                            float temp0_394[0x4] = _mm_unpacklo_ps(*(rsi_6 + r14_7 + 0x34), 0)
                            float temp0_395[0x4] = _mm_unpacklo_ps(zmm13, zmm0.q)
                            zmm0 = data_14399f670
                            float temp0_396[0x4] = _mm_unpacklo_ps(temp0_395, temp0_394[0].q)
                            float temp0_397[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                            float temp0_399[0x4] =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0.q), temp0_397[0].q)
                            float temp0_400[0x4] = _mm_unpacklo_ps(zmm7, zmm9.q)
                            zmm0 = _mm_min_ps(temp0_399, zmm15)
                            float temp0_403[0x4] =
                                _mm_unpacklo_ps(temp0_400, _mm_unpacklo_ps(zmm8, 0)[0].q)
                            zmm1 = data_143f71a10
                            uint32_t temp0_405 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm1, 1))
                            zmm0 = zmm12
                            float temp0_406[0x4] = _mm_mul_ps(temp0_396, temp0_403)
                            var_248.o = temp0_399
                            var_108.o = zmm1
                            
                            if (temp0_405 == 0)
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 0)
                                float temp0_537[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), zmm0)
                                float temp0_538[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
                                zmm0 = _mm_mul_ps(zmm5, zmm10)
                                float temp0_540[0x4] =
                                    __mulps_xmmps_memps(temp0_537, data_143f719f0)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
                                float temp0_542[0x4] = _mm_mul_ps(temp0_406, zmm15)
                                float temp0_543[0x4] = _mm_add_ps(temp0_540, zmm0)
                                float temp0_544[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                                float temp0_546[0x4] =
                                    _mm_mul_ps(temp0_538, _mm_shuffle_ps(zmm12, zmm12, 0x55))
                                float temp0_547[0x4] = _mm_shuffle_ps(temp0_542, temp0_542, 0xd2)
                                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm12, zmm12, 0xaa))
                                float temp0_550[0x4] =
                                    __mulps_xmmps_memps(temp0_546, data_143f719e0)
                                zmm0 = _mm_shuffle_ps(temp0_542, temp0_542, 0xc9)
                                zmm5 = __mulps_xmmps_memps(zmm5, data_143f719d0)
                                zmm0 = _mm_mul_ps(zmm0, temp0_544)
                                float temp0_554[0x4] = _mm_add_ps(temp0_543, temp0_550)
                                float temp0_555[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                                float temp0_556[0x4] = _mm_mul_ps(temp0_547, temp0_555)
                                zmm6 = _mm_add_ps(temp0_554, zmm5)
                                float temp0_558[0x4] = _mm_sub_ps(temp0_556, zmm0)
                                float temp0_559[0x4] = _mm_add_ps(temp0_558, temp0_558)
                                zmm5 = _mm_shuffle_ps(temp0_559, temp0_559, 0xd2)
                                zmm0 = _mm_shuffle_ps(temp0_559, temp0_559, 0xc9)
                                zmm5 = _mm_mul_ps(zmm5, temp0_555)
                                zmm0 = _mm_mul_ps(zmm0, temp0_544)
                                float temp0_564[0x4] = _mm_mul_ps(temp0_559, zmm10)
                                zmm5 = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(zmm5, zmm0), 
                                        _mm_add_ps(temp0_564, temp0_542)), 
                                    var_238_1)
                            else
                                zmm0 = _mm_shuffle_ps(zmm0, zmm12, 4)
                                float temp0_408[0x4] = _mm_add_ps(zmm12, zmm12)
                                float temp0_409[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                float temp0_410[0x4] = _mm_mul_ps(zmm12, temp0_408)
                                float temp0_412[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_408, temp0_408, 0x29), zmm0)
                                float temp0_413[0x4] = _mm_shuffle_ps(temp0_408, temp0_408, 0x12)
                                zmm0 = _mm_shuffle_ps(temp0_410, temp0_410, 0x1a)
                                float temp0_415[0x4] = _mm_mul_ps(temp0_413, zmm10)
                                zmm10 = data_143f71980
                                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_410, temp0_410, 1))
                                zmm3 = zmm5
                                float temp0_418[0x4] = _mm_add_ps(temp0_415, temp0_412)
                                float temp0_419[0x4] = _mm_sub_ps(temp0_412, temp0_415)
                                float temp0_420[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
                                float temp0_421[0x4] = _mm_mul_ps(temp0_418, zmm15)
                                float temp0_422[0x4] = _mm_mul_ps(temp0_409, temp0_419)
                                zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0), zmm15), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_422, zmm1, 0x32)
                                zmm9 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_421, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_421, zmm1, 0x31)
                                float temp0_431[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_422, zmm1, 0x10), zmm0, 0x88)
                                float temp0_433[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_421, temp0_422, 0x12), zmm1, 0xe8)
                                zmm0.q = var_238_1 u>> 0x40
                                float temp0_434[0x4] = _mm_shuffle_ps(var_238_1, zmm0, 0xc4)
                                float temp0_435[0x4] = _mm_add_ps(zmm5, zmm5)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                float temp0_437[0x4] = _mm_mul_ps(zmm3, temp0_435)
                                float temp0_439[0x4] = _mm_mul_ps(temp0_420, 
                                    _mm_shuffle_ps(temp0_435, temp0_435, 0x29))
                                zmm0 = var_248.o
                                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(temp0_435, temp0_435, 0x12))
                                float temp0_442[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                                float temp0_443[0x4] = _mm_add_ps(zmm5, temp0_439)
                                float temp0_444[0x4] = _mm_sub_ps(temp0_439, zmm5)
                                float temp0_445[0x4] = _mm_mul_ps(temp0_443, zmm0)
                                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_437, temp0_437, 0x1a), 
                                    _mm_shuffle_ps(temp0_437, temp0_437, 1))
                                float temp0_449[0x4] = _mm_mul_ps(temp0_442, temp0_444)
                                zmm1 = _mm_and_ps(
                                    __mulps_xmmps_memps(_mm_sub_ps(zmm10, zmm0), var_248.o), zmm14)
                                zmm0 = _mm_shuffle_ps(temp0_449, zmm1, 0x32)
                                float temp0_455[0x4] =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_445, zmm1, 0), zmm0, 0x82)
                                zmm0 = _mm_shuffle_ps(temp0_445, zmm1, 0x31)
                                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_449, zmm1, 0x10), zmm0, 
                                    0x88)
                                float temp0_460[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_445, temp0_449, 0x12), zmm1, 0xe8)
                                float temp0_461[0x4] = _mm_shuffle_ps(temp0_455, temp0_455, 0xaa)
                                float temp0_462[0x4] = _mm_shuffle_ps(temp0_455, temp0_455, 0x55)
                                float temp0_463[0x4] = _mm_mul_ps(temp0_461, temp0_433)
                                float temp0_464[0x4] = _mm_mul_ps(temp0_462, temp0_431)
                                zmm0.q = temp0_406 u>> 0x40
                                float temp0_465[0x4] = _mm_shuffle_ps(temp0_406, zmm0, 0xc4)
                                zmm0 = _mm_shuffle_ps(temp0_455, temp0_455, 0)
                                float temp0_468[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_455, temp0_455, 0xff), temp0_434)
                                float temp0_470[0x4] = _mm_add_ps(temp0_464, _mm_mul_ps(zmm0, zmm9))
                                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
                                float temp0_473[0x4] = _mm_add_ps(temp0_470, temp0_463)
                                float temp0_475[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_433)
                                float temp0_476[0x4] = _mm_add_ps(temp0_473, temp0_468)
                                float temp0_478[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), temp0_431)
                                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                var_2c8 = temp0_476
                                float temp0_480[0x4] = _mm_shuffle_ps(temp0_460, temp0_460, 0x55)
                                float temp0_481[0x4] = _mm_add_ps(temp0_478, zmm0)
                                float temp0_482[0x4] = _mm_mul_ps(temp0_480, temp0_431)
                                zmm5 = _mm_mul_ps(zmm5, temp0_434)
                                zmm0 = _mm_shuffle_ps(temp0_460, temp0_460, 0)
                                float temp0_485[0x4] = _mm_add_ps(temp0_481, temp0_475)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_488[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_460, temp0_460, 0xaa), temp0_433)
                                float temp0_489[0x4] = _mm_add_ps(temp0_485, zmm5)
                                float temp0_490[0x4] = _mm_shuffle_ps(temp0_460, temp0_460, 0xff)
                                float temp0_491[0x4] = _mm_add_ps(temp0_482, zmm0)
                                float temp0_492[0x4] = _mm_mul_ps(temp0_490, temp0_434)
                                zmm0 = _mm_shuffle_ps(temp0_465, temp0_465, 0)
                                var_2b8.o = temp0_489
                                float temp0_494[0x4] = _mm_shuffle_ps(temp0_465, temp0_465, 0x55)
                                float temp0_495[0x4] = _mm_add_ps(temp0_491, temp0_488)
                                float temp0_496[0x4] = _mm_mul_ps(temp0_494, temp0_431)
                                float temp0_498[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_465, temp0_465, 0xaa), temp0_433)
                                zmm0 = _mm_mul_ps(zmm0, zmm9)
                                float temp0_500[0x4] = _mm_add_ps(temp0_495, temp0_492)
                                float temp0_502[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_465, temp0_465, 0xff), temp0_434)
                                float temp0_503[0x4] = _mm_add_ps(temp0_496, zmm0)
                                int96_t var_2a8_3 = temp0_500[0].12
                                int96_t var_298_3 =
                                    _mm_add_ps(_mm_add_ps(temp0_503, temp0_498), temp0_502)[0].12
                                zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_2c8, 0x322bcc77)
                                float zmm2_3[0x4] = var_2c8[0]
                                float zmm1_3 = var_2c8[1]
                                float zmm4_3[0x4] = _mm_and_ps(
                                    _mm_cmpeq_ps(var_108.o, _mm_mul_ps(var_248.o, zmm15), 2), 
                                    data_143f71a00 ^ zmm10)
                                float result_6[0x4] = var_2c8[2]
                                zmm4_3 ^= data_143f71a00
                                zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                zmm1_3 = zmm1_3 * zmm4_3[0]
                                result_6[0] = result_6[0] * zmm4_3[0]
                                var_2c8[0] = zmm2_3[0]
                                var_2c8[1] = zmm1_3
                                float temp0_509[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                zmm1_3 = var_2b8:4.d * temp0_509[0]
                                var_2c8[2] = result_6[0]
                                result_6 = result_3
                                result_6[0] = result_6[0] * temp0_509[0]
                                float zmm3_3 = var_2b8.d * temp0_509[0]
                                zmm2_3 = var_2a8_3.d
                                float temp0_510[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                                var_2b8:4.d = zmm1_3
                                float var_2b0_1 = result_6[0]
                                result_6 = var_2a8_3:8.d
                                zmm1_3 = var_2a8_3:4.d * temp0_510[0]
                                result_6[0] = result_6[0] * temp0_510[0]
                                zmm2_3[0] = zmm2_3[0] * temp0_510[0]
                                var_2a8_3:4.d = zmm1_3
                                var_2a8_3:8.d = result_6[0]
                                var_2b8.d = zmm3_3
                                var_2a8_3.d = zmm2_3[0]
                                uint32_t var_158[0x4]
                                sub_14077e4a0(&var_158, &var_2c8)
                                zmm5 = var_158
                                zmm6 = data_143f719b0
                                zmm9 = var_2e0_1
                                zmm8 = var_2e8:4.d
                                zmm7 = var_2e8.d
                                zmm10 = var_1c8_3
                                float temp0_511[0x4] = _mm_mul_ps(zmm5, zmm5)
                                float temp0_513[0x4] = _mm_add_ps(temp0_511, 
                                    _mm_shuffle_ps(temp0_511, temp0_511, 0x4e))
                                float temp0_515[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_513, temp0_513, 0x39), temp0_513)
                                float temp0_516[0x4] = _mm_rsqrt_ps(temp0_515)
                                float temp0_517[0x4] = _mm_mul_ps(temp0_515, zmm6)
                                float temp0_522[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_516, temp0_516), 
                                                temp0_517)), 
                                        temp0_516), 
                                    temp0_516)
                                float temp0_525[0x4] = _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_522, temp0_522), temp0_517))
                                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                    temp0_515, 2)
                                float temp0_529[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_525, temp0_522), temp0_522)
                                float temp0_530[0x4] = _mm_unpacklo_ps(var_298_3:4.d, 0)
                                zmm6 =
                                    _mm_and_ps(_mm_mul_ps(temp0_529, zmm5) ^ data_143f719a0, zmm0)
                                    ^ data_143f719a0
                                zmm5 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_298_3.d, var_298_3:8.d.q), temp0_530[0].q)
                                var_158 = zmm6
                            
                            zmm7[0] = zmm7[0] f* *(rsi_6 + r14_7 + 0x48)
                            zmm4 = zmm5
                            result_1.b = 1
                            zmm9.d = zmm9.d f* *(rsi_6 + r14_7 + 0x4c)
                            zmm8[0] = zmm8[0] f* *(rsi_6 + r14_7 + 0x48)
                            zmm4[0] = zmm4[0] + zmm7[0]
                            int64_t r14_8 = sx.q(*(arg1 + 0x100))
                            float temp0_569[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                            float temp0_570[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                            zmm0.d = temp0_569.d f+ zmm9.d
                            temp0_569[0] = temp0_569[0] f- zmm9.d
                            zmm5.d = zmm5.d f- zmm7[0]
                            temp0_570[0] = temp0_570[0] + zmm8[0]
                            temp0_570[0] = temp0_570[0] - zmm8[0]
                            var_280_1.d = temp0_569[0]
                            var_280_1:0xc.d = zmm0.d
                            var_280_1:4.q = (_mm_unpacklo_ps(zmm4, temp0_570[0].q)).q
                            zmm7 = var_288.o
                            result_3 = result_1
                            int32_t rax_60 = (r14_8 + 1).d
                            zmm7[0].q = (_mm_unpacklo_ps(zmm5, temp0_570[0].q)).q
                            var_2b8 = var_280_1:8.q
                            var_288.o = zmm7
                            *(arg1 + 0x100) = rax_60
                            
                            if (rax_60 s> *(arg1 + 0x104))
                                sub_1405c4f50(arg1 + 0xf8)
                                zmm14 = data_143f71990
                            
                            int64_t rax_61 = *(arg1 + 0xf8)
                            int64_t rcx_35 = r14_8 * 6
                            i_2 += 1
                            rsi_6 += 0x50
                            *(rax_61 + (rcx_35 << 3)) = zmm7
                            *(rax_61 + (rcx_35 << 3) + 0x10) = var_2b8.o
                            *(rax_61 + (rcx_35 << 3) + 0x20) = zmm6
                        while (i_2 s< *(rax_42 + 0x50))
                        
                        zmm13 = 0x3f000000
                    
                    int32_t i_3 = 0
                    
                    if (*(rax_42 + 0x60) s> 0)
                        int64_t r12_2 = 0
                        
                        do
                            void* rcx_37 = *(rax_42 + 0x58) + r12_2
                            float temp0_573[0x4] = _mm_unpacklo_ps(var_2e8.d, var_2e0_1[0].q)
                            var_108.o = *(rcx_37 + 0x70)
                            zmm4 = *(rcx_37 + 0x80)
                            var_f8_1.o = zmm4
                            uint128_t var_e8_1 = *(rcx_37 + 0x90)
                            var_f8_1.o = _mm_mul_ps(zmm4, 
                                _mm_unpacklo_ps(temp0_573, _mm_unpacklo_ps(var_2e8:4.d, 0).q))
                            zmm12, zmm13 = sub_141ebb810(rcx_37, &var_288, &var_108, &var_2e8)
                            zmm2 = var_108.o
                            int64_t rsi_7 = sx.q(*(arg1 + 0x100))
                            zmm7 = var_288.o
                            result_3 = result_1
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            int32_t rax_63 = (rsi_7 + 1).d
                            float temp0_579[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), zmm0)
                            *(arg1 + 0x100) = rax_63
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm12)
                            float temp0_582[0x4] = __mulps_xmmps_memps(temp0_579, data_143f719f0)
                            float temp0_583[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
                            float temp0_584[0x4] = _mm_add_ps(temp0_582, zmm0)
                            float temp0_586[0x4] =
                                _mm_mul_ps(temp0_583, _mm_shuffle_ps(zmm2, zmm2, 0x55))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), 
                                _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                            float temp0_590[0x4] = __mulps_xmmps_memps(temp0_586, data_143f719e0)
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143f719d0)
                            float temp0_593[0x4] =
                                _mm_add_ps(_mm_add_ps(temp0_584, temp0_590), zmm0)
                            var_2b8 = var_280_1:8.q
                            
                            if (rax_63 s> *(arg1 + 0x104))
                                sub_1405c4f50(arg1 + 0xf8)
                            
                            int64_t rax_64 = *(arg1 + 0xf8)
                            int64_t rcx_40 = rsi_7 * 6
                            i_3 += 1
                            r12_2 += 0xb0
                            *(rax_64 + (rcx_40 << 3)) = zmm7
                            *(rax_64 + (rcx_40 << 3) + 0x10) = var_2b8.o
                            *(rax_64 + (rcx_40 << 3) + 0x20) = temp0_593
                        while (i_3 s< *(rax_42 + 0x60))
                        
                        zmm14 = data_143f71990
                    
                    r12_1 = var_1f0_1
        
        var_190_1[2] &= not.d(var_1a0:0xc.d)
        sub_14059bdd0(&var_1a0:8)
        r10_2 = var_258_1
        rax_33 = var_228
    
    result = zx.q(*(arg1 + 0x100))
    int32_t temp4_1 = result.d
    
    if (temp4_1 == 0)
        void* rax_67 = *(var_1d8 + 0x130)
        float var_2e0_2
        
        if (rax_67 == 0)
            float rax_68 = data_143dbb200
            var_2e8 = data_143dbb1f8.q
            var_2e0_2 = rax_68
        else
            zmm1 = *(rax_67 + 0x1d0)
            var_2e8.d = zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_2e0_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_2e8:4.d = zmm0.d
        
        var_228 = var_2e8
        float var_220_1 = var_2e0_2
        int64_t* rax_70 = sub_142699110(&var_288, &var_228, arg1 + 0xe8)
        *(arg1 + 0xb8) = *rax_70
        *(arg1 + 0xc8) = rax_70[2]
        *(arg1 + 0xd0) = rax_70[3].d
        void* rcx_44 = *(var_1d8 + 0x130)
        uint128_t zmm0_1
        
        if (rcx_44 == 0)
            zmm0_1 = data_142d3f660
        else
            zmm0_1 = *(rcx_44 + 0x1c0)
        
        zmm6 = *rax_70
        int64_t rdi_5 = sx.q(*(arg1 + 0x100))
        var_218 = zmm0_1
        zmm7 = var_218
        int32_t var_2b0_2 = rax_70[3].d
        int32_t rax_72 = (rdi_5 + 1).d
        uint64_t var_2b8_1 = rax_70[2]
        *(arg1 + 0x100) = rax_72
        
        if (rax_72 s> *(arg1 + 0x104))
            sub_1405c4f50(arg1 + 0xf8)
        
        result = *(arg1 + 0xf8)
        int64_t rcx_47 = rdi_5 * 6
        *(result + (rcx_47 << 3)) = zmm6
        *(result + (rcx_47 << 3) + 0x10) = var_2b8_1.o
        *(result + (rcx_47 << 3) + 0x20) = zmm7
    else if (temp4_1 s> 0)
        zmm15 = data_143f71a20
        zmm12 = zx.o(0)
        int64_t r8_8 = 0
        
        do
            int32_t* rdx_28 = *(arg1 + 0xf8)
            zmm8 = _mm_and_ps(data_143f71980, zmm14)
            zmm11 = *(rdx_28 + r8_8 + 0xc)
            zmm10 = *(rdx_28 + r8_8 + 0x10)
            zmm5.d = zmm11.d f+ *(rdx_28 + r8_8)
            zmm9 = *(rdx_28 + r8_8 + 0x14)
            zmm11[0] = zmm11[0] f- *(rdx_28 + r8_8)
            zmm3 = zmm9
            zmm10[0] = zmm10[0] f+ *(rdx_28 + r8_8 + 4)
            zmm3[0] = zmm3[0] f+ *(rdx_28 + r8_8 + 8)
            zmm10[0] = zmm10[0] f- *(rdx_28 + r8_8 + 4)
            zmm9.d = zmm9.d f- *(rdx_28 + r8_8 + 8)
            zmm5.d = zmm5.d f* zmm13[0]
            zmm10[0] = zmm10[0] * zmm13[0]
            float temp0_597[0x4] =
                __mulps_xmmps_memps(*(rdx_28 + sx.q(i_4) * 0x30 + 0x20), data_143f71a40)
            zmm3[0] = zmm3[0] * zmm13[0]
            float temp0_598[0x4] = _mm_unpacklo_ps(zmm10, 0)
            float temp0_599[0x4] = _mm_rcp_ps(zmm8)
            float temp0_601[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm3[0].q), temp0_598[0].q)
            float temp0_602[0x4] = _mm_shuffle_ps(temp0_597, temp0_597, 0xc9)
            float temp0_603[0x4] = _mm_sub_ps(temp0_601, zmm12)
            float temp0_604[0x4] = _mm_shuffle_ps(temp0_597, temp0_597, 0xd2)
            float temp0_605[0x4] = _mm_shuffle_ps(temp0_597, temp0_597, 0xff)
            zmm11[0] = zmm11[0] * zmm13[0]
            zmm6 = _mm_and_ps(temp0_603, zmm14)
            zmm10[0] = zmm10[0] * zmm13[0]
            zmm9.d = zmm9.d f* zmm13[0]
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_604)
            float temp0_611[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_602), zmm0)
            zmm0 = _mm_mul_ps(temp0_599, temp0_599)
            float temp0_613[0x4] = _mm_add_ps(temp0_599, temp0_599)
            float temp0_614[0x4] = _mm_add_ps(temp0_611, temp0_611)
            zmm0 = _mm_mul_ps(zmm0, zmm8)
            float temp0_616[0x4] = _mm_mul_ps(temp0_605, temp0_614)
            float temp0_617[0x4] = _mm_sub_ps(temp0_613, zmm0)
            zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_614, temp0_614, 0xd2), temp0_602)
            float temp0_620[0x4] = _mm_add_ps(temp0_616, zmm6)
            zmm0 = _mm_mul_ps(temp0_617, temp0_617)
            float temp0_622[0x4] = _mm_add_ps(temp0_617, temp0_617)
            zmm0 = _mm_mul_ps(zmm0, zmm8)
            float temp0_625[0x4] =
                _mm_cmpeq_ps(__andps_xmmxud_memxud(zmm8, data_143f71a30), zmm15, 2)
            float temp0_626[0x4] = _mm_sub_ps(temp0_622, zmm0)
            zmm5 =
                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_shuffle_ps(temp0_614, temp0_614, 0xc9), temp0_604))
            zmm8 = _mm_and_ps(temp0_625, temp0_626 ^ zmm12) ^ temp0_626
            zmm5 = _mm_mul_ps(_mm_add_ps(zmm5, temp0_620), zmm8)
            zmm4 = zmm5
            float temp0_633[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm4[0] = zmm4[0] + zmm11[0]
            temp0_633[0] = temp0_633[0] + zmm10[0]
            result_1.b = 1
            float temp0_634[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            temp0_633[0] = temp0_633[0] - zmm10[0]
            zmm5.d = zmm5.d f- zmm11[0]
            zmm0.d = temp0_634.d f+ zmm9.d
            i_4 += 1
            temp0_634[0] = temp0_634[0] f- zmm9.d
            int32_t var_1b0_2 = zmm0.d
            var_280_1:4.q = (_mm_unpacklo_ps(zmm4, temp0_633[0].q)).q
            var_280_1.d = temp0_634[0]
            var_280_1:0xc.d = var_1b0_2
            result = zx.q(result_1)
            zmm0.q = (_mm_unpacklo_ps(zmm5, temp0_633[0].q)).q
            *(rdx_28 + r8_8) = zmm0
            var_288.o = zmm0
            *(rdx_28 + r8_8 + 0x10) = var_280_1:8.q
            *(rdx_28 + r8_8 + 0x18) = result.d
            r8_8 += 0x30
        while (i_4 s< *(arg1 + 0x100))

__security_check_cookie(result_2 ^ &var_308)
return result
