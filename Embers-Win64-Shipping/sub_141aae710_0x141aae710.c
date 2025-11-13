// 函数: sub_141aae710
// 地址: 0x141aae710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t result
float zmm6[0x4]
result, zmm6 = sub_141e1c570(arg1 + 0x10, arg2, arg3)

if (*(arg1 + 0x61) != 0)
    void* rbx_1 = *arg2
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    void* var_1f0_1 = rbx_1
    void var_1d8
    sub_140dd5b90(&var_1d8, rbx_1)
    *arg2
    int64_t rsi_1 = 0
    int64_t var_1d0_1 = 0
    bool var_198_1 = arg2[8].b != 0
    int32_t var_1c8_1 = 0
    void* var_1c0
    __builtin_memset(&var_1c0, 0, 0x23)
    sub_141e1c570(arg1 + 0x20, &var_1d8, sub_141e295c0(&var_1d8))
    float zmm6_1[0x4]
    
    if (*(arg1 + 0x60) != 3)
        int64_t var_248
        __builtin_memset(&var_248, 0, 0x48)
        sub_141ac0820(&var_248, &arg2[1])
        void* rax_13 = var_1c0
        int32_t r8_3 = 0
        int64_t var_2a8 = 0
        int32_t rdx_8 = 0
        int32_t var_29c_1 = 0
        char* var_290 = nullptr
        int32_t var_288_1 = 0
        int64_t var_280
        __builtin_memset(&var_280, 0, 0x20)
        void* var_298_1 = rax_13
        int32_t rdi_1 = *(rax_13 + 8)
        
        if (rdi_1 s> 0)
            int32_t var_2a0_1 = 0
            sub_141acba60(&var_2a8, rdi_1)
            r8_3 = var_29c_1
            rdx_8 = var_2a0_1
        
        int32_t rax_14 = rdx_8 + rdi_1
        int32_t var_2a0_2 = rax_14
        
        if (rax_14 s> r8_3)
            sub_141acb8e0(&var_2a8, rdx_8)
            r8_3 = var_29c_1
        
        int64_t rdi_2 = sx.q(var_1c8_1)
        int32_t var_2a0_3 = rdi_2.d
        
        if (rdi_2.d != 0 || r8_3 != 0)
            sub_141acb760(&var_2a8, rdi_2.d, r8_3)
            memcpy(var_2a8, var_1d0_1, (rdi_2 * 0x30).d)
            rdi_2 = zx.q(var_2a0_3)
        else
            int32_t var_29c_2 = 0
        
        int32_t r14_2 = 0
        var_288_1 = 0
        
        if (0 != rdi_2.d)
            sub_1405c5510(&var_290, rdi_2.d)
            r14_2 = var_288_1
            rdi_2 = zx.q(var_2a0_3)
        
        int32_t rax_15 = r14_2 + rdi_2.d
        var_288_1 = rax_15
        
        if (rax_15 s> 0)
            sub_1405daba0(&var_290)
        
        memset(&var_290[sx.q(r14_2)], 0, sx.q(rdi_2.d))
        char* rax_16 = var_290
        int32_t r12_1 = 0
        int64_t var_258 = 0
        int32_t var_24c_1 = 0
        *rax_16 = 1
        void* rax_17 = *arg2
        void* r14_3 = *(arg1 + 0x40)
        float var_e8[0x4] = *(rax_17 + 0x10)
        float var_d8_1[0x4] = *(rax_17 + 0x20)
        float var_c8_1[0x4] = *(rax_17 + 0x30)
        result = r14_3 + sx.q(*(arg1 + 0x48)) * 0x24
        int64_t result_1 = result
        int128_t var_238
        
        if (r14_3 != result)
            do
                int32_t rax_19 = *(r14_3 + 8)
                int32_t rdi_3
                
                if (rax_19 s>= 0)
                    rdi_3 = *(r14_3 + 0xc)
                else
                    int32_t rcx_21 = rax_19 * 2
                    
                    if ((rcx_21 & 0xfffffffe) == 0xfffffffe)
                        rdi_3 = -1
                    else
                        rdi_3 = *(*(rbx_1 + 0x520) + (sx.q(rcx_21) s>> 1 << 2))
                
                int32_t rax_23 = *(r14_3 + 0x18)
                int32_t rbx_2
                
                if (rax_23 s>= 0)
                    rbx_2 = *(r14_3 + 0x1c)
                else
                    int32_t rcx_24 = rax_23 * 2
                    
                    if ((rcx_24 & 0xfffffffe) == 0xfffffffe)
                        rbx_2 = -1
                    else
                        rbx_2 = *(*(rbx_1 + 0x520) + (sx.q(rcx_24) s>> 1 << 2))
                
                int64_t r13_1 = sx.q(rdi_3)
                
                if (var_290[r13_1] == 0)
                    sub_141a98300(&var_2a8, rdi_3)
                
                int64_t rax_28 = var_2a8
                int64_t r13_2 = sx.q(rbx_2)
                int64_t rcx_30 = r13_1 * 6
                float var_118[0x4] = *(rax_28 + (rcx_30 << 3))
                float var_108_1[0x4] = *(rax_28 + (rcx_30 << 3) + 0x10)
                float var_f8_1[0x4] = *(rax_28 + (rcx_30 << 3) + 0x20)
                
                if (var_238:8.q[r13_2] == 0)
                    sub_141a98300(&var_248, rbx_2)
                
                int64_t rax_30 = var_248
                int64_t rcx_34 = r13_2 * 6
                float var_148[0x4] = *(rax_30 + (rcx_34 << 3))
                float var_138_1[0x4] = *(rax_30 + (rcx_34 << 3) + 0x10)
                uint32_t var_2c8_1 = zx.d(*(arg1 + 0x60))
                float var_128_1[0x4] = *(rax_30 + (rcx_34 << 3) + 0x20)
                sub_141de6760(&var_e8, &var_2a8, &var_118, rdi_3)
                uint32_t var_2c8_2 = zx.d(*(arg1 + 0x60))
                uint32_t zmm9_1[0x4]
                int32_t zmm10_1
                int32_t zmm11_1
                zmm9_1, zmm10_1, zmm11_1 = sub_141de6760(&var_e8, &var_248, &var_148, rbx_2)
                float zmm1_3[0x4] = *(arg1 + 0x54)
                float var_2b0_2 = zmm1_3[0]
                float zmm5_2[0x4]
                float zmm7_1[0x4]
                float zmm8_1[0x4]
                
                if (_mm_and_ps(zmm1_3, zmm9_1)[0] f> zmm10_1)
                    zmm7_1 = var_108_1
                    zmm1_3[0] = zmm1_3[0] f- zmm11_1
                    zmm8_1 = var_f8_1
                    
                    if (_mm_and_ps(zmm1_3, zmm9_1)[0] f> zmm10_1)
                        float zmm3_1[0x4] = var_148
                        zmm1_3 = var_118
                        float temp0_54[0x4] = _mm_sub_ps(zx.o(0), zmm3_1)
                        float temp0_55[0x4] = __subps_xmmps_memps(zmm7_1, var_138_1)
                        float temp0_56[0x4] = __subps_xmmps_memps(zmm8_1, var_128_1)
                        zmm5_2 = var_2b0_2
                        float temp0_57[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0)
                        float temp0_58[0x4] = _mm_mul_ps(zmm1_3, zmm3_1)
                        float temp0_59[0x4] = _mm_mul_ps(temp0_55, temp0_57)
                        float temp0_60[0x4] = _mm_mul_ps(temp0_56, temp0_57)
                        zmm7_1 = __addps_xmmps_memps(temp0_59, var_138_1)
                        float temp0_62[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x4e)
                        zmm8_1 = __addps_xmmps_memps(temp0_60, var_128_1)
                        float temp0_64[0x4] = _mm_add_ps(temp0_58, temp0_62)
                        float zmm6_2[0x4] = _mm_and_ps(
                            _mm_cmpeq_ps(zx.o(0), 
                                _mm_add_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x39), temp0_64), 2), 
                            temp0_54 ^ zmm3_1)
                        float temp0_69[0x4] = _mm_sub_ps(data_143f2b810, temp0_57)
                        float temp0_70[0x4] = __mulps_xmmps_memps(temp0_57, var_118)
                        float temp0_72[0x4] =
                            _mm_add_ps(_mm_mul_ps(zmm6_2 ^ temp0_54, temp0_69), temp0_70)
                        zmm5_2 = data_143f2b8b0
                        float temp0_73[0x4] = _mm_mul_ps(temp0_72, temp0_72)
                        float temp0_75[0x4] =
                            _mm_add_ps(temp0_73, _mm_shuffle_ps(temp0_73, temp0_73, 0x4e))
                        float temp0_77[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x39), temp0_75)
                        float temp0_78[0x4] = _mm_rsqrt_ps(temp0_77)
                        float temp0_79[0x4] = _mm_mul_ps(temp0_77, zmm5_2)
                        float temp0_84[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_2, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_78, temp0_78), temp0_79)), 
                                temp0_78), 
                            temp0_78)
                        float temp0_87[0x4] =
                            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_84, temp0_84), temp0_79))
                        float temp0_88[0x4] = _mm_cmpeq_ps(data_143f2b8f0, temp0_77, 2)
                        zmm5_2 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_87, temp0_84), temp0_84), 
                                temp0_72) ^ data_143f2b8a0, 
                            temp0_88) ^ data_143f2b8a0
                    else
                        zmm5_2 = var_118
                else
                    zmm5_2 = var_148
                    zmm7_1 = var_138_1
                    zmm8_1 = var_128_1
                
                if (*(r14_3 + 0x20) != 0)
                    float temp0_93[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
                    float temp0_94[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
                    var_138_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7_1, temp0_93[0].q), 
                        _mm_unpacklo_ps(temp0_94, zx.o(0)[0].q)[0].q)
                
                if (*(r14_3 + 0x21) != 0)
                    var_148 = zmm5_2
                
                if (*(r14_3 + 0x22) != 0)
                    float temp0_98[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa)
                    float temp0_99[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
                    var_128_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, temp0_98[0].q), 
                        _mm_unpacklo_ps(temp0_99, 0)[0].q)
                
                uint32_t var_2c8_3 = zx.d(*(arg1 + 0x60))
                sub_141de5f60(&var_e8, &var_248, &var_148, rbx_2)
                zmm6_1 = var_148
                int64_t rbx_3 = sx.q(r12_1)
                r12_1 = (rbx_3 + 1).d
                
                if (r12_1 s> var_24c_1)
                    sub_1405c4fe0(&var_258)
                    rsi_1 = var_258
                
                rbx_1 = var_1f0_1
                r14_3 += 0x24
                result = rbx_3 << 6
                *(result + rsi_1) = rbx_2.o
                *(result + rsi_1 + 0x10) = zmm6_1
                *(result + rsi_1 + 0x20) = var_138_1
                *(result + rsi_1 + 0x30) = var_128_1
            while (r14_3 != result_1)
            
            if (r12_1 s> 0)
                char var_2b8
                sub_141a8a370(rsi_1, r12_1, var_2b8)
                sub_141acc900(&var_248, &var_258)
                result = sub_141a99650(&var_248, &arg2[1])
                rsi_1 = var_258
            
            if (rsi_1 != 0)
                result = sub_140a74f90(rsi_1)
        
        int64_t var_270
        
        if (var_270 != 0)
            result = sub_140a74f90(var_270)
        
        int64_t rcx_44 = var_280
        
        if (rcx_44 != 0)
            result = sub_140a74f90(rcx_44)
        
        char* rcx_45 = var_290
        
        if (rcx_45 != 0)
            result = sub_140a74f90(rcx_45)
        
        int64_t var_210
        
        if (var_210 != 0)
            result = sub_140a74f90(var_210)
        
        int64_t var_220
        
        if (var_220 != 0)
            result = sub_140a74f90(var_220)
        
        int64_t rcx_48 = var_238:8.q
        
        if (rcx_48 != 0)
            result = sub_140a74f90(rcx_48)
    else
        void* r9_1 = *(arg1 + 0x40)
        result = sx.q(*(arg1 + 0x48))
        void* r10_1 = r9_1 + result * 0x24
        
        if (r9_1 != r10_1)
            float zmm12[0x4] = data_143f2b8f0
            
            do
                int32_t rax_2 = *(r9_1 + 8)
                int32_t rcx_8
                
                if (rax_2 s>= 0)
                    rcx_8 = *(r9_1 + 0xc)
                else
                    int32_t rcx_5 = rax_2 * 2
                    
                    if ((rcx_5 & 0xfffffffe) == 0xfffffffe)
                        rcx_8 = -1
                    else
                        rcx_8 = *(*(rbx_1 + 0x520) + (sx.q(rcx_5) s>> 1 << 2))
                
                int32_t rax_6 = *(r9_1 + 0x18)
                int32_t rax_10
                
                if (rax_6 s>= 0)
                    rax_10 = *(r9_1 + 0x1c)
                else
                    int32_t rdx_3 = rax_6 * 2
                    
                    if ((rdx_3 & 0xfffffffe) == 0xfffffffe)
                        rax_10 = -1
                    else
                        rax_10 = *(*(rbx_1 + 0x520) + (sx.q(rdx_3) s>> 1 << 2))
                
                float zmm1_1[0x4] = *(arg1 + 0x54)
                float zmm0_1[0x4] = _mm_and_ps(zmm1_1, 0x7fffffff)
                float var_2b0_1 = zmm1_1[0]
                int64_t r8_2 = sx.q(rcx_8) * 6
                zmm8 = *(var_1d0_1 + (r8_2 << 3))
                zmm7 = *(var_1d0_1 + (r8_2 << 3) + 0x10)
                zmm6_1 = *(var_1d0_1 + (r8_2 << 3) + 0x20)
                result = sx.q(rax_10) * 0x30 + arg2[1]
                
                if (zmm0_1[0] > 9.99999975e-06f)
                    zmm1_1[0] = zmm1_1[0] - 1f
                    
                    if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] <= 9.99999975e-06f))
                        float zmm3[0x4] = *result
                        float temp0_3[0x4] = __subps_xmmps_memps(zmm7, *(result + 0x10))
                        float temp0_4[0x4] = __subps_xmmps_memps(zmm6_1, *(result + 0x20))
                        float zmm4_1[0x4] = var_2b0_1
                        float temp0_5[0x4] = _mm_sub_ps(zx.o(0), zmm3)
                        float temp0_6[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                        float temp0_7[0x4] = _mm_mul_ps(zmm3, zmm8)
                        float temp0_8[0x4] = _mm_mul_ps(temp0_3, temp0_6)
                        float temp0_9[0x4] = _mm_mul_ps(temp0_4, temp0_6)
                        zmm7 = __addps_xmmps_memps(temp0_8, *(result + 0x10))
                        float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x4e)
                        zmm6_1 = __addps_xmmps_memps(temp0_9, *(result + 0x20))
                        float temp0_13[0x4] = _mm_add_ps(temp0_7, temp0_11)
                        float temp0_16[0x4] = _mm_cmpeq_ps(zx.o(0), 
                            _mm_add_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x39), temp0_13), 2)
                        zmm0_1 = data_143f2b810
                        float zmm5_1[0x4] = _mm_and_ps(temp0_16, zmm3 ^ temp0_5)
                        float temp0_18[0x4] = _mm_sub_ps(zmm0_1, temp0_6)
                        float temp0_19[0x4] = _mm_mul_ps(temp0_6, zmm8)
                        zmm8 = data_143f2b8b0
                        float temp0_21[0x4] =
                            _mm_add_ps(_mm_mul_ps(zmm5_1 ^ temp0_5, temp0_18), temp0_19)
                        float temp0_22[0x4] = _mm_mul_ps(temp0_21, temp0_21)
                        float temp0_24[0x4] =
                            _mm_add_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x4e))
                        float temp0_26[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0x39), temp0_24)
                        float temp0_27[0x4] = _mm_rsqrt_ps(temp0_26)
                        float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm8)
                        float temp0_33[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm8, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_27, temp0_27), temp0_28)), 
                                temp0_27), 
                            temp0_27)
                        float temp0_36[0x4] =
                            _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_33, temp0_33), temp0_28))
                        float temp0_37[0x4] = _mm_cmpeq_ps(zmm12, temp0_26, 2)
                        zmm8 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_36, temp0_33), temp0_33), 
                                temp0_21) ^ data_143f2b8a0, 
                            temp0_37) ^ data_143f2b8a0
                else
                    zmm8 = *result
                    zmm7 = *(result + 0x10)
                    zmm6_1 = *(result + 0x20)
                
                if (*(r9_1 + 0x20) != 0)
                    float temp0_42[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                    float temp0_43[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    *(result + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, temp0_42[0].q), 
                        _mm_unpacklo_ps(temp0_43, zx.o(0)[0].q)[0].q)
                
                if (*(r9_1 + 0x21) != 0)
                    *result = zmm8
                
                if (*(r9_1 + 0x22) != 0)
                    float temp0_47[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
                    float temp0_48[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                    *(result + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, temp0_47[0].q), 
                        _mm_unpacklo_ps(temp0_48, 0)[0].q)
                
                r9_1 += 0x24
            while (r9_1 != r10_1)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
