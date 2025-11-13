// 函数: sub_1419e46b0
// 地址: 0x1419e46b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int64_t zmm6_1
float zmm7[0x4]
float zmm8[0x4]
result, zmm6_1, zmm7, zmm8 = sub_141f21cc0(arg1, arg2, arg3)

if (not(zmm6_1.d f== 0f))
    int64_t r15_1 = 0
    int64_t var_138_1
    int64_t r13_1
    
    if (arg3[1] == 0)
    label_1419e4795:
        int64_t* rax_7 = sub_142496c20()
        r13_1 = rax_7[0x23]
        var_138_1 = r13_1
        
        if (r13_1 == 0)
            int64_t rdx_2 = *rax_7
            (*(rdx_2 + 0x390))(rax_7, rdx_2)
            r13_1 = rax_7[0x23]
            var_138_1 = r13_1
    else
        void* rax = sub_142496c20()
        
        if (rax == 0)
            goto label_1419e4795
        
        void* rdx = arg3[1]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30 || rdx == 0)
            goto label_1419e4795
        
        void* rax_3 = sub_142496c20()
        int64_t rax_4
        int64_t* rdi_1
        
        if (rax_3 != 0)
            rdi_1 = arg3[1]
            rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_3 == 0 || rax_4.d s> rdi_1[7].d || *(rdi_1[6] + (rax_4 << 3)) != rax_3 + 0x30)
            rdi_1 = nullptr
        
        r13_1 = rdi_1[0x23]
        var_138_1 = r13_1
        
        if (r13_1 == 0)
            (*(*rdi_1 + 0x390))(rdi_1)
            r13_1 = rdi_1[0x23]
            var_138_1 = r13_1
    
    int32_t result_1
    uint64_t var_118
    uint128_t zmm0_1
    
    if ((*(*arg3 + 0x10))(arg3, 1) == 0)
        result = (*(*arg3 + 0x10))(arg3, 2)
        
        if (result.b != 0)
            float var_48_1[0x4] = zmm7
            float temp0_1[0x4] = __maxss_xmmss_memss((*(arg3 + 0x1c))[0], arg3[3].d)
            int64_t rax_14 = *arg1
            float temp0_2[0x4] = _mm_max_ss(temp0_1[0], 0)
            int32_t* var_d8
            result = (*(rax_14 + 0x948))(arg1, &var_d8, arg3 + 0x24, temp0_2, 1)
            int32_t var_d0
            
            if (var_d0 != 0)
                float zmm2_1[0x4] = data_143f222b0
                float zmm3_1[0x4] = data_143f22320
                float var_58_1[0x4] = zmm8
                float zmm9[0x4] = *(arg1 + 0x1e0)
                float zmm11[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3_1, _mm_and_ps(zmm9, zmm2_1), 1)) == 0)
                    zmm8 = data_143dbb0c0
                    zmm11 = data_143dbb0d0
                    zmm9 = data_143dbb0e0
                else
                    data_143f22310
                    zmm8 = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f22300)
                    float zmm5_1[0x4] = *(arg1 + 0x1d0)
                    zmm0_1.q = zmm9 u>> 0x40
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm0_1, 0xc4)
                    float temp0_8[0x4] = _mm_rcp_ps(temp0_7)
                    zmm0_1 = _mm_mul_ps(temp0_8, temp0_8)
                    float temp0_12[0x4] =
                        _mm_sub_ps(_mm_add_ps(temp0_8, temp0_8), _mm_mul_ps(zmm0_1, temp0_7))
                    zmm0_1 = _mm_mul_ps(temp0_12, temp0_12)
                    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_12)
                    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_7)
                    float temp0_17[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_7, zmm2_1), zmm3_1, 2)
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                    float temp0_19[0x4] = _mm_sub_ps(temp0_14, zmm0_1)
                    zmm9 = __andps_xmmxud_memxud(
                        _mm_and_ps(temp0_17, zx.o(0) ^ temp0_19) ^ temp0_19, data_143f222f0)
                    float temp0_22[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    float temp0_23[0x4] = _mm_mul_ps(zmm5_1, zmm9)
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xc9), temp0_18)
                    float temp0_28[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xd2), temp0_22), zmm0_1)
                    float temp0_29[0x4] = _mm_add_ps(temp0_28, temp0_28)
                    float temp0_31[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_22)
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                    zmm0_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                    float temp0_34[0x4] = _mm_mul_ps(temp0_32, temp0_29)
                    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_18)
                    float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_23)
                    zmm11 = __andps_xmmxud_memxud(
                        _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(temp0_31, zmm0_1), temp0_36)), 
                        data_143f222f0)
                
                zmm0_1 = *(arg3 + 0x2c)
                float zmm4_1[0x4] = *(arg3 + 0x24)
                float temp0_41[0x4] = _mm_unpacklo_ps(arg3[5].d, zx.o(0)[0].q)
                float temp0_42[0x4] = _mm_unpacklo_ps(zmm4_1, zmm0_1.q)
                float temp0_43[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                float temp0_45[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_42, temp0_41[0].q), zmm9)
                int64_t var_148 = 0
                float temp0_46[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_47[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                int64_t var_140_1 = 0
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xc9), temp0_43)
                float temp0_52[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xd2), temp0_46), zmm0_1)
                float temp0_53[0x4] = _mm_add_ps(temp0_52, temp0_52)
                float temp0_54[0x4] = _mm_mul_ps(temp0_47, temp0_53)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xc9), temp0_43)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xd2)
                float temp0_58[0x4] = _mm_add_ps(temp0_54, temp0_45)
                float temp0_60[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_57, temp0_46), zmm0_1)
                int32_t var_98_1 = (*(arg1 + 0x1e0)).d
                int96_t var_a8_1 = _mm_add_ps(_mm_add_ps(temp0_60, temp0_58), zmm11)[0].12
                sub_1405dadb0(&var_148, var_d0)
                int32_t* rdi_2 = var_d8
                int32_t rsi_1 = var_d0
                int32_t rbx_2 = var_140_1.d
                int64_t r14_1 = var_148
                void* rcx_10 = &rdi_2[sx.q(rsi_1)]
                uint64_t rax_20 = (rcx_10 - rdi_2 + 3) u>> 2
                
                if (rdi_2 u> rcx_10)
                    rax_20 = 0
                
                if (rax_20 != 0)
                    do
                        void* rax_23 = (sx.q(*rdi_2) << 6) + arg1[0x93]
                        float zmm1_1[0x4] = *(rax_23 + 0x30)
                        zmm2_1 = *(rax_23 + 0x34)
                        zmm1_1[0] = zmm1_1[0] f- var_a8_1.d.d
                        int64_t zmm0_2 = *(rax_23 + 0x38)
                        zmm2_1[0] = zmm2_1[0] - var_a8_1:4.d[0]
                        zmm0_2.d = zmm0_2.d f- var_a8_1:8.d[0]
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm0_2.d = zmm0_2.d f* zmm0_2.d
                        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] f+ zmm0_2.d
                        float temp0_63[0x4] = _mm_sqrt_ss(0, zmm2_1[0])
                        temp0_63[0] = temp0_63[0] * var_98_1[0]
                        zmm0_2 = sub_142004250(&arg3[2], temp0_63[0])
                        int64_t rsi_2 = sx.q(rbx_2)
                        rbx_2 = (rsi_2 + 1).d
                        var_140_1.d = rbx_2
                        
                        if (rbx_2 s> var_140_1:4.d)
                            sub_1406105e0(&var_148)
                            rbx_2 = var_140_1.d
                            r14_1 = var_148
                        
                        rdi_2 = &rdi_2[1]
                        *(r14_1 + (rsi_2 << 2)) = zmm0_2.d
                        r15_1 += 1
                    while (r15_1 != rax_20)
                    
                    rsi_1 = var_d0
                    rdi_2 = var_d8
                    r13_1 = var_138_1
                
                int32_t r8_2 = 0
                zmm6_1 = *(arg3 + 0x24)
                int32_t r15_2 = *(arg3 + 0x2c)
                result_1.q = 0
                int64_t var_120
                __builtin_memset(&var_120:4, 0, 0x14)
                var_120.d = rsi_1
                int32_t var_10c
                
                if (rsi_1 != 0)
                    sub_140638750(&result_1, rsi_1, 0)
                    memcpy(result_1.q, rdi_2, rsi_1 << 2)
                    r8_2 = var_10c
                
                int32_t var_110_2 = rbx_2
                
                if (rbx_2 != 0 || r8_2 != 0)
                    sub_140638750(&var_118, rbx_2, r8_2)
                    memcpy(var_118, r14_1, rbx_2 << 2)
                else
                    var_10c = 0
                
                var_10c:4.q = arg4
                int64_t var_e8_1 = arg5
                int64_t var_f8
                var_f8:4.d = temp0_2[0]
                int64_t var_100_2 = zmm6_1
                var_f8.d = r15_2
                int64_t var_f0_1 = r13_1
                result = sub_1405a9f90(&arg1[0xc8], &result_1)
                uint64_t rcx_18 = var_118
                
                if (rcx_18 != 0)
                    result = sub_140a74f90(rcx_18)
                
                int64_t rcx_19 = result_1.q
                
                if (rcx_19 != 0)
                    result = sub_140a74f90(rcx_19)
                
                if (r14_1 != 0)
                    result = sub_140a74f90(r14_1)
            
            int32_t* rcx_21 = var_d8
            
            if (rcx_21 != 0)
                return sub_140a74f90(rcx_21)
    else
        result = *(arg3 + 0x7c)
        
        if (result s>= 0 && result s< arg1[0x94].d)
            zmm0_1 = zx.o(*(arg3 + 0x3c))
            result_1 = result
            int32_t rax_10 = *(arg3 + 0x44)
            var_118 = zmm0_1.q
            int32_t var_110_1 = rax_10
            uint64_t var_10c_1 = *(arg3 + 0x14)
            int32_t var_124_1 = zmm6_1.d
            int64_t var_120_1 = arg4
            int32_t var_104_1 = *(arg3 + 0x1c)
            int64_t var_100_1 = r13_1
            int64_t var_f8_1 = arg5
            return sub_1405a9f90(&arg1[0xc6], &result_1)

return result
