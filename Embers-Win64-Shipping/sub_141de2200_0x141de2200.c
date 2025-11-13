// 函数: sub_141de2200
// 地址: 0x141de2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t rsi = sx.q(arg2[1].d)
int32_t var_150 = rsi.d

if (rsi.d == 0)
    int64_t* rbx_1 = arg6
    sub_141a911c0(rbx_1, arg1)
    int64_t rax = arg1[2]
    rbx_1[2] = rax
    return rax

float var_188 = arg1[1].d
char var_17c
char* var_110 = &var_17c
void*** (* var_118)() = j_sub_141ddfe50
var_17c = 0
void* rax_2 = sub_140a756e0(&var_118, &data_143a2d26c)
int32_t rcx_2 = *(rax_2 + 0x7c)
int32_t rdi = 0
*(rax_2 + 0x78) = 0

if (rcx_2 s< 0 && rcx_2 != 0)
    sub_1405dadb0(rax_2 + 0x70, 0)
    rdi = *(rax_2 + 0x78)

int32_t rax_3 = rdi + rsi.d
*(rax_2 + 0x78) = rax_3

if (rax_3 s> *(rax_2 + 0x7c))
    sub_1406105e0(rax_2 + 0x70)

memset(*(rax_2 + 0x70) + (sx.q(rdi) << 2), 0, rsi << 2)
void* rcx_7 = rax_2 + 0x10
void* var_178 = rcx_7
uint32_t rax_6
rax_6.b = (arg9 u>> 1).b & 1
char rdx_2 = arg9.b & 1
uint32_t var_180 = rax_6

if (rdx_2 != 0)
    int32_t rax_7 = *(rcx_7 + 0xc)
    int32_t rdx_3 = 0
    *(rcx_7 + 8) = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405a5410(rcx_7, 0)
        rcx_7 = var_178
        rdx_3 = *(rcx_7 + 8)
    
    int32_t rax_9 = var_188 i+ rdx_3
    *(rcx_7 + 8) = rax_9
    
    if (rax_9 s> *(rcx_7 + 0xc))
        sub_1405a4f90(rcx_7)
    
    int32_t rax_10 = *(rax_2 + 0x2c)
    int32_t rdx_4 = 0
    *(rax_2 + 0x28) = 0
    
    if (rax_10 s< 0 && rax_10 != 0)
        sub_1405a5410(rax_2 + 0x20, 0)
        rdx_4 = *(rax_2 + 0x28)
    
    int32_t rax_12 = var_188 i+ rdx_4
    *(rax_2 + 0x28) = rax_12
    
    if (rax_12 s> *(rax_2 + 0x2c))
        sub_1405a4f90(rax_2 + 0x20)
    
    int32_t rax_13 = *(rax_2 + 0x3c)
    int32_t rdx_5 = 0
    *(rax_2 + 0x38) = 0
    
    if (rax_13 s< 0 && rax_13 != 0)
        sub_1405a5410(rax_2 + 0x30, 0)
        rdx_5 = *(rax_2 + 0x38)
    
    int32_t rax_15 = var_188 i+ rdx_5
    *(rax_2 + 0x38) = rax_15
    
    if (rax_15 s> *(rax_2 + 0x3c))
        sub_1405a4f90(rax_2 + 0x30)
    
    rax_6 = var_180

if (rax_6.b != 0)
    int32_t rax_16 = *(rax_2 + 0x4c)
    int32_t rdx_6 = 0
    *(rax_2 + 0x48) = 0
    
    if (rax_16 s< 0 && rax_16 != 0)
        sub_140638cc0(rax_2 + 0x40, 0)
        rdx_6 = *(rax_2 + 0x48)
    
    int32_t rax_18 = var_188 i+ rdx_6
    *(rax_2 + 0x48) = rax_18
    
    if (rax_18 s> *(rax_2 + 0x4c))
        sub_140638a00(rax_2 + 0x40)
    
    int32_t rax_19 = *(rax_2 + 0x5c)
    int32_t rdx_7 = 0
    *(rax_2 + 0x58) = 0
    
    if (rax_19 s< 0 && rax_19 != 0)
        sub_140638cc0(rax_2 + 0x50, 0)
        rdx_7 = *(rax_2 + 0x58)
    
    int32_t rax_21 = var_188 i+ rdx_7
    *(rax_2 + 0x58) = rax_21
    
    if (rax_21 s> *(rax_2 + 0x5c))
        sub_140638a00(rax_2 + 0x50)
    
    int32_t rax_22 = *(rax_2 + 0x6c)
    int32_t rdx_8 = 0
    *(rax_2 + 0x68) = 0
    
    if (rax_22 s< 0 && rax_22 != 0)
        sub_140638cc0(rax_2 + 0x60, 0)
        rdx_8 = *(rax_2 + 0x68)
    
    int32_t rax_24 = var_188 i+ rdx_8
    *(rax_2 + 0x68) = rax_24
    
    if (rax_24 s> *(rax_2 + 0x6c))
        sub_140638a00(rax_2 + 0x60)
    
    rax_6 = var_180

float zmm7[0x4] = zx.o(0)
void* r9_1 = arg1[2]
float zmm12[0x4] = 0x3f800000
int128_t zmm10 = 0x3727c5ac
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm11[0x4]
float var_a8[0x4] = zmm11
int128_t zmm13
int128_t var_c8 = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
void* var_120 = rax_2 + 0x30
int32_t rdi_2 = arg1[1].d
float zmm15[0x4]
float var_e8[0x4] = zmm15
void* var_130 = rax_2 + 0x20
float var_128 = var_178.d
void* var_138 = r9_1
float var_168[0x4]
float zmm0_1[0x4]
float zmm1_1[0x4]
float zmm3[0x4]
float zmm4_1[0x4]
float zmm5_1[0x4]

