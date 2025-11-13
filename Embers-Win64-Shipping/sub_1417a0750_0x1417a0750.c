// 函数: sub_1417a0750
// 地址: 0x1417a0750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
int128_t var_88 = zmm10
int64_t r15 = sx.q(arg2)
int128_t zmm12
zmm12.d = arg1[4].d.d f+ 9.99999975e-05f
int64_t r8 = *arg1[1]
int64_t r9 = r15 * 3
zmm12.d = zmm12.d f* zmm12.d
int64_t rdx = *(*arg1 + 0x28)
int32_t* rsi = rdx + sx.q(*(r8 + (r9 << 2))) * 0xc
int64_t rcx_1 = sx.q(*(r8 + (r9 << 2) + 4)) * 3
int128_t* r12 = rdx + (rcx_1 << 2)
int128_t zmm6
zmm6.d = (*(rdx + (rcx_1 << 2))).d f- *rsi
float zmm5 = *(r12 + 4) f- rsi[1]
int64_t rcx_2 = sx.q(*(r8 + (r9 << 2) + 8)) * 3
int128_t* r13 = rdx + (rcx_2 << 2)
int128_t zmm8
zmm8.d = (*(rdx + (rcx_2 << 2) + 4)).d f- rsi[1]
int128_t zmm2
zmm2.d = (*(r13 + 8)).d f- rsi[2]
int128_t zmm4
zmm4.d = (*r13).d f- *rsi
uint128_t zmm3
zmm3.d = (*(r12 + 8)).d f- rsi[2]
int64_t zmm0 = zmm8.q
zmm8.d = zmm8.d f* zmm6.d
int128_t zmm9 = zmm2
zmm2.d = zmm2.d f* zmm6.d
zmm9.d = zmm9.d f* zmm5
zmm0.d = zmm0.d f* zmm3.d
int128_t zmm7
zmm7.d = zmm4.d f* zmm3.d
zmm9.d = zmm9.d f- zmm0.d
zmm4.d = zmm4.d f* zmm5
zmm7.d = zmm7.d f- zmm2.d
zmm8.d = zmm8.d f- zmm4.d
zmm0.d = zmm9.q.d f* zmm9.d
zmm2.d = zmm7.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
int64_t result

if (not(zmm2.d f< 9.99999975e-05f))
    float temp0_1 = _mm_sqrt_ss(0, zmm2.d)
    zmm0.d = 1f / temp0_1
    zmm9.d = zmm9.d f* zmm0.d
    zmm7.d = zmm7.d f* zmm0.d
    zmm8.d = zmm8.d f* zmm0.d
    float var_118 = zmm9.d
    float var_114_1 = zmm7.d
    float var_110_1 = zmm8.d
    
    if (not(temp0_1 <= 9.99999975e-05f))
        if (*(arg1 + 0x44) != 0)
            result = arg1[3]
            zmm7.d = zmm7.d f* *(result + 4)
            zmm9.d = zmm9.d f* *result
            zmm8.d = zmm8.d f* *(result + 8)
            zmm7.d = zmm7.d f+ zmm9.d
            zmm7.d = zmm7.d f+ zmm8.d
        
        if (*(arg1 + 0x44) == 0 || not(zmm7.d f> 0f))
            r8.b = 2
            void** var_d8
            sub_1417048d0(&var_d8, 0, r8.b)
            int32_t* rdi_1 = arg1[2]
            zmm3 = *(arg3 + 0x14)
            int32_t* r8_1 = arg1[3]
            var_d8 = &data_142fc47b8
            int64_t var_c8 = *rsi
            int32_t var_c0_1 = rsi[2]
            float var_b4_1 = var_110_1
            int64_t var_bc_1 = var_118.q
            float var_108
            void var_f0
            uint64_t var_e8
            int64_t* rbx
            
            if (sub_14174b4e0(&var_c8, rdi_1, r8_1, zmm3, arg1[4].d.d, &var_108, &var_118, &var_e8, 
                    &var_f0) == 0)
                rbx.b = 1
            else
                int32_t var_148_1
                
                if (var_108 != 0f)
                    var_148_1.q = r13
                    float var_100
                    int32_t zmm6_2
                    zmm6_2, zmm10 = sub_1415c64e0(&var_100, &var_118, rsi, r12, var_148_1, &var_118)
                    float var_fc
                    float zmm2_2 = var_114_1 - var_fc
                    float zmm1_2 = var_118 - var_100
                    int32_t var_f8
                    uint64_t zmm0_2
                    zmm0_2.d = var_110_1.d f- var_f8
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    
                    if (zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2 f+ zmm0_2.d <= 9.99999994e-09f != 0
                            && not(zmm6_2 f>= *(arg1 + 0x24)))
                        arg1[5] = var_118.q
                        arg1[6].d = var_110_1
                        *(arg1 + 0x34) = var_e8
                        zmm10.d = zmm10.d f/ zmm6_2
                        int32_t var_e0
                        *(arg1 + 0x3c) = var_e0
                        *(arg1 + 0x24) = zmm6_2
                        *(arg3 + 0x18) = zmm10.d
                        *(arg3 + 0x14) = zmm6_2
                        arg1[8].d = r15.d
                    
                    rbx.b = 1
                else
                    var_148_1.q = r13
                    int32_t zmm12_1 = sub_1415c6840(&var_118, &var_d8, rsi, r12, var_148_1, rdi_1)
                    float zmm2_1 = rdi_1[1] f- var_114_1
                    float zmm1_1 = *rdi_1 - var_118
                    float zmm0_1 = rdi_1[2] f- var_110_1
                    
                    if (zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1 f> zmm12_1)
                        rbx.b = 1
                    else
                        *(arg1 + 0x24) = 0
                        arg1[8].d = r15.d
                        rbx.b = 0
            
            var_d8 = &data_142fc47b8
            sub_141706890(&var_d8)
            return zx.q(rbx.b)

result.b = 1
return result
