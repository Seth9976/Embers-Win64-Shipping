// 函数: sub_1420ccfa0
// 地址: 0x1420ccfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rdi = 0
int32_t r10 = arg2[1].d
float arg_10 = -1f
int32_t* var_168 = nullptr
int32_t var_160 = 0

if (r10 != 0)
    int32_t* r9 = *arg2
    int64_t r8 = sx.q(r10 s/ 3) * 3
    int128_t zmm5 = r9[r8 + 2]
    int128_t zmm6 = r9[r8]
    int128_t zmm3 = r9[r8 + 1]
    int64_t rcx_4 = sx.q(r10 * 2 s/ 3) * 3
    float zmm2 = r9[rcx_4 + 1] f- zmm3.d
    zmm3.d = zmm3.d f- r9[1]
    float zmm1 = r9[rcx_4 + 2] f- zmm5.d
    zmm5.d = zmm5.d f- r9[2]
    float zmm4 = r9[rcx_4] f- zmm6.d
    zmm6.d = zmm6.d f- *r9
    int128_t zmm7
    zmm7.d = zmm3.d f* zmm1
    zmm3.d = zmm3.d f* zmm4
    float zmm0 = zmm5.d * zmm2
    zmm5.d = zmm5.d f* zmm4
    zmm7.d = zmm7.d f- zmm0
    zmm0 = zmm6.d
    zmm6.d = zmm6.d f* zmm2
    zmm6.d = zmm6.d f- zmm3.d
    int32_t var_1a0 = zmm7.d
    zmm5.d = zmm5.d f- zmm0 * zmm1
    int32_t var_198_1 = zmm6.d
    int32_t var_19c_1 = zmm5.d
    
    if (not(zmm5.d * arg3[1] + zmm7.d * *arg3 + zmm6.d * arg3[2] >= 0f))
        var_1a0 = (zmm7 ^ 0x80000000).d
        int32_t var_19c_2 = (zmm5 ^ 0x80000000).d
        int32_t var_198_2 = (zmm6 ^ 0x80000000).d
    
    int64_t var_1c8 = 0x3f800000
    int32_t var_1c0_1 = 0
    float var_148[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    int128_t zmm12_1
    int128_t zmm13_1
    zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_140adbd30(&var_148, &var_1a0, &var_1c8)
    int64_t var_190 = 0
    int64_t var_188_1 = 0
    int32_t r15_1 = 0
    *arg4 = (_mm_unpacklo_ps(zx.o(0), zmm11_1[0].q)).q
    int32_t r12_1 = 0
    arg4[1].d = 0
    int32_t rax_4 = arg2[1].d
    int32_t var_1c0_2 = 0
    float var_1b8[0x4]
    float var_108[0x4]
    float zmm0_1[0x4]
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (rax_4 s> 0)
        int32_t* rsi_1 = nullptr
        int32_t var_1ac_1 = 0
        
        do
            int64_t rax_5 = *arg2
            zmm0_1 = *arg4
            zmm0_1[0] = zmm0_1[0] f+ *(rsi_1 + rax_5)
            *arg4 = zmm0_1[0]
            float zmm1_1[0x4] = *(rsi_1 + rax_5 + 4)
            zmm1_1[0] = zmm1_1[0] f+ *(arg4 + 4)
            *(arg4 + 4) = zmm1_1[0]
            zmm0_1 = *(rsi_1 + rax_5 + 8)
            zmm0_1[0] = zmm0_1[0] f+ arg4[1].d
            arg4[1].d = zmm0_1[0]
            int64_t rbx_1 = *arg2
            zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_1408041d0(&var_148, &var_108)
            zmm1_1 = *(rsi_1 + rbx_1 + 4)
            zmm2_1 = *(rsi_1 + rbx_1 + 8)
            var_1b8[0] = (*(rsi_1 + rbx_1))[0]
            int64_t rbx_2 = sx.q(r15_1)
            zmm3_1 = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
            zmm3_1[0] = zmm1_1[0]
            int64_t var_178_1 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
            zmm3_1[0] = zmm2_1[0]
            int32_t var_170_1 = 0
            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
            r15_1 = (rbx_2 + 1).d
            float var_d8[0x4]
            zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_d8)
            var_188_1.d = r15_1
            float var_e8[0x4]
            zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), var_e8)
            float var_f8[0x4]
            zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), var_f8)
            var_1b8 = zmm3_1
            zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm0_1), 
                _mm_add_ps(zmm1_1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), var_108)))
            var_1c8.d = zmm2_1[0]
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float var_1c0_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
            var_1c8:4.d = zmm0_1[0]
            
            if (r15_1 s> var_188_1:4.d)
                sub_140638a00(&var_190)
                r15_1 = var_188_1.d
                rdi = var_190
            
            int64_t rcx_8 = rbx_2 * 3
            r12_1 += 1
            *(rdi + (rcx_8 << 2)) = var_1c8
            rsi_1 = &rsi_1[3]
            *(rdi + (rcx_8 << 2) + 8) = var_1c0_3
            rax_4 = arg2[1].d
        while (r12_1 s< rax_4)
    
    zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_4))
    zmm10_1[0] = zmm10_1[0] / zmm0_1[0]
    zmm10_1[0] = zmm10_1[0] f* *arg4
    zmm10_1[0] = zmm10_1[0] f* *(arg4 + 4)
    zmm10_1[0] = zmm10_1[0] f* arg4[1].d
    *arg4 = zmm10_1[0]
    *(arg4 + 4) = zmm10_1[0]
    arg4[1].d = zmm10_1[0]
    float zmm8_1[0x4]
    float zmm10_2[0x4]
    zmm8_1, zmm10_2 = sub_1420af030(&var_190, &var_168)
    int32_t* rbx_3 = var_168
    float zmm14_1 = -1f
    float zmm15_1 = -1f
    int64_t r11_1 = sx.q(var_160 - 1)
    float var_1d8
    float var_1d4
    int32_t var_1d0
    float zmm1_2[0x4]
    float zmm9_1
    
    if (r11_1 s<= 1)
        zmm9_1 = -1f
    else
        int64_t r9_1 = 1
        int128_t var_98_1 = zmm12_1
        float var_1a8_1 = -1f
        int128_t var_a8_1 = zmm13_1
        
        do
            int64_t rdx_7 = sx.q(rbx_3[r9_1 - 1]) * 3
            int64_t rcx_10 = sx.q(rbx_3[r9_1]) * 3
            float zmm6_1[0x4] = *(rdi + (rcx_10 << 2))
            float zmm7_1[0x4] = *(rdi + (rcx_10 << 2) + 4)
            zmm6_1[0] = zmm6_1[0] f- *(rdi + (rdx_7 << 2))
            zmm7_1[0] = zmm7_1[0] f- *(rdi + (rdx_7 << 2) + 4)
            zmm1_2 = *(rdi + (rcx_10 << 2) + 8)
            zmm1_2[0] = zmm1_2[0] f- *(rdi + (rdx_7 << 2) + 8)
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
            zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm1_2[0]
            float zmm4_1[0x4]
            float zmm5_1[0x4]
            
            if (not(zmm7_1[0] == zmm10_2[0]))
                if (zmm7_1[0] >= 9.99999994e-09f)
                    zmm4_1 = 0x3f000000
                    zmm5_1 = _mm_rsqrt_ss(zmm7_1[0], zmm7_1[0])
                    zmm2_1 = 0x3f000000
                    zmm7_1[0] = zmm7_1[0] * 0.5f
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
                    zmm2_1[0] = 0.5f - zmm7_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
                    zmm4_1[0] = 0.5f - zmm7_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
                    zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
                else
                    zmm6_1 = data_143dbb1f8
                    zmm7_1 = data_143dbb1fc
            
            zmm3_1 = zmm11_1
            zmm10_2 = zmm7_1 ^ zmm8_1
            zmm8_1 = zmm11_1
            zmm4_1 = zmm11_1
            zmm9_1 = zmm11_1[0]
            
            if (var_160 s> 1)
                void* rdx_8 = &rbx_3[1]
                uint64_t i_1 = zx.q(var_160 - 1)
                int64_t rcx_11 = sx.q(*rbx_3) * 3
                zmm12_1 = *(rdi + (rcx_11 << 2))
                zmm13_1 = *(rdi + (rcx_11 << 2) + 4)
                uint64_t i
                
                do
                    int64_t rcx_12 = sx.q(*rdx_8) * 3
                    zmm1_2 = *(rdi + (rcx_12 << 2))
                    zmm5_1 = *(rdi + (rcx_12 << 2) + 4)
                    zmm1_2[0] = zmm1_2[0] f- zmm12_1.d
                    zmm5_1[0] = zmm5_1[0] f- zmm13_1.d
                    zmm6_1[0] = zmm6_1[0] * zmm1_2[0]
                    zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
                    zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
                    
                    if (not(zmm7_1[0] < zmm9_1))
                        zmm4_1 = _mm_max_ss(zmm4_1[0], zmm7_1[0])
                    
                    zmm1_2[0] = zmm1_2[0] * zmm10_2[0]
                    zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
                    zmm2_1 = _mm_min_ss(zmm7_1[0], zmm9_1)
                    zmm1_2[0] = zmm1_2[0] + zmm6_1[0]
                    zmm9_1 = zmm2_1[0]
                    
                    if (not(zmm1_2[0] < zmm8_1[0]))
                        zmm3_1 = _mm_max_ss(zmm3_1[0], zmm1_2[0])
                    
                    rdx_8 += 4
                    zmm8_1 = _mm_min_ss(zmm1_2[0], zmm8_1[0])
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            zmm3_1[0] = zmm3_1[0] - zmm8_1[0]
            zmm8_1 = arg_10
            bool cond:0_1 = zmm8_1[0] < zmm11_1[0]
            zmm4_1[0] = zmm4_1[0] - zmm9_1
            zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
            
            if (cond:0_1 || not(zmm4_1[0] >= zmm8_1[0]))
                arg_10 = zmm4_1[0]
                zmm15_1 = zmm3_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
                var_1d0 = 0
                zmm6_1[0] = zmm6_1[0] * zmm4_1[0]
                zmm14_1 = zmm6_1[0]
                var_1a8_1 = zmm11_1[0]
                zmm9_1 = zmm11_1[0]
                var_1d4 = zmm7_1[0]
                var_1d8 = zmm6_1[0]
                zmm15_1 = zmm15_1 * zmm10_2[0]
                zmm14_1 = zmm14_1 * zmm3_1[0]
            else
                zmm9_1 = var_1a8_1
            
            zmm8_1 = 0x80000000
            r9_1 += 1
            zmm10_2 = 0x3f800000
        while (r9_1 s< r11_1)
    
    int32_t var_1ac_2 = 0
    var_1b8[0] = var_1d8[0]
    int64_t var_178_2 = 0
    zmm3_1 = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
    zmm3_1[0] = var_1d4[0]
    int32_t var_170_2 = 0
    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
    zmm3_1[0] = var_1d0[0]
    int64_t var_178_3 = 0
    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
    float var_118[0x4]
    zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_118)
    int32_t var_1ac_3 = 0
    float var_128[0x4]
    float zmm0_2[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), var_128)
    int32_t var_170_3 = 0
    float var_138[0x4]
    zmm1_2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), var_138)
    zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm0_2), 
        _mm_add_ps(zmm1_2, __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), var_148)))
    var_1d8 = zmm2_1[0]
    zmm0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float var_1d0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
    zmm3_1[0] = zmm15_1
    float var_1d4_1 = zmm0_2[0]
    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
    zmm2_1[0] = zmm14_1
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
    zmm2_1[0] = zmm9_1
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
    zmm8_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_118)
    zmm1_2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), var_138)
    zmm0_2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), var_128)
    zmm2_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), var_148)
    _mm_add_ps(_mm_add_ps(zmm8_1, zmm0_2), _mm_add_ps(zmm1_2, zmm2_1))
    float* rax_13
    float zmm8_2[0x4]
    rax_13, zmm8_2 = sub_140adf440(sub_140adbd30(&var_108, &var_1a0, &var_1d8), &var_1c8)
    float zmm2_2 = var_1d8
    float zmm1_3[0x4] = var_1d0_1
    *arg5 = *rax_13
    int64_t zmm0_3 = var_1d4_1
    zmm0_3.d = zmm0_3.d f* zmm0_3.d
    arg5[1].d = rax_13[2]
    zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
    *arg6 = _mm_sqrt_ss(0, zmm2_2 * zmm2_2 f+ zmm0_3.d + zmm1_3[0]).q.d
    zmm0_3 = zmm8_2[0].q
    result = arg7
    zmm1_3 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
    zmm0_3.d = zmm0_3.d f* zmm8_2[0]
    zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
    zmm8_2 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)
    zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
    zmm1_3[0] = zmm1_3[0] f+ zmm0_3.d
    zmm1_3[0] = zmm1_3[0] + zmm8_2[0]
    *result = _mm_sqrt_ss(0, zmm1_3[0]).q.d
    
    if (rdi != 0)
        result = sub_140a74f90(rdi)
    
    if (rbx_3 != 0)
        return sub_140a74f90(rbx_3)

return result