if (rdx_2 == 0)
    float rbx_3 = 0f
    
    if (rax_6.b == 0)
        if (rdi_2 != 0)
            do
                int64_t rax_82 = *arg8
                var_180 = rbx_3
                int64_t rsi_5 = sx.q(*(rax_82 + (sx.q(rbx_3) << 3)))
                sub_141ea4020(r9_1, &var_188, &var_180)
                int64_t r9_10 = sx.q(var_180)
                int64_t rax_84 = *arg1
                int64_t r8_18 = r9_10 * 6
                zmm6 = *(rax_84 + (r8_18 << 3))
                zmm8 = *(rax_84 + (r8_18 << 3) + 0x10)
                zmm9 = *(rax_84 + (r8_18 << 3) + 0x20)
                int64_t rdx_31 = *(*arg_10 + rsi_5 * 0x18)
                zmm11 = *(rdx_31 + (r8_18 << 3))
                zmm1_1 = *(*arg8 + (r9_10 << 3) + 4)
                arg5 = *(rdx_31 + (r8_18 << 3) + 0x10)
                zmm4_1 = *(rdx_31 + (r8_18 << 3) + 0x20)
                
                if (zmm1_1[0] >= 0f)
                    zmm1_1 = _mm_min_ss(zmm1_1[0], 0x3f800000)
                else
                    zmm1_1 = zx.o(0)
                
                bool cond:9_1 = zmm1_1[0] <= 9.99999975e-06f
                int64_t rax_88 = *(rax_2 + 0x70)
                *(rax_88 + (rsi_5 << 2)) =
                    __maxss_xmmss_memss(zmm1_1[0], *(rax_88 + (rsi_5 << 2)))[0]
                
                if (not(cond:9_1))
                    if (zmm1_1[0] < 0.999989986f)
                        var_178.d = zmm1_1[0]
                        
                        if (not(zmm1_1[0] <= 9.99999975e-06f))
                            if (zmm1_1[0] < 0.999989986f)
                                zmm3 = var_178.d
                                arg5 = _mm_sub_ps(arg5, zmm8)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4_1 = _mm_sub_ps(zmm4_1, zmm9)
                                zmm1_1 = _mm_mul_ps(zmm11, zmm6)
                                arg5 = _mm_mul_ps(arg5, zmm3)
                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
                                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e)
                                zmm8 = _mm_add_ps(zmm8, arg5)
                                zmm1_1 = _mm_add_ps(zmm1_1, zmm0_1)
                                arg5 = _mm_sub_ps(zx.o(0), zmm6)
                                zmm9 = _mm_add_ps(zmm9, zmm4_1)
                                zmm5_1 = _mm_cmpeq_ps(zx.o(0), 
                                    _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1), 2)
                                zmm0_1 = arg5 ^ zmm6
                                zmm6 = data_143f390d0
                                zmm5_1 = _mm_and_ps(zmm5_1, zmm0_1)
                                zmm0_1 = _mm_sub_ps(data_143f39070, zmm3)
                                zmm3 = _mm_mul_ps(zmm3, zmm11)
                                zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1 ^ arg5, zmm0_1), zmm3)
                                zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                                zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                                zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                                zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                                zmm3 = _mm_mul_ps(zmm4_1, zmm6)
                                arg5 = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                                        zmm1_1), 
                                    zmm1_1)
                                zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm3))
                                zmm0_1 = _mm_cmpeq_ps(data_143f390e0, zmm4_1, 2)
                                zmm6 = _mm_and_ps(
                                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6, arg5), arg5), zmm5_1)
                                        ^ data_143f390c0, 
                                    zmm0_1) ^ data_143f390c0
                            else
                                zmm6 = zmm11
                                zmm8 = arg5
                                zmm9 = zmm4_1
                    else
                        zmm6 = zmm11
                        zmm8 = arg5
                        zmm9 = zmm4_1
                
                rbx_3 += 1
                r9_1 = var_138
                int64_t rcx_53 = sx.q(var_180) * 0x30 + *arg6
                *rcx_53 = zmm6
                *(rcx_53 + 0x10) = zmm8
                *(rcx_53 + 0x20) = zmm9
            while (rbx_3 != rdi_2)
    else if (rdi_2 != 0)
        do
            var_188 = rbx_3
            int64_t rsi_4 = sx.q(*(*arg8 + (sx.q(rbx_3) << 3)))
            sub_141ea4020(r9_1, &var_180, &var_188)
            int64_t rcx_36 = sx.q(var_188)
            int64_t rax_56 = sx.q(var_180)
            int64_t r8_12 = rcx_36 * 6
            float rax_61
            int64_t r9_8
            
            if (rax_56.d == 0xffffffff)
                r9_8 = rcx_36 * 3
                int64_t rcx_38 = *(rax_2 + 0x40)
                arg5 = *(*arg1 + (r8_12 << 3) + 0x20)
                float var_f4_1 = _mm_shuffle_ps(arg5, arg5, 0xaa)[0]
                *(rcx_38 + (r9_8 << 2)) =
                    (_mm_unpacklo_ps(arg5, _mm_shuffle_ps(arg5, arg5, 0x55)[0].q)).q
                *(rcx_38 + (r9_8 << 2) + 8) = var_f4_1
                arg5 = *(*(*arg_10 + rsi_4 * 0x18) + (r8_12 << 3) + 0x20)
                zmm0_1 = arg5
                rax_61 = _mm_shuffle_ps(arg5, arg5, 0xaa)[0]
                zmm1_1 = _mm_shuffle_ps(arg5, arg5, 0x55)
            else
                int64_t rdx_24 = *(rax_2 + 0x40)
                int64_t r11_3 = rax_56 * 3
                r9_8 = rcx_36 * 3
                int64_t r10_4 = *(rax_2 + 0x60)
                zmm0_1 = *(*arg1 + (r8_12 << 3) + 0x20)
                arg5 = zmm0_1
                arg5[0] = arg5[0] f* *(rdx_24 + (r11_3 << 2))
                zmm1_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm1_1[0] = zmm1_1[0] f* *(rdx_24 + (r11_3 << 2) + 4)
                zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
                zmm0_1[0] = zmm0_1[0] f* *(rdx_24 + (r11_3 << 2) + 8)
                float var_140_1 = zmm0_1[0]
                *(rdx_24 + (r9_8 << 2)) = (_mm_unpacklo_ps(arg5, zmm1_1[0].q)).q
                *(rdx_24 + (r9_8 << 2) + 8) = var_140_1
                arg5 = *(*(*arg_10 + rsi_4 * 0x18) + (r8_12 << 3) + 0x20)
                zmm0_1 = arg5
                zmm0_1[0] = zmm0_1[0] f* *(r10_4 + (r11_3 << 2))
                zmm1_1 = _mm_shuffle_ps(arg5, arg5, 0x55)
                zmm1_1[0] = zmm1_1[0] f* *(r10_4 + (r11_3 << 2) + 4)
                arg5 = _mm_shuffle_ps(arg5, arg5, 0xaa)
                arg5[0] = arg5[0] f* *(r10_4 + (r11_3 << 2) + 8)
                rax_61 = arg5[0]
            
            int64_t rcx_40 = *(rax_2 + 0x60)
            *(rcx_40 + (r9_8 << 2)) = (_mm_unpacklo_ps(zmm0_1, zmm1_1[0].q)).q
            *(rcx_40 + (r9_8 << 2) + 8) = rax_61
            int64_t r9_9 = sx.q(var_188)
            int64_t rax_67 = *arg1
            int64_t r8_14 = r9_9 * 6
            zmm9 = *(rax_67 + (r8_14 << 3))
            zmm11 = *(rax_67 + (r8_14 << 3) + 0x10)
            zmm8 = *(rax_67 + (r8_14 << 3) + 0x20)
            int64_t rdx_27 = *(*arg_10 + rsi_4 * 0x18)
            zmm4_1 = *(rdx_27 + (r8_14 << 3))
            zmm1_1 = *(rdx_27 + (r8_14 << 3) + 0x10)
            arg5 = *(rdx_27 + (r8_14 << 3) + 0x20)
            zmm6 = *(*arg8 + (r9_9 << 3) + 4)
            
            if (zmm6[0] >= 0f)
                zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
            else
                zmm6 = zx.o(0)
            
            bool cond:13_1 = zmm6[0] > 9.99999975e-06f
            int64_t rax_72 = *(rax_2 + 0x70)
            *(rax_72 + (rsi_4 << 2)) = _mm_max_ss((*(rax_72 + (rsi_4 << 2)))[0], zmm6[0])[0]
            float rax_75
            int64_t rcx_42
            int64_t rdx_28
            int64_t rax_74
            
            if (cond:13_1)
                if (not(zmm6[0] < 0.999989986f))
                    zmm9 = zmm4_1
                    zmm11 = zmm1_1
                    zmm8 = arg5
                    rdx_28 = sx.q(var_188) * 3
                    rax_74 = *(rax_2 + 0x60)
                    goto label_141de2db3
                
                var_178.d = zmm6[0]
                
                if (not(zmm6[0] <= 9.99999975e-06f))
                    if (zmm6[0] < 0.999989986f)
                        zmm3 = var_178.d
                        zmm1_1 = _mm_sub_ps(zmm1_1, zmm11)
                        arg5 = _mm_sub_ps(arg5, zmm8)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm3)
                        arg5 = _mm_mul_ps(arg5, zmm3)
                        zmm11 = _mm_add_ps(zmm11, zmm1_1)
                        zmm1_1 = _mm_mul_ps(zmm4_1, zmm9)
                        zmm8 = _mm_add_ps(zmm8, arg5)
                        arg5 = _mm_sub_ps(zx.o(0), zmm9)
                        zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                        zmm5_1 = _mm_cmpeq_ps(zx.o(0), 
                            _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1), 2)
                        zmm0_1 = arg5 ^ zmm9
                        zmm9 = data_143f390d0
                        zmm5_1 = _mm_and_ps(zmm5_1, zmm0_1)
                        zmm0_1 = _mm_sub_ps(data_143f39070, zmm3)
                        zmm3 = _mm_mul_ps(zmm3, zmm4_1)
                        zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1 ^ arg5, zmm0_1), zmm3)
                        zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                        zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                        zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                        zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                        zmm3 = _mm_mul_ps(zmm4_1, zmm9)
                        arg5 = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                                zmm1_1), 
                            zmm1_1)
                        zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm3))
                        zmm0_1 = _mm_cmpeq_ps(data_143f390e0, zmm4_1, 2)
                        zmm9 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm9, arg5), arg5), zmm5_1)
                                ^ data_143f390c0, 
                            zmm0_1) ^ data_143f390c0
                    else
                        zmm9 = zmm4_1
                        zmm11 = zmm1_1
                        zmm8 = arg5
                
                int64_t rcx_43 = *(rax_2 + 0x60)
                rdx_28 = sx.q(var_188) * 3
                int64_t rax_78 = *(rax_2 + 0x40)
                zmm0_1 = *(rcx_43 + (rdx_28 << 2) + 8)
                zmm4_1 = *(rcx_43 + (rdx_28 << 2))
                arg5 = *(rcx_43 + (rdx_28 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f- *(rax_78 + (rdx_28 << 2) + 8)
                zmm4_1[0] = zmm4_1[0] f- *(rax_78 + (rdx_28 << 2))
                arg5[0] = arg5[0] f- *(rax_78 + (rdx_28 << 2) + 4)
                rcx_42 = *(rax_2 + 0x50)
                zmm0_1[0] = zmm0_1[0] * zmm6[0]
                zmm4_1[0] = zmm4_1[0] * zmm6[0]
                zmm0_1[0] = zmm0_1[0] f+ *(rax_78 + (rdx_28 << 2) + 8)
                arg5[0] = arg5[0] * zmm6[0]
                zmm4_1[0] = zmm4_1[0] f+ *(rax_78 + (rdx_28 << 2))
                arg5[0] = arg5[0] f+ *(rax_78 + (rdx_28 << 2) + 4)
                rax_75 = zmm0_1[0]
                *(rcx_42 + (rdx_28 << 2)) = (_mm_unpacklo_ps(zmm4_1, arg5[0].q)).q
            else
                rdx_28 = sx.q(var_188) * 3
                rax_74 = *(rax_2 + 0x40)
            label_141de2db3:
                rcx_42 = *(rax_2 + 0x50)
                *(rcx_42 + (rdx_28 << 2)) = *(rax_74 + (rdx_28 << 2))
                rax_75 = *(rax_74 + (rdx_28 << 2) + 8)
            *(rcx_42 + (rdx_28 << 2) + 8) = rax_75
            int64_t rax_79 = sx.q(var_180)
            int64_t rcx_44 = sx.q(var_188)
            
            if (rax_79.d != 0xffffffff)
                int64_t r8_15 = *(rax_2 + 0x50)
                int64_t rax_80 = rax_79 * 3
                zmm1_1 = *(r8_15 + (rax_80 << 2))
                
                if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm3 = 0x3f800000
                    zmm3[0] = 1f / zmm1_1[0]
                else
                    zmm3 = zx.o(0)
                
                zmm1_1 = *(r8_15 + (rax_80 << 2) + 4)
                
                if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] > 9.99999994e-09f)
                    arg5 = 0x3f800000
                    arg5[0] = 1f / zmm1_1[0]
                else
                    arg5 = zx.o(0)
                
                zmm1_1 = *(r8_15 + (rax_80 << 2) + 8)
                
                if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] > 9.99999994e-09f)
                    zmm0_1 = 0x3f800000
                    zmm0_1[0] = 1f / zmm1_1[0]
                else
                    zmm0_1 = zx.o(0)
                
                int64_t rdx_29 = rcx_44 * 3
                zmm3[0] = zmm3[0] f* *(r8_15 + (rdx_29 << 2))
                arg5[0] = arg5[0] f* *(r8_15 + (rdx_29 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f* *(r8_15 + (rdx_29 << 2) + 8)
                arg5 = _mm_unpacklo_ps(arg5, 0)
                zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), arg5[0].q)
            
            r9_1 = var_138
            rbx_3 += 1
            int64_t rcx_47 = rcx_44 * 0x30 + *arg6
            *rcx_47 = zmm9
            *(rcx_47 + 0x10) = zmm11
            *(rcx_47 + 0x20) = zmm8
        while (rbx_3 != rdi_2)
