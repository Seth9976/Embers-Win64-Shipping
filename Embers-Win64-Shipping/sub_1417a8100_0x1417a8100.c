// 函数: sub_1417a8100
// 地址: 0x1417a8100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = *(arg1 + 0x260) + 0x210
float zmm12[0x4] = arg3
float zmm11[0x4] = arg2
int64_t* var_170
__builtin_memset(&var_170, 0, 0x15)
int32_t var_158 = 0
uint32_t result = sub_141750820(&var_178)
void* i_1
void* i = i_1

if (i != 0)
    int64_t* r15_1 = var_170
    float zmm10[0x4] = zx.o(0)
    float zmm13[0x4] = zmm12
    zmm13[0] = zmm13[0] - 1f
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    
    do
        uint32_t result_1
        int64_t result_2 = sx.q(result_1)
        int128_t* r8_3 = (result_2 << 6) + *(i + 0x1e8)
        int32_t rcx_1 = r8_3[3].d
        
        if (rcx_1 == 1)
            int64_t rcx_12 = *(i + 0x1b8)
            int64_t rdx_7 = result_2 * 3
            int32_t var_f0_1 = 0
            int32_t var_e4_1 = 0
            *(rcx_12 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
            *(rcx_12 + (rdx_7 << 2) + 8) = 0
            int64_t rcx_13 = *(i + 0x1d0)
            *(rcx_13 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
            *(rcx_13 + (rdx_7 << 2) + 8) = 0
            r8_3[3].d = 0
        else
            float var_188[0x4]
            float zmm0_1[0x4]
            float zmm3[0x4]
            float zmm4[0x4]
            float zmm5[0x4]
            
            if (rcx_1 == 2)
                int64_t r14_2 = result_2 << 4
                float var_198_1
                float var_190_1
                
                if (_mm_and_ps(zmm13, 0x7fffffff)[0] > 9.99999975e-05f)
                    int64_t rax_5 = *(i + 0x28)
                    int64_t rcx_6 = result_2 * 3
                    zmm5 = r8_3[1]
                    zmm3 = zmm5
                    var_188 = *r8_3
                    zmm3[0] = zmm3[0] f- *(rax_5 + (rcx_6 << 2))
                    void* rdx_2 = *(i + 0x68)
                    arg3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    arg3[0] = arg3[0] f- *(rax_5 + (rcx_6 << 2) + 4)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                    zmm5[0] = zmm5[0] f- *(rax_5 + (rcx_6 << 2) + 8)
                    zmm3[0] = zmm3[0] * zmm12[0]
                    arg3[0] = arg3[0] * zmm12[0]
                    zmm3[0] = zmm3[0] f+ *(rax_5 + (rcx_6 << 2))
                    zmm5[0] = zmm5[0] * zmm12[0]
                    arg3[0] = arg3[0] f+ *(rax_5 + (rcx_6 << 2) + 4)
                    zmm5[0] = zmm5[0] f+ *(rax_5 + (rcx_6 << 2) + 8)
                    var_198_1 = zmm3[0]
                    float var_194_2 = arg3[0]
                    var_190_1 = zmm5[0]
                    float var_d8[0x4]
                    float (* rax_6)[0x4]
                    rax_6, zmm6, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_d8, rdx_2 + r14_2, &var_188, zmm12)
                    zmm7 = data_143ef7ee0
                    zmm5 = *rax_6
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
                            ^ data_143ef7ed0, 
                        zmm0_1) ^ data_143ef7ed0
                else
                    zmm6 = r8_3[1]
                    zmm7 = *r8_3
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    float var_194_1 = zmm8[0]
                    var_190_1 = zmm9[0]
                    var_198_1 = zmm6[0]
                    r8_3[3].d = 1
                
                bool cond:0_1 = zmm11[0] <= 9.99999997e-07f
                var_188 = zmm7
                
                if (not(cond:0_1))
                    int64_t rax_7 = *(i + 0x28)
                    int64_t rbx_1 = result_2 * 3
                    int64_t rcx_8 = *(i + 0x1b8)
                    zmm0_1 = 0x3f800000
                    zmm0_1[0] = 1f / zmm11[0]
                    zmm6[0] = zmm6[0] f- *(rax_7 + (rbx_1 << 2))
                    zmm8[0] = zmm8[0] f- *(rax_7 + (rbx_1 << 2) + 4)
                    zmm9[0] = zmm9[0] f- *(rax_7 + (rbx_1 << 2) + 8)
                    zmm6[0] = zmm6[0] * zmm0_1[0]
                    zmm9[0] = zmm9[0] * zmm0_1[0]
                    zmm8[0] = zmm8[0] * zmm0_1[0]
                    float var_100_1 = zmm9[0]
                    *(rcx_8 + (rbx_1 << 2)) = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
                    *(rcx_8 + (rbx_1 << 2) + 8) = var_100_1
                    int64_t var_138
                    zmm7, zmm10, zmm11, zmm12 =
                        sub_141733ba0(&var_138, *(i + 0x68) + r14_2, &var_188, zmm11)
                    int64_t rcx_10 = *(i + 0x1d0)
                    *(rcx_10 + (rbx_1 << 2)) = var_138
                    int32_t var_130
                    *(rcx_10 + (rbx_1 << 2) + 8) = var_130
                
                int64_t rcx_11 = *(i + 0x28)
                int64_t rdx_6 = result_2 * 3
                *(rcx_11 + (rdx_6 << 2)) = var_198_1.q
                *(rcx_11 + (rdx_6 << 2) + 8) = var_190_1
                *(*(i + 0x68) + result_2 * 0x10) = zmm7
            else if (rcx_1 == 3)
                int64_t rax_2 = *(i + 0x1b8)
                int64_t rdx_1 = result_2 * 3
                int64_t rcx_4 = *(i + 0x28)
                int64_t rsi_1 = result_2 * 2
                int32_t var_13c_1 = 0
                zmm11[0] = zmm11[0] f* *(rax_2 + (rdx_1 << 2) + 8)
                zmm11[0] = zmm11[0] f* *(rax_2 + (rdx_1 << 2) + 4)
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2) + 8)
                zmm11[0] = zmm11[0] f* *(rax_2 + (rdx_1 << 2))
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2) + 4)
                zmm11[0] = zmm11[0] f+ *(rcx_4 + (rdx_1 << 2))
                float var_110_1 = zmm11[0]
                *(rcx_4 + (rdx_1 << 2)) = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
                *(rcx_4 + (rdx_1 << 2) + 8) = var_110_1
                int64_t rcx_5 = *(i + 0x68)
                int64_t rax_4 = *(i + 0x1d0)
                zmm4 = *(rcx_5 + (rsi_1 << 3))
                arg2 = *(rax_4 + (rdx_1 << 2) + 4)
                float var_148[0x4]
                var_148[0] = (*(rax_4 + (rdx_1 << 2)))[0]
                arg3 = *(rax_4 + (rdx_1 << 2) + 8)
                zmm5 = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
                zmm3 = _mm_shuffle_ps(var_148, var_148, 0xe1)
                zmm3[0] = arg2[0]
                arg2 = _mm_shuffle_ps(zmm4, zmm4, 0x4e)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm3[0] = arg3[0]
                zmm11[0] = zmm11[0] * 0.5f
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                var_148 = zmm3
                zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm3, zmm3, 0))
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4)
                zmm5 = __mulps_xmmps_memps(zmm5, data_143ef7f10)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
                zmm5 = _mm_add_ps(zmm5, zmm0_1)
                arg2 = _mm_mul_ps(arg2, _mm_shuffle_ps(zmm3, zmm3, 0x55))
                zmm4 = _mm_mul_ps(zmm4, _mm_shuffle_ps(zmm3, zmm3, 0xaa))
                arg2 = __mulps_xmmps_memps(arg2, data_143ef7f00)
                zmm4 = __mulps_xmmps_memps(zmm4, data_143ef7ef0)
                zmm5 = _mm_add_ps(_mm_add_ps(zmm5, arg2), zmm4)
                zmm6 = zmm5
                zmm6[0] = zmm6[0] * zmm11[0]
                arg2 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm0_1 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
                zmm6[0] = zmm6[0] f+ *(rcx_5 + (rsi_1 << 3))
                arg2[0] = arg2[0] * zmm11[0]
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                zmm0_1[0] = zmm0_1[0] * zmm11[0]
                arg2[0] = arg2[0] f+ *(rcx_5 + (rsi_1 << 3) + 4)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
                zmm0_1[0] = zmm0_1[0] f+ *(rcx_5 + (rsi_1 << 3) + 8)
                zmm5[0] = zmm5[0] * zmm11[0]
                zmm6[0] = arg2[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
                zmm5[0] = zmm5[0] f+ *(rcx_5 + (rsi_1 << 3) + 0xc)
                zmm6[0] = zmm0_1[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
                zmm6[0] = zmm5[0]
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
                zmm5 = data_143ef7ee0
                arg2 = _mm_mul_ps(zmm6, zmm6)
                arg2 = _mm_add_ps(arg2, _mm_shuffle_ps(arg2, arg2, 0x4e))
                zmm4 = _mm_add_ps(_mm_shuffle_ps(arg2, arg2, 0x39), arg2)
                arg2 = _mm_rsqrt_ps(zmm4)
                zmm3 = _mm_mul_ps(zmm4, zmm5)
                arg3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg2, arg2), zmm3)), arg2), 
                    arg2)
                zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(arg3, arg3), zmm3))
                zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
                zmm5 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, arg3), arg3), zmm6) ^ data_143ef7ed0, 
                    zmm0_1) ^ data_143ef7ed0
                var_188 = zmm5
                *(rcx_5 + (rsi_1 << 3)) = zmm5
        
        if (r15_1 != 0)
            int32_t var_150
            int32_t rax_14 = var_150 + 1
            var_150 = rax_14
            
            if (rax_14 s>= r15_1[1].d)
            label_1417a8691:
                var_158 += 1
                result = sub_141750820(&var_178)
                r15_1 = var_170
                i = i_1
            else
                int64_t* rdx_8 = *(*r15_1 + (sx.q(rax_14) << 3))
                void* rcx_16 = *rdx_8
                int32_t var_120_1 = rdx_8[1].d
                
                if (rcx_16 == 0)
                    result = 0
                else
                    result = zx.d(*(rcx_16 + 0x40))
                
                char var_11c_1 = result.b
                i_1.o = rcx_16.o
                i = i_1
        else
            result = result_1 + 1
            result_1 = result
            int32_t var_154
            
            if (result s>= var_154)
                goto label_1417a8691
    while (i != 0)

return result
