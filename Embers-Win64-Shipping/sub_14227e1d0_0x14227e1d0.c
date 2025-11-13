// 函数: sub_14227e1d0
// 地址: 0x14227e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
float zmm9[0x4] = arg2
uint64_t result
float zmm6[0x4]
result, zmm6 = sub_141efce60(arg1, arg2[0])
int64_t* rdi = arg1[0x18]

if (rdi != 0)
    void* rax_2 = sub_142577430()
    void* rdx_1 = rdi[2]
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_2 + 0x30 && (*(arg1 + 0x8a) & 1) != 0)
            float zmm2_1[0x4] = data_142d4cc00
            float zmm5_1[0x4] = *(arg1 + 0x1c0)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
            void* r15_1 = arg1[0x15]
            float var_48_1[0x4] = zmm6
            float zmm8[0x4] = *(arg1 + 0x1d0)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            float var_1dc_1 = _mm_shuffle_ps(zmm8, zmm8, 0x55)[0]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            float var_1d8_1 = temp0_3[0]
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_7[0x4] = _mm_mul_ps(temp0_1, temp0_2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_9[0x4] = _mm_mul_ps(temp0_5, temp0_8)
            float var_1e0 = zmm8[0]
            float temp0_10[0x4] = _mm_sub_ps(temp0_7, temp0_9)
            float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
            float temp0_12[0x4] = _mm_mul_ps(temp0_11, temp0_6)
            float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_2)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm2_1)
            float temp0_20[0x4] = _mm_add_ps(
                _mm_sub_ps(temp0_14, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_8)), 
                temp0_16)
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
            temp0_21[0] = temp0_21[0] f* arg1[0x3f].d
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
            temp0_20[0] = temp0_20[0] f* arg1[0x3f].d
            temp0_22[0] = temp0_22[0] f* arg1[0x3f].d
            temp0_15[0] = temp0_15[0] + temp0_21[0]
            float temp0_23[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm8[0] = zmm8[0] + temp0_20[0]
            zmm6 = 0x3f800000
            temp0_23[0] = temp0_23[0] + temp0_22[0]
            float var_1c8_1 = temp0_15[0]
            float var_1d0 = zmm8[0]
            float var_1cc_1 = temp0_23[0]
            
            if (r15_1 == 0)
                r15_1 = sub_141ee69e0(arg1)
            
            int64_t rsi_1 = 0
            void* const r14_1
            
            if (*(arg1 + 0x201) == 0)
                r14_1 = nullptr
            else
                r14_1 = arg1[0x14]
            
            TEB* gsbase
            
            if (data_143f52720 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f52720)
                
                if (data_143f52720 == 0xffffffff)
                    zmm6 = sub_140b58170(&data_143f52718, "SpringComponent", 1)
                    _Init_thread_footer(&data_143f52720)
            
            void var_1e8
            void var_e8
            sub_141eb54c0(&var_e8, data_143f52718, &var_1e8, 1, r14_1)
            void var_178
            memset(&var_178, 0, 0x88)
            zmm2_1 = var_1d0
            zmm2_1[0] = zmm2_1[0] - var_1e0
            float zmm0_2[0x4] = var_1cc_1
            zmm0_2[0] = zmm0_2[0] - var_1dc_1
            float zmm1[0x4] = var_1c8_1
            zmm1[0] = zmm1[0] - var_1d8_1
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            int32_t var_170_1 = 0x3f800000
            zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_2[0]
            zmm2_1[0] = zmm2_1[0] + zmm1[0]
            
            if (not(zmm2_1[0] <= 1.00000002e-16f))
                char rax_6 = arg1[0x40].b
                uint64_t var_1f8_1 = &data_143f3a660
                float var_184_1 = (*(arg1 + 0x1fc))[0]
                void* var_200_1 = &var_e8
                int32_t var_188 = 2
                char rax_7
                rax_7, zmm6, zmm9 = sub_141ecd380(r15_1, &var_178, &var_1e0, &var_1d0, 
                    &data_14399f720, rax_6, &var_188, var_200_1, var_1f8_1)
                
                if (rax_7 != 0)
                    void var_108
                    int64_t rax_8 = sub_140d3c6e0(&var_108)
                    rsi_1 = rax_8
                    
                    if (rax_8 != 0)
                        zmm6 = var_170_1
            
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            zmm0_2 = var_1d8_1
            float zmm5_2[0x4] = var_1e0
            int64_t zmm4_2 = var_1dc_1
            zmm1 = var_1c8_1
            float zmm3_1[0x4] = var_1d0
            zmm1[0] = zmm1[0] - zmm0_2[0]
            zmm2_1 = var_1cc_1
            zmm3_1[0] = zmm3_1[0] - zmm5_2[0]
            zmm2_1[0] = zmm2_1[0] f- zmm4_2.d
            zmm1[0] = zmm1[0] * zmm6[0]
            zmm3_1[0] = zmm3_1[0] * zmm6[0]
            zmm0_2[0] = zmm0_2[0] + zmm1[0]
            zmm2_1[0] = zmm2_1[0] * zmm6[0]
            zmm5_2[0] = zmm5_2[0] + zmm3_1[0]
            zmm4_2.d = zmm4_2.d f+ zmm2_1[0]
            float var_190_1 = zmm0_2[0]
            arg1[0x41] = (_mm_unpacklo_ps(zmm5_2, zmm4_2)).q
            arg1[0x42].d = var_190_1
            
            if (rsi_1 != 0)
                (*(*rdi + 0x7c0))(rdi)
                float var_1b8
                float var_1a8[0x4]
                float zmm6_1 = sub_142264660(arg1, &var_1b8, &arg1[0x41], zmm9, &var_1a8)
                int64_t r9_3 = arg1[0x19]
                uint64_t var_198 = var_1e0.q
                float var_190_2 = var_1d8_1
                uint128_t zmm1_1
                zmm1_1.d = var_1b8.d f* zmm6_1
                int32_t var_1b4
                int64_t zmm2_2
                zmm2_2.d = var_1b4.d f* zmm6_1
                float var_1b0
                float var_1b0_1 = var_1b0 * zmm6_1
                int64_t rax_13 = *rdi
                var_1b8.q = (_mm_unpacklo_ps(zmm1_1, zmm2_2)).q
                (*(rax_13 + 0x5d0))(rdi, &var_1b8, &var_198, r9_3)
                *(arg1 + 0x204) = var_1a8[0]
            
            int512_t zmm6_2
            result, zmm6_2 = sub_14227f570(arg1)
            zmm6_2.o = var_48_1

__security_check_cookie(rax_1 ^ &var_238)
return result
