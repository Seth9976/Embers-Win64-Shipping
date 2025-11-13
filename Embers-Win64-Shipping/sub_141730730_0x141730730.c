// 函数: sub_141730730
// 地址: 0x141730730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* var_1c8
__builtin_memset(&var_1c8, 0, 0x15)
int64_t var_1d0 = *arg1 + 0x210
float zmm13[0x4] = arg3
float zmm11[0x4] = arg2
int32_t var_1b0 = 0
int64_t result = sub_141750820(&var_1d0)
void* i_1
void* i = i_1

if (i != 0)
    int64_t* r12_1 = var_1c8
    int32_t var_1b8
    int32_t r14_1 = var_1b8
    float zmm10[0x4] = zx.o(0)
    uint32_t zmm12[0x4] = 0x7fffffff
    float zmm14[0x4] = zmm13
    float zmm15[0x4] = 0x3f800000
    zmm14[0] = zmm14[0] - 1f
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    
    do
        int64_t rsi_1 = sx.q(r14_1)
        int128_t* r8_3 = (rsi_1 << 6) + *(i + 0x1e8)
        int32_t rcx_1 = r8_3[3].d
        int64_t var_208
        
        if (rcx_1 == 1)
            int64_t rcx_16 = *(i + 0x1b8)
            int64_t rdx_7 = rsi_1 * 3
            int32_t var_128_1 = 0
            *(rcx_16 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
            *(rcx_16 + (rdx_7 << 2) + 8) = 0
            int64_t rcx_17 = *(i + 0x1d0)
            int32_t var_11c_1 = 0
            *(rcx_17 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
            *(rcx_17 + (rdx_7 << 2) + 8) = 0
            r8_3[3].d = 0
        else
            float zmm0_1[0x4]
            float zmm3[0x4]
            float zmm4[0x4]
            float zmm5[0x4]
            
            if (rcx_1 == 2)
                int64_t r15_2 = rsi_1 << 4
                float var_1e0_1
                float var_1d8_1
                
                if (_mm_and_ps(zmm14, zmm12)[0] > 9.99999975e-05f)
                    int64_t rax_7 = *(i + 0x28)
                    int64_t rcx_8 = rsi_1 * 3
                    zmm5 = r8_3[1]
                    zmm3 = zmm5
                    var_208.o = *r8_3
                    zmm3[0] = zmm3[0] f- *(rax_7 + (rcx_8 << 2))
                    void* rdx_2 = *(i + 0x68)
                    arg3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    arg3[0] = arg3[0] f- *(rax_7 + (rcx_8 << 2) + 4)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                    zmm5[0] = zmm5[0] f- *(rax_7 + (rcx_8 << 2) + 8)
                    zmm3[0] = zmm3[0] * zmm13[0]
                    arg3[0] = arg3[0] * zmm13[0]
                    zmm3[0] = zmm3[0] f+ *(rax_7 + (rcx_8 << 2))
                    zmm5[0] = zmm5[0] * zmm13[0]
                    arg3[0] = arg3[0] f+ *(rax_7 + (rcx_8 << 2) + 4)
                    zmm5[0] = zmm5[0] f+ *(rax_7 + (rcx_8 << 2) + 8)
                    var_1e0_1 = zmm3[0]
                    float var_1dc_2 = arg3[0]
                    var_1d8_1 = zmm5[0]
                    float var_118[0x4]
                    float (* rax_8)[0x4]
                    rax_8, zmm6, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_118, rdx_2 + r15_2, &var_208, zmm13)
                    zmm7 = data_143ef72b0
                    zmm5 = *rax_8
                    arg2 = _mm_mul_ps(zmm5, zmm5)
                    arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
                    zmm4 = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
                    arg2 = _mm_rsqrt_ps(zmm4)
                    zmm3 = _mm_mul_ps(zmm4, zmm7)
                    arg3 = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(arg2, arg2), zmm3)), 
                            arg2), 
                        arg2)
                    zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(arg3, arg3), zmm3))
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
                    zmm7 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm7, arg3), arg3), zmm5)
                            ^ data_143ef72a0, 
                        zmm0_1) ^ data_143ef72a0
                else
                    zmm6 = r8_3[1]
                    zmm7 = *r8_3
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    float var_1dc_1 = zmm8[0]
                    var_1d8_1 = zmm9[0]
                    var_1e0_1 = zmm6[0]
                    r8_3[3].d = 1
                
                var_208.o = zmm7
                
                if (not(zmm11[0] <= 9.99999997e-07f))
                    int64_t rax_9 = *(i + 0x28)
                    int64_t rbx_1 = rsi_1 * 3
                    int64_t rcx_10 = *(i + 0x1b8)
                    zmm15[0] = zmm15[0] / zmm11[0]
                    zmm6[0] = zmm6[0] f- *(rax_9 + (rbx_1 << 2))
                    zmm8[0] = zmm8[0] f- *(rax_9 + (rbx_1 << 2) + 4)
                    zmm9[0] = zmm9[0] f- *(rax_9 + (rbx_1 << 2) + 8)
                    zmm6[0] = zmm6[0] * zmm15[0]
                    zmm9[0] = zmm9[0] * zmm15[0]
                    zmm8[0] = zmm8[0] * zmm15[0]
                    float var_134_1 = zmm9[0]
                    *(rcx_10 + (rbx_1 << 2)) = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
                    *(rcx_10 + (rbx_1 << 2) + 8) = var_134_1
                    int64_t var_168
                    zmm7, zmm10, zmm11, zmm12 =
                        sub_141733ba0(&var_168, *(i + 0x68) + r15_2, &var_208, zmm11)
                    int64_t rcx_12 = *(i + 0x1d0)
                    *(rcx_12 + (rbx_1 << 2)) = var_168
                    int32_t var_160
                    *(rcx_12 + (rbx_1 << 2) + 8) = var_160
                
                int64_t rcx_13 = *(i + 0x28)
                int64_t rdx_6 = rsi_1 * 3
                *(rcx_13 + (rdx_6 << 2)) = var_1e0_1.q
                *(rcx_13 + (rdx_6 << 2) + 8) = var_1d8_1
                *(*(i + 0x68) + rsi_1 * 0x10) = zmm7
            else if (rcx_1 == 3)
                int64_t rax_4 = *(i + 0x1b8)
                int64_t rdx_1 = rsi_1 * 3
                int64_t rcx_4 = *(i + 0x28)
                int32_t var_16c_1 = 0
                zmm11[0] = zmm11[0] f* *(rax_4 + (rdx_1 << 2) + 8)
                int32_t var_1e8_1 = 0x322bcc77
                zmm11[0] = zmm11[0] f* *(rax_4 + (rdx_1 << 2) + 4)
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2) + 8)
                zmm11[0] = zmm11[0] f* *(rax_4 + (rdx_1 << 2))
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2) + 4)
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2))
                float var_140_1 = zmm11[0]
                *(rcx_4 + (rdx_1 << 2)) = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
                *(rcx_4 + (rdx_1 << 2) + 8) = var_140_1
                int64_t rax_6 = *(i + 0x1d0)
                int128_t* rcx_7 = (rsi_1 << 4) + *(i + 0x68)
                arg2 = *(rax_6 + (rdx_1 << 2) + 4)
                float var_178[0x4]
                var_178[0] = (*(rax_6 + (rdx_1 << 2)))[0]
                zmm3 = *rcx_7
                arg3 = *(rax_6 + (rdx_1 << 2) + 8)
                zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
                zmm4 = _mm_shuffle_ps(var_178, var_178, 0xe1)
                zmm4[0] = arg2[0]
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc6)
                zmm4[0] = arg3[0]
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                var_178 = zmm4
                zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0_1)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm3)
                zmm5 = __mulps_xmmps_memps(zmm5, data_143ef72e0)
                arg2 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                zmm5 = _mm_add_ps(zmm5, zmm0_1)
                arg2 = _mm_mul_ps(arg2, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
                zmm4 = _mm_mul_ps(zmm4, _mm_shuffle_ps(zmm3, zmm3, 0xb1))
                zmm11[0] = zmm11[0] * 0.5f
                arg2 = __mulps_xmmps_memps(arg2, data_143ef72d0)
                zmm4 = __mulps_xmmps_memps(zmm4, data_143ef72c0)
                zmm5 = _mm_add_ps(_mm_add_ps(zmm5, arg2), zmm4)
                zmm11[0] = zmm11[0] * zmm5[0]
                zmm0_1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm11[0] = zmm11[0] * zmm0_1[0]
                zmm11[0] = zmm11[0] f+ *rcx_7
                zmm0_1 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                zmm11[0] = zmm11[0] f+ *(rcx_7 + 4)
                zmm11[0] = zmm11[0] * zmm0_1[0]
                zmm6 = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm11[0] = zmm11[0] f+ *(rcx_7 + 8)
                zmm6[0] = zmm11[0]
                zmm11[0] = zmm11[0] * zmm5[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
                zmm11[0] = zmm11[0] f+ *(rcx_7 + 0xc)
                zmm6[0] = zmm11[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
                zmm5 = data_143ef72b0
                zmm6[0] = zmm11[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
                arg2 = _mm_mul_ps(zmm6, zmm6)
                arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
                zmm4 = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
                arg2 = _mm_rsqrt_ps(zmm4)
                zmm3 = _mm_mul_ps(zmm4, zmm5)
                arg3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg2, arg2), zmm3)), arg2), 
                    arg2)
                zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg3, arg3), zmm3))
                zmm0_1 = var_1e8_1
                zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), zmm4, 2)
                var_208.o = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, arg3), arg3), zmm6) ^ data_143ef72a0, 
                    zmm0_1) ^ data_143ef72a0
        
        result = *(i + 0x158)
        
        if (*(rsi_1 + result) != 0)
            int64_t rax_14 = *(i + 0x128)
            arg3 = _mm_unpacklo_ps(data_14399f66c, zmm10[0].q)
            int32_t* rdx_8 = rax_14 + rsi_1 * 0x18
            int64_t rax_15 = *(i + 0x28)
            int64_t rcx_19 = rsi_1 * 3
            float var_108[0x4] = *((rsi_1 << 4) + *(i + 0x68))
            float var_f8_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rax_15 + (rcx_19 << 2)), (*(rax_15 + (rcx_19 << 2) + 8))[0].q), 
                _mm_unpacklo_ps(*(rax_15 + (rcx_19 << 2) + 4), zmm10[0].q)[0].q)
            float var_e8_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), arg3[0].q)
            float var_1a0
            int32_t var_190
            uint32_t zmm12_1[0x4] = sub_14003bce0(&var_108, rdx_8, &rdx_8[3], &var_190, &var_1a0)
            int32_t zmm1 = var_190
            uint32_t zmm4_1[0x4] = var_1a0
            int64_t zmm0_2 = var_190.q
            zmm4_1[0] = zmm4_1[0] f- zmm1
            int32_t var_19c
            uint32_t zmm3_1[0x4] = var_19c
            int32_t var_18c
            zmm3_1[0] = zmm3_1[0] f- var_18c
            int32_t var_198
            uint32_t zmm2[0x4] = var_198
            int32_t var_188
            zmm2[0] = zmm2[0] f- var_188
            var_208 = zmm0_2
            int64_t var_1fc_1 = var_1a0.q
            zmm0_2 = arg1[7].d
            zmm4_1[0] = zmm4_1[0] f* zmm0_2.d
            zmm3_1[0] = zmm3_1[0] f* zmm0_2.d
            zmm2[0] = zmm2[0] f* zmm0_2.d
            uint32_t zmm5_1[0x4] = _mm_and_ps(zmm4_1, zmm12_1)
            zmm0_2 = var_208:4.d
            zmm1 = zmm1 f- zmm5_1[0]
            zmm3_1 = _mm_and_ps(zmm3_1, zmm12_1)
            zmm5_1[0] = zmm5_1[0] f+ zmm4_1[0]
            zmm0_2.d = zmm0_2.d f- zmm3_1[0]
            zmm2 = _mm_and_ps(zmm2, zmm12_1)
            var_208.d = zmm1
            var_208:4.d = zmm0_2.d
            zmm0_2.d = var_1fc_1:4.d.d f+ zmm3_1[0]
            var_1fc_1.d = zmm5_1[0]
            int32_t var_200_2 = var_188 f- zmm2[0]
            var_1fc_1:4.d = zmm0_2.d
            int32_t var_1f4_2 = var_198 f+ zmm2[0]
            result, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141756120(i, r14_1, &var_208)
        
        if (r12_1 != 0)
            int32_t var_1a8
            int32_t rax_19 = var_1a8 + 1
            var_1a8 = rax_19
            
            if (rax_19 s>= r12_1[1].d)
            label_141730e34:
                var_1b0 += 1
                result = sub_141750820(&var_1d0)
                r12_1 = var_1c8
                r14_1 = var_1b8
                i = i_1
            else
                void** rdx_10 = *(*r12_1 + (sx.q(rax_19) << 3))
                void* rcx_26 = *rdx_10
                int32_t var_150_1 = rdx_10[1].d
                
                if (rcx_26 == 0)
                    result = 0
                else
                    result = zx.q(*(rcx_26 + 0x40))
                
                char var_14c_1 = result.b
                i_1.o = rcx_26.o
                r14_1 = var_1b8
                i = i_1
        else
            r14_1 += 1
            var_1b8 = r14_1
            int32_t var_1ac
            
            if (r14_1 s>= var_1ac)
                goto label_141730e34
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_238)
return result
