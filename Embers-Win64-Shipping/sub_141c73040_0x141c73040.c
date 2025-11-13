// 函数: sub_141c73040
// 地址: 0x141c73040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f34a18
sub_140b34200("UpdateSources", rax)
int64_t* r8 = arg1[2]

if (r8 != 0)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 != 0 && (*(arg1 + 0x74) & 8) == 0 && arg1[0x2c].b != 0)
        if (*r8 != 0)
            void* rcx_1 = arg1[1]
            *(arg1 + 0x44) += 1
            
            if ((*(rcx_1 + 0x358) & 0x10) != 0)
                int32_t rbx_1 = *(rax_1 + 0x8c)
                int64_t* rcx_2 = *(rcx_1 + 0x60)
                
                if ((*(*rcx_2 + 0x40))(rcx_2, zx.q(rbx_1), &r8[2]) != 0)
                    int64_t* rcx_3 = arg1[1]
                    (*(*rcx_3 + 0xe0))(rcx_3, zx.q(rbx_1), arg1[2] + 0x10)
            
            uint128_t zmm0_1 = sub_141e60140(arg1[2])
            void* rcx_5 = arg1[1]
            arg1[7].d = zmm0_1.d
            
            if ((*(arg1[2] + 0x100) & 0x100) == 0)
                zmm0_1.d = zmm0_1.d f* *(rcx_5 + 0xc4)
                arg1[7].d = zmm0_1.d
            
            float zmm0_2[0x4] = sub_141e769f0(rcx_5, zmm0_1.d)
            void* rax_7 = arg1[0x12]
            float zmm3 = zmm0_2[0]
            arg1[7].d = zmm3
            int64_t (* var_178)(int64_t* arg1)
            
            if (rax_7 != 0)
                void* rax_8 = arg1[1]
                uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(rax_7 + 0x44)))
                int64_t* rax_9 = arg1[0x15]
                zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(*(rax_8 + 0xc))).d
                zmm3 = zmm3 f* zmm2.d
                arg1[7].d = zmm3
                
                if (not(zmm3 f== *(rax_9 + 0x74)))
                    void* rcx_6 = *rax_9
                    *(rax_9 + 0x74) = zmm3
                    int32_t var_1a0_1 = *(rax_9 + 0x8c)
                    zmm0_2 = rcx_6.o
                    void** const var_158_1 = &data_142d42ed8
                    int64_t var_168_1 = 0
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x93)
                    temp0_3[0] = zmm3
                    var_178 = j_sub_141c53510
                    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                    void* var_1a8_1
                    var_1a8_1.o = temp0_4
                    float var_150_1[0x4] = temp0_4
                    sub_141c56770(rcx_6, &var_178)
            
            float zmm0_3[0x4] = sub_141e5f820(arg1[2])
            int64_t* rax_11 = arg1[0x15]
            
            if (not(zmm0_3[0] f== *(rax_11 + 0x7c)))
                void* rcx_8 = *rax_11
                *(rax_11 + 0x7c) = zmm0_3[0]
                int32_t var_1a0_2 = *(rax_11 + 0x8c)
                uint128_t zmm1_1 = rcx_8.o
                void** const var_158_2 = &data_142d42ed8
                int64_t var_168_2 = 0
                _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
                zmm1_1.d = zmm0_3[0]
                var_178 = sub_141c57150
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x39)
                void* var_1a8_2
                var_1a8_2.o = zmm1_1
                uint128_t var_150_2 = zmm1_1
                sub_141c56770(rcx_8, &var_178)
            
            float zmm6[0x4] = zx.o(0)
            int128_t var_98_1 = arg2
            
            if (sub_141e807c0(arg1[1]) == 0)
                void* rdx_5 = arg1[2]
                void* rcx_10 = arg1[1]
                
                if ((*(*(rdx_5 + 0xc0) + 0x182) & 8) == 0)
                    arg2 = *(rcx_10 + 0xc0)
                else
                    arg2 = 0x3f800000
                
                zmm6 = *(rcx_10 + 0x2d0)
                int128_t zmm0_4 = sub_141e63200(rdx_5)
                arg2.d = arg2.d f* zmm6[0]
                int128_t zmm7
                zmm7.d = zmm0_4.d f* arg2.d
                zmm7.d = zmm7.d f* sub_141e5f830(arg1[2])
                zmm0_3 = sub_1419e3820(arg1, zmm7)
                
                if (zmm0_3[0] >= 0f)
                    zmm6 = __minss_xmmss_memss(zmm0_3[0], 0x40800000)
                else
                    zmm6 = zx.o(0)
            
            int64_t* rax_15 = arg1[0x15]
            
            if (not(zmm6[0] f== rax_15[0xf].d))
                void* rcx_14 = *rax_15
                rax_15[0xf].d = zmm6[0]
                int32_t var_1a0_3 = *(rax_15 + 0x8c)
                zmm0_3 = rcx_14.o
                void** const var_158_3 = &data_142d42ed8
                int64_t var_168_3 = 0
                float temp0_8[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x93)
                temp0_8[0] = zmm6[0]
                var_178 = sub_141c56e90
                float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x39)
                void* var_1a8_3
                var_1a8_3.o = temp0_9
                float var_150_3[0x4] = temp0_9
                sub_141c56770(rcx_14, &var_178)
            
            uint64_t var_138
            uint64_t* rax_17 = sub_141e62e30(arg1, &var_138)
            void* rcx_16 = arg1[2]
            *(arg1 + 0xd0) = *rax_17
            *(arg1 + 0xe0) = *(rax_17 + 0x10)
            *(arg1 + 0xf0) = *(rax_17 + 0x20)
            *(arg1 + 0x100) = *(rax_17 + 0x30)
            *(arg1 + 0x110) = *(rax_17 + 0x40)
            *(arg1 + 0x120) = *(rax_17 + 0x50)
            *(arg1 + 0x130) = *(rax_17 + 0x60)
            *(arg1 + 0x140) = *(rax_17 + 0x70)
            *(arg1 + 0x150) = *(rax_17 + 0x80)
            
            if (sub_141e631e0(rcx_16) != 0)
                int64_t* rax_19 = arg1[0x15]
                int128_t var_128_1 = *(arg1 + 0xd0)
                int128_t var_108_1 = *(arg1 + 0xf0)
                uint64_t rbx_2 = *rax_19
                int32_t rax_20 = *(rax_19 + 0x8c)
                int128_t var_118_1 = *(arg1 + 0xe0)
                int128_t var_e8_1 = *(arg1 + 0x110)
                int128_t var_f8_1 = *(arg1 + 0x100)
                int128_t var_c8_1 = *(arg1 + 0x130)
                int128_t zmm0_6 = *(arg1 + 0x150)
                int128_t var_d8_1 = *(arg1 + 0x120)
                int128_t zmm1_3 = *(arg1 + 0x140)
                var_138 = rbx_2
                int32_t var_130_1 = rax_20
                void*** rax_21 = sub_140a82f30(0xb0, 0x10)
                int128_t zmm0_7 = var_138.o
                *rax_21 = &data_14320afe0
                *(rax_21 + 0x10) = zmm0_7
                *(rax_21 + 0x20) = var_128_1
                *(rax_21 + 0x30) = var_118_1
                *(rax_21 + 0x40) = var_108_1
                *(rax_21 + 0x50) = var_f8_1
                *(rax_21 + 0x60) = var_e8_1
                *(rax_21 + 0x70) = var_d8_1
                *(rax_21 + 0x80) = var_c8_1
                *(rax_21 + 0x90) = zmm1_3
                *(rax_21 + 0xa0) = zmm0_6
                void*** var_168_4 = rax_21
                int64_t (* rax_22)(int64_t* arg1) = var_178
                
                if (rax_21 != -0x10)
                    rax_22 = sub_141c570b0
                
                var_178 = rax_22
                sub_141c56770(rbx_2, &var_178)
            
            uint128_t zmm8_1
            int32_t zmm9_1
            zmm8_1, zmm9_1 = sub_141c73cb0(arg1)
            uint64_t var_198
            
            if ((*(arg1 + 0x19c) & 0x40) != 0)
                int32_t* rbx_3 = arg1[0x31]
                void* rsi_2 = sx.q(arg1[0x32].d) * 0xa8 + rbx_3
                
                if (rbx_3 != rsi_2)
                    uint32_t zmm7_1[0x4] = 0x7fffffff
                    
                    do
                        char rcx_19 = rbx_3[2].b
                        uint128_t zmm0_8
                        uint128_t zmm2_1
                        
                        if (rcx_19 != 2)
                            zmm0_8.d = rbx_3[6].d f- rbx_3[5]
                            int32_t zmm3_1 = rbx_3[3]
                            zmm2_1 = rbx_3[4]
                            uint128_t zmm6_1
                            zmm6_1.d = (*(arg1[2] + 0x160)).d f- rbx_3[5]
                            zmm6_1.d = zmm6_1.d f/ _mm_max_ss(zmm0_8.d, zmm9_1).d
                            
                            if (zmm6_1.d f>= zmm8_1.d)
                                zmm6_1 = _mm_min_ss(zmm6_1.d, zmm9_1)
                            else
                                zmm6_1 = zmm8_1
                            
                            if (rcx_19 != 0)
                                zmm0_8, zmm7_1, zmm8_1, zmm9_1 =
                                    sub_141f86ef0(sub_141f8b8d0(&rbx_3[8]), zmm6_1, zmm8_1)
                                zmm2_1 = zmm0_8
                            else
                                zmm2_1.d = zmm2_1.d f- zmm3_1
                                zmm2_1.d = zmm2_1.d f* zmm6_1.d
                                zmm2_1.d = zmm2_1.d f+ zmm3_1
                        else
                            zmm2_1 = *rbx_3
                        
                        if (zmm2_1.d f>= zmm8_1.d)
                            zmm2_1 = _mm_min_ss(zmm2_1.d, zmm9_1)
                        else
                            zmm2_1 = zmm8_1
                        
                        zmm0_8.d = zmm2_1.d f- *rbx_3
                        
                        if (not(_mm_and_ps(zmm0_8, zmm7_1).d f<= 9.99999994e-09f))
                            int32_t rax_26 = rbx_3[1]
                            *rbx_3 = zmm2_1.d
                            void** rax_27 = arg1[0x15]
                            int32_t arg_c = zmm2_1.d
                            int64_t var_168_5 = 0
                            void** const var_158_4 = &data_142e345d8
                            void* rcx_22 = *rax_27
                            int32_t var_1a0_4 = *(rax_27 + 0x8c)
                            int32_t var_19c
                            var_19c.b = *(rbx_3 + 9)
                            var_198 = rax_26.q
                            uint64_t var_140_1 = var_198
                            uint128_t var_150_4 = rcx_22.o
                            var_178 = j_sub_141c53e10
                            sub_141c56770(rcx_22, &var_178)
                        
                        rbx_3 = &rbx_3[0x2a]
                    while (rbx_3 != rsi_2)
            
            sub_141e6bbf0(arg1)
            int32_t r14_1 = *(arg1[3] + 0xc)
            char rax_32
            int512_t zmm10
            rax_32, zmm10 = sub_141c581f0(arg1, r14_1, &arg1[0x16])
            zmm10.o = var_98_1
            
            if (rax_32 != 0)
                uint64_t rsi_3 = 0
                void** rcx_25 = arg1[0x15]
                int64_t rbx_4 = sx.q(arg1[0x17].d)
                void* rax_34 = *rcx_25
                int64_t rdi_1 = arg1[0x16]
                uint8_t r12_2 = (*(arg1[2] + 0x100) u>> 0xb).b & 1
                uint8_t r13_2 = (*(arg1 + 0x19c) u>> 2).b & 1
                int32_t rax_35 = *(rcx_25 + 0x8c)
                int32_t arg_8 = rax_35
                var_198 = 0
                int32_t var_190_1 = rbx_4.d
                
                if (rbx_4.d != 0)
                    sub_141c457d0(&var_198, rbx_4.d, 0)
                    rsi_3 = var_198
                    memcpy(rsi_3, rdi_1, (rbx_4 << 2).d)
                    rbx_4 = zx.q(var_190_1)
                    arg_8 = rax_35
                
                void*** rax_37 = sub_140a82f30(0x30, 8)
                *rax_37 = &data_14320b000
                rax_37[1] = rax_34
                rax_37[2].d = arg_8
                *(rax_37 + 0x14) = r14_1
                rax_37[3] = 0
                rax_37[4].d = rbx_4.d
                
                if (rbx_4.d != 0)
                    sub_141c457d0(&rax_37[3], rbx_4.d, 0)
                    memcpy(rax_37[3], rsi_3, rbx_4.d << 2)
                else
                    *(rax_37 + 0x24) = 0
                
                rax_37[5].b = r13_2
                *(rax_37 + 0x29) = r12_2
                *rax_37 = &data_14320b020
                int64_t (* rax_40)(int64_t* arg1) = var_178
                
                if (rax_37 != -8)
                    rax_40 = j_sub_141c54790
                
                void*** var_168_6 = rax_37
                var_178 = rax_40
                sub_141c56770(rax_34, &var_178)
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
        else
            (*(*arg1 + 0x40))(arg1)

return sub_140b38680("UpdateSources", rax) __tailcall
