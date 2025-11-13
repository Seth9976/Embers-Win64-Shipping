// 函数: sub_14179f4b0
// 地址: 0x14179f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_68 = zmm8
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rax_2 = sx.q(arg2)
int128_t zmm11
zmm11.d = arg1[4].d.d f+ 9.99999975e-05f
int32_t var_150 = rax_2.d
int64_t r9 = rax_2 * 3
zmm11.d = zmm11.d f* zmm11.d
int64_t r8 = *arg1[1]
int64_t rdx = *(*arg1 + 0x28)
int32_t* r14 = rdx + zx.q(*(r8 + (r9 << 1))) * 0xc
uint64_t rcx_1 = zx.q(*(r8 + (r9 << 1) + 2)) * 3
int128_t* r15 = rdx + (rcx_1 << 2)
int128_t zmm6
zmm6.d = (*(rdx + (rcx_1 << 2))).d f- *r14
float zmm5 = *(r15 + 4) f- r14[1]
uint64_t rcx_2 = zx.q(*(r8 + (r9 << 1) + 4)) * 3
int128_t* r12 = rdx + (rcx_2 << 2)
uint128_t zmm7
zmm7.d = (*(rdx + (rcx_2 << 2) + 4)).d f- r14[1]
uint128_t zmm1
zmm1.d = (*(r12 + 8)).d f- r14[2]
uint128_t zmm4
zmm4.d = (*r12).d f- *r14
uint128_t zmm3
zmm3.d = (*(r15 + 8)).d f- r14[2]
int64_t zmm0 = zmm7.q
zmm7.d = zmm7.d f* zmm6.d
uint128_t zmm9 = zmm1
zmm1.d = zmm1.d f* zmm6.d
zmm9.d = zmm9.d f* zmm5
zmm0.d = zmm0.d f* zmm3.d
uint128_t zmm10
zmm10.d = zmm4.d f* zmm3.d
zmm9.d = zmm9.d f- zmm0.d
zmm4.d = zmm4.d f* zmm5
zmm10.d = zmm10.d f- zmm1.d
zmm7.d = zmm7.d f- zmm4.d
zmm0.d = zmm9.q.d f* zmm9.d
uint128_t zmm2
zmm2.d = zmm10.d f* zmm10.d
zmm1.d = zmm7.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
uint64_t result

if (zmm2.d f< 9.99999975e-05f)
    result.b = 1
