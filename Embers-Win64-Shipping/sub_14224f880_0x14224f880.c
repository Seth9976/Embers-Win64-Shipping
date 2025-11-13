// 函数: sub_14224f880
// 地址: 0x14224f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t r14_1 = 0
    int128_t zmm13 = 0x428c0000
    uint32_t zmm6[0x4]
    uint32_t var_38_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    
    do
        result = (*(*arg1 + 0x150))(arg1)
        float zmm0[0x4] = result[0xa4].d
        zmm0[0] = zmm0[0] f- arg1[7].d
        
        if (zmm0[0] f< *(arg1 + 0x2c))
            break
        
        void* rdi_2 = *arg2 + r14_1
        result = sub_142271c10(rdi_2)
        
        if (result.b != 0 && *(rdi_2 + 0x48) s> 0)
            int128_t* rax_1 = *(rdi_2 + 0x40)
            float var_f8[0x4] = *rax_1
            int64_t var_e8_1 = (rax_1[1]).q
            float var_d8_1[0x4] = rax_1[2]
            void* rax_2 = sub_14226bc30(rdi_2 + 4)
            result = sub_14226bc30(rdi_2 + 0x20)
            
            if (rax_2 != 0 && result != 0)
                int32_t var_128
                int512_t zmm6_1
                int512_t zmm7_1
                int512_t zmm8_1
                zmm6_1, zmm7_1, zmm8_1 = sub_142218d30(rax_2, &var_128, &var_f8)
                void var_c8
                int32_t* rax_3 = sub_142218aa0(rax_2, &var_c8)
                zmm6_1.o = *rax_3
                zmm7_1.o = rax_3[1]
                zmm8_1.o = rax_3[2]
                int32_t var_138
                int32_t zmm9_1
                int32_t zmm10_1
                float zmm11_1
                uint32_t zmm12_1[0x4]
                zmm6, zmm7, zmm8, zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
                    sub_142218d30(result, &var_138, &var_f8)
                void var_bc
                int32_t* rax_4 = sub_142218aa0(result, &var_bc)
                int32_t var_134
                zmm0 = var_134
                int32_t var_124
                zmm0[0] = zmm0[0] f- var_124
                float zmm4_1 = *rax_4
                float zmm3_1 = rax_4[1]
                float zmm2_1 = rax_4[2]
                zmm0[0] = zmm0[0] f* var_e8_1.d
                int64_t rax_5 = *arg1
                int32_t var_130
                int32_t var_120
                int64_t zmm1
                zmm1.d = var_130.d f- var_120
                zmm6[0] = zmm6[0] f* zmm11_1
                zmm1.d = zmm1.d f* var_e8_1:4.d
                zmm4_1 = zmm4_1 * zmm11_1 f- zmm6[0]
                zmm7.d = zmm7.d f* zmm11_1
                zmm6 = var_138
                zmm6[0] = zmm6[0] f- var_128
                zmm3_1 = zmm3_1 * zmm11_1 f- zmm7.d
                zmm8.d = zmm8.d f* zmm11_1
                zmm6[0] = zmm6[0] f* var_f8[3]
                zmm2_1 = zmm2_1 * zmm11_1 f- zmm8.d
                zmm6[0] = zmm6[0] f+ zmm0[0]
                zmm6[0] = zmm6[0] f+ zmm1.d
                uint32_t temp0_1[0x4] = _mm_and_ps(zmm6, zmm12_1)
                float temp0_2[0x4] =
                    _mm_sqrt_ss(0, zmm3_1 * zmm3_1 + zmm4_1 * zmm4_1 + zmm2_1 * zmm2_1)
                temp0_2[0] = temp0_2[0] f* zmm13.d
                zmm6 = _mm_max_ss(temp0_1[0], temp0_2[0])
                result = (*(rax_5 + 0x150))(arg1)
                
                if (result != 0)
                    int64_t* rdx_4 = arg1[6]
                    
                    if (rdx_4 != 0 && not(zmm6[0] f<= arg1[5].d))
                        int32_t rcx_9 = data_143dbb210
                        int64_t var_118 = data_143dbb208
                        zmm0 = var_f8
                        int64_t var_108 = zmm0.q
                        int32_t var_110_1 = rcx_9
                        float var_100_1 = _mm_bsrli_si128(zmm0, 8)[0]
                        zmm13 = sub_142035e10(result, rdx_4, &var_108, &var_118, zmm9_1, zmm9_1, 
                            zmm10_1, nullptr, nullptr, 0)
                        result = zx.q(result[0xa4].d)
                        arg1[7].d = result.d
        
        i += 1
        r14_1 += 0x68
    while (i s< arg2[1].d)

return result