else if (rax_6.b == 0)
    int32_t rbx_2 = 0
    
    if (rdi_2 != 0)
        int64_t* r12_1 = arg_10
        
        do
            arg_10.d = rbx_2
            int64_t rsi_2 = sx.q(*(*arg8 + (sx.q(rbx_2) << 3)))
            sub_141ea4020(r9_1, &var_180, &arg_10)
            int64_t rax_35 = sx.q(var_180)
            zmm14 = data_143f39110
            zmm15 = data_143f39100
            void* r10_3
            void* r13_1
            
            if (rax_35.d == 0xffffffff)
                arg5 = data_14399f720
                int64_t r9_4 = sx.q(arg_10.d)
                int64_t rax_39 = *arg1
                r10_3 = var_178
                r13_1 = rax_2
                zmm0_1 = _mm_shuffle_ps(arg5, arg5, 0)
                int64_t r8_6 = r9_4 * 6
                int64_t r9_5 = r9_4 * 2
                zmm3 = *(rax_39 + (r8_6 << 3))
                int64_t rax_40 = *r10_3
                zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), zmm0_1)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0xff), zmm3)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm14)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(arg5, arg5, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(arg5, arg5, 0xaa))
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm15)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f390f0)
                *(rax_40 + (r9_5 << 3)) = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm3)
                arg5 = data_14399f720
                int64_t rax_41 = *r12_1
                zmm0_1 = _mm_shuffle_ps(arg5, arg5, 0)
                int64_t rax_42 = *(r13_1 + 0x30)
                zmm3 = *(*(rax_41 + rsi_2 * 0x18) + (r8_6 << 3))
                zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), zmm0_1)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0xff), zmm3)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm14)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(arg5, arg5, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(arg5, arg5, 0xaa))
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm15)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f390f0)
                *(rax_42 + (r9_5 << 3)) = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm3)
            else
                int64_t r11_1 = sx.q(arg_10.d)
                int64_t r10_2 = rax_35 * 2
                r13_1 = rax_2
                int64_t r8_4 = r11_1 * 6
                int64_t rcx_23 = *(r13_1 + 0x10)
                int64_t r11_2 = r11_1 * 2
                int64_t r9_3 = *(r13_1 + 0x30)
                arg5 = *(*arg1 + (r8_4 << 3))
                zmm3 = *(rcx_23 + (r10_2 << 3))
                zmm0_1 = _mm_shuffle_ps(arg5, arg5, 0x1b)
                zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm0_1)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg5)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm14)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(arg5, arg5, 0x4e))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(arg5, arg5, 0xb1))
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm15)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f390f0)
                *(rcx_23 + (r11_2 << 3)) = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm3)
                arg5 = *(r9_3 + (r10_2 << 3))
                int64_t rax_37 = *r12_1
                r10_3 = var_178
                zmm0_1 = _mm_shuffle_ps(arg5, arg5, 0)
                int64_t rax_38 = *(r13_1 + 0x30)
                zmm3 = *(*(rax_37 + rsi_2 * 0x18) + (r8_4 << 3))
                zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), zmm0_1)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0xff), zmm3)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm14)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(arg5, arg5, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(arg5, arg5, 0xaa))
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm15)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f390f0)
                *(rax_38 + (r11_2 << 3)) = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm3)
            
            int64_t rax_43 = *arg1
            int64_t r9_6 = sx.q(arg_10.d)
            int64_t r8_8 = r9_6 * 6
            zmm8 = *(rax_43 + (r8_8 << 3))
            zmm9 = *(rax_43 + (r8_8 << 3) + 0x10)
            zmm11 = *(rax_43 + (r8_8 << 3) + 0x20)
            int64_t rdx_14 = *(*r12_1 + rsi_2 * 0x18)
            zmm4_1 = *(rdx_14 + (r8_8 << 3))
            zmm1_1 = *(rdx_14 + (r8_8 << 3) + 0x10)
            arg5 = *(rdx_14 + (r8_8 << 3) + 0x20)
            zmm6 = *(*arg8 + (r9_6 << 3) + 4)
            
            if (zmm6[0] >= zmm7[0])
                zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
            else
                zmm6 = zmm7
            
            bool cond:14_1 = zmm6[0] f> zmm10.d
            int64_t rax_47 = *(rax_2 + 0x70)
            *(rax_47 + (rsi_2 << 2)) = _mm_max_ss((*(rax_47 + (rsi_2 << 2)))[0], zmm6[0])[0]
            void* rsi_3
            
            if (not(cond:14_1))
                int64_t rdx_16 = sx.q(arg_10.d) * 2
                rsi_3 = rax_2 + 0x20
                *(*rsi_3 + (rdx_16 << 3)) = *(*r10_3 + (rdx_16 << 3))
            else if (zmm6[0] < 0.999989986f)
                bool cond:17_1 = zmm6[0] f<= zmm10.d
                var_188 = zmm6[0]
                
                if (not(cond:17_1) && zmm6[0] < 0.999989986f)
                    zmm3 = var_188
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm9)
                    arg5 = _mm_sub_ps(arg5, zmm11)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm3)
                    arg5 = _mm_mul_ps(arg5, zmm3)
                    _mm_add_ps(zmm9, zmm1_1)
                    zmm1_1 = _mm_mul_ps(zmm4_1, zmm8)
                    _mm_add_ps(zmm11, arg5)
                    arg5 = _mm_sub_ps(zx.o(0), zmm8)
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm5_1 = _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1), 2)
                    zmm0_1 = arg5 ^ zmm8
                    zmm8 = data_143f390d0
                    zmm5_1 = _mm_and_ps(zmm5_1, zmm0_1)
                    zmm0_1 = _mm_sub_ps(data_143f39070, zmm3)
                    zmm3 = _mm_mul_ps(zmm3, zmm4_1)
                    zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1 ^ arg5, zmm0_1), zmm3)
                    zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                    zmm3 = _mm_mul_ps(zmm4_1, zmm8)
                    arg5 = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm8 = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm3))
                    zmm0_1 = _mm_cmpeq_ps(data_143f390e0, zmm4_1, 2)
                    _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm8, arg5), arg5), zmm5_1)
                            ^ data_143f390c0, 
                        zmm0_1)
                    data_143f390c0
                
                zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141ddff00(&var_130, arg_10.d, zmm6)
                rsi_3 = rax_2 + 0x20
            else
                zmm8 = zmm4_1
                int64_t rdx_18 = sx.q(arg_10.d) * 2
                rsi_3 = rax_2 + 0x20
                zmm9 = zmm1_1
                zmm11 = arg5
                *(*rsi_3 + (rdx_18 << 3)) = *(*(r13_1 + 0x30) + (rdx_18 << 3))
            
            int64_t rax_50 = sx.q(var_180)
            int64_t rcx_30 = sx.q(arg_10.d)
            
            if (rax_50.d != 0xffffffff)
                int64_t r8_9 = *rsi_3
                zmm8 = data_143f390d0
                float (* rdx_22)[0x4] = (rax_50 << 4) + r8_9
                zmm3 = *(r8_9 + rcx_30 * 0x10)
                zmm4_1 = *rdx_22 ^ 0x80000000
                zmm0_1 = (*rdx_22)[1] ^ 0x80000000
                arg5 = (*rdx_22)[3]
                zmm1_1 = (*rdx_22)[2] ^ 0x80000000
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                zmm4_1[0] = zmm0_1[0]
                zmm5_1 = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
                zmm4_1[0] = zmm1_1[0]
                arg_10.d = 0x322bcc77
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                zmm4_1[0] = arg5[0]
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
                var_168 = zmm4_1
                zmm5_1 = _mm_mul_ps(zmm5_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0))
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm3)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1, zmm14), zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm15)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f390f0)
                zmm5_1 = _mm_add_ps(_mm_add_ps(zmm5_1, zmm1_1), zmm3)
                zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                zmm3 = _mm_mul_ps(zmm4_1, zmm8)
                arg5 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                        zmm1_1), 
                    zmm1_1)
                zmm8 = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm3))
                zmm0_1 = arg_10.d
                zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), zmm4_1, 2)
                zmm8 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm8, arg5), arg5), zmm5_1) ^ data_143f390c0, 
                    zmm0_1) ^ data_143f390c0
            
            r9_1 = var_138
            rbx_2 += 1
            float (* rcx_33)[0x4] = rcx_30 * 0x30 + *arg6
            *rcx_33 = zmm8
            rcx_33[1] = zmm9
            rcx_33[2] = zmm11
        while (rbx_2 != rdi_2)
