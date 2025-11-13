// 函数: sub_142697e40
// 地址: 0x142697e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = arg1[0x95]

if (rcx != 0)
    void* rcx_1 = *(rcx + 8)
    
    if (rcx_1 != 0 && not(0f f>= *(rcx_1 + 0x28)) && not(0f f>= *(rcx_1 + 0x2c)))
        void* rbx_1 = arg1[0x5c]
        
        if (rbx_1 != 0)
            int128_t* rax = sub_1405e25d0(rcx_1)
            uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(*(rbx_1 + 0x20)))
            void* rax_1 = arg1[0x5c]
            int128_t zmm6 = *rax ^ data_142d3f780
            zmm8.d = zmm8.d f* *(rbx_1 + 0x28)
            int128_t zmm15 = *(rax + 8) ^ data_142d3f780
            int64_t rsi_1 = sx.q(*(rax_1 + 0x118))
            int64_t rbx_2 = *(rax_1 + 0x110)
            int32_t rdx = rsi_1.d
            int32_t var_108_1 = zmm6.d
            int32_t* var_140_1 = nullptr
            int32_t* var_158 = nullptr
            int32_t arg_20 = rsi_1.d
            int32_t var_150_1 = rsi_1.d
            
            if (rsi_1.d != 0)
                sub_1405c4a00(&var_158, rdx, 0)
                int32_t* rax_2 = var_158
                var_140_1 = rax_2
                memcpy(rax_2, rbx_2, (rsi_1 << 3).d)
                rdx = *(rax_1 + 0x118)
                arg_20 = var_150_1
            
            int32_t* var_128_1 = nullptr
            int32_t* r12_1 = nullptr
            int32_t* var_168
            __builtin_memset(&var_168, 0, 0x20)
            int32_t r14_2 = 0
            int32_t arg_18 = 0
            int32_t* r13_1 = nullptr
            int32_t r15_1 = 0
            int32_t* var_120_1 = nullptr
            int64_t var_160
            
            if (rdx s> 0)
                sub_1405c5570(&var_168, rdx)
                int32_t rdx_2 = *(rax_1 + 0x118)
                
                if (rdx_2 s> 0)
                    sub_1405c5570(&var_158, rdx_2)
                    r13_1 = var_158
                    r15_1 = var_150_1
                    var_120_1 = r13_1
                
                r12_1 = var_168
                r14_2 = var_160.d
                var_128_1 = r12_1
                arg_18 = r14_2
            
            int64_t* rsi_3 = rax_1 + 0x110
            rsi_3[1].d = 0
            
            if (*(rsi_3 + 0xc) s<= 0xffffffff)
                sub_1405c5570(rsi_3, 0)
            
            int32_t* rdx_3 = *arg2
            int32_t* var_f0_1 = rdx_3
            void* rax_5 = &rdx_3[sx.q(arg2[1].d) * 5]
            
            if (rdx_3 != rax_5)
                uint128_t zmm3 = 0xbf000000
                int128_t zmm7
                int128_t var_58_1 = zmm7
                int128_t zmm10
                int128_t var_88_1 = zmm10
                int128_t zmm11
                int128_t var_98_1 = zmm11
                int128_t zmm12
                int128_t var_a8_1 = zmm12
                int128_t zmm13
                int128_t var_b8_1 = zmm13
                int128_t zmm14
                zmm14.d = 1f f/ zmm8.d
                
                do
                    int128_t zmm2 = rdx_3[4]
                    zmm13.d = zmm6.d f- *rdx_3
                    zmm10.d = data_143b51ce8.d f* zmm8.d
                    zmm12.d = zmm15.d f- rdx_3[1]
                    zmm10.d = zmm10.d f* 0.5f
                    float zmm1 = (zmm2.d f+ zmm13.d) f* zmm14.d
                    zmm11.d = zmm2.d f+ zmm10.d
                    zmm10.d = zmm10.d f+ rdx_3[3]
                    zmm11.d = zmm11.d f* zmm11.d
                    zmm10.d = zmm10.d f* zmm10.d
                    uint128_t zmm0
                    zmm0.d = zmm3.d f- (zmm1 + zmm1)
                    zmm1 = (zmm12.d f- zmm2.d) f* zmm14.d
                    int32_t rcx_10 = neg.d(int.d(zmm0.d) s>> 1)
                    int32_t var_10c_1 = rcx_10
                    int32_t rax_7 = int.d(zmm1 + zmm1 - 0.5f) s>> 1
                    int32_t var_110_1 = rax_7
                    zmm1 = (zmm2.d f+ zmm12.d) f* zmm14.d
                    zmm0.d = zmm3.d f- (zmm1 + zmm1)
                    zmm1 = (zmm13.d f- zmm2.d) f* zmm14.d
                    int32_t r8_5 = neg.d(int.d(zmm0.d) s>> 1)
                    int32_t var_148_1 = r8_5
                    int32_t rdi_2 = int.d(zmm1 + zmm1 - 0.5f) s>> 1
                    
                    if (rdi_2 s<= rcx_10)
                        do
                            int32_t rbx_3 = rax_7
                            
                            if (rax_7 s<= r8_5)
                                zmm0.d = _mm_cvtepi32_ps(zx.o(rdi_2)).d f+ 0.5f
                                zmm0.d = zmm0.d f* zmm8.d
                                zmm7.d = zmm13.d f- zmm0.d
                                zmm7.d = zmm7.d f* zmm7.d
                                
                                do
                                    zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_3)).d f+ 0.5f
                                    zmm0.d = zmm0.d f* zmm8.d
                                    zmm6.d = zmm12.d f- zmm0.d
                                    zmm6.d = zmm6.d f* zmm6.d
                                    zmm6.d = zmm6.d f+ zmm7.d
                                    
                                    if (not(zmm6.d f>= zmm11.d))
                                        int32_t* rcx_11 = r13_1
                                        int32_t var_100_1 = rbx_3
                                        void* rdx_5 = &r13_1[sx.q(r15_1) * 2]
                                        
                                        if (r13_1 != rdx_5)
                                            while (*rcx_11 != rdi_2 || rcx_11[1] != rbx_3)
                                                rcx_11 = &rcx_11[2]
                                                
                                                if (rcx_11 == rdx_5)
                                                    goto label_1426981e7
                                        
                                        if (r13_1 == rdx_5
                                            || ((rcx_11 - r13_1) s>> 3).d == 0xffffffff)
                                        label_1426981e7:
                                            int64_t rsi_4 = sx.q(r15_1)
                                            r15_1 = (rsi_4 + 1).d
                                            int32_t var_14c
                                            
                                            if (r15_1 s> var_14c)
                                                sub_1405a4d70(&var_158)
                                                r8_5 = var_148_1
                                                r13_1 = var_158
                                            
                                            *(r13_1 + (rsi_4 << 3)) = rdi_2.q
                                        
                                        if (not(zmm6.d f>= zmm10.d))
                                            int32_t* rcx_15 = r12_1
                                            int32_t var_f8_1 = rbx_3
                                            void* rdx_7 = &r12_1[sx.q(r14_2) * 2]
                                            
                                            if (r12_1 != rdx_7)
                                                while (*rcx_15 != rdi_2 || rcx_15[1] != rbx_3)
                                                    rcx_15 = &rcx_15[2]
                                                    
                                                    if (rcx_15 == rdx_7)
                                                        goto label_142698260
                                            
                                            if (r12_1 == rdx_7
                                                || ((rcx_15 - r12_1) s>> 3).d == 0xffffffff)
                                            label_142698260:
                                                int64_t rsi_5 = sx.q(r14_2)
                                                r14_2 = (rsi_5 + 1).d
                                                var_160.d = r14_2
                                                
                                                if (r14_2 s> var_160:4.d)
                                                    sub_1405a4d70(&var_168)
                                                    r14_2 = var_160.d
                                                    r12_1 = var_168
                                                
                                                r8_5 = var_148_1
                                                *(r12_1 + (rsi_5 << 3)) = rdi_2.q
                                    
                                    rbx_3 += 1
                                while (rbx_3 s<= r8_5)
                                
                                rax_7 = var_110_1
                                rcx_10 = var_10c_1
                                var_120_1 = r13_1
                                var_128_1 = r12_1
                                arg_18 = r14_2
                            
                            rdi_2 += 1
                        while (rdi_2 s<= rcx_10)
                        
                        zmm6 = var_108_1
                        zmm3 = 0xbf000000
                        rdx_3 = var_f0_1
                    
                    rdx_3 = &rdx_3[5]
                    var_f0_1 = rdx_3
                while (rdx_3 != rax_5)
                
                rsi_3 = rax_1 + 0x110
            
            if (r14_2 != 0)
                int32_t rax_12 = rsi_3[1].d
                int32_t rdx_9 = r14_2 + rax_12
                
                if (rdx_9 s> *(rsi_3 + 0xc))
                    sub_1405c5570(rsi_3, rdx_9)
                    rax_12 = *(rax_1 + 0x118)
                
                memcpy(*rsi_3 + (sx.q(rax_12) << 3), r12_1, r14_2 << 3)
                rsi_3[1].d += r14_2
            
            int32_t rsi_6 = arg_20
            int64_t var_138 = 0
            int64_t var_130_1 = 0
            
            if (rsi_6 s> 0)
                sub_1405c5570(&var_138, rsi_6)
            
            int32_t r13_2 = rsi_6 - 1
            int32_t* r15_2
            
            if (r13_2 s< 0)
                r15_2 = var_120_1
            else
                r15_2 = var_120_1
                void* rdi_3 = &r15_2[sx.q(r15_1) * 2]
                int32_t* rbx_4 = &var_140_1[sx.q(r13_2) * 2]
                int32_t* r12_2 = rbx_4
                int32_t temp0_4
                
                do
                    int32_t* rcx_25 = r15_2
                    
                    if (r15_2 != rdi_3)
                        while (*rcx_25 != *rbx_4 || rcx_25[1] != rbx_4[1])
                            rcx_25 = &rcx_25[2]
                            
                            if (rcx_25 == rdi_3)
                                goto label_1426983f9
                    
                    if (r15_2 == rdi_3 || ((rcx_25 - r15_2) s>> 3).d == 0xffffffff)
                    label_1426983f9:
                        int64_t rsi_7 = sx.q(var_130_1.d)
                        int32_t rax_16 = (rsi_7 + 1).d
                        var_130_1.d = rax_16
                        
                        if (rax_16 s> var_130_1:4.d)
                            sub_1405a4d70(&var_138)
                        
                        *(var_138 + (rsi_7 << 3)) = *rbx_4
                        int32_t rcx_30 = arg_20 - r13_2 - 1
                        
                        if (rcx_30 s>= 1)
                            rcx_30 = 1
                        
                        if (rcx_30 != 0)
                            memcpy(r12_2, &var_140_1[sx.q(arg_20 - rcx_30) * 2], rcx_30 << 3)
                        
                        rsi_6 = arg_20 - 1
                        arg_20 = rsi_6
                    else
                        sub_14266e030(rax_1 + 0x110, r12_2)
                    
                    r12_2 -= 8
                    rbx_4 -= 8
                    temp0_4 = r13_2
                    r13_2 -= 1
                while (temp0_4 - 1 s>= 0)
                r14_2 = arg_18
                r12_1 = var_128_1
            
            int32_t* r13_3 = nullptr
            var_168 = nullptr
            int32_t rdi_4 = 0
            int64_t var_160_1 = 0
            int32_t rdx_16 = *(rax_1 + 0x118)
            
            if (rdx_16 s> 0)
                sub_1405c5570(&var_168, rdx_16)
                rdi_4 = var_160_1.d
                r13_3 = var_168
            
            int64_t rbx_5 = sx.q(r14_2 - 1)
            
            if (r14_2 - 1 s>= 0)
                int32_t* r8_10 = var_140_1
                void* rsi_9 = &r8_10[sx.q(rsi_6) * 2]
                int64_t temp1_1
                
                do
                    int32_t* rcx_36 = r8_10
                    
                    if (r8_10 != rsi_9)
                        while (*rcx_36 != r12_1[rbx_5 * 2] || rcx_36[1] != r12_1[rbx_5 * 2 + 1])
                            rcx_36 = &rcx_36[2]
                            
                            if (rcx_36 == rsi_9)
                                goto label_142698525
                    
                    if (r8_10 == rsi_9 || ((rcx_36 - r8_10) s>> 3).d == 0xffffffff)
                    label_142698525:
                        int64_t r14_4 = sx.q(rdi_4)
                        rdi_4 = (r14_4 + 1).d
                        var_160_1.d = rdi_4
                        
                        if (rdi_4 s> var_160_1:4.d)
                            sub_1405a4d70(&var_168)
                            r8_10 = var_140_1
                            rdi_4 = var_160_1.d
                            r13_3 = var_168
                        
                        *(r13_3 + (r14_4 << 3)) = *(r12_1 + (rbx_5 << 3))
                    
                    temp1_1 = rbx_5
                    rbx_5 -= 1
                while (temp1_1 - 1 s>= 0)
            
            result = (*(*arg1 + 0x7a8))(arg1, &var_138)
            
            if (rdi_4 s> 0)
                int64_t* rcx_41 = arg1[0x5c]
                
                if (rcx_41 != 0)
                    result = sub_1426906e0(rcx_41, &var_168)
                    r13_3 = var_168
            
            if (r13_3 != 0)
                result = sub_140a74f90(r13_3)
            
            int64_t rcx_43 = var_138
            
            if (rcx_43 != 0)
                result = sub_140a74f90(rcx_43)
            
            if (r15_2 != 0)
                result = sub_140a74f90(r15_2)
            
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
            
            if (var_140_1 != 0)
                return sub_140a74f90(var_140_1)

return result
