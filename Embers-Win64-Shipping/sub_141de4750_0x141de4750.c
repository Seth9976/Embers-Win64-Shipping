// 函数: sub_141de4750
// 地址: 0x141de4750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* arg_20)[0x4] = arg4
void* arg_18 = arg3
float zmm6[0x4]
float var_58[0x4] = zmm6
int32_t r14 = 0
void* r9 = arg3
int64_t* r12 = *arg1
int64_t* rsi = r12
int64_t r13 = sx.q(arg1[1].d)
void* r15 = &r12[r13 * 3]
float zmm0[0x4]
uint32_t zmm1[0x8]

if (r12 != r15)
    do
        int32_t rdi_1 = rsi[1].d
        int32_t rbx_1 = 0
        
        if (rdi_1 != 0)
            do
                void* rcx_2 = rsi[2]
                int32_t arg_8 = rbx_1
                int32_t var_a8
                sub_141ea4020(rcx_2, &var_a8, &arg_8)
                int64_t rax_1 = sx.q(var_a8)
                int64_t r9_1 = *rsi
                int128_t* r8_3
                
                if (rax_1.d == 0xffffffff)
                    r8_3 = sx.q(arg_8) * 0x30 + r9_1
                    zmm6 = *r8_3
                else
                    zmm6 = data_143f390d0
                    r8_3 = sx.q(arg_8) * 0x30 + r9_1
                    float zmm3[0x4] = *r8_3
                    float zmm2[0x4] = *(r9_1 + rax_1 * 0x30)
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    zmm1[0].o = zmm3
                    float temp0_3[0x4] = _mm_mul_ps(temp0_1, temp0_2)
                    arg_8 = 0x322bcc77
                    float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                    float temp0_6[0x4] = __mulps_xmmps_memps(temp0_3, data_143f39110)
                    zmm1[0].o = _mm_shuffle_ps(zmm1[0].o, zmm3, 0x4e)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                    float temp0_9[0x4] = _mm_add_ps(temp0_6, temp0_5)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm1[0].o = _mm_mul_ps(zmm1[0].o, temp0_10)
                    float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                    zmm1[0].o = __mulps_xmmps_memps(zmm1[0].o, data_143f39100)
                    float temp0_15[0x4] = __mulps_xmmps_memps(temp0_13, data_143f390f0)
                    float temp0_17[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, zmm1[0].o), temp0_15)
                    zmm1[0].o = temp0_17
                    zmm1[0].o = _mm_mul_ps(zmm1[0].o, temp0_17)
                    float temp0_19[0x4] = _mm_shuffle_ps(zmm1[0].o, zmm1[0].o, 0x4e)
                    zmm1[0].o = _mm_add_ps(zmm1[0].o, temp0_19)
                    float temp0_22[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(zmm1[0].o, zmm1[0].o, 0x39), zmm1[0].o)
                    zmm1[0].o = _mm_rsqrt_ps(temp0_22)
                    float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm6)
                    float temp0_29[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, 
                                _mm_mul_ps(_mm_mul_ps(zmm1[0].o, zmm1[0].o), temp0_24)), 
                            zmm1[0].o), 
                        zmm1[0].o)
                    float temp0_32[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_29, temp0_29), temp0_24))
                    zmm0 = arg_8
                    float temp0_34[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_22, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_32, temp0_29), temp0_29), temp0_17)
                            ^ data_143f390c0, 
                        temp0_34) ^ data_143f390c0
                
                rbx_1 += 1
                *r8_3 = zmm6
            while (rbx_1 != rdi_1)
        
        rsi = &rsi[3]
    while (rsi != r15)
    
    r9 = arg_18

float (* rax_5)[0x4] = arg_20
int64_t* r8_6 = r9 + 0x80
int64_t* var_98 = r12
int32_t var_90 = r13.d

if (r9 == 0)
    r8_6 = nullptr

float var_88[0x4] = *rax_5
zmm0 = var_98.o
zmm1[0].o = *arg2
int128_t var_78 = zmm1[0].o
var_98.o = zmm0
uint64_t result
int128_t zmm7
result, zmm7 = sub_141de3fa0(&var_98, &var_78, r8_6, &var_88, zmm1, arg5, arg6)
int32_t rbx_2 = arg5[1].d

if (rbx_2 != 0)
    int128_t var_68_1 = zmm7
    
    do
        arg_18.d = r14
        sub_141ea4020(arg5[2], &arg_20, &arg_18)
        result = sx.q(arg_20.d)
        
        if (result.d != 0xffffffff)
            int64_t r8_8 = *arg5
            float zmm2_1[0x4] = *(r8_8 + result * 0x30)
            int64_t rdx_3 = sx.q(arg_18.d) * 3
            float zmm4_1[0x4] = zmm2_1 ^ 0x80000000
            uint32_t zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55) ^ 0x80000000
            float temp0_40[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            temp0_40[0] = zmm0_1[0]
            int64_t rdx_4 = rdx_3 * 2
            float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa) ^ 0x80000000
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc6)
            temp0_42[0] = zmm1_1[0]
            float temp0_43[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x27)
            float zmm5_1[0x4] = *(r8_8 + (rdx_4 << 3))
            temp0_44[0] = temp0_43[0]
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x39)
            float temp0_46[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x1b)
            float temp0_47[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x4e)
            float temp0_49[0x4] = _mm_mul_ps(temp0_46, _mm_shuffle_ps(temp0_45, temp0_45, 0))
            zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xff), zmm5_1)
            float temp0_52[0x4] = __mulps_xmmps_memps(temp0_49, data_143f39110)
            float temp0_53[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xb1)
            float temp0_54[0x4] = _mm_add_ps(temp0_52, zmm0_1)
            float temp0_56[0x4] = _mm_mul_ps(temp0_47, _mm_shuffle_ps(temp0_45, temp0_45, 0x55))
            float temp0_58[0x4] = _mm_mul_ps(temp0_53, _mm_shuffle_ps(temp0_45, temp0_45, 0xaa))
            float temp0_59[0x4] = __mulps_xmmps_memps(temp0_56, data_143f39100)
            float temp0_60[0x4] = __mulps_xmmps_memps(temp0_58, data_143f390f0)
            *(r8_8 + (rdx_4 << 3)) = _mm_add_ps(_mm_add_ps(temp0_54, temp0_59), temp0_60)
            result = sx.q(arg_18.d)
            zmm5_1 = data_143f390d0
            float (* rcx_9)[0x4] = result * 0x30 + *arg5
            float zmm6_1[0x4] = *rcx_9
            float temp0_63[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            float temp0_65[0x4] = _mm_add_ps(temp0_63, _mm_shuffle_ps(temp0_63, temp0_63, 0x4e))
            float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x39), temp0_65)
            float temp0_68[0x4] = _mm_rsqrt_ps(temp0_67)
            float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm5_1)
            float temp0_74[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_68, temp0_68), temp0_69)), 
                    temp0_68), 
                temp0_68)
            float temp0_77[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_74, temp0_74), temp0_69))
            zmm0_1 = _mm_cmpeq_ps(data_143f390e0, temp0_67, 2)
            *rcx_9 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_77, temp0_74), temp0_74), zmm6_1)
                    ^ data_143f390c0, 
                zmm0_1) ^ data_143f390c0
        
        r14 += 1
    while (r14 != rbx_2)

return result
