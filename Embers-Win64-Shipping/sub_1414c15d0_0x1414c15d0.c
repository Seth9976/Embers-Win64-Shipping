// 函数: sub_1414c15d0
// 地址: 0x1414c15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint64_t result = __security_cookie ^ &var_258
uint64_t result_2 = result
int32_t i_1 = 0

if (*(arg1 + 0x20) s> 0)
    uint64_t rax_1 = zx.q(data_14401b1a0)
    int64_t* rcx = nullptr
    int64_t* var_1c8_1 = nullptr
    int32_t i
    
    do
        int32_t rdx = 0
        void* rbx_1 = *(rcx + *(arg1 + 0x18))
        void* rax_3 = *(arg1 + 0x10)
        void* var_1f8 = rbx_1
        void* r9_2 = sx.q(*(rbx_1 + 0x28)) * 0x70 + *(rax_3 + 0x2f0)
        int64_t* r13_1
        
        if (*(r9_2 + 0x28) s<= 0)
        label_1414c1697:
            r13_1 = nullptr
        else
            int64_t* rcx_2 = *(r9_2 + 0x20)
            
            while (true)
                r13_1 = *rcx_2
                int32_t r8_1 = r13_1[0xae].d
                
                if ((r8_1.b & 0x41) == 0x41 && not(test_bit(r8_1, 9)))
                    break
                
                rdx += 1
                rcx_2 = &rcx_2[1]
                
                if (rdx s>= *(r9_2 + 0x28))
                    goto label_1414c1697
        
        int64_t* rcx_3 = *(rbx_1 + 0x20)
        char rax_8 = (*(*rcx_3 + 0x30))(rcx_3)
        int64_t* rcx_4 = *(rbx_1 + 0x20)
        bool var_218_1 = r13_1 != 0
        int32_t var_1c0
        (*(*rcx_4 + 0x10))(rcx_4, &var_1c0)
        void* r8_2 = *(arg1 + 8)
        int32_t var_170_1 = *(arg1 + 0x3c)
        int32_t var_160_1 = *(arg1 + 0x30)
        int64_t var_178 = *(arg1 + 0x34)
        int64_t* var_238_1 = &var_178
        int64_t var_168 = *(arg1 + 0x28)
        int64_t var_1d0
        sub_1414c4850(&var_1d0, &var_1c0, r8_2, &var_168, var_238_1)
        int32_t result_1
        result = zx.q(result_1)
        int32_t rbx_2 = var_1d0.d
        int32_t var_1d8_1 = result.d
        
        if (rbx_2 s< result.d)
            char rdi_1 = *(arg1 + 0x40)
            void* var_158
            sub_1419a2ec0(*(*(arg1 + 8) + 0x5150), &var_158, &data_143ee9770, 0)
            void var_f8
            int128_t* rax_14
            int32_t r9_4
            rax_14, r9_4 = sub_1419a2ec0(*(*(arg1 + 8) + 0x5150), &var_f8, &data_143f5e530, 0)
            void* r15_1 = *rax_14
            void* rax_15 = *(arg1 + 8)
            void* const var_208 = *(rax_14 + 8)
            void* var_1e0_1 = r15_1
            int32_t rax_18
            rax_18.b = r13_1 != 0
            void* var_148
            sub_1419a2ec0(*(rax_15 + 0x5150), &var_148, &data_143ee9870, 
                (sbb.d(r9_4, r9_4, rdi_1 != 0) & 4) + (sbb.d(rax_15.d, rax_15.d, rax_8 != 0) & 2)
                    + rax_18)
            uint64_t rax_19 = zx.q(*(arg2 + 0xa0))
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x2c)
            int32_t rsi_2 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            int16_t var_4c_1 = 0
            char var_4a_1 = 0
            int16_t var_48_1 = 0
            int32_t var_8c_1 = rax_19.d
            int128_t var_e8
            __builtin_memset(&var_e8, 0, 0x30)
            int128_t var_a0_1 = zx.o(0)
            
            if (rax_19.d != 0)
                do
                    uint64_t rdi_2 = zx.q(rsi_2)
                    uint64_t r15_2 = rdi_2 * 3
                    int64_t* rcx_10 = *(arg2 + (r15_2 << 3) + 0xa8)
                    
                    if (rcx_10 == 0)
                        *(&var_88 + rdi_2) = 0
                        rax_19.b = 0
                    else
                        *(&var_88 + rdi_2) = (*(rcx_10 + 0x3c)).b
                        int64_t var_80
                        *(&var_80 + (rdi_2 << 2)) = rcx_10[8].d
                        int64_t rax_23 = (*(*rcx_10 + 0x10))()
                        
                        if (rax_23 != 0)
                            var_4c_1:1.b = 1
                        
                        if (rax_23 == 0 || *(rax_23 + 0x68) u<= 1)
                            var_4c_1:1.b = 0
                        
                        rax_19 = zx.q(*(&var_88 + rdi_2))
                    
                    if (rax_19.b != 0)
                        var_50_1.w = (*(*(arg2 + (r15_2 << 3) + 0xa8) + 0x38)).w
                    
                    rsi_2 += 1
                while (rsi_2 u< var_8c_1)
                
                r15_1 = var_1e0_1
            
            int64_t* rcx_12 = *(arg2 + 0x168)
            int32_t var_60_1
            
            if (rcx_12 == 0)
                var_60_1 = 0
            else
                var_60_1 = *(rcx_12 + 0x3c)
                var_60_1 = rcx_12[8].d
                void* rax_27 = (*(*rcx_12 + 0x10))()
                
                if (rax_27 == 0 || *(rax_27 + 0x68) u<= 1)
                    var_4c_1:1.b = 0
                else
                    var_4c_1:1.b = 1
            
            var_58_1.b = *(arg2 + 0x170)
            var_58_1:1.b = *(arg2 + 0x171)
            var_58_1:2.b = *(arg2 + 0x172)
            var_58_1:3.b = *(arg2 + 0x173)
            var_58_1:4.d = *(arg2 + 0x174)
            
            if (var_60_1 != 0)
                var_50_1.w = (*(*(arg2 + 0x168) + 0x38)).w
            
            void* rcx_14 = var_158
            var_50_1:2.b = *(arg2 + 0x178)
            var_50_1:3.b = *(arg2 + 0x179)
            char var_4a_2 = *(arg2 + 0x17a)
            int64_t var_b0_1 = data_14395da18
            int64_t var_a8_1 = data_14395d9e8
            int64_t var_b8_1 = data_1439b53b8
            var_e8.q = data_143a2fe60
            int64_t rax_41 = 0
            
            if (rcx_14 != 0)
                int64_t rdx_6 = sx.q(*(rcx_14 + 0x10c))
                void* var_150
                int64_t* rdi_3 = *(var_150 + 0x10)
                int64_t rax_43 = rdi_3[3]
                
                if (*(rax_43 + (rdx_6 << 3)) == 0)
                    sub_1419ccf30(rdi_3, rdx_6.d)
                    rax_43 = rdi_3[3]
                
                rax_41 = *(rax_43 + (rdx_6 << 3))
            
            var_e8:8.q = rax_41
            int64_t rax_44 = 0
            
            if (r15_1 != 0)
                int64_t rdx_7 = sx.q(*(r15_1 + 0x10c))
                int64_t* rdi_5 = *(var_208 + 0x10)
                int64_t rax_45 = rdi_5[3]
                
                if (*(rax_45 + (rdx_7 << 3)) == 0)
                    sub_1419ccf30(rdi_5, rdx_7.d)
                    rax_45 = rdi_5[3]
                
                rax_44 = *(rax_45 + (rdx_7 << 3))
            
            void* rdi_6 = var_148
            int128_t var_c8_1
            var_c8_1:8.q = rax_44
            int64_t rax_46 = 0
            
            if (rdi_6 != 0)
                int64_t rdx_8 = sx.q(*(rdi_6 + 0x10c))
                void* var_140
                int64_t* rsi_5 = *(var_140 + 0x10)
                int64_t rax_48 = rsi_5[3]
                
                if (*(rax_48 + (rdx_8 << 3)) == 0)
                    sub_1419ccf30(rsi_5, rdx_8.d)
                    rax_48 = rsi_5[3]
                
                rax_46 = *(rax_48 + (rdx_8 << 3))
            
            int32_t var_90_1 = 0
            var_c8_1.q = rax_46
            sub_1419870b0(arg2, &var_e8, 2)
            void* rax_49 = *(arg1 + 8)
            void* r15_4 = *(arg2 + 0x1a0)
            var_208 = r15_4
            sub_141080ac0(rdi_6, arg2, r15_4, *(rax_49 + 0x10))
            int64_t rsi_6 = sx.q(*(rdi_6 + 0xe0))
            int32_t r8_4 = 0
            int64_t rdx_11 = 0
            
            if (rsi_6 s> 0)
                while (true)
                    void* rcx_21 = *(rdi_6 + 0xd8)
                    
                    if ((*(rdi_6 + 0xd8) & 1) != 0)
                        rcx_21 = (rcx_21 s>> 1) + rdi_6 + 0xd8
                    
                    if (*(rcx_21 + (rdx_11 << 3)) == data_143e83070)
                        break
                    
                    r8_4 += 1
                    rdx_11 += 1
                    
                    if (rdx_11 s>= rsi_6)
                        goto label_1414c1b3c
            
            void* r8_5
            
            if (rsi_6 s<= 0 || r8_4 == 0xffffffff)
            label_1414c1b3c:
                TEB* gsbase
                
                if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_1 << 3))))
                    _Init_thread_header(&data_143ce8564)
                    
                    if (data_143ce8564 == 0xffffffff)
                        data_143ce8560 = 0xffff
                        _Init_thread_footer(&data_143ce8564)
                
                r8_5 = &data_143ce8560
            else
                void* rcx_53 = *(rdi_6 + 0xe8)
                
                if ((rcx_53.b & 1) != 0)
                    rcx_53 = (rcx_53 s>> 1) + rdi_6 + 0xe8
                
                r8_5 = rcx_53 + (sx.q(r8_4) << 1)
            
            int64_t* var_230
            sub_1412155b0(arg2, r15_4, r8_5, var_1f8, rax_49.d, var_230)
            int32_t var_238_3 = (arg1 + 0x50).d
            sub_1414ba100(rdi_6 + 0x124, arg2, &var_208, rax_49)
            sub_1405eb490(arg2, &var_208, rdi_6 + 0x118, arg1 + 0x220, 0)
            var_230 = r13_1
            sub_1414b9970(rdi_6 + 0x168, arg2, r15_4, rax_49, 
                sub_1405eb490(arg2, &var_208, rdi_6 + 0x11e, &data_1439b7084, 0), var_1f8, var_230, 
                0xffffffff, var_218_1)
            void* r15_5 = var_158
            void* rdi_7 = *(arg1 + 8)
            var_1f8.d = rbx_2
            var_208 = *(arg2 + 0x188)
            void* var_238_4
            var_238_4.d = 0
            sub_1405eb490(arg2, &var_208, r15_5 + 0x118, &var_1f8, var_238_4.d)
            void* rax_57 = *(arg2 + 0x188)
            int32_t var_19c_1 = 0x3f800000
            float var_1a8[0x4]
            var_1a8[0] = var_1c0[0]
            var_208 = nullptr
            float zmm3_1[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
            int32_t var_1bc
            zmm3_1[0] = var_1bc[0]
            int32_t var_200_1 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            int32_t var_1b8
            zmm3_1[0] = var_1b8[0]
            var_208 = rax_57
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            var_1a8 = zmm3_1
            float zmm2_1[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), *(rdi_7 + 0x370))
            float zmm1_1[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), *(rdi_7 + 0x350))
            float zmm0_1[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), *(rdi_7 + 0x360))
            zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *(rdi_7 + 0x340))
            zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm0_1), _mm_add_ps(zmm1_1, zmm3_1))
            float var_198 = zmm2_1[0]
            var_238_4.d = 0
            float var_194_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            int32_t var_1b4
            float var_18c_1 = var_1b4[0]
            float var_190_1 = zmm2_1[0]
            sub_1405d0e10(arg2, &var_208, r15_5 + 0x11e, &var_198, var_238_4.d)
            int128_t zmm0_2 = *(rdi_7 + 0x280)
            zmm2_1 = *(rdi_7 + 0x2a0)
            int128_t zmm1_2 = *(rdi_7 + 0x290)
            var_208 = *(arg2 + 0x188)
            int64_t var_118_1 = zmm2_1[0].q
            zmm2_1[0] = zmm2_1[0] f- *(rdi_7 + 0x620)
            int128_t var_138 = zmm0_2
            var_238_4.d = 0
            int128_t var_128_1 = zmm1_2
            int128_t var_108_1 = *(rdi_7 + 0x2b0)
            zmm0_2.d = var_118_1:4.d.d f- *(rdi_7 + 0x624)
            var_118_1.d = zmm2_1[0]
            var_118_1:4.d = zmm0_2.d
            sub_1405eb5d0(arg2, &var_208, r15_5 + 0x124, &var_138, var_238_4.d)
            var_208 = *(arg2 + 0x188)
            void* var_238_5 = arg1 + 0x50
            int64_t r9_19 = sub_1414ba770(r15_5 + 0x12a, arg2, &var_208, rdi_7)
            
            if (var_1e0_1 != 0)
                uint64_t r15_6 = zx.q(*(var_1e0_1 + 0x11c))
                var_1f8.d = rbx_2
                
                if (r15_6.d u>= 4)
                    r15_6 = 4
                
                if (r15_6.d != 0)
                    var_208.d = zx.d(*(var_1e0_1 + 0x11a))
                    int64_t rdi_10 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                    void* var_1e8_1
                    var_1e8_1.d = zx.d(*(var_1e0_1 + 0x118))
                    int64_t rax_62 = *(arg2 + 0x1a8)
                    int64_t rax_63 = rdi_10 + r15_6
                    
                    if (rax_63 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, (r15_6 + 0x10).d)
                        rdi_10 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                        rax_63 = rdi_10 + r15_6
                    
                    *(arg2 + 0x30) = rax_63
                    r9_19 = memcpy(rdi_10, &var_1f8, r15_6.d)
                    void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_64 = &rcx_37[6]
                    
                    if (rax_64 u> *(arg2 + 0x38))
                        r9_19 = sub_140b0e3d0(arg2 + 0x30, 0x38)
                        rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_64 = &rcx_37[6]
                    
                    *(arg2 + 0x30) = rax_64
                    void**** rax_65 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_65 = rcx_37
                    *(arg2 + 8) = &rcx_37[1]
                    rcx_37[1] = 0
                    *rcx_37 = &data_142d549d8
                    rcx_37[2] = rax_62
                    rcx_37[4].d = var_1e8_1.d
                    *(rcx_37 + 0x24) = var_208.d
                    rcx_37[3] = rdi_10
                    rcx_37[5].d = r15_6.d
            
            int64_t rsi_8 = data_1439b7298
            void*** rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_70 = &rcx_43[5]
            
            if (rax_70 u> *(arg2 + 0x38))
                r9_19 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_70 = &rcx_43[5]
            
            *(arg2 + 0x30) = rax_70
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_43
            *(arg2 + 8) = &rcx_43[1]
            rcx_43[1] = 0
            rcx_43[2].d = 0
            rcx_43[4].d = 0
            *rcx_43 = &data_142d56618
            rcx_43[3] = rsi_8
            int32_t rsi_9 = data_1439b7094
            int64_t rbx_3 = data_1439b72b0
            
            if (rbx_3 == 0)
                sub_140af98a0("Unknown", 0xbc8, 
                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_19)
                sub_140afbb40()
            
            void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_73 = &rcx_49[6]
            
            if (rax_73 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_73 = &rcx_49[6]
            
            *(arg2 + 0x30) = rax_73
            int64_t* rax_74 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_74 = rcx_49
            *(arg2 + 8) = &rcx_49[1]
            rcx_49[1] = 0
            result = &data_142f11598
            *rcx_49 = &data_142f11598
            rcx_49[2] = rbx_3
            rcx_49[3] = 0
            rcx_49[4].d = rsi_9
            *(rcx_49 + 0x24) = 0
            rcx_49[5].d = rsi_9 - 2
            *(rcx_49 + 0x2c) = var_1d8_1 - rbx_2
        
        i = i_1 + 1
        rcx = &var_1c8_1[1]
        i_1 = i
        var_1c8_1 = rcx
    while (i s< *(arg1 + 0x20))

__security_check_cookie(result_2 ^ &var_258)
return result
