// 函数: sub_140dcb530
// 地址: 0x140dcb530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r14 = *arg2
char rdi = *(arg2 + 0x4d)
int32_t rsi = arg2[6].d
int64_t* r15 = arg1
int64_t result_5 = sx.q(*(r14 + 0x20))
float result_6 = result_5.d

if (result_5.d s>= 2)
    char r8_1 = arg1[5].b
    uint128_t result_26
    uint128_t result_28 = result_26
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
    int128_t var_190 = *(r14 + 8)
    float result_8
    sub_140ae16d0(&var_190, &result_8, r8_1)
    uint128_t zmm6_1 = *(r14 + 0x38)
    uint128_t var_1e8
    float result_10
    void* const* result_1
    int32_t var_170
    int128_t var_108
    float result_9
    float result_23
    uint128_t zmm2_1
    uint128_t zmm3
    uint128_t zmm7_1
    uint128_t zmm8_1
    uint128_t zmm9_1
    
    if (*(r14 + 0x3c) == 0)
        int128_t* r8_10 = &var_108
        __builtin_memset(&var_108, 0, 0x20)
        
        if (zmm6_1.d f!= 1f)
            int128_t* rax_67 = sub_140e0db30(r15, rsi, r8_10, 0, 2, 0, rdi, 0, arg2)
            int32_t result_3 = (result_5 - 1).d
            result = sx.q(result_3)
            result_1 = result
            
            if (result_3 s> 0)
                int64_t rsi_5 = 0
                int64_t r13_4 = 0
                
                do
                    int64_t rax_68 = *(r14 + 0x18)
                    int32_t rdi_12 = *(rax_67 + 0x64)
                    zmm9_1 = *(rax_68 + (rsi_5 << 3))
                    zmm11 = *(rax_68 + (rsi_5 << 3) + 4)
                    zmm8_1 = *(rax_68 + (rsi_5 << 3) + 8)
                    result_26 = *(rax_68 + (rsi_5 << 3) + 0xc)
                    float result_7
                    uint128_t zmm0_6
                    uint128_t zmm1_5
                    
                    if (*(r14 + 0x30) == 0)
                        result_7 = result_8
                        result_9 = result_7
                    else
                        zmm3 = *(r14 + 8)
                        int32_t* rax_69 = *(r14 + 0x28)
                        zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rax_69 + r13_4 + 0xc)
                        char r8_13 = arg1[5].b
                        zmm1_5.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rax_69 + r13_4 + 8)
                        zmm0_6.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rax_69 + r13_4 + 4)
                        zmm3.d = zmm3.d f* *(rax_69 + r13_4)
                        var_190:4.d = zmm0_6.d
                        var_190:8.d = zmm1_5.d
                        var_190:0xc.d = zmm2_1.d
                        var_190.d = zmm3.d
                        zmm8_1, zmm9_1 = sub_140ae16d0(&var_190, &result_10, r8_13)
                        bool cond:2_1 = *(r14 + 0x30) == 0
                        result_9 = result_10
                        
                        if (cond:2_1)
                            result_7 = result_8
                        else
                            zmm3 = *(r14 + 8)
                            int64_t rax_71 = *(r14 + 0x28)
                            char r8_14 = arg1[5].b
                            zmm2_1.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rax_71 + r13_4 + 0x1c)
                            zmm1_5.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rax_71 + r13_4 + 0x18)
                            zmm0_6.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rax_71 + r13_4 + 0x14)
                            zmm3.d = zmm3.d f* *(rax_71 + r13_4 + 0x10)
                            int32_t var_16c_2 = zmm0_6.d
                            int32_t var_168_2 = zmm1_5.d
                            int32_t var_164_2 = zmm2_1.d
                            var_170 = zmm3.d
                            zmm8_1, zmm9_1 = sub_140ae16d0(&var_170, &result_6, r8_14)
                            result_7 = result_6
                    
                    zmm7_1.d = zmm8_1.d f- zmm9_1.d
                    zmm6_1.d = result_26.d f- zmm11.d
                    zmm0_6.d = zmm7_1.d f* zmm7_1.d
                    zmm1_5.d = zmm6_1.d f* zmm6_1.d
                    zmm1_5.d = zmm1_5.d f+ zmm0_6.d
                    uint128_t zmm4_4
                    uint128_t zmm5_3
                    
                    if (zmm1_5.d f<= 9.99999994e-09f)
                        zmm7_1 = zx.o(0)
                        zmm6_1 = zx.o(0)
                    else
                        zmm4_4.d = 0x3f000000
                        zmm5_3 = _mm_rsqrt_ss(zmm1_5.d, zmm1_5.d)
                        zmm3.d = zmm1_5.d f* 0.5f
                        zmm0_6.d = zmm5_3.d f* zmm5_3.d
                        zmm1_5.d = zmm3.d f* zmm0_6.d
                        zmm2_1.d = zmm4_4.d f- zmm1_5.d
                        zmm0_6.d = zmm5_3.d f* zmm2_1.d
                        zmm5_3.d = zmm5_3.d f+ zmm0_6.d
                        zmm1_5.d = zmm5_3.d f* zmm5_3.d
                        zmm3.d = zmm3.d f* zmm1_5.d
                        zmm4_4.d = 0.5f f- zmm3.d
                        zmm0_6.d = zmm5_3.d f* zmm4_4.d
                        zmm5_3.d = zmm5_3.d f+ zmm0_6.d
                        zmm7_1.d = zmm7_1.d f* zmm5_3.d
                        zmm6_1.d = zmm6_1.d f* zmm5_3.d
                    
                    zmm1_5 = data_143dbb1f0.d
                    int64_t* rcx_39 = rax_67[4].q
                    int32_t var_1f8_3 = zmm1_5.d
                    int32_t var_1f0_7 = zmm1_5.d
                    zmm1_5 = arg2[1].d
                    int32_t rdx_41 = rcx_39[1].d
                    zmm1_5.d = zmm1_5.d f+ zmm1_5.d
                    zmm0_6.d = (*(r14 + 0x38)).d f* 0.5f
                    zmm7_1.d = zmm7_1.d f* zmm0_6.d
                    zmm6_1.d = zmm6_1.d f* zmm0_6.d
                    zmm0_6 = data_143dbb1f0:4.d
                    zmm13 = zmm7_1 ^ data_142d3f780
                    zmm5_3.d = zmm9_1.d f+ zmm6_1.d
                    int32_t var_1f4_3 = zmm0_6.d
                    int32_t var_1ec_7 = zmm0_6.d
                    zmm4_4.d = zmm11.d f+ zmm13.d
                    zmm1_5.d = zmm1_5.d f* zmm5_3.d
                    zmm5_3.d = zmm5_3.d f+ zmm5_3.d
                    zmm2_1 = zmm4_4
                    zmm4_4.d = zmm4_4.d f* *(arg2 + 0x14)
                    zmm2_1.d = zmm2_1.d f* arg2[2].d
                    zmm5_3.d = zmm5_3.d f* *(arg2 + 0xc)
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm5_3.d = zmm5_3.d f+ zmm4_4.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm5_3.d = zmm5_3.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm5_3.d = zmm5_3.d f+ zmm4_4.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm5_3.d = zmm5_3.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ 0.5f
                    zmm5_3.d = zmm5_3.d f+ 0.5f
                    int32_t var_1e0_7 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_5.d) s>> 1)).d
                    float result_12 = result_9
                    zmm0_6 = _mm_cvtepi32_ps(zx.o(int.d(zmm5_3.d) s>> 1))
                    rcx_39[1].d = rdx_41 + 1
                    int32_t var_1dc_7 = zmm0_6.d
                    
                    if (rdx_41 + 1 s> *(rcx_39 + 0xc))
                        sub_1405c4ec0(rcx_39)
                    
                    zmm11.d = zmm11.d f+ zmm7_1.d
                    zmm14 = zmm6_1 ^ data_142d3f780
                    int64_t rdx_42 = sx.q(rdx_41) * 5
                    zmm9_1.d = zmm9_1.d f+ zmm14.d
                    int64_t rcx_40 = *rax_67[4].q
                    *(rcx_40 + (rdx_42 << 3)) = var_1f8_3.o
                    *(rcx_40 + (rdx_42 << 3) + 0x10) = var_1e8
                    *(rcx_40 + (rdx_42 << 3) + 0x20) = result_12.q
                    *(rax_67 + 0x64) += 1
                    zmm1_5 = data_143dbb1f0.d
                    zmm2_1.d = zmm11.d f* arg2[2].d
                    int64_t* rcx_41 = rax_67[4].q
                    zmm0_6 = data_143dbb1f0:4.d
                    zmm11.d = zmm11.d f* *(arg2 + 0x14)
                    float result_14 = rcx_41[1].d
                    int32_t var_1f8_4 = zmm1_5.d
                    int32_t var_1f0_8 = zmm1_5.d
                    zmm1_5.d = zmm9_1.d f+ zmm9_1.d
                    int32_t var_1f4_4 = zmm0_6.d
                    zmm9_1.d = zmm9_1.d f+ zmm9_1.d
                    int32_t var_1ec_8 = zmm0_6.d
                    zmm1_5.d = zmm1_5.d f* arg2[1].d
                    zmm9_1.d = zmm9_1.d f* *(arg2 + 0xc)
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm9_1.d = zmm9_1.d f+ zmm11.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm9_1.d = zmm9_1.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm9_1.d = zmm9_1.d f+ zmm11.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm9_1.d = zmm9_1.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ 0.5f
                    zmm9_1.d = zmm9_1.d f+ 0.5f
                    int32_t var_1e0_8 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_5.d) s>> 1)).d
                    float result_13 = result_9
                    zmm0_6 = _mm_cvtepi32_ps(zx.o(int.d(zmm9_1.d) s>> 1))
                    result_9 = result_14
                    rcx_41[1].d = result_14 i+ 1
                    int32_t var_1dc_8 = zmm0_6.d
                    
                    if (result_14 i+ 1 s> *(rcx_41 + 0xc))
                        sub_1405c4ec0(rcx_41)
                        result_14 = result_9
                    
                    int64_t rdx_43 = sx.q(result_14) * 5
                    zmm5_3.d = zmm8_1.d f+ zmm6_1.d
                    zmm4_4.d = result_26.d f+ zmm13.d
                    int64_t rcx_42 = *rax_67[4].q
                    *(rcx_42 + (rdx_43 << 3)) = var_1f8_4.o
                    *(rcx_42 + (rdx_43 << 3) + 0x10) = var_1e8
                    *(rcx_42 + (rdx_43 << 3) + 0x20) = result_13.q
                    *(rax_67 + 0x64) += 1
                    zmm1_5 = data_143dbb1f0.d
                    zmm2_1.d = zmm4_4.d f* arg2[2].d
                    int64_t* rcx_43 = rax_67[4].q
                    zmm0_6 = data_143dbb1f0:4.d
                    zmm4_4.d = zmm4_4.d f* *(arg2 + 0x14)
                    float result_15 = rcx_43[1].d
                    int32_t var_1f8_5 = zmm1_5.d
                    int32_t var_1f0_9 = zmm1_5.d
                    zmm1_5 = arg2[1].d
                    zmm1_5.d = zmm1_5.d f+ zmm1_5.d
                    int32_t var_1f4_5 = zmm0_6.d
                    int32_t var_1ec_9 = zmm0_6.d
                    result_9 = result_15
                    zmm1_5.d = zmm1_5.d f* zmm5_3.d
                    zmm5_3.d = zmm5_3.d f+ zmm5_3.d
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm5_3.d = zmm5_3.d f* *(arg2 + 0xc)
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm5_3.d = zmm5_3.d f+ zmm4_4.d
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm5_3.d = zmm5_3.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm5_3.d = zmm5_3.d f+ zmm4_4.d
                    zmm1_5.d = zmm1_5.d f+ 0.5f
                    zmm5_3.d = zmm5_3.d f+ *(arg2 + 0x1c)
                    zmm5_3.d = zmm5_3.d f+ 0.5f
                    int32_t var_1e0_9 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_5.d) s>> 1)).d
                    zmm0_6 = _mm_cvtepi32_ps(zx.o(int.d(zmm5_3.d) s>> 1))
                    rcx_43[1].d = result_15 i+ 1
                    int32_t var_1dc_9 = zmm0_6.d
                    
                    if (result_15 i+ 1 s> *(rcx_43 + 0xc))
                        sub_1405c4ec0(rcx_43)
                        result_15 = result_9
                    
                    zmm8_1.d = zmm8_1.d f+ zmm14.d
                    int64_t rdx_44 = sx.q(result_15) * 5
                    result_26.d = result_26.d f+ zmm7_1.d
                    int64_t rcx_44 = *rax_67[4].q
                    *(rcx_44 + (rdx_44 << 3)) = var_1f8_5.o
                    *(rcx_44 + (rdx_44 << 3) + 0x10) = var_1e8
                    *(rcx_44 + (rdx_44 << 3) + 0x20) = result_7.q
                    *(rax_67 + 0x64) += 1
                    zmm1_5 = data_143dbb1f0.d
                    zmm2_1.d = result_26.d f* arg2[2].d
                    int64_t* rcx_45 = rax_67[4].q
                    zmm0_6 = data_143dbb1f0:4.d
                    result_26.d = result_26.d f* *(arg2 + 0x14)
                    int64_t rbx_4 = sx.q(rcx_45[1].d)
                    int32_t var_1f8_6 = zmm1_5.d
                    int32_t var_1f0_10 = zmm1_5.d
                    zmm1_5 = arg2[1].d
                    zmm1_5.d = zmm1_5.d f+ zmm1_5.d
                    int32_t var_1f4_6 = zmm0_6.d
                    int32_t var_1ec_10 = zmm0_6.d
                    zmm1_5.d = zmm1_5.d f* zmm8_1.d
                    zmm8_1.d = zmm8_1.d f+ zmm8_1.d
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm8_1.d = zmm8_1.d f* *(arg2 + 0xc)
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm8_1.d = zmm8_1.d f+ result_26.d
                    zmm1_5.d = zmm1_5.d f+ zmm2_1.d
                    zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x1c)
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm8_1.d = zmm8_1.d f+ result_26.d
                    zmm1_5.d = zmm1_5.d f+ 0.5f
                    zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x1c)
                    zmm8_1.d = zmm8_1.d f+ 0.5f
                    int32_t var_1e0_10 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_5.d) s>> 1)).d
                    int32_t rax_97 = (rbx_4 + 1).d
                    zmm0_6 = _mm_cvtepi32_ps(zx.o(int.d(zmm8_1.d) s>> 1))
                    rcx_45[1].d = rax_97
                    int32_t var_1dc_10 = zmm0_6.d
                    
                    if (rax_97 s> *(rcx_45 + 0xc))
                        sub_1405c4ec0(rcx_45)
                    
                    int64_t rdx_46 = rbx_4 * 5
                    int64_t rcx_46 = *rax_67[4].q
                    *(rcx_46 + (rdx_46 << 3)) = var_1f8_6.o
                    *(rcx_46 + (rdx_46 << 3) + 0x10) = var_1e8
                    *(rcx_46 + (rdx_46 << 3) + 0x20) = result_7.q
                    *(rax_67 + 0x64) += 1
                    sub_140de7260(rax_67, rdi_12)
                    sub_140de7260(rax_67, rdi_12 + 1)
                    sub_140de7260(rax_67, rdi_12 + 2)
                    sub_140de7260(rax_67, rdi_12 + 2)
                    sub_140de7260(rax_67, rdi_12 + 1)
                    result = sub_140de7260(rax_67, rdi_12 + 3)
                    rsi_5 += 1
                    r13_4 += 0x10
                while (rsi_5 s< result_1)
        else
            int128_t* rax_47 = sub_140e0db30(r15, rsi, r8_10, 0, 1, 0, rdi, 0, arg2)
            int32_t result_2 = (result_5 - 1).d
            result = sx.q(result_2)
            result_1 = result
            
            if (result_2 s> 0)
                int64_t rsi_4 = 0
                int32_t* rdi_11 = nullptr
                
                do
                    bool cond:5_1 = *(r14 + 0x30) == 0
                    result_9 = *(rax_47 + 0x64)
                    int64_t rax_49 = *(r14 + 0x18)
                    zmm8_1 = *(rax_49 + (rsi_4 << 3))
                    zmm6_1 = *(rax_49 + (rsi_4 << 3) + 4)
                    zmm9_1 = *(rax_49 + (rsi_4 << 3) + 8)
                    zmm7_1 = *(rax_49 + (rsi_4 << 3) + 0xc)
                    float result_21
                    float result_17
                    uint128_t zmm0_5
                    uint128_t zmm1_4
                    
                    if (cond:5_1)
                        result_17 = result_8
                        result_21 = result_17
                    else
                        zmm3 = *(r14 + 8)
                        int64_t rax_50 = *(r14 + 0x28)
                        char r8_11 = r15[5].b
                        zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rdi_11 + rax_50 + 0xc)
                        zmm1_4.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rdi_11 + rax_50 + 8)
                        zmm0_5.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rdi_11 + rax_50 + 4)
                        zmm3.d = zmm3.d f* *(rdi_11 + rax_50)
                        var_190:4.d = zmm0_5.d
                        var_190:8.d = zmm1_4.d
                        var_190:0xc.d = zmm2_1.d
                        var_190.d = zmm3.d
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(&var_190, &result_23, r8_11)
                        result_21 = result_23
                        
                        if (*(r14 + 0x30) == 0)
                            result_17 = result_8
                        else
                            zmm3 = *(r14 + 8)
                            int64_t rax_51 = *(r14 + 0x28)
                            char r8_12 = r15[5].b
                            zmm2_1.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rdi_11 + rax_51 + 0x1c)
                            zmm1_4.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rdi_11 + rax_51 + 0x18)
                            zmm0_5.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rdi_11 + rax_51 + 0x14)
                            zmm3.d = zmm3.d f* *(rdi_11 + rax_51 + 0x10)
                            int32_t var_16c_1 = zmm0_5.d
                            int32_t var_168_1 = zmm1_4.d
                            int32_t var_164_1 = zmm2_1.d
                            var_170 = zmm3.d
                            zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
                                sub_140ae16d0(&var_170, &result_10, r8_12)
                            result_17 = result_10
                    
                    zmm2_1 = arg2[1].d
                    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                    float zmm4_3 = zmm8_1.d f* *(arg2 + 0xc)
                    int64_t* rcx_31 = rax_47[4].q
                    int32_t var_1f8_1 = data_143dbb1f0.d.d
                    zmm2_1.d = zmm2_1.d f* zmm8_1.d
                    int32_t var_1f4_1 = data_143dbb1f0:4.d.d
                    zmm1_4.d = zmm6_1.d f* arg2[2].d
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    int64_t r13_1 = sx.q(rcx_31[1].d)
                    int32_t var_1f0_5 = 0x3f800000
                    int32_t var_1ec_5 = 0x3f800000
                    zmm2_1.d = zmm2_1.d f+ zmm1_4.d
                    zmm6_1.d = zmm6_1.d f* *(arg2 + 0x14)
                    zmm2_1.d = zmm2_1.d f+ arg2[3].d
                    zmm6_1.d = zmm6_1.d f+ zmm4_3
                    zmm2_1.d = zmm2_1.d f+ zmm1_4.d
                    zmm6_1.d = zmm6_1.d f+ *(arg2 + 0x1c)
                    zmm2_1.d = zmm2_1.d f+ arg2[3].d
                    zmm6_1.d = zmm6_1.d f+ zmm4_3
                    zmm2_1.d = zmm2_1.d f+ 0.5f
                    zmm6_1.d = zmm6_1.d f+ *(arg2 + 0x1c)
                    zmm6_1.d = zmm6_1.d f+ 0.5f
                    int32_t var_1e0_5 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1.d) s>> 1)).d
                    int32_t rax_56 = (r13_1 + 1).d
                    zmm0_5 = _mm_cvtepi32_ps(zx.o(int.d(zmm6_1.d) s>> 1))
                    rcx_31[1].d = rax_56
                    int32_t var_1dc_5 = zmm0_5.d
                    
                    if (rax_56 s> *(rcx_31 + 0xc))
                        sub_1405c4ec0(rcx_31)
                    
                    int64_t rdx_31 = r13_1 * 5
                    int32_t var_1f0_6 = 0x3f800000
                    int64_t rcx_32 = *rax_47[4].q
                    int32_t var_1ec_6 = 0x3f800000
                    *(rcx_32 + (rdx_31 << 3)) = var_1f8_1.o
                    *(rcx_32 + (rdx_31 << 3) + 0x10) = var_1e8
                    *(rcx_32 + (rdx_31 << 3) + 0x20) = result_21.q
                    *(rax_47 + 0x64) += 1
                    zmm2_1 = arg2[1].d
                    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
                    zmm4_3 = zmm9_1.d f* *(arg2 + 0xc)
                    int64_t* rcx_33 = rax_47[4].q
                    int32_t var_1f8_2 = data_143dbb1f0.d.d
                    zmm2_1.d = zmm2_1.d f* zmm9_1.d
                    int64_t r15_8 = sx.q(rcx_33[1].d)
                    int32_t var_1f4_2 = data_143dbb1f0:4.d.d
                    zmm1_4.d = zmm7_1.d f* arg2[2].d
                    zmm7_1.d = zmm7_1.d f+ zmm7_1.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_4.d
                    zmm7_1.d = zmm7_1.d f* *(arg2 + 0x14)
                    zmm2_1.d = zmm2_1.d f+ arg2[3].d
                    zmm7_1.d = zmm7_1.d f+ zmm4_3
                    zmm2_1.d = zmm2_1.d f+ zmm1_4.d
                    zmm7_1.d = zmm7_1.d f+ *(arg2 + 0x1c)
                    zmm2_1.d = zmm2_1.d f+ arg2[3].d
                    zmm7_1.d = zmm7_1.d f+ zmm4_3
                    zmm2_1.d = zmm2_1.d f+ 0.5f
                    zmm7_1.d = zmm7_1.d f+ *(arg2 + 0x1c)
                    zmm7_1.d = zmm7_1.d f+ 0.5f
                    int32_t var_1e0_6 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1.d) s>> 1)).d
                    int32_t rax_62 = (r15_8 + 1).d
                    zmm0_5 = _mm_cvtepi32_ps(zx.o(int.d(zmm7_1.d) s>> 1))
                    rcx_33[1].d = rax_62
                    int32_t var_1dc_6 = zmm0_5.d
                    
                    if (rax_62 s> *(rcx_33 + 0xc))
                        sub_1405c4ec0(rcx_33)
                    
                    int64_t rdx_33 = r15_8 * 5
                    int64_t rcx_34 = *rax_47[4].q
                    *(rcx_34 + (rdx_33 << 3)) = var_1f8_2.o
                    *(rcx_34 + (rdx_33 << 3) + 0x10) = var_1e8
                    *(rcx_34 + (rdx_33 << 3) + 0x20) = result_17.q
                    int64_t* r15_9 = *(rax_47 + 0x48)
                    *(rax_47 + 0x64) += 1
                    int64_t r13_2 = sx.q(r15_9[1].d)
                    int32_t rax_64 = (r13_2 + 1).d
                    r15_9[1].d = rax_64
                    
                    if (rax_64 s> *(r15_9 + 0xc))
                        sub_1405a4cf0(r15_9)
                    
                    *(*r15_9 + (r13_2 << 2)) = result_9
                    int64_t* r15_10 = *(rax_47 + 0x48)
                    *(rax_47 + 0x68) += 1
                    int64_t r13_3 = sx.q(r15_10[1].d)
                    int32_t rax_66 = (r13_3 + 1).d
                    r15_10[1].d = rax_66
                    
                    if (rax_66 s> *(r15_10 + 0xc))
                        sub_1405a4cf0(r15_10)
                    
                    result = *r15_10
                    rsi_4 += 1
                    rdi_11 = &rdi_11[4]
                    r15 = arg1
                    *(result + (r13_3 << 2)) = result_9 i+ 1
                    *(rax_47 + 0x68) += 1
                while (rsi_4 s< result_1)
    else
        TEB* gsbase
        
        if (data_143e29160
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e29160)
            
            if (data_143e29160 == 0xffffffff)
                data_143e2915c = 0x403504f3
                _Init_thread_footer(&data_143e29160)
        
        int128_t zmm1_1 = data_142d3f660
        result_26.d = data_143e2915c.d f+ zmm6_1.d
        result_1 = 0x3f800000
        int32_t var_1ac_1 = 0
        int128_t zmm0_1
        zmm0_1.d = zmm6_1.d
        result_26.d = result_26.d f* 0.5f
        char var_220_1 = 4
        result_1.o = zmm0_1
        var_108 = zmm0_1
        result_26.d = result_26.d f+ 1f
        int128_t var_f8_1 = zmm1_1
        char var_228_1 = 2
        result_23 = result_26.d
        int128_t* rax_2 = sub_140e0db30(r15, rsi, &var_108, 0, 2, 4, rdi, 0, arg2)
        int64_t* rcx_4 = *(r14 + 0x18)
        zmm14 = 0x322bcc77
        uint128_t zmm0_2 = zx.o(*rcx_4)
        zmm12 = zx.o(rcx_4[1])
        uint64_t var_178 = zmm0_2.q
        zmm8_1 = var_178.d
        zmm6_1.d = zmm12.d f- zmm8_1.d
        zmm15 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
        zmm9_1.d = zmm15.d f- _mm_shuffle_ps(zmm12, zmm12, 0x55).d
        result_9 = zmm8_1.d
        uint64_t var_1a0 = zmm12.q
        uint128_t zmm1_2
        zmm1_2.d = zmm6_1.d f* zmm6_1.d
        zmm13.d = zmm9_1.d f* zmm9_1.d
        zmm1_2.d = zmm1_2.d f+ zmm13.d
        
        if (zmm1_2.d f<= 9.99999994e-09f)
            zmm11 = zx.o(0)
            zmm6_1 = zx.o(0)
        else
            zmm3.d = zmm1_2.d
            float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0_2.d = temp0_3.d f* temp0_3[0]
            zmm1_2.d = zmm3.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_3.d f* zmm2_1.d
            temp0_3[0] = temp0_3[0] f+ zmm0_2.d
            zmm1_2.d = temp0_3.d f* temp0_3[0]
            zmm3.d = zmm3.d f* zmm1_2.d
            zmm0_2.d = temp0_3.d f* (0.5f f- zmm3.d)
            temp0_3[0] = temp0_3[0] f+ zmm0_2.d
            result_10 = temp0_3[0]
            zmm11.d = zmm9_1.d f* temp0_3[0]
            zmm6_1.d = zmm6_1.d f* temp0_3[0]
        
        bool cond:4_1 = *(r14 + 0x30) == 0
        zmm11.d = zmm11.d f* result_26.d
        zmm6_1.d = zmm6_1.d f* result_26.d
        int32_t var_158 = zmm11.d
        int32_t var_154_1 = zmm6_1.d
        float result_18
        float result_11
        int32_t rsi_1
        float result_20
        
        if (cond:4_1)
            result_11 = result_8
            rsi_1 = 0
            result_20 = result_11
        else
            zmm2_1 = *(r14 + 8)
            int32_t* rax_3 = *(r14 + 0x28)
            char r8_3 = r15[5].b
            zmm3.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff).d f* rax_3[3]
            zmm1_2.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d f* rax_3[2]
            zmm0_2.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d f* rax_3[1]
            zmm2_1.d = zmm2_1.d f* *rax_3
            result_1:4.d = zmm0_2.d
            int32_t var_1b0_1 = zmm1_2.d
            int32_t var_1ac_2 = zmm3.d
            result_1.d = zmm2_1.d
            zmm6_1, zmm8_1, zmm9_1 = sub_140ae16d0(&result_1, &result_18, r8_3)
            result_11 = result_8
            result_20 = result_18
            rsi_1 = *(r14 + 0x30)
        
        float result_22 = result_20
        
        if (rsi_1 != 0)
            zmm3 = *(r14 + 8)
            void* rax_4 = *(r14 + 0x28)
            char r8_4 = r15[5].b
            zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rax_4 + 0x1c)
            zmm1_2.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rax_4 + 0x18)
            zmm0_2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rax_4 + 0x14)
            zmm3.d = zmm3.d f* *(rax_4 + 0x10)
            result_1:4.d = zmm0_2.d
            int32_t var_1b0_2 = zmm1_2.d
            int32_t var_1ac_3 = zmm2_1.d
            result_1.d = zmm3.d
            zmm6_1, zmm8_1, zmm9_1 = sub_140ae16d0(&result_1, &result_18, r8_4)
            result_11 = result_18
        
        result_10 = result_11
        zmm7_1.d = zmm8_1.d f- zmm12.d
        zmm12 = 0x3f000000
        zmm1_2.d = zmm7_1.d f* zmm7_1.d
        zmm1_2.d = zmm1_2.d f+ zmm13.d
        
        if (zmm1_2.d f<= 9.99999994e-09f)
            zmm7_1 = zx.o(0)
            zmm9_1 = zx.o(0)
        else
            float temp0_10[0x4] = _mm_rsqrt_ss(zmm1_2[0], zmm1_2.d)
            zmm3.d = zmm1_2.d f* 0.5f
            zmm0_2.d = temp0_10.d f* temp0_10[0]
            zmm1_2.d = zmm3.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_10.d f* zmm2_1.d
            temp0_10[0] = temp0_10[0] f+ zmm0_2.d
            zmm1_2.d = temp0_10.d f* temp0_10[0]
            zmm3.d = zmm3.d f* zmm1_2.d
            zmm0_2.d = temp0_10.d f* (0.5f f- zmm3.d)
            temp0_10[0] = temp0_10[0] f+ zmm0_2.d
            float var_1c8_1 = temp0_10[0]
            zmm7_1.d = zmm7_1.d f* temp0_10[0]
            zmm9_1.d = zmm9_1.d f* temp0_10[0]
        
        zmm7_1.d = zmm7_1.d f* result_26.d
        var_220_1.q = &result_22
        zmm9_1.d = zmm9_1.d f* result_26.d
        var_228_1.q = &var_158
        int32_t result_27 = zmm7_1.d
        int32_t var_194_1 = zmm9_1.d
        sub_140e1b790(rax_2, &arg2[1], &var_178, &result_27, var_228_1, var_220_1)
        uint128_t zmm4_2
        zmm4_2.d = zmm6_1.d f+ zmm15.d
        int64_t* rcx_8 = rax_2[4].q
        int32_t r15_1 = *(rax_2 + 0x64)
        uint128_t zmm5_2
        zmm5_2.d = zmm11.d f+ zmm8_1.d
        int32_t var_1ec_1 = data_143dbb1f0:4.d.d
        uint128_t result_25 = arg2[1].d
        int64_t rsi_2 = sx.q(rcx_8[1].d)
        result_25.d = result_25.d f+ result_25.d
        int32_t var_1f0_1 = data_143dbb1f0.d.d
        uint128_t zmm2_2
        zmm2_2.d = zmm4_2.d f* arg2[2].d
        int32_t var_1f8
        var_1f8.q = 0x3f800000
        zmm4_2.d = zmm4_2.d f* *(arg2 + 0x14)
        result_25.d = result_25.d f* zmm5_2.d
        zmm5_2.d = zmm5_2.d f+ zmm5_2.d
        result_25.d = result_25.d f+ zmm2_2.d
        zmm5_2.d = zmm5_2.d f* *(arg2 + 0xc)
        result_25.d = result_25.d f+ arg2[3].d
        zmm5_2.d = zmm5_2.d f+ zmm4_2.d
        result_25.d = result_25.d f+ zmm2_2.d
        zmm5_2.d = zmm5_2.d f+ *(arg2 + 0x1c)
        result_25.d = result_25.d f+ arg2[3].d
        zmm5_2.d = zmm5_2.d f+ zmm4_2.d
        result_25.d = result_25.d f+ 0.5f
        zmm5_2.d = zmm5_2.d f+ *(arg2 + 0x1c)
        zmm5_2.d = zmm5_2.d f+ 0.5f
        int32_t var_1e0_1 = _mm_cvtepi32_ps(zx.o(int.d(result_25.d) s>> 1)).d
        int32_t rax_9 = (rsi_2 + 1).d
        uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm5_2.d) s>> 1))
        rcx_8[1].d = rax_9
        int32_t var_1dc_1 = zmm0_3.d
        
        if (rax_9 s> *(rcx_8 + 0xc))
            sub_1405c4ec0(rcx_8)
        
        int64_t rdx_6 = rsi_2 * 5
        zmm0_3 = var_1f8.o
        var_1f8.q = 0
        int64_t rcx_9 = *rax_2[4].q
        zmm5_2.d = zmm8_1.d f- zmm11.d
        zmm4_2.d = zmm15.d f- zmm6_1.d
        *(rcx_9 + (rdx_6 << 3)) = zmm0_3
        *(rcx_9 + (rdx_6 << 3) + 0x10) = var_1e8
        *(rcx_9 + (rdx_6 << 3) + 0x20) = result_20.q
        *(rax_2 + 0x64) += 1
        zmm2_2.d = zmm4_2.d f* arg2[2].d
        int64_t* rcx_10 = rax_2[4].q
        zmm4_2.d = zmm4_2.d f* *(arg2 + 0x14)
        int64_t rdi_1 = sx.q(rcx_10[1].d)
        int32_t var_1ec_2 = data_143dbb1f0:4.d.d
        result_25.d = zmm5_2.d f+ zmm5_2.d
        int32_t var_1f0_2 = data_143dbb1f0.d.d
        zmm5_2.d = zmm5_2.d f+ zmm5_2.d
        result_25.d = result_25.d f* arg2[1].d
        zmm5_2.d = zmm5_2.d f* *(arg2 + 0xc)
        result_25.d = result_25.d f+ zmm2_2.d
        zmm5_2.d = zmm5_2.d f+ zmm4_2.d
        result_25.d = result_25.d f+ arg2[3].d
        zmm5_2.d = zmm5_2.d f+ *(arg2 + 0x1c)
        result_25.d = result_25.d f+ zmm2_2.d
        zmm5_2.d = zmm5_2.d f+ zmm4_2.d
        result_25.d = result_25.d f+ arg2[3].d
        zmm5_2.d = zmm5_2.d f+ *(arg2 + 0x1c)
        result_25.d = result_25.d f+ 0.5f
        zmm5_2.d = zmm5_2.d f+ 0.5f
        int32_t var_1e0_2 = _mm_cvtepi32_ps(zx.o(int.d(result_25.d) s>> 1)).d
        int32_t rax_15 = (rdi_1 + 1).d
        zmm0_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm5_2.d) s>> 1))
        rcx_10[1].d = rax_15
        int32_t var_1dc_2 = zmm0_3.d
        
        if (rax_15 s> *(rcx_10 + 0xc))
            sub_1405c4ec0(rcx_10)
        
        int64_t rdx_8 = rdi_1 * 5
        int64_t rcx_11 = *rax_2[4].q
        *(rcx_11 + (rdx_8 << 3)) = var_1f8.o
        *(rcx_11 + (rdx_8 << 3) + 0x10) = var_1e8
        *(rcx_11 + (rdx_8 << 3) + 0x20) = result_20.q
        void* const* result_4 = result_5
        *(rax_2 + 0x64) += 1
        result_1 = result_4
        uint128_t zmm3_1
        
        if (result_5 s> 1)
            uint64_t rcx_12 = 1
            int32_t rsi_3 = r15_1 + 1
            int32_t* rdx_9 = 0x10
            var_178 = 1
            float result_24 = 2.80259693e-45f
            var_170.q = 0x10
            result_18 = 2.80259693e-45f
            
            do
                int64_t rax_19 = *(r14 + 0x18)
                zmm0_3 = zx.o(*(rax_19 + (rcx_12 << 3)))
                var_1a0 = zmm0_3.q
                zmm9_1 = var_1a0.d
                zmm11 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
                zmm7_1.d = zmm9_1.d f- zmm8_1.d
                zmm6_1.d = zmm15.d f- zmm11.d
                result_25.d = zmm7_1.d f* zmm7_1.d
                zmm0_3.d = zmm6_1.d f* zmm6_1.d
                result_25.d = result_25.d f+ zmm0_3.d
                
                if (result_25.d f<= zmm14.d)
                    zmm6_1 = zx.o(0)
                    zmm7_1 = zx.o(0)
                else
                    zmm4_2.d = zmm12.d
                    zmm5_2 = _mm_rsqrt_ss(result_25.d, result_25.d)
                    zmm3_1.d = result_25.d f* zmm4_2.d
                    zmm0_3.d = zmm5_2.d f* zmm5_2.d
                    result_25.d = zmm3_1.d f* zmm0_3.d
                    zmm2_2.d = zmm4_2.d f- result_25.d
                    zmm0_3.d = zmm5_2.d f* zmm2_2.d
                    zmm5_2.d = zmm5_2.d f+ zmm0_3.d
                    result_25.d = zmm5_2.d f* zmm5_2.d
                    zmm3_1.d = zmm3_1.d f* result_25.d
                    zmm4_2.d = zmm4_2.d f- zmm3_1.d
                    zmm0_3.d = zmm5_2.d f* zmm4_2.d
                    zmm5_2.d = zmm5_2.d f+ zmm0_3.d
                    int32_t var_1c8_2 = zmm5_2.d
                    zmm6_1.d = zmm6_1.d f* zmm5_2.d
                    zmm7_1.d = zmm7_1.d f* zmm5_2.d
                
                bool cond:7_1 = *(r14 + 0x30) == 0
                zmm6_1.d = zmm6_1.d f* result_26.d
                zmm7_1.d = zmm7_1.d f* result_26.d
                var_158 = zmm6_1.d
                int32_t var_154_2 = zmm7_1.d
                float result_16
                
                if (cond:7_1)
                    result_16 = result_8
                else
                    zmm3_1 = *(r14 + 8)
                    int64_t rax_17 = *(r14 + 0x28)
                    zmm2_2.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff).d f* *(rdx_9 + rax_17 + 0xc)
                    result_25.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f* *(rdx_9 + rax_17 + 8)
                    zmm0_3.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).d f* *(rdx_9 + rax_17 + 4)
                    zmm3_1.d = zmm3_1.d f* *(rdx_9 + rax_17)
                    var_190:4.d = zmm0_3.d
                    var_190:8.d = result_25.d
                    var_190.d = zmm3_1.d
                    var_190:0xc.d = zmm2_2.d
                    float result_19
                    zmm6_1, zmm7_1, zmm9_1 = sub_140ae16d0(&var_190, &result_19, arg1[5].b)
                    rax_19 = *(r14 + 0x18)
                    rcx_12 = var_178
                    result_16 = result_19
                
                zmm8_1.d = zmm6_1.d f+ zmm9_1.d
                zmm13.d = zmm7_1.d f+ zmm11.d
                result_26.d = zmm9_1.d f- zmm6_1.d
                zmm14.d = zmm11.d f- zmm7_1.d
                
                if (result_24 s< result_5.d)
                    zmm0_3 = *(rax_19 + (rcx_12 << 3) + 8)
                    result_25 = *(rax_19 + (rcx_12 << 3) + 0xc)
                    zmm5_2.d = zmm11.d f- result_25.d
                    float var_160_1 = zmm0_3.d
                    zmm0_3.d = zmm0_3.d f- zmm9_1.d
                    result_22 = result_25.d
                    int32_t var_1c8_3 = zmm0_3.d
                    result_25.d = zmm0_3.d f* zmm0_3.d
                    zmm0_3.d = zmm5_2.d f* zmm5_2.d
                    result_25.d = result_25.d f+ zmm0_3.d
                    
                    if (result_25.d f<= 9.99999994e-09f)
                        zmm12 = zx.o(0)
                        zmm9_1 = zx.o(0)
                    else
                        zmm4_2.d = zmm12.d
                        zmm9_1 = _mm_rsqrt_ss(result_25.d, result_25.d)
                        zmm3_1.d = result_25.d f* zmm4_2.d
                        zmm0_3.d = zmm9_1.d f* zmm9_1.d
                        result_25.d = zmm3_1.d f* zmm0_3.d
                        zmm2_2.d = zmm4_2.d f- result_25.d
                        zmm0_3.d = zmm9_1.d f* zmm2_2.d
                        zmm9_1.d = zmm9_1.d f+ zmm0_3.d
                        result_25.d = zmm9_1.d f* zmm9_1.d
                        zmm3_1.d = zmm3_1.d f* result_25.d
                        zmm4_2.d = zmm4_2.d f- zmm3_1.d
                        zmm0_3.d = zmm9_1.d f* zmm4_2.d
                        zmm9_1.d = zmm9_1.d f+ zmm0_3.d
                        zmm12 = zmm9_1
                        zmm9_1.d = zmm9_1.d f* var_1c8_3
                        zmm12.d = zmm12.d f* zmm5_2.d
                    
                    result_25 = result_22
                    zmm12.d = zmm12.d f* result_23
                    zmm9_1.d = zmm9_1.d f* result_23
                    zmm0_3.d = var_160_1.d f+ zmm12.d
                    int32_t var_138 = zmm8_1.d
                    int32_t var_134_1 = zmm13.d
                    result_25.d = result_25.d f+ zmm9_1.d
                    int32_t var_148 = zmm0_3.d
                    zmm0_3.d = zmm12.d f+ var_1a0.d
                    int32_t var_144_1 = result_25.d
                    result_25.d = zmm9_1.d f+ zmm11.d
                    int32_t var_140 = zmm0_3.d
                    zmm0_3.d = zmm6_1.d f+ result_9
                    int32_t var_13c_1 = result_25.d
                    result_25.d = zmm7_1.d f+ zmm15.d
                    int32_t var_130 = zmm0_3.d
                    var_220_1.d = 0x3dcccccd
                    var_228_1.q = &result_27
                    int32_t var_12c_1 = result_25.d
                    char rax_20
                    float zmm6_2
                    int32_t zmm7_2
                    int512_t zmm8_2
                    float zmm9_2
                    int32_t zmm10
                    float zmm11_1
                    float zmm12_1
                    int512_t zmm13_1
                    rax_20, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10, zmm11_1, zmm12_1, zmm13_1 =
                        sub_140e1aef0(&var_130, &var_138, &var_140, &var_148, var_228_1, 0x3dcccccd)
                    
                    if (rax_20 != 0)
                        zmm8_2.o = result_27
                        zmm13_1.o = var_194_1
                    
                    int32_t var_118 = zmm10
                    int32_t var_114_1 = zmm14.d
                    zmm15.d = zmm15.d f- zmm7_2
                    float var_128 = var_160_1 - zmm12_1
                    float var_11c_1 = zmm11_1 - zmm9_2
                    int32_t var_10c_1 = zmm15.d
                    float var_124_1 = result_22 - zmm9_2
                    float var_120 = var_1a0.d - zmm12_1
                    float var_110 = result_9 - zmm6_2
                    var_220_1.d = 0x3dcccccd
                    var_228_1.q = &result_27
                    char rax_21
                    rax_21, zmm8_1, result_26, zmm11, zmm13 =
                        sub_140e1aef0(&var_110, &var_118, &var_120, &var_128, var_228_1, 0x3dcccccd)
                    zmm9_1 = var_1a0.d
                    zmm12 = 0x3f000000
                    
                    if (rax_21 != 0)
                        result_26 = result_27
                        zmm14 = var_194_1
                
                zmm2_2.d = zmm13.d f* arg2[2].d
                int64_t* rcx_16 = rax_2[4].q
                zmm13.d = zmm13.d f* *(arg2 + 0x14)
                var_1f8.q = 0x3f800000
                int64_t rdi_2 = sx.q(rcx_16[1].d)
                int32_t var_1ec_3 = data_143dbb1f0:4.d.d
                result_25 = arg2[1].d
                result_25.d = result_25.d f+ result_25.d
                int32_t var_1f0_3 = data_143dbb1f0.d.d
                result_25.d = result_25.d f* zmm8_1.d
                zmm8_1.d = zmm8_1.d f+ zmm8_1.d
                result_25.d = result_25.d f+ zmm2_2.d
                zmm8_1.d = zmm8_1.d f* *(arg2 + 0xc)
                result_25.d = result_25.d f+ arg2[3].d
                zmm8_1.d = zmm8_1.d f+ zmm13.d
                result_25.d = result_25.d f+ zmm2_2.d
                zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x1c)
                result_25.d = result_25.d f+ arg2[3].d
                zmm8_1.d = zmm8_1.d f+ zmm13.d
                result_25.d = result_25.d f+ zmm12.d
                zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x1c)
                zmm8_1.d = zmm8_1.d f+ zmm12.d
                int32_t var_1e0_3 = _mm_cvtepi32_ps(zx.o(int.d(result_25.d) s>> 1)).d
                int32_t rax_26 = (rdi_2 + 1).d
                zmm0_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm8_1.d) s>> 1))
                rcx_16[1].d = rax_26
                int32_t var_1dc_3 = zmm0_3.d
                
                if (rax_26 s> *(rcx_16 + 0xc))
                    sub_1405c4ec0(rcx_16)
                
                int64_t rdx_14 = rdi_2 * 5
                zmm0_3 = var_1f8.o
                var_1f8.q = 0
                int64_t rcx_17 = *rax_2[4].q
                *(rcx_17 + (rdx_14 << 3)) = zmm0_3
                *(rcx_17 + (rdx_14 << 3) + 0x10) = var_1e8
                *(rcx_17 + (rdx_14 << 3) + 0x20) = result_16.q
                *(rax_2 + 0x64) += 1
                zmm2_2.d = zmm14.d f* arg2[2].d
                int64_t* rcx_18 = rax_2[4].q
                zmm14.d = zmm14.d f* *(arg2 + 0x14)
                int64_t rdi_3 = sx.q(rcx_18[1].d)
                int32_t var_1ec_4 = data_143dbb1f0:4.d.d
                result_25 = arg2[1].d
                result_25.d = result_25.d f+ result_25.d
                int32_t var_1f0_4 = data_143dbb1f0.d.d
                result_25.d = result_25.d f* result_26.d
                result_26.d = result_26.d f+ result_26.d
                result_25.d = result_25.d f+ zmm2_2.d
                result_26.d = result_26.d f* *(arg2 + 0xc)
                result_25.d = result_25.d f+ arg2[3].d
                result_26.d = result_26.d f+ zmm14.d
                result_25.d = result_25.d f+ zmm2_2.d
                result_26.d = result_26.d f+ *(arg2 + 0x1c)
                result_25.d = result_25.d f+ arg2[3].d
                result_26.d = result_26.d f+ zmm14.d
                result_25.d = result_25.d f+ zmm12.d
                result_26.d = result_26.d f+ *(arg2 + 0x1c)
                result_26.d = result_26.d f+ zmm12.d
                int32_t var_1e0_4 = _mm_cvtepi32_ps(zx.o(int.d(result_25.d) s>> 1)).d
                int32_t rax_32 = (rdi_3 + 1).d
                zmm0_3 = _mm_cvtepi32_ps(zx.o(int.d(result_26.d) s>> 1))
                rcx_18[1].d = rax_32
                int32_t var_1dc_4 = zmm0_3.d
                
                if (rax_32 s> *(rcx_18 + 0xc))
                    sub_1405c4ec0(rcx_18)
                
                int64_t rdx_16 = rdi_3 * 5
                int64_t rcx_19 = *rax_2[4].q
                *(rcx_19 + (rdx_16 << 3)) = var_1f8.o
                *(rcx_19 + (rdx_16 << 3) + 0x10) = var_1e8
                *(rcx_19 + (rdx_16 << 3) + 0x20) = result_16.q
                int64_t* rdi_4 = *(rax_2 + 0x48)
                *(rax_2 + 0x64) += 1
                int64_t r15_2 = sx.q(rdi_4[1].d)
                int32_t rax_34 = (r15_2 + 1).d
                rdi_4[1].d = rax_34
                
                if (rax_34 s> *(rdi_4 + 0xc))
                    sub_1405a4cf0(rdi_4)
                
                *(*rdi_4 + (r15_2 << 2)) = rsi_3
                int64_t* rdi_5 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r15_3 = sx.q(rdi_5[1].d)
                int32_t rax_36 = (r15_3 + 1).d
                rdi_5[1].d = rax_36
                
                if (rax_36 s> *(rdi_5 + 0xc))
                    sub_1405a4cf0(rdi_5)
                
                *(*rdi_5 + (r15_3 << 2)) = rsi_3 - 1
                int64_t* rdi_6 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r15_4 = sx.q(rdi_6[1].d)
                int32_t rax_38 = (r15_4 + 1).d
                rdi_6[1].d = rax_38
                
                if (rax_38 s> *(rdi_6 + 0xc))
                    sub_1405a4cf0(rdi_6)
                
                *(*rdi_6 + (r15_4 << 2)) = rsi_3 + 1
                int64_t* rdi_7 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r15_5 = sx.q(rdi_7[1].d)
                int32_t rax_40 = (r15_5 + 1).d
                rdi_7[1].d = rax_40
                
                if (rax_40 s> *(rdi_7 + 0xc))
                    sub_1405a4cf0(rdi_7)
                
                *(*rdi_7 + (r15_5 << 2)) = rsi_3
                int64_t* rdi_8 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r15_6 = sx.q(rdi_8[1].d)
                int32_t rax_42 = (r15_6 + 1).d
                rdi_8[1].d = rax_42
                
                if (rax_42 s> *(rdi_8 + 0xc))
                    sub_1405a4cf0(rdi_8)
                
                *(*rdi_8 + (r15_6 << 2)) = rsi_3 + 1
                int64_t* rdi_9 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r15_7 = sx.q(rdi_9[1].d)
                int32_t rax_44 = (r15_7 + 1).d
                rdi_9[1].d = rax_44
                
                if (rax_44 s> *(rdi_9 + 0xc))
                    sub_1405a4cf0(rdi_9)
                
                rsi_3 += 2
                zmm8_1 = zmm9_1
                result_24 = result_18 i+ 1
                rcx_12 = var_178 + 1
                result_26 = result_23
                rdx_9 = var_170.q + 0x10
                zmm14 = 0x322bcc77
                zmm15 = zmm11
                result_5 = zx.q(result_6)
                *(*rdi_9 + (r15_7 << 2)) = rsi_3
                *(rax_2 + 0x68) += 1
                result_9 = zmm9_1.d
                result_18 = result_24
                var_178 = rcx_12
                var_170.q = rdx_9
            while (rcx_12 s< result_1)
            
            result_4 = result_1
        
        int64_t rax_46 = *(r14 + 0x18)
        zmm0_3 = zx.o(*(rax_46 + (result_4 << 3) - 8))
        result_25 = zx.o(*(rax_46 + (result_4 << 3) - 0x10))
        var_1a0 = zmm0_3.q
        zmm7_1.d = zmm0_3.d f- result_25.d
        zmm6_1.d =
            _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55).d f- _mm_shuffle_ps(result_25, result_25, 0x55).d
        result_25.d = zmm7_1.d f* zmm7_1.d
        zmm0_3.d = zmm6_1.d f* zmm6_1.d
        result_25.d = result_25.d f+ zmm0_3.d
        
        if (result_25.d f<= zmm14.d)
            zmm7_1 = zx.o(0)
            zmm6_1 = zx.o(0)
        else
            zmm4_2.d = zmm12.d
            zmm3_1.d = result_25.d
            zmm5_2 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* zmm4_2.d
            zmm0_3.d = zmm5_2.d f* zmm5_2.d
            result_25.d = zmm3_1.d f* zmm0_3.d
            zmm2_2.d = zmm4_2.d f- result_25.d
            zmm0_3.d = zmm5_2.d f* zmm2_2.d
            zmm5_2.d = zmm5_2.d f+ zmm0_3.d
            result_25.d = zmm5_2.d f* zmm5_2.d
            zmm3_1.d = zmm3_1.d f* result_25.d
            zmm4_2.d = zmm4_2.d f- zmm3_1.d
            zmm0_3.d = zmm5_2.d f* zmm4_2.d
            zmm5_2.d = zmm5_2.d f+ zmm0_3.d
            result_9 = zmm5_2.d
            zmm7_1.d = zmm7_1.d f* zmm5_2.d
            zmm6_1.d = zmm6_1.d f* zmm5_2.d
        
        zmm7_1.d = zmm7_1.d f* result_26.d
        var_220_1.q = &result_10
        zmm6_1.d = zmm6_1.d f* result_26.d
        var_228_1.q = &var_158
        result_9 = zmm7_1.d
        int32_t arg_1c = zmm6_1.d
        result = sub_140e1b790(rax_2, &arg2[1], &var_1a0, &result_9, var_228_1, var_220_1)

return result
