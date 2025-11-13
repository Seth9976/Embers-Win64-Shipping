// 函数: sub_141093660
// 地址: 0x141093660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0
int32_t i_1 = 0

if (*(result + 0x1008) s> 0)
    int64_t* rdi_1 = nullptr
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    uint128_t zmm7 = 0x3f000000
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    uint128_t zmm11
    uint128_t var_a8_1 = zmm11
    uint128_t zmm12
    uint128_t var_b8_1 = zmm12
    uint128_t zmm13
    uint128_t var_c8_1 = zmm13
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    uint128_t zmm15
    uint128_t var_e8_1 = zmm15
    int64_t* var_130_1 = nullptr
    
    do
        void* r13_1 = *(rdi_1 + *(result + 0x1000))
        int64_t* r12_1 = *(r13_1 + 8)
        char rax_1 = *(r12_1 + 0x39)
        
        if ((rax_1 & 2) != 0 && rax_1 s< 0)
            int64_t* var_118 = nullptr
            int32_t var_110_1 = 0
            sub_14139bda0(r13_1, &var_118)
            int64_t* rdx_2 = var_118
            void* rcx_1 = *(*rdx_2 + 8)
            uint128_t var_108 = *(rcx_1 + 0xc0)
            uint64_t var_f8_1 = *(rcx_1 + 0xd0)
            int32_t var_f0_1 = *(rcx_1 + 0xd8)
            uint128_t zmm0_1
            uint128_t zmm1_1
            
            if (var_110_1 s> 1)
                uint64_t j_2 = zx.q(var_110_1 - 1)
                uint128_t zmm5_1 = var_108:8.d
                void* rdx_3 = &rdx_2[1]
                zmm1_1 = var_108:4.d
                zmm8 = var_f8_1:4.d
                zmm9 = var_f8_1.d
                zmm10 = var_108:0xc.d
                int32_t arg_8 = var_f0_1.d
                zmm0_1 = var_108.d
                int32_t arg_10 = zmm0_1.d
                int32_t arg_20 = zmm5_1.d
                int32_t arg_18 = zmm1_1.d
                uint64_t j
                
                do
                    void* rcx_2 = *(*rdx_3 + 8)
                    
                    if ((*(rcx_2 + 0x39) & 2) != 0)
                        uint128_t zmm4_1 = zmm0_1
                        zmm0_1.d = zmm0_1.d f+ zmm10.d
                        zmm4_1.d = zmm4_1.d f- zmm10.d
                        uint128_t zmm2
                        zmm2.d = zmm1_1.d f- zmm9.d
                        uint128_t zmm3
                        zmm3.d = zmm5_1.d f- zmm8.d
                        zmm1_1.d = zmm1_1.d f+ zmm9.d
                        zmm10 = zmm0_1
                        zmm0_1.d = zmm5_1.d f+ zmm8.d
                        zmm13 = zmm4_1
                        zmm12 = zmm2
                        zmm11 = zmm3
                        zmm9 = zmm1_1
                        zmm8 = zmm0_1
                        
                        if (not(zmm4_1.d f<= zmm10.d))
                            zmm13 = zmm10
                        
                        if (not(zmm2.d f<= zmm1_1.d))
                            zmm12 = zmm1_1
                        
                        if (not(zmm3.d f<= zmm0_1.d))
                            zmm11 = zmm0_1
                        
                        if (not(zmm4_1.d f< zmm10.d))
                            zmm10 = zmm4_1
                        
                        if (not(zmm2.d f< zmm1_1.d))
                            zmm9 = zmm2
                        
                        if (not(zmm3.d f< zmm0_1.d))
                            zmm8 = zmm3
                        
                        zmm6 = *(rcx_2 + 0xc0)
                        zmm3 = *(rcx_2 + 0xcc)
                        zmm14 = *(rcx_2 + 0xc4)
                        zmm1_1.d = zmm6.d f- zmm3.d
                        zmm15 = *(rcx_2 + 0xc8)
                        zmm4_1 = *(rcx_2 + 0xd0)
                        zmm5_1 = *(rcx_2 + 0xd4)
                        zmm0_1.d = zmm14.d f- zmm4_1.d
                        int32_t var_134_1 = zmm6.d
                        zmm2.d = zmm15.d f- zmm5_1.d
                        
                        if (not(zmm13.d f<= zmm1_1.d))
                            zmm13 = zmm1_1
                        
                        if (not(zmm12.d f<= zmm0_1.d))
                            zmm12 = zmm0_1
                        
                        if (not(zmm11.d f<= zmm2.d))
                            zmm11 = zmm2
                        
                        if (not(zmm10.d f>= zmm1_1.d))
                            zmm10 = zmm1_1
                        
                        if (not(zmm9.d f>= zmm0_1.d))
                            zmm9 = zmm0_1
                        
                        if (not(zmm8.d f>= zmm2.d))
                            zmm8 = zmm2
                        
                        zmm1_1.d = zmm6.d f+ zmm3.d
                        zmm0_1.d = zmm14.d f+ zmm4_1.d
                        zmm2.d = zmm15.d f+ zmm5_1.d
                        
                        if (not(zmm13.d f<= zmm1_1.d))
                            zmm13 = zmm1_1
                        
                        if (not(zmm12.d f<= zmm0_1.d))
                            zmm12 = zmm0_1
                        
                        if (not(zmm11.d f<= zmm2.d))
                            zmm11 = zmm2
                        
                        if (not(zmm10.d f>= zmm1_1.d))
                            zmm10 = zmm1_1
                        
                        if (not(zmm9.d f>= zmm0_1.d))
                            zmm9 = zmm0_1
                        
                        if (not(zmm8.d f>= zmm2.d))
                            zmm8 = zmm2
                        
                        zmm8.d = zmm8.d f- zmm11.d
                        zmm10.d = zmm10.d f- zmm13.d
                        zmm9.d = zmm9.d f- zmm12.d
                        zmm5_1 = zmm8
                        zmm8.d = zmm8.d f* 0.5f
                        zmm6 = zmm10
                        zmm5_1.d = zmm5_1.d f* zmm5_1.d
                        zmm10.d = zmm10.d f* 0.5f
                        zmm7 = zmm9
                        zmm9.d = zmm9.d f* 0.5f
                        zmm2.d = zmm8.d f+ zmm11.d
                        zmm4_1.d = zmm10.d f+ zmm13.d
                        zmm7.d = zmm7.d f* zmm7.d
                        zmm13 = arg_10
                        zmm3.d = zmm9.d f+ zmm12.d
                        zmm6.d = zmm6.d f* zmm6.d
                        zmm12 = arg_20
                        zmm15.d = zmm15.d f- zmm2.d
                        zmm0_1.d = var_134_1.d f- zmm4_1.d
                        arg_10 = zmm4_1.d
                        zmm13.d = zmm13.d f- zmm4_1.d
                        arg_20 = zmm2.d
                        zmm11.d = arg_18.d f- zmm3.d
                        arg_18 = zmm3.d
                        zmm14.d = zmm14.d f- zmm3.d
                        zmm12.d = zmm12.d f- zmm2.d
                        zmm15.d = zmm15.d f* zmm15.d
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm7.d = zmm7.d f+ zmm6.d
                        zmm11.d = zmm11.d f* zmm11.d
                        zmm14.d = zmm14.d f* zmm14.d
                        zmm13.d = zmm13.d f* zmm13.d
                        zmm7.d = zmm7.d f+ zmm5_1.d
                        zmm14.d = zmm14.d f+ zmm0_1.d
                        zmm12.d = zmm12.d f* zmm12.d
                        zmm11.d = zmm11.d f+ zmm13.d
                        zmm7.d = zmm7.d f* 0.25f
                        zmm5_1 = zmm2
                        zmm14.d = zmm14.d f+ zmm15.d
                        zmm11.d = zmm11.d f+ zmm12.d
                        zmm1_1 = _mm_sqrt_ss(0, zmm14.d)
                        zmm0_1 = _mm_sqrt_ss(0, zmm11.d)
                        zmm1_1.d = zmm1_1.d f+ *(rcx_2 + 0xd8)
                        zmm0_1.d = zmm0_1.d f+ arg_8
                        var_108.d = zmm4_1.d
                        var_108:4.d = zmm3.d
                        var_108:8.d = zmm2.d
                        var_108:0xc.d = zmm10.d
                        zmm11 = _mm_max_ss(zmm1_1.d, zmm0_1.d)
                        var_f8_1.d = zmm9.d
                        var_f8_1:4.d = zmm8.d
                        zmm1_1 = zmm3
                        zmm11 = _mm_min_ss(zmm11.d, _mm_sqrt_ss(0, zmm7.d).d)
                        zmm0_1 = zmm4_1
                        arg_8 = zmm11.d
                        var_f0_1 = zmm11.d
                    
                    rdx_3 += 8
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                zmm7 = 0x3f000000
            
            int32_t j_1 = 0
            
            if (*(arg1 + 0xa8) s> 0)
                int64_t rdi_2 = 0
                
                do
                    void* rbx = *(arg1 + 0xa0)
                    zmm6 = data_1439b5214
                    
                    if ((*(*r12_1 + 0x120))(r12_1) != 0)
                        zmm0_1.d = var_f0_1.d f* zmm7.d
                        zmm6.d = zmm6.d f+ zmm0_1.d
                    
                    zmm0_1.d = var_108:0xc.d.d f+ zmm6.d
                    zmm1_1.d = var_f8_1.d.d f+ zmm6.d
                    int32_t var_128 = zmm0_1.d
                    zmm0_1.d = var_f8_1:4.d.d f+ zmm6.d
                    int32_t var_124_1 = zmm1_1.d
                    int32_t var_120_1 = zmm0_1.d
                    char rax_8
                    rax_8, zmm7 = sub_141f8d780(rbx + 0xbf0 + rdi_2, &var_108, &var_128)
                    
                    if (rax_8 != 0)
                        void* rbx_1 = rbx + rdi_2
                        int64_t rsi_1 = sx.q(*(rbx_1 + 0x5170))
                        int32_t rax_9 = (rsi_1 + 1).d
                        *(rbx_1 + 0x5170) = rax_9
                        
                        if (rax_9 s> *(rbx_1 + 0x5174))
                            sub_14083a310(rbx_1 + 0x5168, rsi_1.d)
                        
                        *(*(rbx_1 + 0x5168) + (rsi_1 << 3)) = r13_1
                    
                    j_1 += 1
                    rdi_2 += 0x5240
                while (j_1 s< *(arg1 + 0xa8))
                
                i = i_1
                rdi_1 = var_130_1
        
        result = *(arg1 + 8)
        i += 1
        rdi_1 = &rdi_1[1]
        i_1 = i
        var_130_1 = rdi_1
    while (i s< *(result + 0x1008))

return result
