// 函数: sub_1426d8b90
// 地址: 0x1426d8b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg1[0x18]
uint32_t zmm7[0x4]

if (result == 0)
    zmm7 = arg1[0x1d].d
else
    int64_t rax = sx.q(*(result + 0x4c))
    result = rax + arg1[0x19]
    
    if (rax == neg.q(arg1[0x19]))
        zmm7 = arg1[0x1d].d
    else
        zmm7 = *result

if (not(_mm_min_ss(__andps_xmmxud_memxud(zmm7, data_142d3f770)[0], 0x43b38000)[0] f== 0f))
    uint64_t var_168 = 0
    int32_t i_2 = 0
    void* rdx
    
    if (arg1[0x2c] == 0)
        rdx = nullptr
    else
        void* rax_1 = sub_142736ba0()
        
        if (rax_1 == 0)
            rdx = nullptr
        else
            rdx = arg1[0x2c]
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rdx = nullptr
    
    float zmm6_1
    uint128_t zmm7_1
    uint128_t zmm8_1
    int128_t zmm9_1
    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1426e7330(arg2, rdx, &var_168)
    uint64_t i_1 = zx.q(i_2)
    uint64_t r15_1 = var_168
    
    if (i_1.d s> 0)
        int128_t var_78_1 = zmm9_1
        int64_t rax_4 = sub_140d3c6e0(arg2 + 0x34)
        int64_t* rcx_3 = arg1[0x12]
        
        if (rcx_3 != 0 && rax_4 != 0)
            int64_t r9_1 = *rcx_3
            (*(r9_1 + 0x260))(rcx_3, rax_4, zx.q(*(arg2 + 0x30)), r9_1)
            arg1[0x11] = sub_140cdb8f0(*(arg1[0x12] + 0x10), arg1[0x13])
        
        int64_t* rcx_6 = arg1[0x19]
        
        if (rcx_6 != 0 && rax_4 != 0)
            (*(*rcx_6 + 0x260))(rcx_6, rax_4, zx.q(*(arg2 + 0x30)))
            arg1[0x18] = sub_140cdb8f0(*(arg1[0x19] + 0x10), arg1[0x1a])
        
        int64_t* rcx_8 = arg1[0x20]
        
        if (rcx_8 != 0 && rax_4 != 0)
            (*(*rcx_8 + 0x260))(rcx_8, rax_4, zx.q(*(arg2 + 0x30)))
            arg1[0x1f] = sub_140cdb8f0(*(arg1[0x20] + 0x10), arg1[0x21])
        
        int64_t* rcx_10 = arg1[0x27]
        
        if (rcx_10 != 0 && rax_4 != 0)
            (*(*rcx_10 + 0x260))(rcx_10, rax_4, zx.q(*(arg2 + 0x30)))
            arg1[0x26] = sub_140cdb8f0(*(arg1[0x27] + 0x10), arg1[0x28])
        
        void* rax_15 = arg1[0x11]
        int64_t rax_16
        
        if (rax_15 != 0)
            rax_16 = sx.q(*(rax_15 + 0x4c))
        
        if (rax_15 == 0 || rax_16 == neg.q(arg1[0x12]))
            zmm9_1 = arg1[0x16].d
        else
            zmm9_1 = *(rax_16 + arg1[0x12])
        
        void* rax_18 = arg1[0x1f]
        int64_t rax_19
        
        if (rax_18 != 0)
            rax_19 = sx.q(*(rax_18 + 0x4c))
        
        uint128_t zmm2_1
        
        if (rax_18 == 0 || rax_19 == neg.q(arg1[0x20]))
            zmm2_1 = arg1[0x24].d
        else
            zmm2_1 = *(rax_19 + arg1[0x20])
        
        uint128_t zmm11 = 0x3f800000
        
        if (zmm2_1.d f>= 1f)
            zmm2_1 = _mm_min_ss(zmm2_1.d, zmm6_1)
        else
            zmm2_1 = 0x3f800000
        
        void* rax_21 = arg1[0x26]
        int32_t arg_8 = zmm2_1.d
        int64_t rax_22
        
        if (rax_21 != 0)
            rax_22 = sx.q(*(rax_21 + 0x4c))
        
        uint128_t zmm1_1
        
        if (rax_21 == 0 || rax_22 == neg.q(arg1[0x27]))
            zmm1_1 = arg1[0x2b].d
        else
            zmm1_1 = *(rax_22 + arg1[0x27])
        
        if (zmm1_1.d f>= zmm8_1.d)
            zmm1_1 = __minss_xmmss_memss(zmm1_1.d, 0x7f7fffff)
        else
            zmm1_1 = zx.o(0)
        
        uint128_t zmm4_1 = 0x3f000000
        zmm1_1.d = zmm1_1.d f/ zmm9_1.d
        int64_t var_188 = 0
        int64_t var_180_1 = 0
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        zmm1_1.d = zmm1_1.d f- 0.5f
        int32_t rsi_1 = int.d(zmm1_1.d)
        zmm1_1.d = zmm7_1.d f/ zmm2_1.d
        int32_t rsi_2 = rsi_1 s>> 1
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        uint128_t zmm0_1
        zmm0_1.d = -0.5f f- zmm1_1.d
        
        if (1 - (int.d(zmm0_1.d) s>> 1) * i_1.d * rsi_2 s> 0)
            sub_1405a5130(&var_188, 1 - (int.d(zmm0_1.d) s>> 1) * i_1.d * rsi_2)
            zmm4_1 = 0x3f000000
        
        if (i_1.d s> 0)
            uint128_t zmm3_1 = 0xbf800000
            uint128_t zmm10
            uint128_t var_88_1 = zmm10
            uint64_t r12_1 = r15_1
            uint128_t zmm12
            uint128_t var_a8_1 = zmm12
            uint128_t zmm13
            uint128_t var_b8_1 = zmm13
            zmm2_1.d = zmm7_1.d f* -0.5f
            uint64_t i_3 = i_1
            zmm7_1.d = zmm7_1.d f* zmm4_1.d
            int128_t zmm14
            int128_t var_c8_1 = zmm14
            int32_t arg_18 = zmm2_1.d
            int32_t arg_20 = zmm7_1.d
            int128_t zmm15
            int128_t var_d8_1 = zmm15
            uint64_t i
            
            do
                void* rdx_11 = *r12_1
                void* rcx_13 = *(rdx_11 + 0x130)
                float* rax_28
                
                if (rcx_13 == 0)
                    int32_t var_114_1 = data_14399f6a0
                    uint64_t var_11c
                    rax_28 = &var_11c
                    var_11c = data_14399f698.q
                else
                    float var_f0[0x6]
                    rax_28 = sub_141f133e0(rcx_13, &var_f0)
                    rdx_11 = *r12_1
                    zmm4_1 = 0x3f000000
                    zmm3_1 = 0xbf800000
                    zmm2_1 = arg_18
                
                int32_t rax_30 = rax_28[2]
                void* rax_31 = *(rdx_11 + 0x130)
                uint64_t var_178_1 = *rax_28
                int32_t* r15_2
                
                if (rax_31 == 0)
                    uint64_t var_110
                    r15_2 = &var_110
                    int32_t rax_32 = data_143dbb200
                    var_110 = data_143dbb1f8.q
                    int32_t var_108_1 = rax_32
                else
                    zmm1_1 = *(rax_31 + 0x1d0)
                    int32_t var_128
                    r15_2 = &var_128
                    var_128 = zmm1_1.d
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    int32_t var_120_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
                    int32_t var_124_1 = zmm0_1.d
                
                zmm13 = zmm2_1
                uint64_t var_158_1 = *r15_2
                
                if (not(zmm2_1.d f>= zmm7_1.d))
                    zmm14 = r15_2[2]
                    
                    do
                        zmm2_1.d = zmm13.d f* 0.0174532924f
                        zmm0_1.d = zmm2_1.d f* 0.159154937f
                        
                        if (zmm2_1.d f< zmm8_1.d)
                            zmm0_1.d = zmm0_1.d f- zmm4_1.d
                        else
                            zmm0_1.d = zmm0_1.d f+ zmm4_1.d
                        
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_1.d))).d f* 6.28318548f
                        zmm2_1.d = zmm2_1.d f- zmm0_1.d
                        
                        if (not(zmm2_1.d f<= 1.57079637f))
                            zmm0_1.d = 3.14159274f f- zmm2_1.d
                            zmm2_1 = zmm0_1
                        else if (zmm2_1.d f>= -1.57079637f)
                            zmm3_1 = zmm11
                        else
                            zmm0_1.d = -3.14159274f f- zmm2_1.d
                            zmm2_1 = zmm0_1
                        
                        zmm12 = data_14399f678:4.d
                        float zmm5_1 = zmm11.d
                        zmm10 = data_14399f680
                        zmm1_1.d = zmm2_1.d f* zmm2_1.d
                        zmm0_1.d = zmm1_1.d f* 2.3889859e-08f
                        zmm8_1.d = 2.75255616e-06f f- zmm0_1.d
                        zmm0_1.d = zmm1_1.d f* 2.60516146e-07f
                        zmm7_1.d = 2.47604949e-05f f- zmm0_1.d
                        zmm8_1.d = zmm8_1.d f* zmm1_1.d
                        zmm0_1 = data_14399f678.d
                        zmm8_1.d = zmm8_1.d f- 0.000198408743f
                        zmm7_1.d = zmm7_1.d f* zmm1_1.d
                        zmm7_1.d = zmm7_1.d f- 0.00138883782f
                        zmm8_1.d = zmm8_1.d f* zmm1_1.d
                        zmm8_1.d = zmm8_1.d f+ 0.00833333097f
                        zmm7_1.d = zmm7_1.d f* zmm1_1.d
                        zmm7_1.d = zmm7_1.d f+ 0.0416666381f
                        zmm8_1.d = zmm8_1.d f* zmm1_1.d
                        zmm8_1.d = zmm8_1.d f- 0.166666672f
                        zmm7_1.d = zmm7_1.d f* zmm1_1.d
                        zmm8_1.d = zmm8_1.d f* zmm1_1.d
                        zmm7_1.d = zmm7_1.d f- zmm4_1.d
                        zmm8_1.d = zmm8_1.d f+ zmm11.d
                        zmm7_1.d = zmm7_1.d f* zmm1_1.d
                        zmm7_1.d = zmm7_1.d f+ zmm11.d
                        zmm8_1.d = zmm8_1.d f* zmm2_1.d
                        zmm11.d = zmm0_1.d f* zmm0_1.d
                        zmm7_1.d = zmm7_1.d f* zmm3_1.d
                        zmm4_1.d = zmm8_1.d f* zmm12.d
                        zmm6_1 = zmm8_1.d f* zmm0_1.d
                        zmm3_1.d = zmm12.d f* zmm0_1.d
                        zmm5_1 = zmm5_1 f- zmm7_1.d
                        zmm8_1.d = zmm8_1.d f* zmm10.d
                        zmm10.d = zmm10.d f* zmm0_1.d
                        zmm11.d = zmm11.d f* zmm5_1
                        zmm10.d = zmm10.d f* zmm5_1
                        zmm11.d = zmm11.d f+ zmm7_1.d
                        zmm3_1.d = zmm3_1.d f* zmm5_1
                        zmm1_1.d = zmm4_1.d f+ zmm10.d
                        zmm10.d = zmm10.d f- zmm4_1.d
                        zmm11.d = zmm11.d f* var_178_1.d
                        zmm0_1.d = zmm3_1.d f- zmm8_1.d
                        zmm1_1.d = zmm1_1.d f* rax_30
                        zmm8_1.d = zmm8_1.d f+ zmm3_1.d
                        zmm10.d = zmm10.d f* var_178_1.d
                        zmm0_1.d = zmm0_1.d f* var_178_1:4.d
                        zmm8_1.d = zmm8_1.d f* var_178_1.d
                        zmm11.d = zmm11.d f+ zmm0_1.d
                        zmm11.d = zmm11.d f+ zmm1_1.d
                        zmm1_1 = data_14399f680
                        zmm2_1.d = zmm1_1.d f* zmm12.d
                        zmm12.d = zmm12.d f* zmm12.d
                        zmm2_1.d = zmm2_1.d f* zmm5_1
                        zmm12.d = zmm12.d f* zmm5_1
                        zmm0_1.d = zmm2_1.d f- zmm6_1
                        zmm12.d = zmm12.d f+ zmm7_1.d
                        zmm0_1.d = zmm0_1.d f* rax_30
                        zmm12.d = zmm12.d f* var_178_1:4.d
                        zmm12.d = zmm12.d f+ zmm8_1.d
                        zmm10.d = zmm10.d f+ (zmm6_1 f+ zmm2_1.d) f* var_178_1:4.d
                        zmm12.d = zmm12.d f+ zmm0_1.d
                        zmm0_1.d = zmm1_1.d f* zmm1_1.d
                        zmm0_1.d = zmm0_1.d f* zmm5_1
                        zmm0_1.d = zmm0_1.d f+ zmm7_1.d
                        zmm0_1.d = zmm0_1.d f* rax_30
                        int32_t rbx_2 = 1
                        zmm10.d = zmm10.d f+ zmm0_1.d
                        
                        if (rsi_2 s>= 1)
                            do
                                int64_t rdi_1 = sx.q(var_180_1.d)
                                zmm1_1 = _mm_cvtepi32_ps(zx.o(rbx_2))
                                int64_t var_138_1 = 0
                                zmm0_1.d = zmm10.d f* zmm1_1.d
                                zmm3_1.d = zmm11.d f* zmm1_1.d
                                zmm0_1.d = zmm0_1.d f* zmm9_1.d
                                zmm2_1.d = zmm12.d f* zmm1_1.d
                                zmm0_1.d = zmm0_1.d f+ zmm14.d
                                zmm3_1.d = zmm3_1.d f* zmm9_1.d
                                zmm2_1.d = zmm2_1.d f* zmm9_1.d
                                zmm3_1.d = zmm3_1.d f+ var_158_1.d
                                zmm2_1.d = zmm2_1.d f+ var_158_1:4.d.d
                                int32_t var_140_1 = zmm0_1.d
                                int32_t rax_36 = (rdi_1 + 1).d
                                var_180_1.d = rax_36
                                uint64_t var_148_1 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
                                
                                if (rax_36 s> var_180_1:4.d)
                                    sub_1405a4df0(&var_188)
                                
                                int64_t rax_37 = var_188
                                int64_t rcx_15 = rdi_1 * 3
                                rbx_2 += 1
                                *(rax_37 + (rcx_15 << 3)) = var_148_1.o
                                *(rax_37 + (rcx_15 << 3) + 0x10) = var_138_1
                            while (rbx_2 s<= rsi_2)
                        
                        zmm13.d = zmm13.d f+ arg_8
                        zmm7_1 = arg_20
                        zmm8_1 = zx.o(0)
                        zmm4_1 = 0x3f000000
                        zmm3_1 = 0xbf800000
                        zmm11 = 0x3f800000
                    while (zmm13.d f< zmm7_1.d)
                    
                    i_1 = i_3
                
                if ((arg1[0x2d].b & 1) != 0)
                    int64_t rbx_3 = sx.q(var_180_1.d)
                    int32_t var_140_2 = r15_2[2]
                    int32_t rax_39 = (rbx_3 + 1).d
                    uint64_t var_148_2 = *r15_2
                    int64_t var_138_2 = 0
                    var_180_1.d = rax_39
                    
                    if (rax_39 s> var_180_1:4.d)
                        sub_1405a4df0(&var_188)
                    
                    int64_t rax_40 = var_188
                    int64_t rcx_17 = rbx_3 * 3
                    *(rax_40 + (rcx_17 << 3)) = var_148_2.o
                    *(rax_40 + (rcx_17 << 3) + 0x10) = var_138_2
                
                zmm4_1 = 0x3f000000
                r12_1 += 8
                zmm3_1 = 0xbf800000
                i = i_1
                i_1 -= 1
                zmm2_1 = arg_18
                i_3 = i_1
            while (i != 1)
            r15_1 = var_168
        
        (*(*arg1 + 0x280))(arg1, &var_188, zmm2_1)
        result = (*(*arg1 + 0x288))(arg1, &var_188, arg2)
        int64_t rcx_20 = var_188
        
        if (rcx_20 != 0)
            result = sub_140a74f90(rcx_20)
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)

return result
