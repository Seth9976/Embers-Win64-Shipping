// 函数: sub_140dccee0
// 地址: 0x140dccee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r13 = *arg2
char rdi = *(arg2 + 0x4d)
int32_t r14 = arg2[6].d
int64_t* r15 = arg1
int64_t result_5 = sx.q(*(r13 + 0x20))
float result_6 = result_5.d

if (result_5.d s>= 2)
    char r8_1 = arg1[5].b
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    uint128_t zmm11
    uint128_t var_a8_1 = zmm11
    uint128_t result_25
    uint128_t result_26 = result_25
    uint128_t zmm13
    uint128_t var_c8_1 = zmm13
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    uint128_t zmm15
    uint128_t var_e8_1 = zmm15
    int128_t var_198 = *(r13 + 8)
    float result_8
    sub_140ae16d0(&var_198, &result_8, r8_1)
    uint128_t zmm6_1 = *(r13 + 0x38)
    uint128_t var_1e8
    float result_11
    void* const* result_1
    int32_t var_178
    int128_t var_108
    float result_9
    float result_19
    uint128_t zmm2_1
    uint128_t zmm3
    uint128_t zmm7_1
    uint128_t zmm8_1
    uint128_t zmm9_1
    
    if (*(r13 + 0x3c) == 0)
        int128_t* r8_10 = &var_108
        __builtin_memset(&var_108, 0, 0x20)
        
        if (zmm6_1.d f!= 1f)
            int128_t* rax_44 = sub_140e0db30(r15, r14, r8_10, 0, 2, 0, rdi, 0, arg2)
            int32_t result_3 = (result_5 - 1).d
            result = sx.q(result_3)
            result_1 = result
            
            if (result_3 s> 0)
                int64_t r14_10 = 0
                int32_t* r12_4 = nullptr
                
                do
                    bool cond:6_1 = *(r13 + 0x30) == 0
                    int64_t rax_45 = *(r13 + 0x18)
                    result_19 = *(rax_44 + 0x64)
                    zmm10 = *(rax_45 + (r14_10 << 3))
                    zmm11 = *(rax_45 + (r14_10 << 3) + 4)
                    result_25 = *(rax_45 + (r14_10 << 3) + 8)
                    zmm13 = *(rax_45 + (r14_10 << 3) + 0xc)
                    float result_7
                    float result_10
                    uint128_t zmm0_6
                    uint128_t zmm1_6
                    
                    if (cond:6_1)
                        result_7 = result_8
                        result_10 = result_7
                        result_9 = result_7
                    else
                        zmm3 = *(r13 + 8)
                        int64_t rax_46 = *(r13 + 0x28)
                        zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(r12_4 + rax_46 + 0xc)
                        char r8_13 = arg1[5].b
                        zmm1_6.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(r12_4 + rax_46 + 8)
                        zmm0_6.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(r12_4 + rax_46 + 4)
                        zmm3.d = zmm3.d f* *(r12_4 + rax_46)
                        var_198:4.d = zmm0_6.d
                        var_198:8.d = zmm1_6.d
                        var_198:0xc.d = zmm2_1.d
                        var_198.d = zmm3.d
                        sub_140ae16d0(&var_198, &result_11, r8_13)
                        bool cond:2_1 = *(r13 + 0x30) == 0
                        result_10 = result_11
                        result_9 = result_10
                        
                        if (cond:2_1)
                            result_7 = result_8
                        else
                            zmm3 = *(r13 + 8)
                            int64_t rax_47 = *(r13 + 0x28)
                            char r8_14 = arg1[5].b
                            zmm2_1.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(r12_4 + rax_47 + 0x1c)
                            zmm1_6.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(r12_4 + rax_47 + 0x18)
                            zmm0_6.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(r12_4 + rax_47 + 0x14)
                            zmm3.d = zmm3.d f* *(r12_4 + rax_47 + 0x10)
                            int32_t var_174_2 = zmm0_6.d
                            int32_t var_170_2 = zmm1_6.d
                            int32_t var_16c_2 = zmm2_1.d
                            var_178 = zmm3.d
                            sub_140ae16d0(&var_178, &result_6, r8_14)
                            result_7 = result_6
                    
                    zmm7_1.d = result_25.d f- zmm10.d
                    zmm8_1.d = zmm13.d f- zmm11.d
                    zmm0_6.d = zmm7_1.d f* zmm7_1.d
                    zmm1_6.d = zmm8_1.d f* zmm8_1.d
                    zmm1_6.d = zmm1_6.d f+ zmm0_6.d
                    
                    if (zmm1_6.d f<= 9.99999994e-09f)
                        zmm7_1 = zx.o(0)
                        zmm8_1 = zx.o(0)
                    else
                        uint128_t zmm4_3
                        zmm4_3.d = 0x3f000000
                        uint128_t zmm5_3 = _mm_rsqrt_ss(zmm1_6.d, zmm1_6.d)
                        zmm3.d = zmm1_6.d f* 0.5f
                        zmm0_6.d = zmm5_3.d f* zmm5_3.d
                        zmm1_6.d = zmm3.d f* zmm0_6.d
                        zmm2_1.d = zmm4_3.d f- zmm1_6.d
                        zmm0_6.d = zmm5_3.d f* zmm2_1.d
                        zmm5_3.d = zmm5_3.d f+ zmm0_6.d
                        zmm1_6.d = zmm5_3.d f* zmm5_3.d
                        zmm3.d = zmm3.d f* zmm1_6.d
                        zmm4_3.d = 0.5f f- zmm3.d
                        zmm0_6.d = zmm5_3.d f* zmm4_3.d
                        zmm5_3.d = zmm5_3.d f+ zmm0_6.d
                        zmm7_1.d = zmm7_1.d f* zmm5_3.d
                        zmm8_1.d = zmm8_1.d f* zmm5_3.d
                    
                    zmm1_6 = data_143dbb1f0.d
                    zmm0_6 = data_143dbb1f0:4.d
                    int64_t* rcx_39 = rax_44[4].q
                    int32_t var_1f8_3 = zmm1_6.d
                    int32_t var_1f0_7 = zmm1_6.d
                    zmm6_1.d = (*(r13 + 0x38)).d f* 0.5f
                    int64_t rdi_12 = sx.q(rcx_39[1].d)
                    int32_t var_1f4_3 = zmm0_6.d
                    zmm9_1 = zmm6_1
                    int32_t var_1ec_7 = zmm0_6.d
                    zmm6_1.d = zmm6_1.d f* zmm8_1.d
                    int32_t rax_48 = (rdi_12 + 1).d
                    zmm9_1.d = zmm9_1.d f* zmm7_1.d
                    zmm3.d = zmm6_1.d f+ zmm10.d
                    zmm8_1 = zmm9_1 ^ 0x80000000
                    zmm2_1.d = zmm8_1.d f+ zmm11.d
                    zmm0_6 = zmm3
                    zmm3.d = zmm3.d f* *(arg2 + 0xc)
                    zmm0_6.d = zmm0_6.d f* arg2[1].d
                    zmm1_6 = zmm2_1
                    zmm2_1.d = zmm2_1.d f* *(arg2 + 0x14)
                    zmm1_6.d = zmm1_6.d f* arg2[2].d
                    zmm3.d = zmm3.d f+ zmm2_1.d
                    zmm1_6.d = zmm1_6.d f+ zmm0_6.d
                    zmm3.d = zmm3.d f+ *(arg2 + 0x1c)
                    zmm1_6.d = zmm1_6.d f+ arg2[3].d
                    rcx_39[1].d = rax_48
                    int32_t var_1dc_7 = zmm3.d
                    int32_t var_1e0_7 = zmm1_6.d
                    
                    if (rax_48 s> *(rcx_39 + 0xc))
                        sub_1405c4ec0(rcx_39)
                    
                    int64_t rdx_40 = rdi_12 * 5
                    int64_t rcx_40 = *rax_44[4].q
                    float result_13 = result_9
                    zmm7_1 = zmm6_1 ^ 0x80000000
                    zmm2_1.d = zmm9_1.d f+ zmm11.d
                    *(rcx_40 + (rdx_40 << 3)) = var_1f8_3.o
                    zmm3.d = zmm7_1.d f+ zmm10.d
                    *(rcx_40 + (rdx_40 << 3) + 0x10) = var_1e8
                    *(rcx_40 + (rdx_40 << 3) + 0x20) = result_10.q
                    *(rax_44 + 0x64) += 1
                    zmm1_6 = data_143dbb1f0.d
                    zmm0_6 = data_143dbb1f0:4.d
                    int64_t* rcx_41 = rax_44[4].q
                    int32_t var_1f8_4 = zmm1_6.d
                    int32_t var_1f0_8 = zmm1_6.d
                    zmm1_6.d = zmm2_1.d f* arg2[2].d
                    int64_t rdi_13 = sx.q(rcx_41[1].d)
                    zmm2_1.d = zmm2_1.d f* *(arg2 + 0x14)
                    int32_t var_1f4_4 = zmm0_6.d
                    int32_t var_1ec_8 = zmm0_6.d
                    int32_t rax_50 = (rdi_13 + 1).d
                    zmm0_6 = zmm3
                    zmm3.d = zmm3.d f* *(arg2 + 0xc)
                    zmm0_6.d = zmm0_6.d f* arg2[1].d
                    zmm3.d = zmm3.d f+ zmm2_1.d
                    zmm1_6.d = zmm1_6.d f+ zmm0_6.d
                    zmm3.d = zmm3.d f+ *(arg2 + 0x1c)
                    zmm1_6.d = zmm1_6.d f+ arg2[3].d
                    rcx_41[1].d = rax_50
                    int32_t var_1dc_8 = zmm3.d
                    int32_t var_1e0_8 = zmm1_6.d
                    
                    if (rax_50 s> *(rcx_41 + 0xc))
                        sub_1405c4ec0(rcx_41)
                    
                    int64_t rdx_42 = rdi_13 * 5
                    int64_t rcx_42 = *rax_44[4].q
                    zmm6_1.d = zmm6_1.d f+ result_25.d
                    zmm8_1.d = zmm8_1.d f+ zmm13.d
                    *(rcx_42 + (rdx_42 << 3)) = var_1f8_4.o
                    *(rcx_42 + (rdx_42 << 3) + 0x10) = var_1e8
                    *(rcx_42 + (rdx_42 << 3) + 0x20) = result_13.q
                    *(rax_44 + 0x64) += 1
                    zmm1_6 = data_143dbb1f0.d
                    zmm0_6 = data_143dbb1f0:4.d
                    int64_t* rcx_43 = rax_44[4].q
                    int32_t var_1f8_5 = zmm1_6.d
                    int32_t var_1f0_9 = zmm1_6.d
                    zmm1_6.d = zmm6_1.d f* arg2[1].d
                    int64_t rdi_14 = sx.q(rcx_43[1].d)
                    zmm6_1.d = zmm6_1.d f* *(arg2 + 0xc)
                    int32_t var_1f4_5 = zmm0_6.d
                    int32_t var_1ec_9 = zmm0_6.d
                    int32_t rax_52 = (rdi_14 + 1).d
                    zmm0_6 = zmm8_1
                    zmm8_1.d = zmm8_1.d f* *(arg2 + 0x14)
                    zmm0_6.d = zmm0_6.d f* arg2[2].d
                    zmm6_1.d = zmm6_1.d f+ zmm8_1.d
                    zmm1_6.d = zmm1_6.d f+ zmm0_6.d
                    zmm6_1.d = zmm6_1.d f+ *(arg2 + 0x1c)
                    zmm1_6.d = zmm1_6.d f+ arg2[3].d
                    rcx_43[1].d = rax_52
                    int32_t var_1dc_9 = zmm6_1.d
                    int32_t var_1e0_9 = zmm1_6.d
                    
                    if (rax_52 s> *(rcx_43 + 0xc))
                        sub_1405c4ec0(rcx_43)
                    
                    zmm7_1.d = zmm7_1.d f+ result_25.d
                    int64_t rdx_44 = rdi_14 * 5
                    int64_t rcx_44 = *rax_44[4].q
                    zmm9_1.d = zmm9_1.d f+ zmm13.d
                    *(rcx_44 + (rdx_44 << 3)) = var_1f8_5.o
                    *(rcx_44 + (rdx_44 << 3) + 0x10) = var_1e8
                    *(rcx_44 + (rdx_44 << 3) + 0x20) = result_7.q
                    *(rax_44 + 0x64) += 1
                    zmm1_6 = data_143dbb1f0.d
                    zmm0_6 = data_143dbb1f0:4.d
                    int64_t* rcx_45 = rax_44[4].q
                    int32_t var_1f8_6 = zmm1_6.d
                    int32_t var_1f0_10 = zmm1_6.d
                    zmm1_6.d = zmm7_1.d f* arg2[1].d
                    int64_t rbx_4 = sx.q(rcx_45[1].d)
                    zmm7_1.d = zmm7_1.d f* *(arg2 + 0xc)
                    int32_t var_1f4_6 = zmm0_6.d
                    int32_t var_1ec_10 = zmm0_6.d
                    int32_t rax_54 = (rbx_4 + 1).d
                    zmm0_6 = zmm9_1
                    zmm9_1.d = zmm9_1.d f* *(arg2 + 0x14)
                    zmm0_6.d = zmm0_6.d f* arg2[2].d
                    zmm7_1.d = zmm7_1.d f+ zmm9_1.d
                    zmm1_6.d = zmm1_6.d f+ zmm0_6.d
                    zmm7_1.d = zmm7_1.d f+ *(arg2 + 0x1c)
                    zmm1_6.d = zmm1_6.d f+ arg2[3].d
                    rcx_45[1].d = rax_54
                    int32_t var_1dc_10 = zmm7_1.d
                    int32_t var_1e0_10 = zmm1_6.d
                    
                    if (rax_54 s> *(rcx_45 + 0xc))
                        sub_1405c4ec0(rcx_45)
                    
                    int64_t rdx_46 = rbx_4 * 5
                    float result_23 = result_19
                    int64_t rcx_46 = *rax_44[4].q
                    *(rcx_46 + (rdx_46 << 3)) = var_1f8_6.o
                    *(rcx_46 + (rdx_46 << 3) + 0x10) = var_1e8
                    *(rcx_46 + (rdx_46 << 3) + 0x20) = result_7.q
                    *(rax_44 + 0x64) += 1
                    sub_140de7260(rax_44, result_23)
                    sub_140de7260(rax_44, result_23 i+ 1)
                    sub_140de7260(rax_44, result_23 i+ 2)
                    sub_140de7260(rax_44, result_23 i+ 2)
                    sub_140de7260(rax_44, result_23 i+ 1)
                    result = sub_140de7260(rax_44, result_23 i+ 3)
                    r14_10 += 1
                    r12_4 = &r12_4[4]
                while (r14_10 s< result_1)
        else
            int128_t* rax_31 = sub_140e0db30(r15, r14, r8_10, 0, 1, 0, rdi, 0, arg2)
            int32_t result_2 = (result_5 - 1).d
            result = sx.q(result_2)
            result_1 = result
            
            if (result_2 s> 0)
                int64_t r14_9 = 0
                int32_t* rdi_11 = nullptr
                
                do
                    bool cond:5_1 = *(r13 + 0x30) == 0
                    result_11 = *(rax_31 + 0x64)
                    int64_t rax_33 = *(r13 + 0x18)
                    zmm8_1 = *(rax_33 + (r14_9 << 3))
                    zmm6_1 = *(rax_33 + (r14_9 << 3) + 4)
                    zmm9_1 = *(rax_33 + (r14_9 << 3) + 8)
                    zmm7_1 = *(rax_33 + (r14_9 << 3) + 0xc)
                    float result_14
                    float result_16
                    uint128_t zmm0_5
                    uint128_t zmm1_5
                    
                    if (cond:5_1)
                        result_16 = result_8
                        result_14 = result_16
                    else
                        zmm3 = *(r13 + 8)
                        int64_t rax_34 = *(r13 + 0x28)
                        char r8_11 = r15[5].b
                        zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rdi_11 + rax_34 + 0xc)
                        zmm1_5.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rdi_11 + rax_34 + 8)
                        zmm0_5.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rdi_11 + rax_34 + 4)
                        zmm3.d = zmm3.d f* *(rdi_11 + rax_34)
                        var_198:4.d = zmm0_5.d
                        var_198:8.d = zmm1_5.d
                        var_198:0xc.d = zmm2_1.d
                        var_198.d = zmm3.d
                        zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(&var_198, &result_9, r8_11)
                        result_14 = result_9
                        
                        if (*(r13 + 0x30) == 0)
                            result_16 = result_8
                        else
                            zmm3 = *(r13 + 8)
                            int64_t rax_35 = *(r13 + 0x28)
                            char r8_12 = r15[5].b
                            zmm2_1.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rdi_11 + rax_35 + 0x1c)
                            zmm1_5.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rdi_11 + rax_35 + 0x18)
                            zmm0_5.d =
                                _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rdi_11 + rax_35 + 0x14)
                            zmm3.d = zmm3.d f* *(rdi_11 + rax_35 + 0x10)
                            int32_t var_174_1 = zmm0_5.d
                            int32_t var_170_1 = zmm1_5.d
                            int32_t var_16c_1 = zmm2_1.d
                            var_178 = zmm3.d
                            zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
                                sub_140ae16d0(&var_178, &result_19, r8_12)
                            result_16 = result_19
                    
                    int64_t* rcx_31 = rax_31[4].q
                    int32_t var_1f4_1 = data_143dbb1f0:4.d.d
                    zmm1_5.d = zmm6_1.d f* arg2[2].d
                    zmm6_1.d = zmm6_1.d f* *(arg2 + 0x14)
                    int64_t r12_1 = sx.q(rcx_31[1].d)
                    int32_t var_1f8_1 = data_143dbb1f0.d.d
                    zmm0_5.d = zmm8_1.d f* arg2[1].d
                    int32_t var_1f0_5 = 0x3f800000
                    zmm8_1.d = zmm8_1.d f* *(arg2 + 0xc)
                    int32_t rax_36 = (r12_1 + 1).d
                    int32_t var_1ec_5 = 0x3f800000
                    zmm1_5.d = zmm1_5.d f+ zmm0_5.d
                    zmm6_1.d = zmm6_1.d f+ zmm8_1.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm6_1.d = zmm6_1.d f+ *(arg2 + 0x1c)
                    rcx_31[1].d = rax_36
                    int32_t var_1e0_5 = zmm1_5.d
                    int32_t var_1dc_5 = zmm6_1.d
                    
                    if (rax_36 s> *(rcx_31 + 0xc))
                        sub_1405c4ec0(rcx_31)
                    
                    int64_t rdx_30 = r12_1 * 5
                    int32_t var_1f0_6 = 0x3f800000
                    int64_t rcx_32 = *rax_31[4].q
                    int32_t var_1ec_6 = 0x3f800000
                    *(rcx_32 + (rdx_30 << 3)) = var_1f8_1.o
                    *(rcx_32 + (rdx_30 << 3) + 0x10) = var_1e8
                    *(rcx_32 + (rdx_30 << 3) + 0x20) = result_14.q
                    *(rax_31 + 0x64) += 1
                    int64_t* rcx_33 = rax_31[4].q
                    int32_t var_1f4_2 = data_143dbb1f0:4.d.d
                    zmm1_5.d = zmm7_1.d f* arg2[2].d
                    zmm7_1.d = zmm7_1.d f* *(arg2 + 0x14)
                    int64_t r15_3 = sx.q(rcx_33[1].d)
                    int32_t var_1f8_2 = data_143dbb1f0.d.d
                    zmm0_5.d = zmm9_1.d f* arg2[1].d
                    zmm9_1.d = zmm9_1.d f* *(arg2 + 0xc)
                    int32_t rax_38 = (r15_3 + 1).d
                    zmm1_5.d = zmm1_5.d f+ zmm0_5.d
                    zmm7_1.d = zmm7_1.d f+ zmm9_1.d
                    zmm1_5.d = zmm1_5.d f+ arg2[3].d
                    zmm7_1.d = zmm7_1.d f+ *(arg2 + 0x1c)
                    rcx_33[1].d = rax_38
                    int32_t var_1e0_6 = zmm1_5.d
                    int32_t var_1dc_6 = zmm7_1.d
                    
                    if (rax_38 s> *(rcx_33 + 0xc))
                        sub_1405c4ec0(rcx_33)
                    
                    int64_t rdx_32 = r15_3 * 5
                    int64_t rcx_34 = *rax_31[4].q
                    *(rcx_34 + (rdx_32 << 3)) = var_1f8_2.o
                    *(rcx_34 + (rdx_32 << 3) + 0x10) = var_1e8
                    *(rcx_34 + (rdx_32 << 3) + 0x20) = result_16.q
                    int64_t* r15_4 = *(rax_31 + 0x48)
                    *(rax_31 + 0x64) += 1
                    int64_t r12_2 = sx.q(r15_4[1].d)
                    int32_t rax_40 = (r12_2 + 1).d
                    r15_4[1].d = rax_40
                    
                    if (rax_40 s> *(r15_4 + 0xc))
                        sub_1405a4cf0(r15_4)
                    
                    float result_20 = result_11
                    *(*r15_4 + (r12_2 << 2)) = result_20
                    int64_t* r15_5 = *(rax_31 + 0x48)
                    *(rax_31 + 0x68) += 1
                    result_11 = result_20 i+ 1
                    int64_t r12_3 = sx.q(r15_5[1].d)
                    int32_t rax_43 = (r12_3 + 1).d
                    r15_5[1].d = rax_43
                    
                    if (rax_43 s> *(r15_5 + 0xc))
                        sub_1405a4cf0(r15_5)
                    
                    result = *r15_5
                    r14_9 += 1
                    rdi_11 = &rdi_11[4]
                    r15 = arg1
                    *(result + (r12_3 << 2)) = result_11
                    *(rax_31 + 0x68) += 1
                while (r14_9 s< result_1)
    else
        TEB* gsbase
        
        if (data_143e29168
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e29168)
            
            if (data_143e29168 == 0xffffffff)
                data_143e29164 = 0x403504f3
                _Init_thread_footer(&data_143e29168)
        
        int128_t zmm1_1 = data_142d3f660
        result_25.d = data_143e29164.d f+ zmm6_1.d
        result_1 = 0x3f800000
        int32_t var_1ac_1 = 0
        int128_t zmm0_1
        zmm0_1.d = zmm6_1.d
        result_25.d = result_25.d f* 0.5f
        char var_220_1 = 4
        result_1.o = zmm0_1
        var_108 = zmm0_1
        result_25.d = result_25.d f+ 1f
        int128_t var_f8_1 = zmm1_1
        char var_228_1 = 2
        result_19 = result_25.d
        int128_t* rax_2 = sub_140e0db30(r15, r14, &var_108, 0, 2, 4, rdi, 0, arg2)
        int64_t* rcx_4 = *(r13 + 0x18)
        zmm14 = 0x322bcc77
        uint128_t zmm0_2 = zx.o(*rcx_4)
        zmm11 = zx.o(rcx_4[1])
        uint64_t var_180 = zmm0_2.q
        zmm6_1 = var_180.d
        zmm7_1.d = zmm11.d f- zmm6_1.d
        zmm15 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
        zmm9_1.d = zmm15.d f- _mm_shuffle_ps(zmm11, zmm11, 0x55).d
        result_9 = zmm6_1.d
        uint64_t var_1a8 = zmm11.q
        uint128_t zmm1_2
        zmm1_2.d = zmm7_1.d f* zmm7_1.d
        zmm13.d = zmm9_1.d f* zmm9_1.d
        zmm1_2.d = zmm1_2.d f+ zmm13.d
        
        if (zmm1_2.d f<= 9.99999994e-09f)
            zmm10 = zx.o(0)
            zmm7_1 = zx.o(0)
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
            result_11 = temp0_3[0]
            zmm10.d = zmm9_1.d f* temp0_3[0]
            zmm7_1.d = zmm7_1.d f* temp0_3[0]
        
        bool cond:4_1 = *(r13 + 0x30) == 0
        zmm10.d = zmm10.d f* result_25.d
        zmm7_1.d = zmm7_1.d f* result_25.d
        int32_t var_160 = zmm10.d
        int32_t var_15c_1 = zmm7_1.d
        float result_17
        float result_12
        float result_21
        int32_t r14_1
        
        if (cond:4_1)
            result_12 = result_8
            r14_1 = 0
            result_21 = result_12
        else
            zmm2_1 = *(r13 + 8)
            int32_t* rax_3 = *(r13 + 0x28)
            char r8_3 = r15[5].b
            zmm3.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff).d f* rax_3[3]
            zmm1_2.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d f* rax_3[2]
            zmm0_2.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d f* rax_3[1]
            zmm2_1.d = zmm2_1.d f* *rax_3
            result_1:4.d = zmm0_2.d
            int32_t var_1b0_1 = zmm1_2.d
            int32_t var_1ac_2 = zmm3.d
            result_1.d = zmm2_1.d
            zmm6_1, zmm7_1, zmm9_1 = sub_140ae16d0(&result_1, &result_17, r8_3)
            result_12 = result_8
            result_21 = result_17
            r14_1 = *(r13 + 0x30)
        
        float result_22 = result_21
        
        if (r14_1 != 0)
            zmm3 = *(r13 + 8)
            void* rax_4 = *(r13 + 0x28)
            char r8_4 = r15[5].b
            zmm2_1.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* *(rax_4 + 0x1c)
            zmm1_2.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* *(rax_4 + 0x18)
            zmm0_2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* *(rax_4 + 0x14)
            zmm3.d = zmm3.d f* *(rax_4 + 0x10)
            result_1:4.d = zmm0_2.d
            int32_t var_1b0_2 = zmm1_2.d
            int32_t var_1ac_3 = zmm2_1.d
            result_1.d = zmm3.d
            zmm6_1, zmm7_1, zmm9_1 = sub_140ae16d0(&result_1, &result_17, r8_4)
            result_12 = result_17
        
        result_11 = result_12
        zmm8_1.d = zmm6_1.d f- zmm11.d
        zmm11 = 0x3f000000
        zmm1_2.d = zmm8_1.d f* zmm8_1.d
        zmm1_2.d = zmm1_2.d f+ zmm13.d
        float result_18
        
        if (zmm1_2.d f<= 9.99999994e-09f)
            zmm8_1 = zx.o(0)
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
            result_18 = temp0_10[0]
            zmm8_1.d = zmm8_1.d f* temp0_10[0]
            zmm9_1.d = zmm9_1.d f* temp0_10[0]
        
        zmm8_1.d = zmm8_1.d f* result_25.d
        var_220_1.q = &result_22
        zmm9_1.d = zmm9_1.d f* result_25.d
        var_228_1.q = &var_160
        int32_t var_1a0 = zmm8_1.d
        int32_t var_19c_1 = zmm9_1.d
        sub_140e1b790(rax_2, &arg2[1], &var_180, &var_1a0, var_228_1, var_220_1)
        uint128_t zmm3_1
        zmm3_1.d = zmm10.d f+ zmm6_1.d
        int64_t* rcx_8 = rax_2[4].q
        int32_t r15_1 = *(rax_2 + 0x64)
        uint128_t zmm2_2
        zmm2_2.d = zmm7_1.d f+ zmm15.d
        int32_t var_1ec_1 = data_143dbb1f0:4.d.d
        int32_t var_1f0_1 = data_143dbb1f0.d.d
        int64_t r14_2 = sx.q(rcx_8[1].d)
        uint128_t zmm1_3
        zmm1_3.d = zmm3_1.d f* arg2[1].d
        int32_t var_1f8
        var_1f8.q = 0x3f800000
        zmm3_1.d = zmm3_1.d f* *(arg2 + 0xc)
        int32_t rax_5 = (r14_2 + 1).d
        uint128_t zmm0_3
        zmm0_3.d = zmm2_2.d f* arg2[2].d
        zmm2_2.d = zmm2_2.d f* *(arg2 + 0x14)
        zmm1_3.d = zmm1_3.d f+ zmm0_3.d
        zmm3_1.d = zmm3_1.d f+ zmm2_2.d
        zmm1_3.d = zmm1_3.d f+ arg2[3].d
        zmm3_1.d = zmm3_1.d f+ *(arg2 + 0x1c)
        rcx_8[1].d = rax_5
        int32_t var_1e0_1 = zmm1_3.d
        int32_t var_1dc_1 = zmm3_1.d
        
        if (rax_5 s> *(rcx_8 + 0xc))
            sub_1405c4ec0(rcx_8)
        
        int64_t rdx_6 = r14_2 * 5
        zmm0_3 = var_1f8.o
        var_1f8.q = 0
        int64_t rcx_9 = *rax_2[4].q
        uint128_t zmm4_2
        zmm4_2.d = zmm15.d f- zmm7_1.d
        zmm3_1.d = zmm6_1.d f- zmm10.d
        *(rcx_9 + (rdx_6 << 3)) = zmm0_3
        *(rcx_9 + (rdx_6 << 3) + 0x10) = var_1e8
        *(rcx_9 + (rdx_6 << 3) + 0x20) = result_21.q
        *(rax_2 + 0x64) += 1
        zmm2_2.d = zmm3_1.d f* arg2[1].d
        int64_t* rcx_10 = rax_2[4].q
        zmm3_1.d = zmm3_1.d f* *(arg2 + 0xc)
        int64_t rdi_1 = sx.q(rcx_10[1].d)
        int32_t var_1f0_2 = data_143dbb1f0.d.d
        zmm0_3 = zmm4_2
        zmm4_2.d = zmm4_2.d f* *(arg2 + 0x14)
        zmm0_3.d = zmm0_3.d f* arg2[2].d
        int32_t rax_7 = (rdi_1 + 1).d
        zmm4_2.d = zmm4_2.d f+ zmm3_1.d
        int32_t var_1ec_2 = data_143dbb1f0:4.d.d
        zmm2_2.d = zmm2_2.d f+ zmm0_3.d
        zmm4_2.d = zmm4_2.d f+ *(arg2 + 0x1c)
        zmm2_2.d = zmm2_2.d f+ arg2[3].d
        rcx_10[1].d = rax_7
        int32_t var_1dc_2 = zmm4_2.d
        int32_t var_1e0_2 = zmm2_2.d
        
        if (rax_7 s> *(rcx_10 + 0xc))
            sub_1405c4ec0(rcx_10)
        
        int64_t rdx_8 = rdi_1 * 5
        int64_t rcx_11 = *rax_2[4].q
        *(rcx_11 + (rdx_8 << 3)) = var_1f8.o
        *(rcx_11 + (rdx_8 << 3) + 0x10) = var_1e8
        *(rcx_11 + (rdx_8 << 3) + 0x20) = result_21.q
        void* const* result_4 = result_5
        *(rax_2 + 0x64) += 1
        result_1 = result_4
        uint128_t zmm5_2
        
        if (result_5 s> 1)
            uint64_t rcx_12 = 1
            int32_t* rdx_9 = 0x10
            float result_24 = 2.80259693e-45f
            var_180 = 1
            var_178.q = 0x10
            int32_t r15_2 = r15_1 + 1
            result_17 = 2.80259693e-45f
            
            while (true)
                int64_t rax_11 = *(r13 + 0x18)
                zmm0_3 = zx.o(*(rax_11 + (rcx_12 << 3)))
                var_1a8 = zmm0_3.q
                zmm9_1 = var_1a8.d
                zmm13 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
                zmm7_1.d = zmm9_1.d f- zmm6_1.d
                zmm5_2.d = zmm15.d f- zmm13.d
                zmm1_3.d = zmm7_1.d f* zmm7_1.d
                zmm0_3.d = zmm5_2.d f* zmm5_2.d
                zmm1_3.d = zmm1_3.d f+ zmm0_3.d
                
                if (zmm1_3.d f<= zmm14.d)
                    zmm11 = zx.o(0)
                    zmm6_1 = zx.o(0)
                else
                    zmm6_1 = _mm_rsqrt_ss(zmm1_3.d, zmm1_3.d)
                    zmm3_1.d = zmm1_3.d f* zmm11.d
                    zmm0_3.d = zmm6_1.d f* zmm6_1.d
                    zmm1_3.d = zmm3_1.d f* zmm0_3.d
                    zmm2_2.d = zmm11.d f- zmm1_3.d
                    zmm0_3.d = zmm6_1.d f* zmm2_2.d
                    zmm6_1.d = zmm6_1.d f+ zmm0_3.d
                    zmm1_3.d = zmm6_1.d f* zmm6_1.d
                    zmm3_1.d = zmm3_1.d f* zmm1_3.d
                    zmm4_2.d = zmm11.d f- zmm3_1.d
                    zmm0_3.d = zmm6_1.d f* zmm4_2.d
                    zmm6_1.d = zmm6_1.d f+ zmm0_3.d
                    result_22 = zmm6_1.d
                    zmm11.d = zmm6_1.d f* zmm5_2.d
                    zmm6_1.d = zmm6_1.d f* zmm7_1.d
                
                bool cond:7_1 = *(r13 + 0x30) == 0
                zmm11.d = zmm11.d f* result_25.d
                zmm6_1.d = zmm6_1.d f* result_25.d
                var_160 = zmm11.d
                int32_t var_15c_2 = zmm6_1.d
                float result_15
                
                if (cond:7_1)
                    result_15 = result_8
                else
                    zmm3_1 = *(r13 + 8)
                    int64_t rax_9 = *(r13 + 0x28)
                    zmm2_2.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff).d f* *(rdx_9 + rax_9 + 0xc)
                    zmm1_3.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f* *(rdx_9 + rax_9 + 8)
                    zmm0_3.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).d f* *(rdx_9 + rax_9 + 4)
                    zmm3_1.d = zmm3_1.d f* *(rdx_9 + rax_9)
                    var_198:4.d = zmm0_3.d
                    var_198:8.d = zmm1_3.d
                    var_198.d = zmm3_1.d
                    var_198:0xc.d = zmm2_2.d
                    zmm6_1, zmm9_1 = sub_140ae16d0(&var_198, &result_18, arg1[5].b)
                    rax_11 = *(r13 + 0x18)
                    rcx_12 = var_180
                    result_15 = result_18
                
                result_25.d = zmm11.d f+ zmm9_1.d
                zmm7_1.d = zmm6_1.d f+ zmm13.d
                zmm14.d = zmm9_1.d f- zmm11.d
                zmm8_1.d = zmm13.d f- zmm6_1.d
                
                if (result_24 s< result_5.d)
                    zmm0_3 = *(rax_11 + (rcx_12 << 3) + 8)
                    zmm1_3 = *(rax_11 + (rcx_12 << 3) + 0xc)
                    zmm10.d = zmm0_3.d f- var_1a8.d
                    zmm9_1.d = zmm13.d f- zmm1_3.d
                    result_22 = zmm1_3.d
                    float var_168_1 = zmm0_3.d
                    zmm1_3.d = zmm10.d f* zmm10.d
                    zmm0_3.d = zmm9_1.d f* zmm9_1.d
                    zmm1_3.d = zmm1_3.d f+ zmm0_3.d
                    
                    if (zmm1_3.d f<= 9.99999994e-09f)
                        zmm9_1 = zx.o(0)
                        zmm10 = zx.o(0)
                    else
                        zmm5_2 = _mm_rsqrt_ss(zmm1_3.d, zmm1_3.d)
                        zmm3_1.d = zmm1_3.d f* 0.5f
                        zmm0_3.d = zmm5_2.d f* zmm5_2.d
                        zmm1_3.d = zmm3_1.d f* zmm0_3.d
                        zmm2_2.d = 0.5f f- zmm1_3.d
                        zmm0_3.d = zmm5_2.d f* zmm2_2.d
                        zmm5_2.d = zmm5_2.d f+ zmm0_3.d
                        zmm1_3.d = zmm5_2.d f* zmm5_2.d
                        zmm3_1.d = zmm3_1.d f* zmm1_3.d
                        zmm4_2.d = 0.5f f- zmm3_1.d
                        zmm0_3.d = zmm5_2.d f* zmm4_2.d
                        zmm5_2.d = zmm5_2.d f+ zmm0_3.d
                        zmm9_1.d = zmm9_1.d f* zmm5_2.d
                        zmm10.d = zmm10.d f* zmm5_2.d
                    
                    zmm9_1.d = zmm9_1.d f* result_19
                    zmm10.d = zmm10.d f* result_19
                    int32_t var_144 = result_25.d
                    int32_t var_140_1 = zmm7_1.d
                    zmm0_3.d = zmm9_1.d f+ var_168_1
                    zmm1_3.d = zmm10.d f+ result_22
                    int32_t var_154 = zmm0_3.d
                    zmm0_3.d = zmm9_1.d f+ var_1a8.d
                    int32_t var_150_1 = zmm1_3.d
                    zmm1_3.d = zmm10.d f+ zmm13.d
                    int32_t var_14c = zmm0_3.d
                    zmm0_3.d = zmm11.d f+ result_9
                    int32_t var_148_1 = zmm1_3.d
                    zmm1_3.d = zmm6_1.d f+ zmm15.d
                    int32_t var_13c = zmm0_3.d
                    var_220_1.d = 0x3dcccccd
                    var_228_1.q = &var_1a0
                    int32_t var_138_1 = zmm1_3.d
                    char rax_12
                    int32_t zmm6_2
                    int512_t zmm7_2
                    int32_t zmm8_2
                    float zmm9_2
                    float zmm10_1
                    float zmm11_1
                    int512_t zmm12
                    float zmm13_1
                    rax_12, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_1, zmm11_1, zmm12, zmm13_1 =
                        sub_140e1aef0(&var_13c, &var_144, &var_14c, &var_154, var_228_1, 0x3dcccccd)
                    
                    if (rax_12 != 0)
                        zmm12.o = var_1a0
                        zmm7_2.o = var_19c_1
                    
                    int32_t var_124 = zmm14.d
                    int32_t var_120_1 = zmm8_2
                    zmm15.d = zmm15.d f- zmm6_2
                    float var_134 = var_168_1 - zmm9_2
                    float var_128_1 = zmm13_1 - zmm10_1
                    int32_t var_118_1 = zmm15.d
                    float var_130_1 = result_22 - zmm10_1
                    float var_12c = var_1a8.d - zmm9_2
                    float var_11c = result_9 - zmm11_1
                    var_220_1.d = 0x3dcccccd
                    var_228_1.q = &var_1a0
                    char rax_13
                    rax_13, zmm7_1, zmm8_1, result_25, zmm13 =
                        sub_140e1aef0(&var_11c, &var_124, &var_12c, &var_134, var_228_1, 0x3dcccccd)
                    zmm9_1 = var_1a8.d
                    
                    if (rax_13 != 0)
                        zmm14 = var_1a0
                        zmm8_1 = var_19c_1
                
                zmm2_2.d = zmm7_1.d f* arg2[2].d
                int64_t* rcx_16 = rax_2[4].q
                zmm7_1.d = zmm7_1.d f* *(arg2 + 0x14)
                var_1f8.q = 0x3f800000
                int64_t rdi_2 = sx.q(rcx_16[1].d)
                int32_t var_1f0_3 = data_143dbb1f0.d.d
                zmm0_3.d = result_25.d f* arg2[1].d
                result_25.d = result_25.d f* *(arg2 + 0xc)
                int32_t rax_14 = (rdi_2 + 1).d
                zmm2_2.d = zmm2_2.d f+ zmm0_3.d
                int32_t var_1ec_3 = data_143dbb1f0:4.d.d
                zmm7_1.d = zmm7_1.d f+ result_25.d
                zmm2_2.d = zmm2_2.d f+ arg2[3].d
                zmm7_1.d = zmm7_1.d f+ *(arg2 + 0x1c)
                rcx_16[1].d = rax_14
                int32_t var_1e0_3 = zmm2_2.d
                int32_t var_1dc_3 = zmm7_1.d
                
                if (rax_14 s> *(rcx_16 + 0xc))
                    sub_1405c4ec0(rcx_16)
                
                int64_t rdx_14 = rdi_2 * 5
                zmm0_3 = var_1f8.o
                var_1f8.q = 0
                int64_t rcx_17 = *rax_2[4].q
                *(rcx_17 + (rdx_14 << 3)) = zmm0_3
                *(rcx_17 + (rdx_14 << 3) + 0x10) = var_1e8
                *(rcx_17 + (rdx_14 << 3) + 0x20) = result_15.q
                *(rax_2 + 0x64) += 1
                zmm2_2.d = zmm8_1.d f* arg2[2].d
                int64_t* rcx_18 = rax_2[4].q
                zmm8_1.d = zmm8_1.d f* *(arg2 + 0x14)
                int64_t rdi_3 = sx.q(rcx_18[1].d)
                int32_t var_1f0_4 = data_143dbb1f0.d.d
                zmm0_3.d = zmm14.d f* arg2[1].d
                zmm14.d = zmm14.d f* *(arg2 + 0xc)
                int32_t rax_16 = (rdi_3 + 1).d
                zmm2_2.d = zmm2_2.d f+ zmm0_3.d
                int32_t var_1ec_4 = data_143dbb1f0:4.d.d
                zmm8_1.d = zmm8_1.d f+ zmm14.d
                zmm2_2.d = zmm2_2.d f+ arg2[3].d
                zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x1c)
                rcx_18[1].d = rax_16
                int32_t var_1e0_4 = zmm2_2.d
                int32_t var_1dc_4 = zmm8_1.d
                
                if (rax_16 s> *(rcx_18 + 0xc))
                    sub_1405c4ec0(rcx_18)
                
                int64_t rdx_16 = rdi_3 * 5
                int64_t rcx_19 = *rax_2[4].q
                *(rcx_19 + (rdx_16 << 3)) = var_1f8.o
                *(rcx_19 + (rdx_16 << 3) + 0x10) = var_1e8
                *(rcx_19 + (rdx_16 << 3) + 0x20) = result_15.q
                int64_t* rdi_4 = *(rax_2 + 0x48)
                *(rax_2 + 0x64) += 1
                int64_t r14_3 = sx.q(rdi_4[1].d)
                int32_t rax_18 = (r14_3 + 1).d
                rdi_4[1].d = rax_18
                
                if (rax_18 s> *(rdi_4 + 0xc))
                    sub_1405a4cf0(rdi_4)
                
                *(*rdi_4 + (r14_3 << 2)) = r15_2
                int64_t* rdi_5 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r14_4 = sx.q(rdi_5[1].d)
                int32_t rax_20 = (r14_4 + 1).d
                rdi_5[1].d = rax_20
                
                if (rax_20 s> *(rdi_5 + 0xc))
                    sub_1405a4cf0(rdi_5)
                
                *(*rdi_5 + (r14_4 << 2)) = r15_2 - 1
                int64_t* rdi_6 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r14_5 = sx.q(rdi_6[1].d)
                int32_t rax_22 = (r14_5 + 1).d
                rdi_6[1].d = rax_22
                
                if (rax_22 s> *(rdi_6 + 0xc))
                    sub_1405a4cf0(rdi_6)
                
                *(*rdi_6 + (r14_5 << 2)) = r15_2 + 1
                int64_t* rdi_7 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r14_6 = sx.q(rdi_7[1].d)
                int32_t rax_24 = (r14_6 + 1).d
                rdi_7[1].d = rax_24
                
                if (rax_24 s> *(rdi_7 + 0xc))
                    sub_1405a4cf0(rdi_7)
                
                *(*rdi_7 + (r14_6 << 2)) = r15_2
                int64_t* rdi_8 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r14_7 = sx.q(rdi_8[1].d)
                int32_t rax_26 = (r14_7 + 1).d
                rdi_8[1].d = rax_26
                
                if (rax_26 s> *(rdi_8 + 0xc))
                    sub_1405a4cf0(rdi_8)
                
                *(*rdi_8 + (r14_7 << 2)) = r15_2 + 1
                int64_t* rdi_9 = *(rax_2 + 0x48)
                *(rax_2 + 0x68) += 1
                int64_t r14_8 = sx.q(rdi_9[1].d)
                int32_t rax_28 = (r14_8 + 1).d
                rdi_9[1].d = rax_28
                
                if (rax_28 s> *(rdi_9 + 0xc))
                    sub_1405a4cf0(rdi_9)
                
                r15_2 += 2
                zmm6_1 = zmm9_1
                result_24 = result_17 i+ 1
                rcx_12 = var_180 + 1
                result_25 = result_19
                rdx_9 = var_178.q + 0x10
                zmm14 = 0x322bcc77
                zmm15 = zmm13
                result_5 = zx.q(result_6)
                *(*rdi_9 + (r14_8 << 2)) = r15_2
                *(rax_2 + 0x68) += 1
                result_9 = zmm6_1.d
                result_17 = result_24
                var_180 = rcx_12
                var_178.q = rdx_9
                
                if (rcx_12 s>= result_1)
                    break
                
                zmm11 = 0x3f000000
            
            result_4 = result_1
        
        int64_t rax_30 = *(r13 + 0x18)
        zmm0_3 = zx.o(*(rax_30 + (result_4 << 3) - 8))
        zmm1_3 = zx.o(*(rax_30 + (result_4 << 3) - 0x10))
        var_1a8 = zmm0_3.q
        zmm7_1.d = zmm0_3.d f- zmm1_3.d
        zmm6_1.d = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55).d f- _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55).d
        zmm0_3.d = zmm7_1.d f* zmm7_1.d
        zmm1_3.d = zmm6_1.d f* zmm6_1.d
        zmm1_3.d = zmm1_3.d f+ zmm0_3.d
        
        if (zmm1_3.d f<= zmm14.d)
            zmm7_1 = zx.o(0)
            zmm6_1 = zx.o(0)
        else
            zmm3_1.d = zmm1_3.d
            zmm5_2 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_3.d = zmm5_2.d f* zmm5_2.d
            zmm1_3.d = zmm3_1.d f* zmm0_3.d
            zmm2_2.d = 0.5f f- zmm1_3.d
            zmm0_3.d = zmm5_2.d f* zmm2_2.d
            zmm5_2.d = zmm5_2.d f+ zmm0_3.d
            zmm1_3.d = zmm5_2.d f* zmm5_2.d
            zmm3_1.d = zmm3_1.d f* zmm1_3.d
            zmm4_2.d = 0.5f f- zmm3_1.d
            zmm0_3.d = zmm5_2.d f* zmm4_2.d
            zmm5_2.d = zmm5_2.d f+ zmm0_3.d
            result_9 = zmm5_2.d
            zmm7_1.d = zmm7_1.d f* zmm5_2.d
            zmm6_1.d = zmm6_1.d f* zmm5_2.d
        
        zmm7_1.d = zmm7_1.d f* result_25.d
        var_220_1.q = &result_11
        zmm6_1.d = zmm6_1.d f* result_25.d
        var_228_1.q = &var_160
        result_9 = zmm7_1.d
        int32_t arg_1c = zmm6_1.d
        result = sub_140e1b790(rax_2, &arg2[1], &var_1a8, &result_9, var_228_1, var_220_1)

return result
