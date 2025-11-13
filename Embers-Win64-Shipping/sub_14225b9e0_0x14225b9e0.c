// 函数: sub_14225b9e0
// 地址: 0x14225b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
uint64_t result = __security_cookie ^ &var_438
uint64_t result_1 = result
int64_t* rcx = *arg2

if (rcx != 0)
    result = (*(*rcx + 0xc8))(rcx)
    
    if (result.d != 0)
        result = j_sub_140d3e110(**arg1 + 0xf8)
        
        if (result.b != 0)
            int64_t var_268[0x6]
            float zmm9_1[0x4]
            float zmm11_1[0x4]
            int128_t zmm12_1
            zmm9_1, zmm11_1, zmm12_1 = sub_1417c75c0(&var_268, arg1[1], arg1[2])
            result = arg1[3]
            int32_t* rcx_4 = arg1[4]
            float zmm6_1[0x4] = *result
            float zmm7_1[0x4] = *(result + 4)
            zmm6_1[0] = zmm6_1[0] f- *rcx_4
            zmm7_1[0] = zmm7_1[0] f- rcx_4[1]
            float zmm8_1 = *(result + 8) f- rcx_4[2]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm8_1 * zmm8_1
            int32_t temp0_1 = _mm_sqrt_ss(0, zmm7_1[0])
            
            if (not(temp0_1 f<= 9.99999975e-05f))
                float var_98_1[0x4] = zmm11_1
                int128_t var_a8_1 = zmm12_1
                void* rax_4 = sub_140d3c6e0(**arg1 + 0xf8)
                int128_t* rcx_7 = arg1[4]
                zmm12_1 = zx.o(0)
                float zmm2_1[0x4] = *rcx_7
                float zmm3_1[0x4] = *(rcx_7 + 4)
                int32_t zmm4_1 = *(rcx_7 + 8)
                float var_238[0x4]
                float var_360[0x4] = var_238
                float var_350_1 = zmm2_1[0]
                float var_34c_1 = zmm3_1[0]
                int32_t var_348_1 = zmm4_1
                zmm11_1 = *(rax_4 + 0x1c0)
                float zmm13[0x4] = *(rax_4 + 0x1d0)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa)
                float var_398_1 = temp0_2[0]
                float temp0_3[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                float var_38c_1 = temp0_3[0]
                float var_2d8_1 = temp0_3[0]
                float temp0_4[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                float var_388_1 = temp0_4[0]
                float var_2c8_1 = temp0_4[0]
                float zmm0_1[0x4] = 0x3f800000
                zmm0_1[0] = 1f f/ temp0_1
                int32_t var_328_1 = 0xffffffff
                int16_t var_320_1 = 0
                int32_t var_31c
                __builtin_memset(&var_31c, 0, 0x18)
                void* var_128_1 = nullptr
                int32_t var_120_1 = 0
                int32_t var_11c_1 = 0x20
                float zmm15[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
                zmm6_1[0] = zmm6_1[0] * zmm0_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm0_1[0]
                zmm8_1 = zmm8_1 * zmm0_1[0]
                float zmm14[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xff)
                float var_3d0 = zmm6_1[0]
                float var_3cc_1 = zmm7_1[0]
                float var_3c8_1 = zmm8_1
                float var_3a0 = zmm11_1[0]
                float var_39c_1 = zmm15[0]
                float var_394_1 = zmm14[0]
                float var_390_1 = zmm13[0]
                int32_t var_304_1 = 0x7f7fffff
                int128_t var_338 = zx.o(0)
                void var_228
                result = sub_142215230(&var_228, arg2)
                int64_t r15_1 = sx.q(result.d)
                
                if (result.d s> 0)
                    int64_t rsi_1 = 0
                    float var_78_1[0x4] = zmm9_1
                    
                    do
                        void* rcx_9 = &var_228
                        
                        if (var_128_1 != 0)
                            rcx_9 = var_128_1
                        
                        int64_t* rdi_1 = *(rcx_9 + (rsi_1 << 3))
                        result = sub_14221b2d0(*arg1[5], rcx_9 + (rsi_1 << 3))
                        
                        if (result.b != 0)
                            void var_2e8
                            void var_2b8
                            sub_140acc970(&var_2e8, (*(*rdi_1 + 0xb0))(rdi_1, &var_2b8))
                            result = arg1[6]
                            int32_t var_2dc
                            
                            if (*result == 0)
                                if ((var_2dc.b & 1) != 0)
                                label_14225bd03:
                                    float var_298[0x4]
                                    int32_t* rax_9 = (*(*rdi_1 + 0x90))(rdi_1, &var_298)
                                    zmm8_1 = rax_9[4]
                                    zmm3_1 = rax_9[5]
                                    zmm8_1 = zmm8_1 + zmm8_1
                                    float zmm5_1 = rax_9[6]
                                    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                                    zmm5_1 = zmm5_1 + zmm5_1
                                    zmm14[0] = zmm14[0] * zmm14[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm8_1
                                    zmm14[0] = zmm14[0] - 0.5f
                                    zmm15[0] = zmm15[0] * zmm5_1
                                    temp0_2[0] = temp0_2[0] * zmm5_1
                                    temp0_2[0] = temp0_2[0] * zmm8_1
                                    zmm15[0] = zmm15[0] * zmm3_1[0]
                                    zmm15[0] = zmm15[0] + zmm11_1[0]
                                    temp0_2[0] = temp0_2[0] * zmm3_1[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm3_1[0]
                                    zmm15[0] = zmm15[0] - temp0_2[0]
                                    zmm14[0] = zmm14[0] * zmm8_1
                                    zmm15[0] = zmm15[0] + temp0_2[0]
                                    zmm15[0] = zmm15[0] * zmm14[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm15[0]
                                    zmm15[0] = zmm15[0] + zmm14[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm5_1
                                    temp0_2[0] = temp0_2[0] - zmm11_1[0]
                                    zmm14[0] = zmm14[0] * zmm3_1[0]
                                    zmm15[0] = zmm15[0] + zmm11_1[0]
                                    zmm14[0] = zmm14[0] * zmm5_1
                                    temp0_2[0] = temp0_2[0] * zmm14[0]
                                    zmm15[0] = zmm15[0] * zmm15[0]
                                    zmm15[0] = zmm15[0] + zmm13[0]
                                    temp0_2[0] = temp0_2[0] + zmm14[0]
                                    zmm15[0] = zmm15[0] * zmm8_1
                                    zmm11_1[0] = zmm11_1[0] - zmm15[0]
                                    temp0_2[0] = temp0_2[0] * zmm15[0]
                                    temp0_2[0] = temp0_2[0] + zmm15[0]
                                    zmm11_1[0] = zmm11_1[0] * zmm14[0]
                                    temp0_2[0] = temp0_2[0] + var_2d8_1
                                    zmm11_1[0] = zmm11_1[0] + zmm14[0]
                                    zmm11_1[0] = zmm11_1[0] + temp0_2[0]
                                    zmm11_1[0] = zmm11_1[0] + var_2c8_1
                                    float var_2a8[0x4]
                                    float* rax_10
                                    float zmm10_2[0x4]
                                    rax_10, zmm6_1, zmm7_1, zmm9_1, zmm10_2, zmm11_1 =
                                        sub_1417c7990(&var_3a0, &var_2a8, rax_9)
                                    int16_t var_3d8 = 0x607
                                    float var_380 = (*rax_10)[0]
                                    float var_37c_1 = rax_10[1][0]
                                    float var_378_1 = rax_10[2][0]
                                    float var_374_1 = rax_10[3][0]
                                    float var_370_1 = zmm9_1[0]
                                    float var_36c_1 = zmm7_1[0]
                                    float var_368_1 = zmm6_1[0]
                                    void var_118
                                    class physx::PxGeometry* rax_12 =
                                        (*(*rdi_1 + 0x40))(rdi_1, &var_118)
                                    result = physx::PxGeometryQuery::sweep(&var_3d0, zmm10_2[0], 
                                        &var_268, &var_360, rax_12, &var_380, &var_338, &var_3d8, 
                                        zmm12_1.d)
                                    
                                    if (result.b != 0)
                                        var_338:8.q = rdi_1
                                        int64_t rax_13 = *rdi_1
                                        int64_t var_3a8_1 = 0xfffff
                                        int64_t var_3b0 = 0
                                        int64_t rax_14 = (*(rax_13 + 0x80))(rdi_1)
                                        float zmm4_3[0x4] = data_143f522c0
                                        float zmm0_2[0x4] = zmm4_3
                                        var_338.q = rax_14
                                        float (* rax_15)[0x4] = arg1[4]
                                        zmm4_3 = __andps_xmmxud_memxud(zmm4_3, data_143f522d0)
                                        zmm0_2[0].q = zx.o(0) u>> 0x40
                                        var_298 = _mm_shuffle_ps(zx.o(0), zmm0_2, 0xc4)
                                        zmm2_1 = (*rax_15)[1]
                                        float temp0_9[0x4] =
                                            _mm_unpacklo_ps(*rax_15, (*rax_15)[2][0].q)
                                        zmm0_2 = var_3d0
                                        float temp0_10[0x4] = _mm_unpacklo_ps(zmm2_1, zmm12_1.q)
                                        float var_3c0 = zmm0_2[0]
                                        float temp0_11[0x4] =
                                            _mm_unpacklo_ps(temp0_9, temp0_10[0].q)
                                        float var_3b8_1 = var_3c8_1[0]
                                        float var_3bc_1 = var_3cc_1[0]
                                        float var_288_1[0x4] = temp0_11
                                        float var_278_1[0x4] = zmm4_3
                                        int32_t rax_16
                                        uint128_t zmm10_3
                                        rax_16, zmm10_3 = sub_1417c9220(&var_338, &var_3c0)
                                        int32_t var_328_2 = rax_16
                                        void* rax_17 = *(rax_4 + 0xa8)
                                        
                                        if (rax_17 == 0)
                                            rax_17 = sub_141ee69e0(rax_4)
                                        
                                        float var_3f8_1
                                        var_3f8_1.q = &var_298
                                        zmm11_1, zmm12_1, zmm13, zmm14, zmm15 = sub_141ebeee0(
                                            rax_17, &var_338, arg1[7], zmm10_3, &var_3b0, arg1[4], 
                                            arg1[3], nullptr, var_3f8_1, 0, 0)
                                        result = arg1[8]
                                        *result = 1
                            else if (((var_2dc u>> 1).b & 1) != 0)
                                goto label_14225bd03
                        
                        rsi_1 += 1
                    while (rsi_1 s< r15_1)
                
                if (var_128_1 != 0)
                    result = sub_140a74f90(var_128_1)

__security_check_cookie(result_1 ^ &var_438)
return result
