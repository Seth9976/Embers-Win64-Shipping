// 函数: sub_14220e9d0
// 地址: 0x14220e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int32_t result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2)

if (result.b != 0)
    int32_t var_dc_1 = 0x20
    void* var_e8_1 = nullptr
    int32_t result_1 = 0
    void var_1e8
    sub_142258fe0(arg2, &var_1e8)
    result = result_1
    int64_t var_2b8 = 0
    int64_t var_2b0_1 = 0
    
    if (result s> 0)
        int64_t r14_1 = 0
        uint64_t r15_1 = zx.q(result)
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        float zmm10[0x4]
        float var_78_1[0x4] = zmm10
        float zmm11[0x4]
        float var_88_1[0x4] = zmm11
        float zmm12[0x4]
        float var_98_1[0x4] = zmm12
        float zmm13[0x4]
        float var_a8_1[0x4] = zmm13
        float zmm14[0x4]
        float var_b8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_c8_1[0x4] = zmm15
        uint64_t i
        
        do
            void* rdi_1 = &var_1e8
            
            if (var_e8_1 != 0)
                rdi_1 = var_e8_1
            
            void* rdi_2 = rdi_1 + r14_1
            void var_258
            sub_14226c680(&var_258, rdi_2)
            
            if (sub_142217ac0(*arg1, rdi_2) == *arg1 && sub_14226e880(rdi_2) - 5 u> 1)
                float var_218[0x4]
                sub_14226de10(&var_218, rdi_2)
                int128_t* rcx_6 = arg1[1]
                zmm13 = rcx_6[2]
                float zmm5_1[0x4] = *rcx_6
                float var_1f8[0x4]
                float var_208[0x4]
                float zmm0_1[0x4]
                float zmm1_1[0x4]
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                float zmm4_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_1f8, zmm13), data_143f51110, 1))
                        == 0)
                    zmm2_1 = var_218
                    zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), 
                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                    zmm0_1 = zmm2_1
                    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                    zmm3_1 = _mm_mul_ps(var_208, zmm13)
                    zmm7 = __mulps_xmmps_memps(zmm7, data_143f51070)
                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm0_1, zmm4_1))
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f51060)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f51050)
                    zmm7 = _mm_add_ps(zmm7, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1_1)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm7 = _mm_add_ps(zmm7, zmm2_1)
                    zmm2_1 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), zmm5_1), zmm0_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                    zmm6 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                    zmm6 = _mm_mul_ps(zmm6, zmm5_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm4_1)
                    zmm6 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm6, zmm0_1), _mm_add_ps(zmm2_1, zmm3_1)), rcx_6[1])
                else
                    zmm11 = data_143f51030
                    zmm9 = rcx_6[1]
                    zmm1_1 = _mm_add_ps(zmm5_1, zmm5_1)
                    zmm3_1 = zmm5_1
                    zmm2_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                    zmm4_1 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm1_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm1_1)
                    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm12 = _mm_add_ps(zmm5_1, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm5_1)
                    zmm1_1 = _mm_sub_ps(zmm11, zmm0_1)
                    zmm5_1 = _mm_shuffle_ps(var_1f8, var_1f8, 0xc9)
                    zmm12 = _mm_mul_ps(zmm12, zmm13)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm13), data_143f51040)
                    zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm12, zmm1_1, 0x31)
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm4_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = var_218
                    zmm11[0].q = zmm9 u>> 0x40
                    zmm3_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                    zmm4_1 = zmm1_1
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_1)
                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm7 = _mm_add_ps(zmm3_1, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                    zmm1_1 = _mm_sub_ps(zmm11, zmm0_1)
                    zmm7 = _mm_mul_ps(zmm7, var_1f8)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, var_1f8), data_143f51040)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm7, zmm1_1, 0x31)
                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm5_1, 0x12)
                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm1_1, 0xe8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm12)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
                    zmm11[0].q = var_208 u>> 0x40
                    zmm5_1 = _mm_shuffle_ps(var_208, zmm11, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm9)
                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_1, zmm10))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm10)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm12)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm8)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    float var_298[0x4] = zmm2_1
                    zmm2_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm8)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm9)
                    zmm0_1 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm10)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm12)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                    zmm7 = _mm_mul_ps(zmm7, zmm9)
                    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    int96_t var_288_1 = zmm3_1[0].12
                    zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm12)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm10)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm7)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm9)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                    int96_t var_278_1 = zmm2_1[0].12
                    int96_t var_268_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm5_1)[0].12
                    zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_298, 0x322bcc77)
                    float zmm2_2[0x4] = var_298[0]
                    float zmm1_2 = var_298[1]
                    zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, _mm_mul_ps(zmm15, zmm13), 2), 
                        data_143f51100 ^ zmm11)
                    uint32_t zmm0_2[0x4] = var_298[2]
                    zmm14 ^= data_143f51100
                    zmm2_2[0] = zmm2_2[0] * zmm14[0]
                    zmm1_2 = zmm1_2 * zmm14[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm14[0]
                    var_298[0] = zmm2_2[0]
                    zmm2_2 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                    var_298[2] = zmm0_2[0]
                    zmm0_2 = var_288_1:8.d
                    zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
                    var_298[1] = zmm1_2
                    zmm1_2 = var_288_1:4.d * zmm2_2[0]
                    float zmm3_2 = var_288_1.d * zmm2_2[0]
                    zmm2_2 = var_278_1.d
                    var_288_1:8.d = zmm0_2[0]
                    zmm0_2 = var_278_1:8.d
                    var_288_1:4.d = zmm1_2
                    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                    zmm0_2[0] = zmm0_2[0] f* zmm14[0]
                    zmm2_2[0] = zmm2_2[0] * zmm14[0]
                    zmm1_2 = var_278_1:4.d * zmm14[0]
                    var_278_1:8.d = zmm0_2[0]
                    var_288_1.d = zmm3_2
                    var_278_1.d = zmm2_2[0]
                    var_278_1:4.d = zmm1_2
                    uint32_t var_238[0x4]
                    sub_14077e4a0(&var_238, &var_298)
                    float zmm5_2[0x4] = var_238
                    zmm7 = data_143f50de0
                    float zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                    float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                    zmm1_3 = _mm_rsqrt_ps(zmm4_2)
                    float zmm3_3[0x4] = _mm_mul_ps(zmm4_2, zmm7)
                    float zmm2_3[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), 
                            zmm1_3), 
                        zmm1_3)
                    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_3))
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                    zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm2_3), zmm2_3)
                    zmm2_3 = _mm_unpacklo_ps(var_268_1:4.d, 0)
                    zmm7 = _mm_and_ps(_mm_mul_ps(zmm7, zmm5_2) ^ data_143f50dd0, zmm0_1)
                        ^ data_143f50dd0
                    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_268_1.d, var_268_1:8.d[0].q), 
                        zmm2_3[0].q)
                    var_238 = zmm7
                int32_t rax_6 = var_2b0_1:4.d
                var_2b0_1.d = 0
                
                if (rax_6 s< 0 && rax_6 != 0)
                    sub_1405a5130(&var_2b8, 0)
                
                int64_t rax_7 = arg1[6]
                int32_t* rdx_5 = arg1[3]
                void** rcx_10 = arg1[2]
                int64_t rax_8 = arg1[5]
                int64_t rax_9 = arg1[4]
                float var_250 = zmm6[0]
                float var_24c_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                float var_228[0x4] = zmm7
                float var_248_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                
                if (sub_141eb0dd0(*rcx_10, &var_258, &var_250, &var_228, &var_2b8, *rdx_5, rax_9, 
                        rax_8, rax_7) != 0)
                    *arg1[7] = 1
                
                int64_t rdi_3 = sx.q(var_2b0_1.d)
                int64_t* rbx_1 = arg1[8]
                
                if (rdi_3.d != 0)
                    int32_t rcx_12 = rbx_1[1].d
                    int32_t rdx_7 = rcx_12 + rdi_3.d
                    
                    if (rdx_7 s> *(rbx_1 + 0xc))
                        sub_1405a5130(rbx_1, rdx_7)
                        rcx_12 = rbx_1[1].d
                    
                    memcpy(*rbx_1 + sx.q(rcx_12) * 0x18, var_2b8, (rdi_3 * 0x18).d)
                    rbx_1[1].d += rdi_3.d
            
            result = sub_14225b2b0(&var_258)
            r14_1 += 8
            i = r15_1
            r15_1 -= 1
        while (i != 1)
        int64_t rcx_17 = var_2b8
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
    
    if (var_e8_1 != 0)
        result = sub_140a74f90(var_e8_1)

__security_check_cookie(rax_1 ^ &var_308)
return result
