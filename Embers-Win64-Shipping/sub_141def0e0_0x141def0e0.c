// 函数: sub_141def0e0
// 地址: 0x141def0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint32_t rcx
int64_t rdi_1

if (arg4 s< 0 || arg4 s>= *(arg1 + 0x40))
    rcx = 0
    rdi_1 = sx.q(arg4)
else
    rdi_1 = sx.q(arg4)
    rcx = zx.d(*(&(*(arg1 + 0x38))[rdi_1 * 2] + 0xc))

float var_98
uint32_t var_94
uint32_t zmm0[0x4]
float zmm1[0x4]

if (rcx == 1)
    float var_90_3
    
    if (arg7 == 0)
        zmm1 = *(*(arg6 + 0xa0) + sx.q(*arg5) * 0x30 + 0x10)
        var_98 = zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_90_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_94 = zmm0[0]
    else
        var_98.q = data_143dbb1f8.q
        var_90_3 = data_143dbb200
    
    arg3[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_98, var_90_3[0].q), 
        _mm_unpacklo_ps(var_94, zx.o(0)[0].q)[0].q)
    return 

float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (rcx == 2)
    zmm1 = *(*sub_141dec140(arg1, *arg2) + rdi_1 * 0x30 + 0x10)
    zmm0 = zmm1
    zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm0[0] = zmm0[0] f* zmm1[0]
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm2[0] = zmm2[0] f+ zmm0[0]
    zmm2[0] = zmm2[0] + zmm1[0]
    zmm4 = _mm_sqrt_ss(0, zmm2[0])
    
    if (not(zmm4[0] <= 9.99999975e-05f))
        zmm1 = *(*(arg6 + 0xa0) + sx.q(*arg5) * 0x30 + 0x10)
        zmm0 = zmm1
        zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm0[0] = zmm0[0] f* zmm1[0]
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm2[0] = zmm2[0] f+ zmm0[0]
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm4[0]
        zmm2[0] = zmm2[0] + zmm1[0]
        zmm3 = _mm_sqrt_ss(0, zmm2[0])
        zmm3[0] = zmm3[0] f* zmm0[0]
        arg3[1] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q), _mm_unpacklo_ps(zmm3, 0)[0].q), 
            arg3[1])
    
    return 

float zmm6[0x4]
float var_18_1[0x4] = zmm6
float zmm7[0x4]
float var_28_1[0x4] = zmm7
float zmm8[0x4]
float var_38_1[0x4] = zmm8
float zmm9[0x4]
float var_48_1[0x4] = zmm9

if (rcx == 3)
    if (arg7 == 0)
        void* rax_2 = sub_141dec140(arg1, *arg2)
        float zmm5[0x4] = *arg3
        float (* r9_4)[0x4] = sx.q(*arg5) * 0x30 + *(arg6 + 0xa0)
        int64_t rdx_4 = rdi_1 * 6
        zmm8 = *r9_4
        zmm3 = *(*rax_2 + (rdx_4 << 3))
        zmm9 = _mm_shuffle_ps(zmm8, zmm8, 0x1b)
        zmm6 = zmm3 ^ 0x80000000
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        zmm6[0] = zmm1[0]
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
        zmm6[0] = zmm2[0]
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm6[0] = zmm3[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
        var_98.o = zmm6
        zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x1b), zmm0)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm6)
        zmm7 = __mulps_xmmps_memps(zmm7, data_143f39110)
        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
        zmm7 = _mm_add_ps(zmm7, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm5, zmm5, 0x55))
        zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f39100)
        zmm6 = __mulps_xmmps_memps(zmm6, data_143f390f0)
        zmm7 = _mm_add_ps(zmm7, zmm1)
        zmm1 = _mm_shuffle_ps(zmm8, zmm8, 0x4e)
        zmm7 = _mm_add_ps(zmm7, zmm6)
        zmm9 = _mm_mul_ps(zmm9, _mm_shuffle_ps(zmm7, zmm7, 0))
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), zmm8)
        zmm9 = __mulps_xmmps_memps(zmm9, data_143f39110)
        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xb1)
        zmm9 = _mm_add_ps(zmm9, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm7, zmm7, 0x55))
        zmm8 = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm7, zmm7, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f39100)
        zmm8 = __mulps_xmmps_memps(zmm8, data_143f390f0)
        zmm9 = _mm_add_ps(_mm_add_ps(zmm9, zmm1), zmm8)
        *arg3 = zmm9
        zmm1 = *(*rax_2 + (rdx_4 << 3) + 0x10)
        zmm5 = r9_4[1]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm2 = zmm5
        zmm2[0] = zmm2[0] - zmm1[0]
        zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm4[0] = zmm4[0] f- zmm0[0]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm0 = arg3[1]
        zmm3 = zmm0
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        zmm3[0] = zmm3[0] + zmm2[0]
        zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm5[0] = zmm5[0] - zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        zmm2[0] = zmm2[0] + zmm4[0]
        zmm0[0] = zmm0[0] f+ zmm5[0]
        zmm5 = 0x3f800000
        zmm2 = _mm_unpacklo_ps(zmm2, 0)
        arg3[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), zmm2[0].q)
        zmm1 = *(*rax_2 + (rdx_4 << 3) + 0x20)
        var_98.o = zmm1
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
            zmm2 = 0x3f800000
            zmm2[0] = 1f / zmm1[0]
        else
            zmm2 = zx.o(0)
        
        zmm1 = var_94
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
            zmm6 = 0x3f800000
            zmm6[0] = 1f / zmm1[0]
        else
            zmm6 = zx.o(0)
        
        int32_t var_90
        zmm1 = var_90
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
            zmm5[0] = 1f / zmm1[0]
        else
            zmm5 = zx.o(0)
        
        zmm4 = r9_4[2]
        zmm1 = arg3[2]
        zmm3 = zmm4
        zmm3[0] = zmm3[0] * zmm2[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        zmm3[0] = zmm3[0] * zmm1[0]
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
        zmm4[0] = zmm4[0] * zmm5[0]
        zmm2[0] = zmm2[0] f* zmm0[0]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm4[0] = zmm4[0] * zmm1[0]
        zmm2 = _mm_unpacklo_ps(zmm2, 0)
        zmm1 = _mm_mul_ps(zmm9, zmm9)
        arg3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm4[0].q), zmm2[0].q)
        zmm5 = data_143f390d0
        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
        zmm1 = _mm_rsqrt_ps(zmm4)
        zmm3 = _mm_mul_ps(zmm4, zmm5)
        zmm2 = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), zmm1)
        zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
        zmm0 = _mm_cmpeq_ps(data_143f390e0, zmm4, 2)
        *arg3 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, zmm2), zmm2), zmm9) ^ data_143f390c0, zmm0)
            ^ data_143f390c0
