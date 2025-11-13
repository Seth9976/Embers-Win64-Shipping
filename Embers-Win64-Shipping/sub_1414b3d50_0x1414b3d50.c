// 函数: sub_1414b3d50
// 地址: 0x1414b3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x18d0)
uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_38 = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
float zmm10[0x4]
float var_68[0x4] = zmm10
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm12[0x4]
float var_88[0x4] = zmm12
uint128_t zmm13
uint128_t var_98 = zmm13
int64_t r10 = sx.q(*(arg2 + 0x28)) * 0x78
int32_t r9_1 = *(data_143ed9d50 + 4) & 0xf
void** const var_128
int32_t arg_8
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r9_1 != 2)
    uint64_t result
    
    if (r9_1 == 3)
        int64_t rdi_1 = 0
        void** rbx_1 = *(r10 + r11 + 0x68)
        result = &rbx_1[sx.q(*(r10 + r11 + 0x70))]
        uint64_t rsi_2 = sx.q(*(r10 + r11 + 0x70)) << 3 u>> 3
        
        if (rbx_1 u> result)
            rsi_2 = 0
        
        if (rsi_2 != 0)
            zmm6 = 0x4a000000
            
            do
                float* r9_3 = *(*rbx_1 + 8) + 0xc0
                result, zmm6 = sub_141477700(&arg_8, arg1, arg2, r9_3, zmm6.d, r9_3[6].d)
                rdi_1 += 1
                rbx_1 = &rbx_1[1]
            while (rdi_1 != rsi_2)
    else
        result = zx.q(r9_1 - 1)
        
        if (result.d u<= 2)
            zmm6 = *(arg3 + 0x120)
            zmm7 = *(arg3 + 0x130)
            void* var_120_1 = arg1
            zmm9 = *(arg3 + 0x140)
            var_128 = &data_142f29fd0
            zmm8 = data_142d4cc20
            zmm10 = data_142d4cc00
            zmm11 = data_142d4cc30
            zmm13 = *(arg3 + 0x150)
            void* var_118_1 = arg1
            zmm4 = *(arg3 + 0x5c)
            int64_t var_110_1 = (zx.o(0)).q
            int64_t var_100_1 = 0
            zmm2 = *(arg3 + 0x58) ^ 0x80000000
            zmm12 = *(arg3 + 0x54) ^ 0x80000000
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm11)
            zmm5 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
            zmm12[0] = zmm2.d
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm10)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0x55), zmm8)
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xc6)
            zmm5 = _mm_mul_ps(zmm5, zmm8)
            zmm12[0] = (zmm4 ^ 0x80000000)[0]
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x27)
            zmm12[0] = 0x3f800000
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x39)
            zmm5 = _mm_add_ps(zmm5, zmm0)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm8)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm10)
            zmm5 = _mm_add_ps(zmm5, zmm1)
            zmm6 = _mm_mul_ps(zmm6, zmm12)
            float var_c8_1[0x4] = zmm12
            zmm2 = _mm_add_ps(zmm2, zmm0)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm11)
            zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm5 = _mm_add_ps(zmm5, zmm6)
            zmm0 = _mm_mul_ps(zmm0, zmm10)
            zmm2 = _mm_add_ps(zmm2, zmm1)
            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), zmm12)
            zmm3 = _mm_add_ps(zmm3, zmm0)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm11)
            zmm2 = _mm_add_ps(zmm2, zmm7)
            zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm12)
            zmm3 = _mm_add_ps(zmm3, zmm1)
            float var_f8[0x4] = zmm5
            zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0)
            uint128_t var_e8_1 = zmm2
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x55), zmm8)
            float var_d8_1[0x4] = _mm_add_ps(zmm3, zmm9)
            int32_t r8 = data_14399f648
            zmm0 = _mm_mul_ps(zmm0, zmm10)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xaa), zmm11)
            zmm2 = _mm_add_ps(zmm2, zmm0)
            zmm13 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), zmm12)
            uint128_t var_c8_2 = _mm_add_ps(_mm_add_ps(zmm2, zmm1), zmm13)
            result = sub_141f853c0(&var_128, &var_f8, r8, 0)
            
            if (var_110_1 != 0)
                int32_t temp1_1 = *(var_110_1 + 8)
                *(var_110_1 + 8) -= 1
                
                if (temp1_1 == 1)
                    return (**var_110_1)(var_110_1, 1)
    
    return result

