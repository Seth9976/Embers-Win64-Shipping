// 函数: sub_141ed6d30
// 地址: 0x141ed6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
uint64_t result = __security_cookie ^ &var_2c8
uint64_t result_1 = result
void* r13 = *(arg1 + 0xb8)
int128_t zmm15 = arg2.o

if (r13 != 0 && not(0f f>= *(arg1 + 0x228)) && *(arg1 + 0x148) != 0 && *(r13 + 0x2a0) s> 0)
    TEB* gsbase
    float zmm6[0x4]
    
    if (data_143f3ad80
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3ad80)
        
        if (data_143f3ad80 == 0xffffffff)
            arg2, zmm6 = sub_140b58170(&data_143f3ad78, "CMC_ApplyRepulsionForce", 1)
            _Init_thread_footer(&data_143f3ad80)
    
    void var_288
    void var_178
    sub_141eb54c0(&var_178, data_143f3ad78, &var_288, 0, nullptr)
    int32_t i = 0
    int16_t var_166_1 = 0
    void* rcx_3 = *(*(arg1 + 0x148) + 0x290)
    result = *(arg1 + 0xb8)
    float zmm9[0x4] = *(rcx_3 + 0x1e0)
    int96_t zmm0_1 = (*(result + 0x1d0)).12
    float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm9, zmm9, 0x55)[0], zmm9[0])
    float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
    temp0_3[0] = temp0_3[0] f* *(rcx_3 + 0x420)
    temp0_2[0] = temp0_2[0] f* *(rcx_3 + 0x424)
    temp0_2[0] = temp0_2[0] * 1.20000005f
    
    if (*(r13 + 0x2a0) s> 0)
        int64_t rsi_1 = 0
        float zmm11[0x4] = zmm0_1:8.d
        float zmm13[0x4] = zmm0_1.d
        int128_t zmm14 = zmm0_1:4.d
        float var_38_1[0x4] = zmm6
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        
        do
            void* rdi_1 = *(r13 + 0x298)
            void* r8_2
            result, r8_2 = sub_140d3c6e0(rdi_1 + 0x74 + rsi_1)
            uint64_t result_2 = result
            
            if (result != 0 && *(result + 0x14f) u>= 2)
                int64_t rdi_2 = sx.q(*(rsi_1 + rdi_1 + 0x60))
                void* rax_4
                int64_t rax_5
                void* rdx_2
                
                if (rdi_2.d != 0xffffffff)
                    rax_4 = sub_142591550()
                    rdx_2 = *(result_2 + 0x10)
                    rax_5 = sx.q(*(rax_4 + 0x38))
                
                uint64_t result_3
                
                if (rdi_2.d == 0xffffffff || rax_5.d s> *(rdx_2 + 0x38)
                        || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    r8_2.b = 1
                    int64_t var_270_1 = 0
                    result = (*(*result_2 + 0x6a8))(result_2, 0, r8_2)
                    result_3 = result
                label_141ed6f7a:
                    
                    if (result_3 != 0)
                        if (sub_142222800(result_3, arg2).b == 0)
                            result.b = 0
                        else if (sub_14221b2f0(result_3).b == 0)
                            result.b = 0
                        else
                            result.b = 1
                        
                        if (result.b != 0)
                            void var_108
                            sub_142218ad0(result_3, &var_108, 1, 0)
                            int32_t var_228
                            sub_142218c70(result_3, &var_228)
                            float var_f8[0x4]
                            float temp0_4[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xaa)
                            int96_t var_268_1
                            var_268_1:8.d = temp0_4[0]
                            float temp0_5[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0x55)
                            char var_208
                            memset(&var_208, 0, 0x88)
                            int64_t* rcx_13 = *(arg1 + 0xb8)
                            int32_t var_200_1 = 0x3f800000
                            int64_t var_248 = (_mm_unpacklo_ps(zmm13, zmm14.q)).q
                            void* var_2a8_2 = &var_178
                            float temp0_7[0x4] = _mm_unpacklo_ps(var_f8, temp0_5[0].q)
                            float var_240_1 = temp0_4[0]
                            int32_t var_230_1 = var_268_1:8.d
                            int64_t rax_9 = *rcx_13
                            int64_t var_238 = temp0_7.q
                            char var_2a0
                            char var_298
                            int64_t r9_2
                            result, r9_2 = (*(rax_9 + 0x828))(rcx_13, &var_208, &var_238, &var_248, 
                                var_2a8_2, var_2a0, var_298)
                            int32_t var_1ec
                            float zmm3[0x4] = var_1ec
                            float var_1e8
                            float zmm4_1 = var_1e8
                            float var_1e4
                            float zmm5_1 = var_1e4
                            int32_t var_1b0
                            char rcx_14
                            
                            if ((var_208 & 2) != 0 || var_1b0[0] > 2.5f)
                                rcx_14 = 1
                            else
                                rcx_14 = 0
                            
                            if (result.b == 0)
                                zmm3 = var_f8
                                zmm4_1 = temp0_5[0]
                                zmm5_1 = temp0_4[0]
                                rcx_14 = 1
                            
                            int32_t var_224
                            arg2.o = var_224
                            arg2.d = arg2.d f* zmm15.d
                            zmm3[0] = zmm3[0] - var_f8[0]
                            float zmm2 = zmm4_1 - temp0_5[0]
                            temp0_5[0] = temp0_5[0] f+ arg2.d
                            zmm3[0] = zmm3[0] * zmm3[0]
                            zmm4_1 = zmm4_1 - temp0_5[0]
                            zmm2 = zmm2 * zmm2 + zmm3[0]
                            float zmm0_2[0x4] = var_228
                            zmm0_2[0] = zmm0_2[0] f* zmm15.d
                            var_f8[0] = var_f8[0] + zmm0_2[0]
                            zmm3[0] = zmm3[0] - var_f8[0]
                            zmm3[0] = zmm3[0] * zmm3[0]
                            zmm3[0] = zmm3[0] + zmm4_1 * zmm4_1
                            
                            if (result.b != 0 && not(zmm2 >= 2.5f) && rcx_14 == 0)
                                r9_2.b = 1
                                int64_t var_258 = 0
                                int32_t var_250_1 = 0
                                result = sub_142221c60(result_3, &var_258, 0)
                            else if (zmm3[0] <= zmm2 || rcx_14 != 0)
                                float var_280 = zmm13[0]
                                int32_t var_27c_1 = zmm14.d
                                
                                if (result.b == 0)
                                    arg2.o = zmm11
                                    arg2.d = arg2.d f- temp0_3[0]
                                    zmm11[0] = zmm11[0] + temp0_3[0]
                                    
                                    if (not(temp0_4[0] f>= arg2.d))
                                        int32_t var_278_2 = arg2.d
                                    else if (temp0_4[0] >= zmm11[0])
                                        float var_278_4 = zmm11[0]
                                    else
                                        float var_278_3 = temp0_4[0]
                                else
                                    float var_278_1 = zmm5_1
                                
                                zmm3 = *(arg1 + 0x208)
                                zmm3[0] = zmm3[0] f* *(arg1 + 0x228)
                                var_298 = 1
                                var_2a0 = 0
                                var_2a8_2.b = 0
                                result = sub_1422112d0(result_3, &var_280, temp0_2[0], zmm3[0])
                else
                    if (rdi_2.d s< 0 || rdi_2.d s>= *(result_2 + 0x808))
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b != 0)
                        result = *(result_2 + 0x800)
                        result_3 = *(result + (rdi_2 << 3))
                        goto label_141ed6f7a
            
            i += 1
            rsi_1 += 0x8c
        while (i s< *(r13 + 0x2a0))
    
    int64_t var_118
    
    if (var_118 != 0)
        result = sub_140a74f90(var_118)
    
    int64_t var_138
    
    if (var_138 != 0)
        result = sub_140a74f90(var_138)

__security_check_cookie(result_1 ^ &var_2c8)
return result