else
    r9_1, zmm7, zmm10, zmm12 = sub_1400f5b80(*arg6, *arg1, arg_10, *var_178, arg5, *(rax_2 + 0x40), 
        *(rax_2 + 0x30), *(rax_2 + 0x60), *(rax_2 + 0x20), *(rax_2 + 0x50), *(rax_2 + 0x70), *arg8, 
        *(r9_1 + 0x90), rdi_2)
int32_t rax_90 = *(rax_2 + 0x8c)
*(rax_2 + 0x88) = 0

if (rax_90 s< 0 && rax_90 != 0)
    sub_1405c5570(rax_2 + 0x80, 0)

int64_t r15_3 = sx.q(var_150)
int32_t r8_19 = *(rax_2 + 0x88)
int32_t rdi_3 = (r15_3 + 1).d

if (rdi_3 s> r8_19)
    *(rax_2 + 0x88) = rdi_3
    
    if (rdi_3 s> *(rax_2 + 0x8c))
        sub_1405a4d70(rax_2 + 0x80)
else if (rdi_3 s< r8_19)
    r9_1.b = 1
    sub_140838460(rax_2 + 0x80, rdi_3, r8_19 - rdi_3, r9_1.b)

int32_t rax_91 = *(rax_2 + 0x9c)
*(rax_2 + 0x98) = 0

