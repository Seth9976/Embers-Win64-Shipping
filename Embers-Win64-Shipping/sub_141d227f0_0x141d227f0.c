// 函数: sub_141d227f0
// 地址: 0x141d227f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t result = __security_cookie ^ &var_278
int64_t result_1 = result
int16_t rbx = arg4
int16_t var_244 = rbx
int64_t* r15 = arg3

if (arg3[1].d != 0)
    int64_t rax_1 = *arg2
    
    if (rax_1 == data_143f37078)
        sub_141d1f690(arg1, rax_1)
        void* r14_1 = arg1 + 0xf8
        int64_t* rax_2 = arg1 + 0xb0
        int32_t i_2 = 0
        void* var_238
        int32_t var_220
        int64_t* var_1f8
        void var_1b0
        float var_1a8[0x4]
        uint32_t var_168[0x4]
        double zmm2[0x2]
        
        if (r15[1].d s> 0)
            void* rbx_1 = nullptr
            var_238 = nullptr
            int32_t i
            
            do
                int64_t var_180 = 0
                int64_t var_178_1 = 0
                sub_141d17c70(rax_2, r14_1, &var_180)
                int64_t rbx_2 = sx.q(*(rbx_1 + *r15))
                int32_t var_23c_1 = rbx_2.d
                
                if (rbx_2.d s>= 0)
                    (*(*r14_1 + 0x48))(r14_1)
                
                int64_t rdi_1 = rbx_2
                int32_t rcx_2 = *(*(r14_1 + 8) + (rbx_2 << 2))
                (*(*r14_1 + 0x48))(r14_1)
                int32_t var_21c_1 = 1
                int32_t rcx_4 = 0
                int64_t* rbx_5 = rbx_2 * 0x50 + *(arg1 + 0x118)
                int32_t r8_1 = 0
                int32_t r10_1 = rbx_5[5].d
                void* r11_1 = &rbx_5[2]
                var_220 = 0
                void* var_218_1 = r11_1
                int32_t var_210_1 = 0xffffffff
                int64_t var_20c_1 = 0
                
                if (r10_1 != 0)
                    void* rax_7 = *(r11_1 + 0x10)
                    void* r9 = r11_1
                    
                    if (rax_7 != 0)
                        r9 = rax_7
                    
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r10_1 - 1)
                    int32_t rdx_4 = *r9
                    
                    if (rdx_4 != 0)
                    label_141d229cc:
                        int32_t rax_14 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_14)
                        int32_t var_21c_2 = rax_14
                        int32_t rax_15
                        
                        if (rax_14 == 0)
                            rax_15 = 0x20
                        else
                            rax_15 = 0x1f - temp0_1
                        
                        var_20c_1.d = r8_1 - rax_15 + 0x1f
                        
                        if (r8_1 - rax_15 + 0x1f s> r10_1)
                            var_20c_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_5 = sx.q(rcx_4)
                            r8_1 += 0x20
                            rcx_4 += 1
                            var_20c_1:4.d = r8_1
                            var_220 = rcx_4
                            
                            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                            var_210_1 = 0xffffffff
                            
                            if (rdx_4 != 0)
                                goto label_141d229cc
                        
                        var_20c_1.d = r10_1
                
                int32_t r12_1 = rbx_5[5].d
                float zmm0_1[0x4] = var_220.o
                var_1f8 = rbx_5
                zmm2 = var_210_1.o
                float var_1f0_1[0x4] = zmm0_1
                zmm0_1 = var_1f8.o
                int32_t r9_2 = r12_1 & 0xffffffe0
                double var_1e0_1[0x2] = zmm2
                int32_t r8_4 = r12_1 s>> 5
                int64_t var_188_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                var_1a8 = zmm0_1
                float var_198_1[0x4] = var_1f0_1
                int32_t rax_18
                
                if (r12_1 != r10_1)
                    void* rax_19 = *(r11_1 + 0x10)
                    void* rdi_2 = r11_1
                    
                    if (rax_19 != 0)
                        rdi_2 = rax_19
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r10_1 - 1)
                    int32_t rdx_9 = *(rdi_2 + (sx.q(r8_4) << 2)) & 0xffffffff << (r12_1 & 0x1f).b
                    
                    if (rdx_9 != 0)
                    label_141d22a9e:
                        int32_t rax_25 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rax_25)
                        
                        if (rax_25 == 0)
                            rax_18 = 0x20
                        else
                            rax_18 = 0x1f - temp0_3
                        
                        r12_1 = r9_2 - rax_18 + 0x1f
                        
                        if (r12_1 s> r10_1)
                            r12_1 = r10_1
                    else
                        while (true)
                            int64_t rcx_8 = sx.q(r8_4)
                            r9_2 += 0x20
                            r8_4 += 1
                            
                            if (rcx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(rdi_2 + (rcx_8 << 2) + 4)
                            
                            if (rdx_9 != 0)
                                goto label_141d22a9e
                        
                        r12_1 = r10_1
                    
                    rdi_1 = rbx_2
                
                int64_t r8_5 = sx.q(rcx_2)
                uint32_t zmm14_1[0x4] = data_143f36f80
                int64_t r15_2 = r8_5
                
                while (true)
                    int64_t rcx_10 = sx.q(var_198_1[3])
                    
                    if (rcx_10.d != r12_1 || var_198_1[0].q != r11_1)
                        rax_18.b = 0
                    else
                        rax_18.b = 1
                    
                    int64_t* rdx_10 = var_1a8[0].q
                    
                    if (rax_18.b == 0 || rdx_10 != rbx_5)
                        rax_18.b = 1
                    else
                        rax_18.b = 0
                    
                    if (rax_18.b == 0)
                        break
                    
                    float zmm6_1[0x4] = data_143dbb0c0
                    uint32_t zmm10_1[0x4] = data_143dbb0d0
                    uint32_t zmm7_1[0x4] = data_143dbb0e0
                    int64_t rsi_2 = sx.q(*(*rdx_10 + rcx_10 * 0xc))
                    int64_t rcx_12 = *(r14_1 + 8)
                    *(rcx_12 + (rsi_2 << 2)) = *(rcx_12 + (rdi_1 << 2))
                    int64_t rdx_17
                    float zmm1[0x4]
                    float zmm3_1[0x4]
                    float zmm4_1[0x4]
                    float zmm5_1[0x4]
                    float zmm13_1[0x4]
                    
                    if (r8_5.d s< 0)
                        rdx_17 = var_180
                        zmm13_1 = data_143f36f70
                    else
                        int64_t* rdi_5 = r15_2 * 0x50 + *(arg1 + 0x118)
                        
                        if (rdi_5[1].d != *(rdi_5 + 0x34))
                            void* rax_28 = rdi_5[8]
                            void* rdx_12 = &rdi_5[7]
                            
                            if (rax_28 != 0)
                                rdx_12 = rax_28
                            
                            int32_t j = *(rdx_12 + (((sx.q(rdi_5[9].d) - 1) & rsi_2) << 2))
                            
                            if (j != 0xffffffff)
                                int64_t rdx_13 = *rdi_5
                                
                                do
                                    int64_t rax_29 = sx.q(j) * 3
                                    
                                    if (*(rdx_13 + (rax_29 << 2)) == rsi_2.d)
                                        break
                                    
                                    j = *(rdx_13 + (rax_29 << 2) + 4)
                                while (j != 0xffffffff)
                        
                        int32_t var_150
                        sub_1409afd50(rdi_5, &var_150)
                        int32_t rax_30 = var_150
                        char* var_250_1 = nullptr
                        int32_t* var_148
                        *var_148 = rsi_2.d
                        var_148[1] = 0xffffffff
                        sub_1406da850(rdi_5, &var_1b0, rsi_2.d, var_148, rax_30, var_250_1)
                        rdx_17 = var_180
                        zmm2 = data_143f37020
                        int64_t rcx_20 = r15_2 * 6
                        zmm3_1 = data_143f37010
                        zmm14_1 = data_143f36f80
                        zmm13_1 = data_143f36f70
                        zmm7_1 = *(rdx_17 + (rcx_20 << 3) + 0x20)
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3_1, _mm_and_ps(zmm7_1, zmm2), 1)) == 0)
                            zmm6_1 = data_143dbb0c0
                            zmm10_1 = data_143dbb0d0
                            zmm7_1 = data_143dbb0e0
                        else
                            zmm6_1 = __mulps_xmmps_memps(data_143f37000, *(rdx_17 + (rcx_20 << 3)))
                            zmm5_1 = *(rdx_17 + (rcx_20 << 3) + 0x10)
                            zmm13_1[0].q = zmm7_1 u>> 0x40
                            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm13_1, 0xc4)
                            zmm1 = _mm_rcp_ps(zmm7_1)
                            zmm0_1 = _mm_mul_ps(zmm1, zmm1)
                            zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(zmm0_1, zmm7_1))
                            zmm0_1 = _mm_mul_ps(zmm1, zmm1)
                            zmm1 = _mm_add_ps(zmm1, zmm1)
                            zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                            zmm7_1 = _mm_cmpeq_ps(_mm_and_ps(zmm7_1, zmm2), zmm3_1, 2)
                            zmm3_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                            zmm1 = _mm_sub_ps(zmm1, zmm0_1)
                            zmm7_1 = _mm_and_ps(zmm7_1, zmm1 ^ zx.o(0)) ^ zmm1
                            zmm1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                            zmm7_1 = _mm_and_ps(zmm7_1, zmm14_1)
                            zmm5_1 = _mm_mul_ps(zmm5_1, zmm7_1)
                            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm3_1)
                            zmm4_1 = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1), zmm0_1)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm1)
                            zmm1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                            zmm1 = _mm_mul_ps(zmm1, zmm4_1)
                            zmm0_1 = _mm_mul_ps(zmm0_1, zmm3_1)
                            zmm1 = _mm_add_ps(zmm1, zmm5_1)
                            zmm10_1 = _mm_and_ps(
                                _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(zmm2, zmm0_1), zmm1)), 
                                zmm14_1)
                    
                    int64_t rdi_7 = rsi_2 * 6
                    float zmm12_1[0x4] = *(rdx_17 + (rdi_7 << 3) + 0x20)
                    float zmm8_1[0x4]
                    uint32_t zmm11_1[0x4]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12_1, zmm7_1), data_143f37040, 
                            1)) == 0)
                        zmm2 = *(rdx_17 + (rdi_7 << 3))
                        zmm3_1 = *(rdx_17 + (rdi_7 << 3) + 0x10)
                        zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                        zmm8_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0_1)
                        zmm0_1 = zmm2
                        zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                        zmm8_1 = __mulps_xmmps_memps(zmm8_1, data_143f36f60)
                        zmm4_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm4_1)
                        zmm11_1 = _mm_mul_ps(zmm7_1, zmm12_1)
                        zmm8_1 = _mm_add_ps(zmm8_1, zmm0_1)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f36f50)
                        zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143f36f40)
                        zmm8_1 = _mm_add_ps(zmm8_1, zmm1)
                        zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                        zmm8_1 = _mm_add_ps(zmm8_1, zmm2)
                        zmm2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                        zmm1 = _mm_mul_ps(zmm1, zmm2)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                        zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(zmm0_1, zmm6_1))
                        zmm1 = _mm_add_ps(zmm1, zmm1)
                        zmm5_1 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm6_1)
                        zmm1 = _mm_mul_ps(zmm1, zmm4_1)
                        zmm5_1 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(zmm5_1, zmm0_1), _mm_add_ps(zmm1, zmm3_1)), 
                            zmm10_1)
                    else
                        zmm3_1 = zmm6_1
                        zmm1 = _mm_add_ps(zmm6_1, zmm6_1)
                        zmm2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                        zmm4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                        zmm5_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xc9)
                        zmm3_1 = _mm_mul_ps(zmm3_1, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                        zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a)
                        zmm6_1 = _mm_mul_ps(zmm6_1, zmm1)
                        zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                        _mm_mul_ps(zmm7_1, zmm12_1)
                        zmm3_1 = *(rdx_17 + (rdi_7 << 3))
                        float zmm9_1[0x4] = _mm_add_ps(zmm6_1, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm6_1)
                        zmm1 = _mm_sub_ps(zmm13_1, zmm0_1)
                        zmm9_1 = _mm_mul_ps(zmm9_1, zmm7_1)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                        zmm1 = _mm_mul_ps(zmm1, zmm7_1)
                        zmm2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                        zmm1 = _mm_and_ps(zmm1, zmm14_1)
                        zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1, 0x32)
                        zmm8_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9_1, zmm1, 0), zmm0_1, 0x82)
                        zmm0_1 = _mm_shuffle_ps(zmm9_1, zmm1, 0x31)
                        zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1, 0x10), zmm0_1, 0x88)
                        zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9_1, zmm4_1, 0x12), zmm1, 0xe8)
                        zmm1 = _mm_add_ps(zmm3_1, zmm3_1)
                        zmm13_1[0].q = zmm10_1 u>> 0x40
                        zmm10_1 = _mm_shuffle_ps(zmm10_1, zmm13_1, 0xc4)
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x29)
                        zmm4_1 = _mm_mul_ps(zmm1, zmm3_1)
                        zmm2 = _mm_mul_ps(zmm2, zmm0_1)
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1)
                        zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                            _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                        zmm6_1 = _mm_add_ps(zmm3_1, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3_1)
                        zmm1 = _mm_sub_ps(zmm13_1, zmm0_1)
                        zmm6_1 = _mm_mul_ps(zmm6_1, zmm12_1)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                        zmm1 = _mm_and_ps(_mm_mul_ps(zmm1, zmm12_1), zmm14_1)
                        zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm1, 0x32)
                        zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1, 0), zmm0_1, 0x82)
                        zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm1, 0x31)
                        zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1, 0x10), zmm0_1, 0x88)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm5_1, 0x12)
                        zmm5_1 = *(rdx_17 + (rdi_7 << 3) + 0x10)
                        zmm2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm1, 0xe8)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm9_1)
                        zmm2 = _mm_mul_ps(zmm2, zmm7_1)
                        zmm13_1[0].q = zmm5_1 u>> 0x40
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm13_1, 0xc4)
                        zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm10_1)
                        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0_1, zmm8_1))
                        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm8_1)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm9_1)
                        zmm2 = _mm_add_ps(zmm2, zmm3_1)
                        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm7_1)
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                        var_1f8.o = zmm2
                        zmm2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                        zmm2 = _mm_mul_ps(zmm2, zmm7_1)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm10_1)
                        zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm1)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm8_1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm9_1)
                        zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                        zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                        zmm2 = _mm_add_ps(zmm2, zmm0_1)
                        zmm6_1 = _mm_mul_ps(zmm6_1, zmm10_1)
                        zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                        var_1f0_1 = zmm3_1
                        zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm9_1)
                        zmm0_1 = _mm_mul_ps(zmm0_1, zmm8_1)
                        zmm2 = _mm_add_ps(zmm2, zmm6_1)
                        zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm10_1)
                        int96_t var_1c8_1 =
                            _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_1, zmm0_1), zmm1), zmm5_1)[0].12
                        float zmm15_1[0x4]
                        zmm11_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_1f8, 0x322bcc77)
                        float zmm2_1[0x4] = var_1f8.d
                        float zmm1_1 = var_1f8:4.d
                        zmm15_1 =
                            _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm11_1, 2), data_143f37030 ^ zmm13_1)
                        uint32_t zmm0_2[0x4] = var_1f0_1[0]
                        zmm15_1 ^= data_143f37030
                        zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                        zmm1_1 = zmm1_1 * zmm15_1[0]
                        zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
                        float zmm3_2 = var_1f0_1[2]
                        var_1f8.d = zmm2_1[0]
                        var_1f8:4.d = zmm1_1
                        zmm1_1 = var_1f0_1[3]
                        zmm2_1 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                        zmm1_1 = zmm1_1 * zmm2_1[0]
                        var_1f0_1[0] = zmm0_2[0]
                        zmm0_2 = zmm2[0].d
                        zmm0_2[0] = zmm0_2[0] f* zmm2_1[0]
                        zmm3_2 = zmm3_2 * zmm2_1[0]
                        zmm2_1 = zmm2[1].d
                        var_1f0_1[3] = zmm1_1
                        zmm1_1 = zmm2[1]:4.d
                        zmm2[0].d = zmm0_2[0]
                        uint32_t var_1d0
                        zmm0_2 = var_1d0
                        zmm15_1 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                        zmm1_1 = zmm1_1 * zmm15_1[0]
                        zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
                        zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                        zmm2[1]:4.d = zmm1_1
                        var_1d0 = zmm0_2[0]
                        var_1f0_1[2] = zmm3_2
                        zmm2[1].d = zmm2_1[0]
                        sub_14077e4a0(&var_168, &var_1f8)
                        zmm5_1 = var_168
                        zmm8_1 = data_143f36f30
                        zmm1 = _mm_mul_ps(zmm5_1, zmm5_1)
                        int64_t var_1b8
                        var_1b8.d = 0x322bcc77
                        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                        zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                        zmm1 = _mm_rsqrt_ps(zmm4_1)
                        zmm3_1 = _mm_mul_ps(zmm4_1, zmm8_1)
                        zmm2 = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm8_1, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3_1)), 
                                zmm1), 
                            zmm1)
                        zmm8_1 = _mm_sub_ps(zmm8_1, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3_1))
                        zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                        zmm8_1 = _mm_add_ps(_mm_mul_ps(zmm8_1, zmm2), zmm2)
                        zmm2 = _mm_unpacklo_ps(var_1c8_1:4.d, 0)
                        zmm8_1 = _mm_and_ps(_mm_mul_ps(zmm8_1, zmm5_1) ^ data_143f36f20, zmm0_1)
                            ^ data_143f36f20
                        zmm5_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1c8_1.d, var_1c8_1:8.d[0].q), 
                            zmm2[0])
                        var_168 = zmm8_1
                    
                    int64_t rax_33 = *(arg1 + 0xb8)
                    *(rax_33 + (rdi_7 << 3)) = zmm8_1
                    *(rax_33 + (rdi_7 << 3) + 0x10) = zmm5_1
                    *(rax_33 + (rdi_7 << 3) + 0x20) = zmm11_1
                    var_198_1[2] &= not.d(var_1a8[3])
                    sub_14059bdd0(&var_1a8[2])
                    r8_5 = zx.q(rcx_2)
                    r11_1 = &rbx_5[2]
                    rdi_1 = rbx_2
                    r14_1 = arg1 + 0xf8
                
                if (r8_5.d s>= 0)
                    int64_t* r9_7 = r15_2 * 0x50 + *(arg1 + 0x118)
                    int32_t rbx_6 = r9_7[1].d
                    
                    if (rbx_6 != *(r9_7 + 0x34))
                        void* r10_2 = &r9_7[7]
                        void* rcx_24 = r9_7[8]
                        int64_t rsi_3 = sx.q(r9_7[9].d - 1)
                        
                        if (rcx_24 != 0)
                            r10_2 = rcx_24
                        
                        int64_t rax_39 = rsi_3 & rdi_1
                        void* rdx_19 = r10_2 + (rax_39 << 2)
                        int32_t j_1 = *(r10_2 + (rax_39 << 2))
                        
                        if (j_1 != 0xffffffff)
                            int64_t r8_7 = *r9_7
                            
                            do
                                int64_t rcx_25 = sx.q(j_1) * 3
                                
                                if (*(r8_7 + (rcx_25 << 2)) == var_23c_1)
                                    int64_t rdx_21 = sx.q(*rdx_19)
                                    
                                    if (rbx_6 - *(r9_7 + 0x34) != 0)
                                        int64_t r11_3 = rdx_21 * 3
                                        int64_t rax_42 = sx.q(*(r8_7 + (r11_3 << 2) + 8)) & rsi_3
                                        void* rcx_26 = r10_2 + (rax_42 << 2)
                                        int32_t k = *(r10_2 + (rax_42 << 2))
                                        
                                        while (k != 0xffffffff)
                                            if (k == rdx_21.d)
                                                *rcx_26 = *(r8_7 + (r11_3 << 2) + 4)
                                                break
                                            
                                            int64_t k_1 = sx.q(k)
                                            k = *(r8_7 + ((k_1 * 3 + 1) << 2))
                                            rcx_26 = r8_7 + ((k_1 * 3 + 1) << 2)
                                    
                                    sub_14090a460(r9_7, rdx_21.d, 1)
                                    break
                                
                                j_1 = *(r8_7 + 4 + (rcx_25 << 2))
                                rdx_19 = r8_7 + 4 + (rcx_25 << 2)
                            while (j_1 != 0xffffffff)
                
                int64_t rcx_30 = var_180
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                rax_2 = arg1 + 0xb0
                i = i_2 + 1
                r15 = arg3
                rbx_1 = var_238 + 4
                i_2 = i
                var_238 = rbx_1
            while (i s< r15[1].d)
            rbx = var_244
        
        int64_t rax_44 = *r14_1
        void* r12_2 = nullptr
        var_238 = nullptr
        int32_t var_248_2 = 0
        int32_t var_22c_1 = 0
        int32_t rax_45 = (*(rax_44 + 0x48))(r14_1)
        int64_t rdi_9 = sx.q(rax_45)
        int32_t var_230_1
        
        if (rax_45 s> 0)
            var_230_1 = rdi_9.d
            sub_1405a4cf0(&var_238)
            r12_2 = var_238
            var_248_2 = var_230_1
        else if (rax_45 s< 0 && rax_45 != 0)
            var_230_1 = rdi_9.d
            sub_1405dac90(&var_238)
            r12_2 = var_238
            var_248_2 = var_230_1
        int32_t rdx_23 = 0
        int32_t r9_8 = 0
        int64_t rcx_34 = 0
        
        if (rdi_9.d s> 0)
            int32_t* r8_8 = nullptr
            
            do
                *(r12_2 + (rcx_34 << 2)) = rdx_23
                
                if (rdx_23 s< r15[1].d && r9_8 == *(r8_8 + *r15))
                    rdx_23 += 1
                    r8_8 = &r8_8[1]
                
                r9_8 += 1
                rcx_34 += 1
            while (rcx_34 s< rdi_9)
        
        int32_t rax_49 = (*(*r14_1 + 0x48))(r14_1)
        int64_t rdx_24 = *r14_1
        int64_t rsi_4 = sx.q(rax_49)
        int32_t r9_9 = 0
        int32_t rax_51 = (*(rdx_24 + 0x48))(r14_1, rdx_24) - r15[1].d
        int32_t var_240_1 = 0
        void* rdx_25 = nullptr
        var_238 = nullptr
        
        if (rsi_4.d s> 0)
            int64_t rsi_5 = 0
            int64_t var_228_2 = 0
            
            do
                int64_t r8_9 = *(r14_1 + 8)
                int64_t rcx_37 = sx.q(*(r8_9 + (rdx_25 << 2)))
                
                if (rcx_37.d != 0xffffffff)
                    *(r8_9 + (rdx_25 << 2)) = rcx_37.d - *(r12_2 + (rcx_37 << 2))
                
                void* rdx_26 = *(arg1 + 0x118)
                int64_t var_138
                __builtin_memset(&var_138, 0, 0x2c)
                int64_t r15_4 = sx.q(r9_9) * 0x50
                int32_t var_10c_1 = 0x80
                int32_t var_108_1 = 0xffffffff
                int32_t var_104_1 = 0
                int64_t var_f8_1 = 0
                int32_t var_f0_1 = 0
                sub_140780cc0(&var_138, rdx_26 + r15_4)
                int64_t* rdi_12 = *(arg1 + 0x118) + rsi_5
                sub_141d1c8e0(rdi_12, 0)
                int32_t i_4 = rdi_12[9].d
                
                if (i_4 s> 0)
                    int64_t r8_10 = 0
                    uint64_t i_3 = zx.q(i_4)
                    uint64_t i_1
                    
                    do
                        void* rcx_41 = rdi_12[8]
                        void* rax_53 = &rdi_12[7]
                        int64_t rdx_30 = (sx.q(rdi_12[9].d) - 1) & r8_10
                        
                        if (rcx_41 != 0)
                            rax_53 = rcx_41
                        
                        r8_10 += 1
                        *(rax_53 + (rdx_30 << 2)) = 0xffffffff
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                int32_t var_110
                int32_t r8_11 = var_110
                int64_t var_128
                int64_t* var_218_2 = &var_128
                var_220 = 0
                int32_t var_21c_3 = 1
                int32_t var_210_2 = 0xffffffff
                int64_t var_20c_2 = 0
                
                if (r8_11 != 0)
                    sub_14059bdd0(&var_220)
                    r8_11 = var_110
                
                zmm2 = var_210_2.o
                float zmm0_3[0x4] = var_220.o
                var_1f8 = &var_138
                double var_1e0_2[0x2] = zmm2
                var_20c_2.d = r8_11
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                var_1a8 = var_1f8.o
                int64_t var_188_2 = zmm2.q
                
                while (true)
                    int64_t rcx_44 = sx.q(zmm0_3[3])
                    char rax_55
                    
                    if (rcx_44.d != ((0xffffffff << (r8_11.b & 0x1f)).q u>> 0x20).d
                            || zmm0_3[0].q != &var_128)
                        rax_55 = 0
                    else
                        rax_55 = 1
                    
                    int64_t* rdx_32 = var_1a8[0].q
                    
                    if (rax_55 == 0 || rdx_32 != &var_138)
                        rax_55 = 1
                    else
                        rax_55 = 0
                    
                    if (rax_55 == 0)
                        break
                    
                    int64_t rsi_6 = sx.q(*(*rdx_32 + rcx_44 * 0xc))
                    
                    if (rsi_6.d s>= 0 && rsi_6.d s< var_248_2)
                        int32_t rsi_7 = rsi_6.d - *(r12_2 + (rsi_6 << 2))
                        
                        if (rsi_6.d - *(r12_2 + (rsi_6 << 2)) s>= 0 && rsi_7 s< rax_51)
                            int64_t* rdi_14 = *(arg1 + 0x118) + r15_4
                            sub_1409afd50(rdi_14, &var_168)
                            int32_t* rcx_47 = var_168[2].q
                            uint32_t rax_56 = var_168[0]
                            char* var_250_2 = nullptr
                            *rcx_47 = rsi_7
                            rcx_47[1] = 0xffffffff
                            sub_1406da850(rdi_14, &var_1b0, rsi_7, rcx_47, rax_56, var_250_2)
                    
                    zmm0_3[2] &= not.d(var_1a8[3])
                    sub_14059bdd0(&var_1a8[2])
                
                r14_1 = arg1 + 0xf8
                int32_t var_f0_2 = 0
                
                if (var_f8_1 != 0)
                    sub_140a74f90(var_f8_1)
                
                sub_140909ff0(&var_138)
                r9_9 = var_240_1 + 1
                rdx_25 = var_238 + 1
                rsi_5 = var_228_2 + 0x50
                var_240_1 = r9_9
                var_238 = rdx_25
                var_228_2 = rsi_5
            while (rdx_25 s< rsi_4)
            
            rbx = var_244
            r15 = arg3
        
        if (r12_2 != 0)
            sub_140a74f90(r12_2)
    
    result = sub_141d22440(arg1, arg2, r15, rbx)

__security_check_cookie(result_1 ^ &var_278)
return result