void** rdx_2 = *(r10 + r11 + 0x68)
zmm0 = zx.o(0)
int64_t rax_7 = sx.q(*(r10 + r11 + 0x70))
zmm2 = zx.o(0)
arg_8 = 0
zmm3 = zx.o(0)
uint128_t var_178_1 = zx.o(0)
void* r8_2 = &rdx_2[rax_7]
zmm1 = zx.o(0)

if (rdx_2 != r8_2)
    uint128_t zmm14
    uint128_t var_a8_1 = zmm14
    uint128_t zmm15
    uint128_t var_b8_1 = zmm15
    
    while (true)
        uint128_t* rcx_4 = *(*rdx_2 + 8) + 0xc0
        void** const* rax_10
        
        if (zmm2.d f<= zmm3[0])
            int128_t var_110
            var_110.d = *(rcx_4 + 0x18)
            rax_10 = &var_128
            var_128.o = *rcx_4
            uint64_t var_118_2 = rcx_4[1].q
        else
            zmm14 = var_178_1.d
            zmm2 = var_178_1:0xc.d
            zmm9 = var_178_1:4.d
            zmm6.d = zmm14.d f- zmm2.d
            zmm15 = var_178_1:8.d
            zmm2.d = zmm2.d f+ zmm14.d
            zmm8 = zmm9
            zmm8[0] = zmm8[0] f- zmm1.d
            zmm7.d = zmm15.d f- zmm0.d
            zmm12 = zmm6
            zmm1.d = zmm1.d f+ zmm9[0]
            zmm11 = zmm8
            zmm0.d = zmm0.d f+ zmm15.d
            zmm10 = zmm7
            
            if (not(zmm6.d f<= zmm2.d))
                zmm12 = zmm2
            
            if (not(zmm8[0] f<= zmm1.d))
                zmm11 = zmm1
            
            if (not(zmm7.d f<= zmm0.d))
                zmm10 = zmm0
            
            if (not(zmm6.d f>= zmm2.d))
                zmm6 = zmm2
            
            if (not(zmm8[0] f>= zmm1.d))
                zmm8 = zmm1
            
            if (not(zmm7.d f>= zmm0.d))
                zmm7 = zmm0
            
            zmm13 = *rcx_4
            zmm5 = *(rcx_4 + 0xc)
            zmm3 = zmm13
            zmm0 = rcx_4[1].d
            zmm3[0] = zmm3[0] - zmm5[0]
            zmm1 = *(rcx_4 + 0x14)
            zmm2.d = (*(rcx_4 + 4)).d f- zmm0.d
            zmm4 = *(rcx_4 + 8)
            zmm4[0] = zmm4[0] f- zmm1.d
            
            if (not(zmm12[0] <= zmm3[0]))
                zmm12 = zmm3
            
            if (not(zmm11[0] f<= zmm2.d))
                zmm11 = zmm2
            
            if (not(zmm10[0] <= zmm4[0]))
                zmm10 = zmm4
            
            if (not(zmm6.d f>= zmm3[0]))
                zmm6 = zmm3
            
            if (not(zmm8[0] f>= zmm2.d))
                zmm8 = zmm2
            
            if (not(zmm7.d f>= zmm4[0]))
                zmm7 = zmm4
            
            zmm0.d = zmm0.d f+ *(rcx_4 + 4)
            zmm1.d = zmm1.d f+ *(rcx_4 + 8)
            zmm2.d = zmm13.d f+ zmm5[0]
            
            if (not(zmm12[0] f<= zmm2.d))
                zmm12 = zmm2
            
            if (not(zmm11[0] f<= zmm0.d))
                zmm11 = zmm0
            
            if (not(zmm10[0] f<= zmm1.d))
                zmm10 = zmm1
            
            if (not(zmm6.d f>= zmm2.d))
                zmm6 = zmm2
            
            if (not(zmm8[0] f>= zmm0.d))
                zmm8 = zmm0
            
            if (not(zmm7.d f>= zmm1.d))
                zmm7 = zmm1
            
            zmm6.d = zmm6.d f- zmm12[0]
            zmm5 = *(rcx_4 + 4)
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm4 = *(rcx_4 + 8)
            zmm7.d = zmm7.d f- zmm10[0]
            zmm3 = zmm6
            zmm6.d = zmm6.d f* zmm6.d
            zmm3[0] = zmm3[0] * 0.5f
            zmm2.d = zmm8.d f* 0.5f
            zmm1.d = zmm7.d f* 0.5f
            zmm3[0] = zmm3[0] + zmm12[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm0 = _mm_unpacklo_ps(zmm3, zmm2.q)
            zmm2.d = zmm2.d f+ zmm11[0]
            int32_t var_150_1 = zmm1.d
            zmm1.d = zmm1.d f+ zmm10[0]
            zmm6.d = zmm6.d f+ zmm8[0]
            uint64_t var_13c_1 = zmm0.q
            zmm13.d = zmm13.d f- zmm3[0]
            zmm7.d = zmm7.d f* zmm7.d
            int32_t var_134_1 = var_150_1
            zmm5[0] = zmm5[0] f- zmm2.d
            float var_148 = zmm3[0]
            zmm4[0] = zmm4[0] f- zmm1.d
            int32_t var_140_1 = zmm1.d
            zmm15.d = zmm15.d f- zmm1.d
            zmm13.d = zmm13.d f* zmm13.d
            zmm9[0] = zmm9[0] f- zmm2.d
            int32_t var_144_1 = zmm2.d
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm6.d = zmm6.d f+ zmm7.d
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm14.d = zmm14.d f- zmm3[0]
            zmm15.d = zmm15.d f* zmm15.d
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm5[0] = zmm5[0] f+ zmm13.d
            zmm6.d = zmm6.d f* 0.25f
            zmm14.d = zmm14.d f* zmm14.d
            zmm5[0] = zmm5[0] + zmm4[0]
            zmm6 = _mm_sqrt_ss(zmm6.d, zmm6.d)
            zmm1 = _mm_sqrt_ss(0, zmm5[0])
            zmm9[0] = zmm9[0] f+ zmm14.d
            zmm9[0] = zmm9[0] f+ zmm15.d
            zmm1.d = zmm1.d f+ *(rcx_4 + 0x18)
            zmm0.d = _mm_sqrt_ss(0, zmm9[0]).d f+ arg_8
            zmm1 = _mm_max_ss(zmm1.d, zmm0.d)
            
            if (zmm6.d f> zmm1.d)
                int32_t var_130_2 = zmm1.d
                rax_10 = &var_148
                zmm3 = zx.o(0)
            else
                int32_t var_130_1 = zmm6.d
                rax_10 = &var_148
                zmm3 = zx.o(0)
        
        rdx_2 = &rdx_2[1]
        zmm2 = rax_10[3].d
        uint64_t var_168_1 = rax_10[2]
        var_178_1 = *rax_10
        
        if (rdx_2 == r8_2)
            break
        
        zmm0 = var_168_1:4.d
        zmm1 = var_168_1.d
        arg_8 = zmm2.d

uint64_t var_158 = var_178_1.q
int32_t var_150_2 = var_178_1:8.d
return sub_141477700(&arg_8, arg1, arg2, &var_158, 0x4a000000, zmm2.d)