if (rax_91 s< 0 && rax_91 != 0)
    sub_1405dadb0(rax_2 + 0x90, 0)

int32_t r8_21 = *(rax_2 + 0x98)

if (rdi_3 s> r8_21)
    *(rax_2 + 0x98) = rdi_3
    
    if (rdi_3 s> *(rax_2 + 0x9c))
        sub_1406105e0(rax_2 + 0x90)
else if (rdi_3 s< r8_21)
    r9_1.b = 1
    sub_140908e30(rax_2 + 0x90, rdi_3, r8_21 - rdi_3, r9_1.b)

int32_t r9_11 = 0
int64_t i_1 = 0
**(rax_2 + 0x80) = arg3
int32_t* rax_93 = *(rax_2 + 0x90)
*rax_93 = 0x3f800000
int64_t r15_4

if (r15_3 s< 4)
    r15_4 = arg4
else
    r15_4 = arg4
    int64_t rdx_36 = 0xc
    int64_t i_13 = ((r15_3 - 4) u>> 2) + 1
    int32_t r11_4 = 2
    int64_t r10_5 = 0x18
    i_1 = i_13 << 2
    int64_t i
    
    do
        rdx_36 += 0x10
        r10_5 += 0x20
        int64_t rcx_62 = sx.q(r9_11) << 5
        r9_11 += 4
        *(*(rax_2 + 0x80) + r10_5 - 0x30) = rcx_62 + *r15_4
        *(*(rax_2 + 0x90) + rdx_36 - 0x18) = *(rdx_36 + *(rax_2 + 0x70) - 0x1c)
        *(*(rax_2 + 0x80) + r10_5 - 0x28) = (sx.q(r11_4 - 1) << 5) + *r15_4
        *(rdx_36 + *(rax_2 + 0x90) - 0x14) = *(*(rax_2 + 0x70) + rdx_36 - 0x18)
        *(r10_5 + *(rax_2 + 0x80) - 0x20) = (sx.q(r11_4) << 5) + *r15_4
        *(rdx_36 + *(rax_2 + 0x90) - 0x10) = *(rdx_36 + *(rax_2 + 0x70) - 0x14)
        int64_t rcx_73 = sx.q(r11_4 + 1)
        r11_4 += 4
        *(*(rax_2 + 0x80) + r10_5 - 0x18) = (rcx_73 << 5) + *r15_4
        rax_93 = zx.q(*(rdx_36 + *(rax_2 + 0x70) - 0x10))
        *(*(rax_2 + 0x90) + rdx_36 - 0xc) = rax_93.d
        i = i_13
        i_13 -= 1
    while (i != 1)

