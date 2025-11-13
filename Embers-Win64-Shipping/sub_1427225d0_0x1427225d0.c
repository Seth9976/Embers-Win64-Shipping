// 函数: sub_1427225d0
// 地址: 0x1427225d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = 0x7f7fffff
void* rsi = *(arg1 + 0x38)
int64_t* rdi = *(arg1 + 0x80)
void* r13 = &rdi[sx.q(*(arg1 + 0x88)) * 3]

if (rdi != r13)
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0 && rdi[1] != 0)
            void* rax_2 = sub_140d21950(rbx_1, sub_142725fc0())
            
            if (rax_2 != 0)
                int64_t rdx_2 = *rax_2
                void* rax_3 = (*(rdx_2 + 0x10))(rax_2, rdx_2)
                
                if (rax_3 != 0)
                    int64_t rdx_3 = sx.q(*(rax_3 + 0xe4))
                    
                    if (*(rsi + 0x40) != *(rsi + 0x6c))
                        void* rcx_2 = *(rsi + 0x78)
                        void* r9_1 = rsi + 0x70
                        
                        if (rcx_2 != 0)
                            r9_1 = rcx_2
                        
                        int32_t i_1 = *(r9_1 + (((sx.q(*(rsi + 0x80)) - 1) & rdx_3) << 2))
                        int32_t i = i_1
                        
                        if (i_1 != 0xffffffff)
                            int64_t r9_2 = *(rsi + 0x38)
                            
                            do
                                int32_t* r10_1 = sx.q(i) * 0x3c
                                
                                if (*(r10_1 + r9_2) == rdx_3.d)
                                    if (i != 0xffffffff)
                                        int32_t* rcx_5
                                        
                                        if (i_1 == 0xffffffff)
                                        label_14272270d:
                                            rcx_5 = nullptr
                                        else
                                            while (true)
                                                rcx_5 = sx.q(i_1) * 0x3c + r9_2
                                                
                                                if (*rcx_5 == rdx_3.d)
                                                    break
                                                
                                                i_1 = rcx_5[0xd]
                                                
                                                if (i_1 == 0xffffffff)
                                                    goto label_14272270d_1
                                            
                                            if (i_1 == 0xffffffff)
                                            label_14272270d_1:
                                                rcx_5 = nullptr
                                        
                                        if (test_bit(rcx_5[3], zx.d(*(arg1 + 0x44))))
                                            int64_t* rcx_7 = rdi[1]
                                            zmm6 = rdi[2].d
                                            void var_58
                                            int32_t* rax_7 = (*(*rcx_7 + 0x2f0))(rcx_7, &var_58)
                                            uint128_t zmm2
                                            zmm2.d = zmm6.d f* *rax_7
                                            int64_t zmm3
                                            zmm3.d = zmm6.q.d f* rax_7[1]
                                            zmm6.d = zmm6.d f* rax_7[2]
                                            void* rcx_8 = *(rdi[1] + 0x130)
                                            float* rax_9
                                            uint128_t zmm0
                                            float zmm1[0x4]
                                            
                                            if (rcx_8 == 0)
                                                int32_t var_b4_1 = data_143dbb200
                                                uint64_t var_bc
                                                rax_9 = &var_bc
                                                var_bc = data_143dbb1f8.q
                                            else
                                                zmm1 = *(rcx_8 + 0x1d0)
                                                float var_c8
                                                rax_9 = &var_c8
                                                var_c8 = zmm1[0]
                                                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                                float var_c0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                                                int32_t var_c4_1 = zmm0.d
                                            
                                            zmm1 = zx.o(*rax_9)
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            zmm6.d = zmm6.d f+ rax_9[2]
                                            zmm0 = zmm1
                                            zmm3.d = zmm3.d f+ _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                                            int32_t var_a4 = 0
                                            int32_t var_a0_1 = 0x7f7fffff
                                            int32_t var_90_1 = zmm6.d
                                            int32_t rax_13 = rcx_5[6]
                                            uint64_t var_98_1 = (_mm_unpacklo_ps(zmm2, zmm3)).q
                                            int32_t var_84_1 = rax_13
                                            uint64_t var_8c_1 = *(rcx_5 + 0x10)
                                            int32_t var_9c_1 = 0x3f800000
                                            int64_t var_80_1 = 0
                                            char var_78_1 = 0xff
                                            int64_t var_74
                                            sub_140b58260(&var_74, u"Invalid", 1)
                                            int64_t rbx_2 = rdi[1]
                                            int32_t rdx_5
                                            rdx_5.b = *(arg1 + 0x2c) == 1
                                            int64_t rax_16 = *(arg1 + 0x48)
                                            int32_t var_6c = (rdx_5 + 2) | (var_6c & 0xfffffffa)
                                            char rdx_8 = *(arg1 + 0x44)
                                            rcx_5[0xb] |= 1
                                            char var_78_2 = rdx_8
                                            var_74 = rax_16
                                            result = sub_14270a6d0(sub_140d3c6e0(&rcx_5[1]), rbx_2, 
                                                &var_a4)
                                    
                                    break
                                
                                i = *(r10_1 + r9_2 + 0x34)
                            while (i != 0xffffffff)
        
        rdi = &rdi[3]
    while (rdi != r13)

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) s<= 0xffffffff)
    sub_1405a5130(arg1 + 0x80, 0)

return result