else if (rcx == 4 && arg7 == 0)
    int64_t* rax
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    rax, zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_141ea43a0(arg6, arg2)
    int64_t* r8_1 = rax
    
    if (rax[1].d s> 0 && rax[3].d == *(arg6 + 8))
        rax = sx.q(*(rax[2] + (sx.q(*arg5) << 2)))
        
        if (rax.d != 0xffffffff)
            float zmm3_1[0x4] = arg3[1]
            float var_78_1[0x4] = zmm12_1
            int128_t* rcx_10 = rax * 0x30 + *r8_1
            float var_88_1[0x4] = zmm13_1
            zmm12_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            zmm13_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            zmm3_1[0] = zmm3_1[0] f- *(rcx_10 + 0x14)
            zmm12_1[0] = zmm12_1[0] f- *(rcx_10 + 0x18)
            zmm13_1[0] = zmm13_1[0] f- *(rcx_10 + 0x1c)
            float var_90_1
            uint128_t zmm5_1
            
            if (_mm_and_ps(zmm3_1, 0x7fffffff)[0] > 0.00100000005f)
            label_141def240:
                zmm9 = *(rcx_10 + 4)
                zmm6 = *(rcx_10 + 8)
                zmm8 = *rcx_10
                float zmm4_1[0x4] = *(rcx_10 + 0xc)
                zmm5_1 = rcx_10[1].d
                zmm12_1[0] = zmm12_1[0] * zmm6[0]
                float var_58_1[0x4] = zmm10_1
                float var_68_1[0x4] = zmm11_1
                zmm3_1[0] = zmm3_1[0] * zmm6[0]
                zmm13_1[0] = zmm13_1[0] * zmm9[0]
                zmm12_1[0] = zmm12_1[0] * zmm8[0]
                zmm13_1[0] = zmm13_1[0] - zmm12_1[0]
                zmm13_1[0] = zmm13_1[0] * zmm8[0]
                zmm3_1[0] = zmm3_1[0] - zmm13_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm9[0]
                zmm13_1[0] = zmm13_1[0] + zmm13_1[0]
                zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm13_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm3_1[0]
                zmm12_1[0] = zmm12_1[0] + zmm12_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm6[0]
                zmm13_1[0] = zmm13_1[0] * zmm9[0]
                zmm13_1[0] = zmm13_1[0] * zmm6[0]
                zmm12_1[0] = zmm12_1[0] * zmm9[0]
                zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
                zmm12_1[0] = zmm12_1[0] * zmm8[0]
                zmm12_1[0] = zmm12_1[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm3_1[0]
                zmm13_1[0] = zmm13_1[0] - zmm12_1[0]
                zmm3_1[0] = zmm3_1[0] * zmm8[0]
                zmm4_1[0] = zmm4_1[0] * zmm12_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm12_1[0]
                zmm3_1[0] = zmm3_1[0] - zmm13_1[0]
                zmm12_1[0] = zmm12_1[0] f* zmm5_1.d
                zmm4_1[0] = zmm4_1[0] + zmm13_1[0]
                zmm13_1[0] = zmm13_1[0] + zmm4_1[0]
                var_98 = zmm12_1[0]
                zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
                zmm13_1[0] = zmm13_1[0] f* zmm5_1.d
                zmm3_1[0] = zmm3_1[0] f* zmm5_1.d
                float var_94_1 = zmm13_1[0]
                var_90_1 = zmm3_1[0]
            else
                if (_mm_and_ps(zmm12_1, 0x7fffffff)[0] > 0.00100000005f)
                    goto label_141def240
                
                if (_mm_and_ps(zmm13_1, 0x7fffffff)[0] > 0.00100000005f)
                    goto label_141def240
                
                var_98.q = rcx_10[2].q
                var_90_1 = *(rcx_10 + 0x28)
            
            zmm5_1 = zx.o(var_98.q)
            float zmm0_1[0x4] = zmm5_1
            float zmm2_1[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), 0)
            arg3[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, var_90_1[0].q), zmm2_1[0].q)
