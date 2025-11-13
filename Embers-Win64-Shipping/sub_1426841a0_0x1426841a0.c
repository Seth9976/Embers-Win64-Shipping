// 函数: sub_1426841a0
// 地址: 0x1426841a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x4a8)

if (rsi != 0)
    void* r14_1 = *(rsi + 8)
    uint64_t r15
    r15.b = 0
    uint128_t zmm6 = data_143dbb1f8
    uint128_t zmm7 = data_143dbb1fc
    uint128_t zmm8 = data_143dbb200
    uint128_t zmm9 = zmm6
    uint128_t zmm10 = zmm7
    uint128_t zmm11 = zmm8
    int32_t var_c4_1 = zmm6.d
    int32_t var_c0_1 = zmm7.d
    int32_t var_bc_1 = zmm8.d
    int32_t var_d0_1 = zmm6.d
    int32_t var_cc_1 = zmm7.d
    int32_t var_c8_1 = zmm8.d
    char var_b8_1 = 0
    
    if (r14_1 != 0)
        int32_t rbx_1 = 0
        
        if (sub_1405f8990(r14_1) s> 0)
            int32_t rax_5
            
            do
                void* rax_2 = sub_142610d00(r14_1, rbx_1)
                
                if (rax_2 != 0)
                    void* rax_3 = *(rax_2 + 8)
                    
                    if (rax_3 != 0)
                        uint128_t zmm1 = *(rax_3 + 0x5c) ^ 0x80000000
                        int32_t var_e8 = (*(rax_3 + 0x54) ^ 0x80000000).d
                        int32_t var_e0_1 = (*(rax_3 + 0x58)).d
                        int32_t var_e4_1 = zmm1.d
                        int32_t var_d8_1 = (*(rax_3 + 0x68) ^ 0x80000000).d
                        int32_t var_d4_1 = (*(rax_3 + 0x64)).d
                        int32_t var_dc_1 = (*(rax_3 + 0x60) ^ 0x80000000).d
                        float var_b0[0x4]
                        sub_140acc6d0(&var_b0, &var_e8, 2)
                        int64_t var_a0
                        int32_t var_98
                        uint128_t zmm0
                        
                        if (r15.b == 0)
                            if (var_98.b != 0)
                                zmm1 = zx.o(var_a0)
                                r15 = zx.q(var_98.b)
                                float zmm2_1[0x4] = var_b0
                                var_b8_1.d = var_98
                                var_c0_1.q = zmm1.q
                                zmm7 = var_c0_1
                                var_d0_1.o = zmm2_1
                                zmm11 = var_c8_1
                                zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                zmm10 = var_cc_1
                                zmm0 = zmm2_1
                                zmm9 = var_d0_1
                                zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                        else if (var_98.b != 0)
                            zmm0 = var_b0[0]
                            
                            if (not(zmm9.d f<= zmm0.d))
                                var_d0_1 = zmm0.d
                                zmm9 = zmm0
                            
                            zmm0 = var_b0[1]
                            
                            if (not(zmm10.d f<= zmm0.d))
                                var_cc_1 = zmm0.d
                                zmm10 = zmm0
                            
                            zmm0 = var_b0[2]
                            
                            if (not(zmm11.d f<= zmm0.d))
                                var_c8_1 = zmm0.d
                                zmm11 = zmm0
                            
                            zmm0 = var_b0[3]
                            
                            if (not(zmm6.d f>= zmm0.d))
                                int32_t var_c4_2 = zmm0.d
                                zmm6 = zmm0
                            
                            zmm0 = var_a0.d
                            
                            if (not(zmm7.d f>= zmm0.d))
                                var_c0_1 = zmm0.d
                                zmm7 = zmm0
                            
                            zmm0 = var_a0:4.d
                            
                            if (not(zmm8.d f>= zmm0.d))
                                int32_t var_bc_2 = zmm0.d
                                zmm8 = zmm0
                
                rbx_1 += 1
                rax_5 = sub_1405f8990(*(rsi + 8))
            while (rbx_1 s< rax_5)
    
    *arg2 = var_d0_1.o
    arg2[1].q = var_c0_1.q
    *(arg2 + 0x18) = var_b8_1.d

return arg2