for (; i_1 s< r15_3; i_1 += 1)
    int64_t rcx_77 = sx.q(r9_11)
    r9_11 += 1
    *(*(rax_2 + 0x80) + (i_1 << 3) + 8) = (rcx_77 << 5) + *r15_4
    rax_93 = zx.q(*(*(rax_2 + 0x70) + (i_1 << 2)))
    *(*(rax_2 + 0x90) + (i_1 << 2) + 4) = rax_93.d

int32_t r14_1 = *(rax_2 + 0x88)
float (* rdi_6)[0x4] = *(rax_2 + 0x90)
int64_t rbx_5 = sx.q(*(rax_2 + 0x98))
int64_t* rsi_7 = *(rax_2 + 0x80)

if (r14_1 s> 0)
    if (arg10 == 3)
        *rdi_6
        rax_93 = sub_141deeaf0(arg7, *rsi_7)
        
        if (r14_1 s> 1)
            void* rsi_8 = &rsi_7[1]
            rax_93 = zx.q(r14_1 - 1)
            float* rdi_7 = &(*rdi_6)[1]
            uint64_t i_19 = zx.q(rax_93.d)
            uint64_t i_2
            
            do
                float zmm1_2 = *rdi_7
                float** r10_6 = *rsi_8
                
                if (not(zmm1_2 f<= zmm10.d))
                    int32_t j = 0
                    
                    if (arg7[1].d s> 0)
                        float* rdx_38 = *r10_6
                        int64_t rcx_82 = 0
                        
                        do
                            int32_t* r9_12 = *arg7
                            
                            if (*(r9_12 + rcx_82 + 4) != 0 || *(rdx_38 + rcx_82 + 4) != 0)
                                rax_93.b = 1
                            else
                                rax_93.b = 0
                            
                            *(r9_12 + rcx_82 + 4) = rax_93.b
                            rax_93 = *arg7
                            j += 1
                            rdx_38 = *r10_6
                            *(rax_93 + rcx_82) = zmm1_2 f* *(rdx_38 + rcx_82) f+ *(rax_93 + rcx_82)
                            rcx_82 += 8
                        while (j s< arg7[1].d)
                
                rdi_7 = &rdi_7[1]
                rsi_8 += 8
                i_2 = i_19
                i_19 -= 1
            while (i_2 != 1)
    else if (arg10 != 2)
        *rdi_6
        int64_t* rdx_45 = *rsi_7
        
        if (arg10 == 5)
            int64_t* rbx_10 = arg7
            rax_93 = sub_141deeaf0(rbx_10, rdx_45)
            
            if (r14_1 s> 1)
                void* rsi_11 = &rsi_7[1]
                uint64_t i_15 = zx.q(r14_1 - 1)
                rax_93 = nullptr
                uint64_t i_3
                
                do
                    int64_t* r8_28 = *rsi_11
                    int32_t j_1 = 0
                    
                    if (r8_28[1].d s> 0)
                        int32_t* rcx_101 = nullptr
                        
                        do
                            int64_t rdx_46 = *rbx_10
                            int64_t rax_118
                            
                            if (*(rcx_101 + rdx_46 + 4) != 0)
                                rax_118 = *r8_28
                            
                            if (*(rcx_101 + rdx_46 + 4) == 0 || *(rcx_101 + rax_118 + 4) == 0)
                                int64_t rax_119 = *r8_28
                                
                                if (*(rcx_101 + rax_119 + 4) != 0)
                                    *(rcx_101 + rdx_46) = *(rcx_101 + rax_119)
                                    *(rcx_101 + rdx_46 + 4) = 1
                            else
                                *(rcx_101 + rdx_46) =
                                    __maxss_xmmss_memss(*(rcx_101 + rax_118), *(rcx_101 + rdx_46))
                            
                            j_1 += 1
                            rcx_101 = &rcx_101[2]
                        while (j_1 s< r8_28[1].d)
                        
                        rax_93 = nullptr
                    
                    rsi_11 += 8
                    i_3 = i_15
                    i_15 -= 1
                while (i_3 != 1)
        else if (arg10 != 6)
            if (arg10 == 4)
                return sub_141deeaf0(arg7, rdx_45)
            
            int64_t* rbx_12 = arg7
            
            if (arg10 != 1)
                rax_93 = sub_141deeaf0(rbx_12, rdx_45)
                
                if (r14_1 s> 1)
                    void* rsi_14 = &rsi_7[1]
                    uint64_t i_18 = zx.q(r14_1 - 1)
                    rax_93 = nullptr
                    uint64_t i_4
                    
                    do
                        int64_t* r9_17 = *rsi_14
                        int32_t j_2 = 0
                        
                        if (r9_17[1].d s> 0)
                            int32_t* rdx_49 = nullptr
                            
                            do
                                int32_t* rax_126 = *r9_17
                                
                                if (*(rax_126 + rdx_49 + 4) != 0)
                                    int64_t rcx_107 = *rbx_12
                                    *(rdx_49 + rcx_107) = *(rax_126 + rdx_49)
                                    *(rdx_49 + rcx_107 + 4) = 1
                                
                                j_2 += 1
                                rdx_49 = &rdx_49[2]
                            while (j_2 s< r9_17[1].d)
                            
                            rax_93 = nullptr
                        
                        rsi_14 += 8
                        i_4 = i_18
                        i_18 -= 1
                    while (i_4 != 1)
            else
                rax_93 = sub_141deeaf0(rbx_12, rdx_45)
                
                if (r14_1 s> 1)
                    void* rsi_13 = &rsi_7[1]
                    uint64_t i_17 = zx.q(r14_1 - 1)
                    rax_93 = nullptr
                    uint64_t i_5
                    
                    do
                        int64_t* r9_16 = *rsi_13
                        int32_t j_3 = 0
                        
                        if (r9_16[1].d s> 0)
                            int64_t rcx_106 = 0
                            
                            do
                                int32_t* rdx_48 = *rbx_12
                                
                                if (*(rdx_48 + rcx_106 + 4) == 0)
                                    int32_t* rax_124 = *r9_16
                                    
                                    if (*(rax_124 + rcx_106 + 4) != 0)
                                        *(rdx_48 + rcx_106) = *(rax_124 + rcx_106)
                                        *(rdx_48 + rcx_106 + 4) = 1
                                
                                j_3 += 1
                                rcx_106 += 8
                            while (j_3 s< r9_16[1].d)
                            
                            rax_93 = nullptr
                        
                        rsi_13 += 8
                        i_5 = i_17
                        i_17 -= 1
                    while (i_5 != 1)
        else
            int64_t* rbx_11 = arg7
            rax_93 = sub_141deeaf0(rbx_11, rdx_45)
            
            if (r14_1 s> 1)
                void* rsi_12 = &rsi_7[1]
                uint64_t i_16 = zx.q(r14_1 - 1)
                rax_93 = nullptr
                uint64_t i_6
                
                do
                    int64_t* r8_29 = *rsi_12
                    int32_t j_4 = 0
                    
                    if (r8_29[1].d s> 0)
                        int32_t* rcx_103 = nullptr
                        
                        do
                            int64_t rdx_47 = *rbx_11
                            int64_t rax_121
                            
                            if (*(rcx_103 + rdx_47 + 4) != 0)
                                rax_121 = *r8_29
                            
                            if (*(rcx_103 + rdx_47 + 4) == 0 || *(rcx_103 + rax_121 + 4) == 0)
                                int64_t rax_122 = *r8_29
                                
                                if (*(rcx_103 + rax_122 + 4) != 0)
                                    *(rcx_103 + rdx_47) = *(rcx_103 + rax_122)
                                    *(rcx_103 + rdx_47 + 4) = 1
                            else
                                *(rcx_103 + rdx_47) =
                                    __minss_xmmss_memss(*(rcx_103 + rax_121), *(rcx_103 + rdx_47))
                            
                            j_4 += 1
                            rcx_103 = &rcx_103[2]
                        while (j_4 s< r8_29[1].d)
                        
                        rax_93 = nullptr
                    
                    rsi_12 += 8
                    i_6 = i_16
                    i_16 -= 1
                while (i_6 != 1)
    else
        void* rcx_83 = &(*rdi_6)[rbx_5]
        int64_t i_7 = 0
        uint64_t r8_26 = (rcx_83 - rdi_6 + 3) u>> 2
        
        if (rdi_6 u> rcx_83)
            r8_26 = 0
        
        if (r8_26 != 0)
            float (* rax_110)[0x4] = rdi_6
            
            if (r8_26 u>= 8)
                zmm1_1 = zx.o(0)
                arg5 = zx.o(0)
                
                do
                    i_7 += 8
                    zmm1_1 = _mm_add_ps(zmm1_1, *rax_110)
                    zmm0_1 = rax_110[1]
                    rax_110 = &rax_110[2]
                    arg5 = _mm_add_ps(arg5, zmm0_1)
                while (i_7 != (r8_26 & 0xfffffffffffffff8))
                
                zmm1_1 = _mm_add_ps(zmm1_1, arg5)
                zmm1_1[0].q = zmm1_1 u>> 0x40
                zmm7 = _mm_add_ps(zmm1_1, zmm1_1)
                zmm0_1 = _mm_shuffle_ps(zmm7, zmm7, 0xf5)
                zmm7[0] = zmm7[0] + zmm0_1[0]
            
            for (; i_7 != r8_26; i_7 += 1)
                zmm7[0] = zmm7[0] + *rax_110
                rax_110 = &(*rax_110)[1]
        
        bool cond:19_1 = zmm7[0] f<= zmm10.d
        zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0)
        
        if (not(cond:19_1))
            var_168[0].q = 0
            float (* r15_5)[0x4] = nullptr
            int32_t var_15c_1 = 0
            int32_t var_160_2 = rbx_5.d
            
            if (rbx_5.d s> 0)
                sub_1406105e0(&var_168)
                r15_5 = var_168[0].q
            
            int32_t rdx_40 = 0
            
            if (rbx_5.d s> 0)
                if (rbx_5.d u>= 0x10)
                    int64_t rcx_87 = sx.q((rbx_5 - 1).d)
                    
                    if (r15_5 u> &(*rdi_6)[rcx_87] || &(*r15_5)[rcx_87] u< rdi_6)
                        int32_t rcx_89 = rbx_5.d & 0x8000000f
                        
                        if (rcx_89 s< 0)
                            rcx_89 = ((rcx_89 - 1) | 0xfffffff0) + 1
                        
                        arg5 = _mm_rcp_ps(zmm6)
                        int64_t i_8 = 0
                        float (* rcx_93)[0x4] = rdi_6 - r15_5
                        void* rax_115 = &r15_5[1]
                        zmm0_1 = _mm_mul_ps(arg5, arg5)
                        arg5 = _mm_sub_ps(_mm_add_ps(arg5, arg5), _mm_mul_ps(zmm0_1, zmm6))
                        
                        do
                            zmm0_1 = *(rcx_93 + rax_115 - 0x10)
                            rdx_40 += 0x10
                            i_8 += 0x10
                            zmm1_1 = *(rcx_93 + rax_115)
                            rax_115 += 0x40
                            zmm0_1 = _mm_mul_ps(zmm0_1, arg5)
                            zmm1_1 = _mm_mul_ps(zmm1_1, arg5)
                            *(rax_115 - 0x50) = zmm0_1
                            zmm0_1 = *(rcx_93 + rax_115 - 0x30)
                            *(rax_115 - 0x40) = zmm1_1
                            zmm0_1 = _mm_mul_ps(zmm0_1, arg5)
                            zmm1_1 = _mm_mul_ps(*(rcx_93 + rax_115 - 0x20), arg5)
                            *(rax_115 - 0x30) = zmm0_1
                            *(rax_115 - 0x20) = zmm1_1
                        while (i_8 s< sx.q(rbx_5.d - rcx_89))
                
                if (rdx_40 s< rbx_5.d)
                    zmm12[0] = zmm12[0] / zmm7[0]
                    void* rcx_94 = &(*r15_5)[sx.q(rdx_40)]
                    uint64_t i_12 = zx.q(rbx_5.d - rdx_40)
                    uint64_t i_9
                    
                    do
                        rcx_94 += 4
                        zmm12[0] = zmm12[0] f* *(rcx_94 + rdi_6 - r15_5 - 4)
                        *(rcx_94 - 4) = zmm12[0]
                        i_9 = i_12
                        i_12 -= 1
                    while (i_9 != 1)
            
            *r15_5
            sub_141deeaf0(arg7, *rsi_7)
            
            if (r14_1 s> 1)
                void* rsi_9 = &rsi_7[1]
                uint64_t i_14 = zx.q(r14_1 - 1)
                void* r11_5 = &(*r15_5)[1]
                uint64_t i_10
                
                do
                    float zmm1_3 = *r11_5
                    int64_t* r10_7 = *rsi_9
                    
                    if (not(zmm1_3 f<= zmm10.d))
                        int32_t j_5 = 0
                        
                        if (arg7[1].d s> 0)
                            int64_t rdx_42 = *r10_7
                            int32_t* rcx_96 = nullptr
                            
                            do
                                int32_t* r9_14 = *arg7
                                int32_t* rax_117
                                
                                if (*(rcx_96 + r9_14 + 4) != 0 || *(rcx_96 + rdx_42 + 4) != 0)
                                    rax_117.b = 1
                                else
                                    rax_117.b = 0
                                
                                *(rcx_96 + r9_14 + 4) = rax_117.b
                                rax_117 = *arg7
                                j_5 += 1
                                rdx_42 = *r10_7
                                *(rcx_96 + rax_117) =
                                    zmm1_3 f* *(rcx_96 + rdx_42) f+ *(rcx_96 + rax_117)
                                rcx_96 = &rcx_96[2]
                            while (j_5 s< arg7[1].d)
                    
                    r11_5 += 4
                    rsi_9 += 8
                    i_10 = i_14
                    i_14 -= 1
                while (i_10 != 1)
            
            return sub_140a74f90(r15_5)
        
        *rdi_6
        rax_93 = sub_141deeaf0(arg7, *rsi_7)
        
        if (r14_1 s> 1)
            void* rsi_10 = &rsi_7[1]
            rax_93 = zx.q(r14_1 - 1)
            float* rdi_9 = &(*rdi_6)[1]
            uint64_t i_20 = zx.q(rax_93.d)
            uint64_t i_11
            
            do
                float zmm1_4 = *rdi_9
                int64_t* r10_8 = *rsi_10
                
                if (not(zmm1_4 f<= zmm10.d))
                    int32_t j_6 = 0
                    
                    if (arg7[1].d s> 0)
                        int64_t rdx_44 = *r10_8
                        int32_t* rcx_99 = nullptr
                        
                        do
                            int32_t* r9_15 = *arg7
                            
                            if (*(rcx_99 + r9_15 + 4) != 0 || *(rcx_99 + rdx_44 + 4) != 0)
                                rax_93.b = 1
                            else
                                rax_93.b = 0
                            
                            *(rcx_99 + r9_15 + 4) = rax_93.b
                            rax_93 = *arg7
                            j_6 += 1
                            rdx_44 = *r10_8
                            *(rcx_99 + rax_93) = zmm1_4 f* *(rcx_99 + rdx_44) f+ *(rcx_99 + rax_93)
                            rcx_99 = &rcx_99[2]
                        while (j_6 s< arg7[1].d)
                
                rdi_9 = &rdi_9[1]
                rsi_10 += 8
                i_11 = i_20
                i_20 -= 1
            while (i_11 != 1)

return rax_93