else
    int64_t temp0_1 = _mm_sqrt_ss(0, zmm2.d)
    zmm2.d = 1f f/ temp0_1.d
    zmm3.d = zmm2.d f* zmm9.d
    zmm1.d = zmm2.d f* zmm10.d
    zmm2.d = zmm2.d f* zmm7.d
    float var_110 = zmm3.d
    float var_10c = zmm1.d
    int64_t var_108
    var_108.d = zmm2.d
    
    if (temp0_1.d f<= 9.99999975e-05f)
        result.b = 1
    else
        if (*(arg1 + 0x44) != 0)
            result = arg1[3]
            zmm1.d = zmm1.d f* *(result + 4)
            zmm3.d = zmm3.d f* *result
            zmm2.d = zmm2.d f* *(result + 8)
            zmm1.d = zmm1.d f+ zmm3.d
            zmm1.d = zmm1.d f+ zmm2.d
        
        if (*(arg1 + 0x44) != 0 && zmm1.d f> 0f)
            result.b = 1
        else
            r8.b = 2
            void** var_148
            sub_1417048d0(&var_148, 0, r8.b)
            uint128_t zmm12 = *(arg3 + 0x14)
            int32_t* rbx_1 = arg1[2]
            zmm10 = arg1[4].d
            int32_t* r8_1 = arg1[3]
            void var_158
            void* var_198_1 = &var_158
            uint64_t var_120
            uint64_t* var_1a0_1 = &var_120
            int32_t* var_1a8_1 = &var_110
            var_148 = &data_142fc47b8
            int64_t var_138 = *r14
            int32_t rax_7 = r14[2]
            zmm0 = var_110.q
            int32_t rax_8 = var_108.d
            float var_14c
            char rax_9
            float zmm7_1
            int512_t zmm9_1
            rax_9, zmm7_1, zmm9_1 = sub_14174b4e0(&var_138, rbx_1, r8_1, zmm12, zmm10.d, &var_14c, 
                var_1a8_1, var_1a0_1, var_198_1)
            
            if (rax_9 == 0)
                rbx_1.b = 1
            else
                float var_168
                int32_t* rcx_5 = &var_168
                int64_t rsi
                rsi.b = 0
                int32_t var_154_1 = var_108.d
                int32_t* r8_2 = r14
                zmm9_1.o = zx.o(var_110.q)
                int32_t var_1b8_1
                float var_164
                int32_t var_160
                uint128_t zmm0_1
                float zmm1_1
                float zmm7_2
                uint128_t zmm10_1
                int32_t zmm12_1
                
                if (var_14c != zmm7_1)
                    var_1b8_1.q = r12
                    uint128_t zmm6_2
                    float zmm9_2[0x4]
                    zmm6_2, zmm7_2, zmm8, zmm9_2, zmm10_1, zmm12_1 =
                        sub_1415c64e0(rcx_5, &var_110, r8_2, r15, var_1b8_1, &var_110)
                    float zmm2_2 = var_10c - var_164
                    zmm1_1 = var_110 - var_168
                    zmm0_1.d = var_108.d.d f- var_160
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    rsi.b = zmm2_2 * zmm2_2 + zmm1_1 * zmm1_1 f+ zmm0_1.d <= 9.99999994e-09f
                    int32_t var_118
                    
                    if (rsi.b == 0)
                    label_14179f806:
                        zmm0_1.d = (*r15).d f- *r14
                        zmm1_1 = *(r15 + 4) f- r14[1]
                        var_168 = zmm0_1.d
                        zmm0_1.d = (*(r15 + 8)).d f- r14[2]
                        float var_164_1 = zmm1_1
                        int32_t var_160_1 = zmm0_1.d
                        void* var_178_1 = &var_158
                        var_198_1.d = zmm7_2
                        var_1a0_1.d = zmm12_1
                        var_1b8_1.q = r15
                        int32_t var_100
                        void var_d8
                        char rax_13
                        int32_t zmm7_3
                        rax_13, zmm7_3 = sub_14174bd50(zmm10_1, sub_141750780(&var_168), &var_168, 
                            r14, var_1b8_1, rbx_1, arg1[3], var_1a0_1.d, var_198_1, &var_110, 
                            &var_100, &var_d8)
                        float zmm1_3 = *(r12 + 4) f- *(r15 + 4)
                        var_168 = *r12 f- *r15
                        float var_164_2 = zmm1_3
                        float var_160_2 = *(r12 + 8) f- *(r15 + 8)
                        uint128_t zmm0_4 = sub_141750780(&var_168)
                        void* var_178_2 = &var_158
                        var_198_1.d = zmm7_3
                        var_1a0_1.d = (*(arg3 + 0x14)).d
                        var_1b8_1.q = r12
                        int32_t var_f4
                        void var_cc
                        char rax_16
                        int32_t zmm7_4
                        rax_16, zmm7_4 = sub_14174bd50(arg1[4].d, zmm0_4, &var_168, r15, var_1b8_1, 
                            arg1[2], arg1[3], var_1a0_1.d, var_198_1, &var_10c, &var_f4, &var_cc)
                        float zmm1_5 = *(r12 + 4) f- r14[1]
                        var_168 = *r12 f- *r14
                        float var_164_3 = zmm1_5
                        float var_160_3 = *(r12 + 8) f- r14[2]
                        uint128_t zmm0_6 = sub_141750780(&var_168)
                        void* var_178_3 = &var_158
                        var_198_1.d = zmm7_4
                        var_1a0_1.d = (*(arg3 + 0x14)).d
                        var_1b8_1.q = r12
                        int32_t var_e8[0x4]
                        void var_c0
                        char rax_19
                        rax_19, zmm6_2, zmm7_2, zmm8, zmm9_2 = sub_14174bd50(arg1[4].d, zmm0_6, 
                            &var_168, r14, var_1b8_1, arg1[2], arg1[3], var_1a0_1.d, var_198_1, 
                            &var_108, &var_e8, &var_c0)
                        int32_t rax_20 = -1
                        uint128_t zmm5_1 = zx.o(0)
                        
                        if (rax_13 != 0)
                            zmm0_1 = var_110
                            
                            if (rsi.b == 0 || not(zmm0_1.d f>= zmm7_2))
                                zmm5_1 = zmm0_1
                                rax_20 = 0
                                rsi.b = 1
                        
                        if (rax_16 != 0)
                            zmm0_1 = var_10c
                            
                            if (rsi.b == 0 || not(zmm0_1.d f>= zmm5_1.d))
                                rax_20 = 1
                                zmm5_1 = zmm0_1
                                rsi = 1
                        
                        if (rax_19 != 0)
                            zmm0_1 = var_108.d
                        
                        if (rax_19 != 0 && (rsi.b == 0 || not(zmm0_1.d f>= zmm5_1.d)))
                            zmm5_1 = zmm0_1
                            rax_20 = 2
                            rsi.b = 1
                        label_14179fa50:
                            int64_t rcx_10 = sx.q(rax_20) * 3
                            void var_d0
                            int32_t rax_22 = *(&var_d0 + (rcx_10 << 2))
                            uint128_t zmm4_1 = arg1[4].d
                            uint128_t zmm2_3 = zx.o(*(&var_d8 + (rcx_10 << 2)))
                            zmm9_2 = (&var_100)[rcx_10]
                            zmm0_1.d = zmm4_1.d f* zmm2_3.d
                            uint128_t zmm1_7
                            zmm1_7.d = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55).d f* zmm4_1.d
                            zmm9_2[0] = zmm9_2[0] f- zmm0_1.d
                            var_168.q = zmm2_3.q
                            void var_f8
                            zmm0_1 = *(&var_f8 + (rcx_10 << 2))
                            void var_fc
                            zmm2_3.d = (*(&var_fc + (rcx_10 << 2))).d f- zmm1_7.d
                            zmm1_7.d = rax_22.d f* zmm4_1.d
                            zmm9_2 = _mm_unpacklo_ps(zmm9_2, zmm2_3.q)
                            zmm0_1.d = zmm0_1.d f- zmm1_7.d
                            var_154_1 = zmm0_1.d
                            
                            if (not(zmm6_2.d f!= zmm7_2))
                                uint128_t* rax_24 = arg1[2]
                                int128_t zmm3_1 = zmm0:4.d
                                zmm4_1 = zmm0.d
                                zmm6_2 = rax_8
                                zmm2_3.d = (*(rax_24 + 4)).d f- var_138:4.d
                                zmm0_1.d = (*rax_24).d f- var_138.d
                                zmm1_7.d = (*(rax_24 + 8)).d f- rax_7
                                zmm2_3.d = zmm2_3.d f* zmm3_1.d
                                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                                zmm1_7.d = zmm1_7.d f* zmm6_2.d
                                zmm2_3.d = zmm2_3.d f+ zmm0_1.d
                                zmm2_3.d = zmm2_3.d f+ zmm1_7.d
                                int32_t var_160_6
                                
                                if (zmm2_3.d f< zmm7_2)
                                    var_168 = (zmm4_1 ^ 0x80000000).d
                                    int32_t var_164_4 = (zmm3_1 ^ 0x80000000).d
                                    var_160_6 = (zmm6_2 ^ 0x80000000).d
                                else
                                    var_168.q = zmm0
                                    var_160_6 = rax_8
                                
                                var_120 = var_168.q
                                var_118 = var_160_6
                            
                            zmm6_2 = zmm5_1
                        else if (rax_20 != 0xffffffff)
                            goto label_14179fa50
                        
                        if (rsi.b != 0 && not(zmm6_2.d f>= *(arg1 + 0x24)))
                            goto label_14179fb6a
                        
                        rbx_1.b = 1
                    else if (zmm6_2.d f>= *(arg1 + 0x24))
                        rbx_1.b = 1
                    else
                    label_14179fb6a:
                        zmm0_1 = zx.o(var_120)
                        arg1[5] = zmm9_2.q
                        arg1[6].d = var_154_1
                        *(arg1 + 0x34) = zmm0_1.q
                        *(arg1 + 0x3c) = var_118
                        *(arg1 + 0x24) = zmm6_2.d
                        *(arg3 + 0x14) = zmm6_2.d
                        
                        if (not(zmm6_2.d f== zmm7_2))
                            zmm8.d = zmm8.d f/ zmm6_2.d
                            *(arg3 + 0x18) = zmm8.d
                        
                        arg1[8].d = var_150
                        rbx_1.b = 1
                else
                    var_1b8_1.q = r12
                    int32_t zmm11_1
                    zmm7_2, zmm10_1, zmm11_1, zmm12_1 =
                        sub_1415c6840(rcx_5, &var_148, r8_2, r15, var_1b8_1, rbx_1)
                    float zmm2_1 = rbx_1[1] f- var_164
                    zmm1_1 = *rbx_1 - var_168
                    zmm0_1.d = rbx_1[2].d f- var_160
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    
                    if (zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm0_1.d f> zmm11_1)
                        goto label_14179f806
                    
                    *(arg1 + 0x24) = 0
                    rbx_1.b = 0
                    arg1[8].d = var_150
            
            var_148 = &data_142fc47b8
            sub_141706890(&var_148)
            result = zx.q(rbx_1.b)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
