// 函数: sub_1414239a0
// 地址: 0x1414239a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* rdi = arg2
uint128_t zmm6 = *arg1
uint128_t zmm7 = *(arg1 + 4)
float zmm8[0x4] = *(arg1 + 8)
uint128_t zmm9 = *(arg1 + 0xc)
float arg_18 = *(arg1 + 0x14)
uint128_t zmm10 = arg1[1].d
float var_160 = *(arg1 + 0x24)
uint128_t zmm11 = *(arg1 + 0x38)
float var_154 = *(arg1 + 0x34)
float arg_8 = (*(arg1 + 0x18))[0]
uint128_t zmm15 = arg1[3].d
int32_t var_168 = (*(arg1 + 0x1c)).d
float var_150 = *(arg1 + 0x3c)
int32_t var_14c = zmm6.d
int32_t var_148 = zmm7.d
float var_144 = zmm8[0]
int32_t var_140 = zmm9.d
int32_t var_13c = zmm10.d
int32_t var_164 = arg1[2].d.d
float var_15c = (*(arg1 + 0x28))[0]
int32_t var_158 = (*(arg1 + 0x2c)).d

if (arg3 s> 0)
    int32_t* r10_1 = arg6
    int32_t* r9 = arg4 + 8
    int32_t* rbx_2 = arg5 - r10_1
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        uint128_t zmm3 = zx.o(*rdi)
        float zmm4[0x4] = zmm6
        uint128_t zmm5 = zx.o(*(rdi + 0xc))
        float rax = rdi[1].d
        rdi = &rdi[3]
        zmm4[0] = zmm4[0] f* zmm3.d
        zmm8[0] = zmm8[0] f* zmm3.d
        float rax_1 = *(rdi - 4)
        uint128_t zmm2
        zmm2.d = zmm9.d f* zmm3.d
        float zmm0 = zmm7.d f* zmm3.d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        uint64_t var_138_1 = zmm3.q
        zmm3 = zmm6
        zmm6 = arg_18
        temp0_1[0] = zmm0
        zmm3.d = zmm3.d f* zmm5.d
        zmm0 = zmm7.d
        zmm7 = arg_8
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm8[0]
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        float zmm1[0x4] = zmm8
        zmm8 = var_168
        temp0_3[0] = zmm2.d
        zmm1[0] = zmm1[0] f* zmm5.d
        zmm2.d = zmm9.d f* zmm5.d
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = zmm0 f* zmm5.d
        float var_118[0x4] = temp0_4
        zmm0 = var_138_1:4.d
        zmm4 = zmm10
        zmm4[0] = zmm4[0] * zmm0
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm1[0]
        zmm1 = zmm6
        float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        _mm_shuffle_ps(zmm3, zmm3, 0x27)
        zmm3.d = zmm2.d
        zmm1[0] = zmm1[0] * zmm0
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        zmm2.d = zmm7.d f* zmm0
        temp0_7[0] = zmm1[0]
        uint128_t var_108_1 = zmm3
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
        temp0_10[0] = zmm2.d
        zmm3.d = zmm8.d f* zmm0
        zmm0 = zmm5.q:4.d
        zmm1 = zmm6
        zmm5.d = zmm10.d f* zmm0
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
        temp0_11[0] = zmm3.d
        zmm1[0] = zmm1[0] * zmm0
        _mm_shuffle_ps(zmm5, zmm5, 0xe1)
        zmm2.d = zmm7.d f* zmm0
        zmm5.d = zmm1[0]
        zmm3.d = zmm8.d f* zmm0
        _mm_shuffle_ps(zmm5, zmm5, 0xc6)
        zmm5.d = zmm2.d
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
        _mm_shuffle_ps(zmm5, zmm5, 0x27)
        zmm5.d = zmm3.d
        float var_f8[0x4] = temp0_14
        uint128_t var_e8_1 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
        zmm5 = var_164
        zmm4 = zmm5
        zmm6 = var_160
        zmm10 = zx.o(0)
        zmm7 = var_15c
        zmm1 = zmm6
        zmm8 = var_158
        zmm4[0] = zmm4[0] * rax
        int64_t r8 = 0
        zmm1[0] = zmm1[0] * rax
        zmm2.d = zmm7.d f* rax
        float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        temp0_17[0] = zmm1[0]
        zmm3.d = zmm8.d f* rax
        zmm1 = zmm6
        zmm5.d = zmm5.d f* rax_1
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
        temp0_18[0] = zmm2.d
        zmm1[0] = zmm1[0] * rax_1
        _mm_shuffle_ps(zmm5, zmm5, 0xe1)
        zmm2.d = zmm7.d f* rax_1
        zmm5.d = zmm1[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
        _mm_shuffle_ps(zmm5, zmm5, 0xc6)
        temp0_20[0] = zmm3.d
        zmm5.d = zmm2.d
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x39)
        _mm_shuffle_ps(zmm5, zmm5, 0x27)
        zmm3.d = zmm8.d f* rax_1
        float var_d8[0x4] = temp0_22
        zmm4 = 0x7f7fffff
        zmm5.d = zmm3.d
        uint128_t var_c8_1 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
        zmm5 = 0x7f7fffff
        zmm2 = 0xff7fffff
        zmm1 = 0xff7fffff
        
        while (true)
            zmm8 = zmm4
            zmm4 = var_150
            uint64_t rdx_1 = zx.q(*(r8 + 0x142f7e7d8)) * 2
            zmm6 = zmm1
            uint64_t rcx_1 = zx.q(*(r8 + 0x142f7e7f8)) * 2
            zmm1 = var_154
            uint64_t rax_3 = zx.q(*(r8 + 0x142f7e818)) * 2
            zmm4[0] = zmm4[0] + var_118[3 + rdx_1 * 2]
            zmm1[0] = zmm1[0] + var_118[1 + rdx_1 * 2]
            zmm7 = zmm2
            zmm3.d = zmm11.d f+ var_118[2 + rdx_1 * 2]
            zmm9 = zmm5
            zmm2.d = zmm15.d f+ var_118[rdx_1 * 2]
            zmm4[0] = zmm4[0] + var_f8[3 + rcx_1 * 2]
            zmm1[0] = zmm1[0] + var_f8[1 + rcx_1 * 2]
            zmm3.d = zmm3.d f+ var_f8[2 + rcx_1 * 2]
            zmm2.d = zmm2.d f+ var_f8[rcx_1 * 2]
            zmm4[0] = zmm4[0] + var_d8[3 + rax_3 * 2]
            zmm1[0] = zmm1[0] + var_d8[1 + rax_3 * 2]
            zmm3.d = zmm3.d f+ var_d8[2 + rax_3 * 2]
            zmm2.d = zmm2.d f+ var_d8[rax_3 * 2]
            
            if (zmm4[0] f< zmm11.d)
                result = 1
                break
            
            r8 += 4
            zmm0 = 1f / zmm4[0]
            zmm3.d = zmm3.d f* zmm0
            zmm2.d = zmm2.d f* zmm0
            zmm1[0] = zmm1[0] * zmm0
            zmm3 = _mm_max_ss(zmm3.d, zmm10.d)
            zmm5 = zmm2
            zmm2 = _mm_max_ss(zmm2.d, zmm7.d)
            zmm5 = _mm_min_ss(zmm5.d, zmm9.d)
            zmm4 = zmm1
            zmm1 = _mm_max_ss(zmm1[0], zmm6.d)
            zmm4 = _mm_min_ss(zmm4[0], zmm8[0])
            zmm10 = zmm3
            
            if (r8 s>= 0x20)
                zmm5.d = zmm5.d f+ 0.5f
                zmm4[0] = zmm4[0] + 0.5f
                zmm2.d = zmm2.d f+ 0.5f
                zmm1[0] = zmm1[0] + 0.5f
                
                if (not(zmm5.d f> 0f))
                    zmm5 = zx.o(0)
                
                if (not(zmm4[0] > 0f))
                    zmm4 = zx.o(0)
                
                if (not(zmm2.d f< 383f))
                    zmm2 = 0x43bf8000
                
                if (not(zmm1[0] < 255f))
                    zmm1 = 0x437f0000
                
                *(rbx_2 + r10_1) = zmm3.d
                r9[-2] = int.d(zmm5.d)
                r9[-1] = int.d(zmm4[0])
                *r9 = int.d(zmm2.d)
                r9[1] = int.d(zmm1[0])
                result = 0
                break
        
        zmm6 = var_14c
        r9 = &r9[4]
        zmm7 = var_148
        zmm8 = var_144
        zmm9 = var_140
        zmm10 = var_13c
        *r10_1 = result
        r10_1 = &r10_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
