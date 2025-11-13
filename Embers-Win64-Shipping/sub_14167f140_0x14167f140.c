// 函数: sub_14167f140
// 地址: 0x14167f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
float zmm13[0x4] = *arg3
void* r15 = arg1
int32_t rbx = 0
int96_t var_2a8 = arg3[1].12
float temp0[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
int32_t var_1a0 = 0
int32_t var_19c
__builtin_memset(&var_19c, 0, 0x10)
uint64_t r12 = zx.q(var_1a0)
int128_t var_10c_1
__builtin_memset(&var_10c_1, 0, 0x24)
uint128_t* rsi = arg4
int128_t var_13c_1
__builtin_memset(&var_13c_1, 0, 0x24)
int128_t zmm0 = data_142d3f7e0
float var_288 = (zmm13 ^ 0x80000000)[0]
float var_2e0 = (temp0 ^ 0x80000000)[0]
float zmm12[0x4] = zx.o(0)
float var_2f8 = (temp0_1 ^ 0x80000000)[0]
int128_t var_188
__builtin_memset(&var_188, 0, 0x24)
int128_t var_158 = zmm0
float var_208[0x4] = zmm13
int64_t var_2f0
float zmm7_1[0x4]
uint128_t zmm8_1
float zmm9[0x4]
float zmm11_1[0x4]
zmm7_1, zmm8_1, zmm9, zmm11_1 = sub_141758e70(r15, &var_2f0, arg10, arg9)
float zmm4[0x4] = *(arg10 + 4) ^ zmm9
float zmm6[0x4] = *(arg10 + 8) ^ zmm9
float zmm1[0x4] = *arg10 ^ zmm9
int64_t var_118 = var_2f0
zmm11_1[0] = zmm11_1[0] * zmm6[0]
int32_t var_2e8
int32_t var_110 = var_2e8
zmm7_1[0] = zmm7_1[0] * zmm4[0]
zmm7_1[0] = zmm7_1[0] * zmm1[0]
zmm11_1[0] = zmm11_1[0] - zmm7_1[0]
float zmm0_1[0x4] = zmm8_1
zmm0_1[0] = zmm0_1[0] * zmm6[0]
zmm7_1[0] = zmm7_1[0] - zmm0_1[0]
uint128_t zmm2
zmm2.d = zmm8_1.d f* zmm4[0]
zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
zmm11_1[0] = zmm11_1[0] * zmm1[0]
zmm9 = zmm11_1
float temp0_2[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
zmm2.d = zmm2.d f- zmm11_1[0]
zmm7_1[0] = zmm7_1[0] * zmm11_1[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
zmm2.d = zmm2.d f+ zmm2.d
zmm9[0] = zmm9[0] f* zmm2.d
zmm9[0] = zmm9[0] - zmm7_1[0]
temp0_2[0] = temp0_2[0] * zmm11_1[0]
temp0_2[0] = temp0_2[0] + zmm1[0]
temp0_2[0] = temp0_2[0] * zmm7_1[0]
zmm9[0] = zmm9[0] + temp0_2[0]
zmm0_1 = zmm8_1
zmm0_1[0] = zmm0_1[0] f* zmm2.d
temp0_2[0] = temp0_2[0] + zmm4[0]
zmm8_1.d = zmm8_1.d f* zmm7_1[0]
zmm7_1[0] = zmm7_1[0] - zmm0_1[0]
zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
zmm7_1[0] = zmm7_1[0] + temp0_2[0]
temp0_2[0] = temp0_2[0] f* zmm2.d
zmm8_1.d = zmm8_1.d f- zmm11_1[0]
zmm9[0] = zmm9[0] * zmm9[0]
temp0_2[0] = temp0_2[0] + zmm6[0]
zmm2.d = zmm7_1.d f* zmm7_1[0]
zmm8_1.d = zmm8_1.d f+ temp0_2[0]
zmm2.d = zmm2.d f+ zmm9[0]
zmm1 = zmm8_1
zmm1[0] = zmm1[0] f* zmm8_1.d
zmm2.d = zmm2.d f+ zmm1[0]

if (zmm2.d f> 1.17549435e-38f)
    zmm1 = arg11
    zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
    zmm2.d = 1f / _mm_sqrt_ss(zx.o(0)[0], zmm2.d)[0]
    zmm7_1[0] = zmm7_1[0] f* zmm2.d
    zmm9[0] = zmm9[0] f* zmm2.d
    zmm7_1[0] = zmm7_1[0] * zmm1[0]
    zmm8_1.d = zmm8_1.d f* zmm2.d
    zmm7_1[0] = zmm7_1[0] f+ *(arg2 + 0x14)
    zmm9[0] = zmm9[0] * zmm1[0]
    zmm8_1.d = zmm8_1.d f* zmm1[0]
    zmm9[0] = zmm9[0] f+ *(arg2 + 0x10)
    zmm11_1 = zmm7_1
    zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x18)
else
    zmm0_1 = zx.o(*(arg2 + 0x10))
    zmm8_1 = *(arg2 + 0x18)
    zmm9 = zmm0_1.q.d
    zmm11_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)

float var_308 = 0f
temp0[0] = temp0[0] f* zmm8_1.d
temp0_1[0] = temp0_1[0] * zmm11_1[0]
float zmm3_1[0x4] = zmm13
zmm3_1[0] = zmm3_1[0] * zmm11_1[0]
temp0[0] = temp0[0] - temp0_1[0]
temp0_1[0] = temp0_1[0] * zmm9[0]
zmm13[0] = zmm13[0] f* zmm8_1.d
temp0[0] = temp0[0] + temp0[0]
temp0_1[0] = temp0_1[0] - zmm13[0]
temp0[0] = temp0[0] * zmm9[0]
temp0_2[0] = temp0_2[0] * temp0[0]
zmm3_1[0] = zmm3_1[0] - temp0[0]
temp0_1[0] = temp0_1[0] * temp0[0]
temp0_1[0] = temp0_1[0] + temp0_1[0]
float zmm15[0x4] = var_2a8:8.d
temp0_2[0] = temp0_2[0] + zmm9[0]
zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm2.d = zmm13.d f* temp0_1[0]
temp0[0] = temp0[0] * zmm3_1[0]
temp0[0] = temp0[0] - temp0_1[0]
zmm0_1 = zmm13
zmm13 = var_2a8.d
zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
temp0[0] = temp0[0] + temp0_2[0]
temp0_1[0] = temp0_1[0] - zmm0_1[0]
temp0_2[0] = temp0_2[0] * temp0_1[0]
float zmm14[0x4] = var_2a8:4.d
temp0[0] = temp0[0] * temp0[0]
temp0_2[0] = temp0_2[0] + zmm11_1[0]
float var_2d0 = 0f
zmm11_1 = zx.o(0)
zmm2.d = zmm2.d f- temp0[0]
temp0_1[0] = temp0_1[0] + temp0_2[0]
temp0_2[0] = temp0_2[0] * zmm3_1[0]
float temp0_5[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
temp0_2[0] = temp0_2[0] f+ zmm8_1.d
int64_t var_148 = temp0_5.q
zmm0_1 = var_2f0.d
zmm0_1[0] = zmm0_1[0] - temp0[0]
int32_t var_2cc = 0
zmm2.d = zmm2.d f+ temp0_2[0]
zmm13[0] = zmm13[0] - zmm0_1[0]
zmm0_1 = var_2f0:4.d
zmm0_1[0] = zmm0_1[0] - temp0_1[0]
int32_t var_140 = zmm2.d
float var_2dc = zmm13[0]
zmm14[0] = zmm14[0] - zmm0_1[0]
float var_298 = zmm13[0]
zmm0_1 = var_2e8
zmm0_1[0] = zmm0_1[0] f- zmm2.d
float var_2d8 = zmm14[0]
float var_294 = zmm14[0]
zmm8_1.d = zmm15.d f- zmm0_1[0]
float var_2f4 = 3.40282347e+38f
int32_t var_2d4 = zmm8_1.d
int32_t var_290 = zmm8_1.d
uint64_t result

while (true)
    float zmm5[0x4]
    
    if (rbx s>= 0x20)
        zmm9 = var_308
    else
        float var_1d0
        float* rax_9
        uint128_t zmm6_1
        float zmm10_1[0x4]
        rax_9, zmm6_1, zmm7_1, zmm8_1, zmm10_1, zmm11_1 =
            sub_141758e70(r15, &var_1d0, &var_298, arg9)
        zmm1 = var_2e0
        zmm3_1 = var_2f8
        zmm9 = zmm1
        zmm5 = zmm7_1
        zmm7_1 = zmm8_1
        zmm8_1 = var_288
        int32_t rcx_2 = rax_9[2]
        zmm4 = zmm8_1
        var_2f0 = *rax_9
        zmm2 = zmm6_1 ^ 0x80000000
        zmm5 ^= 0x80000000
        zmm7_1 ^= 0x80000000
        zmm4[0] = zmm4[0] * zmm5[0]
        zmm3_1[0] = zmm3_1[0] * zmm5[0]
        zmm3_1[0] = zmm3_1[0] f* zmm2.d
        zmm6_1.d = zmm1.d f* zmm7_1[0]
        zmm6_1.d = zmm6_1.d f- zmm3_1[0]
        zmm0_1 = zmm8_1
        zmm0_1[0] = zmm0_1[0] * zmm7_1[0]
        zmm3_1[0] = zmm3_1[0] - zmm0_1[0]
        zmm1[0] = zmm1[0] f* zmm2.d
        zmm6_1.d = zmm6_1.d f+ zmm6_1.d
        zmm4[0] = zmm4[0] - zmm1[0]
        zmm0_1 = var_2f8
        zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
        zmm1 = zmm6_1
        zmm1[0] = zmm1[0] * zmm10_1[0]
        zmm10_1 = var_2f8
        zmm4[0] = zmm4[0] + zmm4[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6_1.d
        zmm1[0] = zmm1[0] f+ zmm2.d
        zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
        zmm2 = temp0_2
        zmm9[0] = zmm9[0] * zmm4[0]
        zmm9[0] = zmm9[0] - zmm0_1[0]
        zmm0_1 = zmm8_1
        zmm0_1[0] = zmm0_1[0] * zmm4[0]
        zmm4[0] = zmm4[0] f* zmm2.d
        zmm9[0] = zmm9[0] + zmm1[0]
        zmm8_1.d = zmm8_1.d f* zmm3_1[0]
        zmm10_1[0] = zmm10_1[0] - zmm0_1[0]
        zmm0_1 = var_2e0
        zmm4[0] = zmm4[0] + zmm7_1[0]
        zmm3_1[0] = zmm3_1[0] f* zmm2.d
        zmm0_1[0] = zmm0_1[0] f* zmm6_1.d
        zmm3_1[0] = zmm3_1[0] + zmm5[0]
        zmm8_1.d = zmm8_1.d f- zmm0_1[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm10_1[0] = zmm10_1[0] + zmm3_1[0]
        zmm8_1.d = zmm8_1.d f+ zmm4[0]
        zmm2.d = zmm10_1.d f* zmm10_1[0]
        zmm1 = zmm8_1
        zmm1[0] = zmm1[0] f* zmm8_1.d
        zmm2.d = zmm2.d f+ zmm9[0]
        zmm2.d = zmm2.d f+ zmm1[0]
        
        if (zmm2.d f> 1.17549435e-38f)
            zmm1 = arg11
            zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
            zmm2.d = 1f / _mm_sqrt_ss(0, zmm2.d)[0]
            zmm10_1[0] = zmm10_1[0] f* zmm2.d
            zmm9[0] = zmm9[0] f* zmm2.d
            zmm10_1[0] = zmm10_1[0] * zmm1[0]
            zmm8_1.d = zmm8_1.d f* zmm2.d
            zmm10_1[0] = zmm10_1[0] f+ *(arg2 + 0x14)
            zmm9[0] = zmm9[0] * zmm1[0]
            zmm8_1.d = zmm8_1.d f* zmm1[0]
            zmm9[0] = zmm9[0] f+ *(arg2 + 0x10)
            zmm7_1 = zmm10_1
            zmm8_1.d = zmm8_1.d f+ *(arg2 + 0x18)
        else
            zmm0_1 = zx.o(*(arg2 + 0x10))
            zmm8_1 = *(arg2 + 0x18)
            zmm9 = zmm0_1.d
            zmm7_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        
        temp0_1[0] = temp0_1[0] * zmm9[0]
        temp0_1[0] = temp0_1[0] * zmm7_1[0]
        zmm2.d = var_208.d f* zmm7_1[0]
        (&var_19c)[sx.q(r12.d)] = r12.d
        int32_t rax_12 = rax_9[2]
        r12 = sx.q(var_1a0)
        temp0[0] = temp0[0] f* zmm8_1.d
        uint64_t rcx_3 = r12 * 3
        temp0[0] = temp0[0] - temp0_1[0]
        var_208[0] = var_208[0] f* zmm8_1.d
        temp0_1[0] = temp0_1[0] - var_208[0]
        temp0[0] = temp0[0] * zmm9[0]
        temp0[0] = temp0[0] + temp0[0]
        zmm2.d = zmm2.d f- temp0[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm2.d = zmm2.d f+ zmm2.d
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        temp0[0] = temp0[0] * temp0_2[0]
        zmm6_1.d = zmm2.d f* temp0[0]
        temp0[0] = temp0[0] * temp0_1[0]
        temp0[0] = temp0[0] + zmm9[0]
        temp0[0] = temp0[0] * temp0[0]
        zmm6_1.d = zmm6_1.d f- temp0_1[0]
        zmm0_1 = zmm2
        zmm0_1[0] = zmm0_1[0] * var_208[0]
        zmm6_1.d = zmm6_1.d f+ temp0[0]
        zmm2.d = zmm2.d f* temp0_2[0]
        temp0[0] = temp0[0] - zmm0_1[0]
        temp0_1[0] = temp0_1[0] * var_208[0]
        zmm0_1 = var_2f0.d
        zmm2.d = zmm2.d f+ zmm8_1.d
        zmm0_1[0] = zmm0_1[0] f- zmm6_1.d
        temp0_1[0] = temp0_1[0] * temp0_2[0]
        temp0_1[0] = temp0_1[0] - temp0[0]
        temp0_1[0] = temp0_1[0] + zmm7_1[0]
        zmm7_1 = rcx_2
        zmm13[0] = zmm13[0] - zmm0_1[0]
        float var_284_1 = zmm0_1[0]
        zmm0_1 = zx.o(*rax_9)
        temp0_1[0] = temp0_1[0] f+ zmm2.d
        *(&var_118 + (rcx_3 << 2)) = zmm0_1.q
        zmm0_1 = zmm6_1
        (&var_110)[rcx_3] = rax_12
        zmm6_1 = var_2d8
        temp0[0] = temp0[0] + temp0_1[0]
        zmm1 = var_2f0:4.d
        int64_t var_2c8
        var_2c8.d = zmm13[0]
        zmm7_1[0] = zmm7_1[0] - temp0_1[0]
        result = zx.q(temp0_1[0])
        zmm1[0] = zmm1[0] - temp0[0]
        zmm4 = var_2dc
        *(&var_148 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm0_1, temp0[0].q)).q
        zmm2.d = zmm15.d f- zmm7_1[0]
        float var_2b8_1 = zmm7_1[0]
        (&var_140)[rcx_3] = result.d
        zmm14[0] = zmm14[0] - zmm1[0]
        float var_280_1 = zmm1[0]
        int32_t var_2c0_2 = zmm2.d
        var_2c8:4.d = zmm14[0]
        zmm14[0] = zmm14[0] f* zmm6_1.d
        zmm13[0] = zmm13[0] * zmm4[0]
        zmm14[0] = zmm14[0] + zmm13[0]
        zmm3_1 = var_2d4
        zmm2.d = zmm2.d f* zmm3_1[0]
        zmm14[0] = zmm14[0] f+ zmm2.d
        int128_t var_178_1
        float var_168_1
        
        if (zmm14[0] <= zmm12[0])
            r12 = zx.q(r12.d + 1)
            *(&var_188 + (rcx_3 << 2)) = var_2c8
            *(&var_188:8 + (rcx_3 << 2)) = var_2c0_2
            var_1a0 = r12.d
            zmm9 = var_308
        else
            zmm8_1 = *rsi
            zmm0_1 = zmm6_1
            zmm7_1 = *(rsi + 4)
            zmm9 = *(rsi + 8)
            zmm2.d = zmm8_1.d f* zmm4[0]
            zmm0_1[0] = zmm0_1[0] * zmm7_1[0]
            zmm3_1[0] = zmm3_1[0] * zmm9[0]
            zmm2.d = zmm2.d f+ zmm0_1[0]
            zmm2.d = zmm2.d f+ zmm3_1[0]
            
            if (zmm2.d f>= zmm12[0])
                result.b = 0
                break
            
            zmm14[0] = zmm14[0] f/ zmm2.d
            zmm11_1[0] = zmm11_1[0] - zmm14[0]
            
            if (zmm11_1[0] <= zmm11_1[0])
                zmm9 = var_308
            else
                if (zmm11_1[0] f> arg5)
                    result.b = 0
                    break
                
                zmm0_1 = zmm13
                var_308 = zmm3_1[0]
                zmm1 = zmm14
                var_2d0 = zmm4[0]
                zmm2 = zmm15
                var_2cc = zmm6_1.d
                zmm15 = zmm9
                zmm13 = zmm8_1
                zmm13[0] = zmm13[0] * zmm11_1[0]
                zmm14 = zmm7_1
                r12 = zx.q(r12.d + 1)
                zmm14[0] = zmm14[0] * zmm11_1[0]
                zmm9 = zmm3_1
                var_1a0 = r12.d
                zmm13[0] = zmm13[0] f+ var_2a8.d
                zmm15[0] = zmm15[0] * zmm11_1[0]
                zmm14[0] = zmm14[0] f+ var_2a8:4.d
                zmm15[0] = zmm15[0] f+ var_2a8:8.d
                zmm13[0] = zmm13[0] - zmm0_1[0]
                zmm0_1 = var_188.d
                zmm14[0] = zmm14[0] - zmm1[0]
                zmm1 = var_188:4.d
                zmm15[0] = zmm15[0] f- zmm2.d
                zmm2.d = zmm14.d f- var_280_1
                zmm0_1[0] = zmm0_1[0] + zmm13[0]
                zmm1[0] = zmm1[0] + zmm14[0]
                var_188.d = zmm0_1[0]
                zmm0_1 = var_188:8.d
                var_188:4.d = zmm1[0]
                zmm0_1[0] = zmm0_1[0] + zmm15[0]
                zmm1 = var_188:0xc.d
                zmm1[0] = zmm1[0] + zmm13[0]
                var_188:8.d = zmm0_1[0]
                zmm0_1 = var_178_1.d
                var_188:0xc.d = zmm1[0]
                zmm0_1[0] = zmm0_1[0] + zmm14[0]
                zmm1 = var_178_1:4.d
                zmm1[0] = zmm1[0] + zmm15[0]
                var_178_1.d = zmm0_1[0]
                zmm0_1 = var_178_1:8.d
                var_178_1:4.d = zmm1[0]
                zmm0_1[0] = zmm0_1[0] + zmm13[0]
                zmm1 = var_178_1:0xc.d
                zmm1[0] = zmm1[0] + zmm14[0]
                var_178_1:8.d = zmm0_1[0]
                zmm0_1 = var_168_1
                var_178_1:0xc.d = zmm1[0]
                zmm0_1[0] = zmm0_1[0] + zmm15[0]
                zmm13[0] = zmm13[0] - var_284_1
                var_168_1 = zmm0_1[0]
                zmm15[0] = zmm15[0] - var_2b8_1
                *(&var_188 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm13, zmm2.q)).q
                var_2f4 = 3.40282347e+38f
                *(&var_188:8 + (rcx_3 << 2)) = zmm15[0]
        
        int32_t rcx_4 = r12.d
        int32_t rax_15
        
        if (rcx_4 == 1)
            int64_t rax_19 = sx.q(var_19c)
            int64_t rcx_11 = rax_19 * 3
            *(&var_158 + (rax_19 << 2)) = 0x3f800000
            zmm0_1 = zx.o(*(&var_188 + (rcx_11 << 2)))
            rax_15 = *(&var_188:8 + (rcx_11 << 2))
        else if (rcx_4 == 2)
            uint64_t var_1ac
            uint64_t* rax_18
            rax_18, zmm9 = sub_1416e69d0(&var_1ac, &var_188, &var_19c, &var_1a0, &var_158)
            r12 = zx.q(var_1a0)
            zmm0_1 = zx.o(*rax_18)
            rax_15 = rax_18[1].d
        else if (rcx_4 == 3)
            uint64_t var_1b8
            uint64_t* rax_17
            rax_17, zmm9, zmm11_1, zmm12, zmm13, zmm14, zmm15 =
                sub_1416fa750(&var_1b8, &var_188, &var_1a0, &var_158)
            r12 = zx.q(var_1a0)
            zmm0_1 = zx.o(*rax_17)
            rax_15 = rax_17[1].d
        else if (rcx_4 == 4)
            uint64_t var_1c4
            uint64_t* rax_16
            rax_16, zmm9, zmm11_1, zmm12, zmm13, zmm14, zmm15 =
                sub_1416f9c90(&var_1c4, &var_188, &var_1a0, &var_158)
            r12 = zx.q(var_1a0)
            zmm0_1 = zx.o(*rax_16)
            rax_15 = rax_16[1].d
        else
            int32_t var_258_1 = 0
            rax_15 = 0
            zmm0_1 = _mm_unpacklo_ps(zmm12, zmm12[0].q)
        
        int32_t var_190
        int64_t rdi_1 = sx.q(var_190)
        int64_t r11_1 = sx.q(var_19c)
        int32_t var_198
        int64_t r10_1 = sx.q(var_198)
        int32_t var_194
        int64_t r9_3 = sx.q(var_194)
        int64_t var_304_1 = zmm0_1.q
        int64_t rbx_2 = rdi_1 * 3
        int64_t r15_1 = r11_1 * 3
        int64_t r14_1 = r10_1 * 3
        int64_t rsi_1 = r9_3 * 3
        int32_t r8_5 = *(&var_188:8 + (r15_1 << 2))
        zmm6_1 = var_304_1.d
        zmm7_1 = var_304_1:4.d
        zmm8_1 = rax_15
        var_168_1:4.q = *(&var_188 + (rbx_2 << 2))
        var_188:0xc.q = *(&var_188 + (r14_1 << 2))
        var_188.q = *(&var_188 + (r15_1 << 2))
        int32_t rdi_2 = (&var_110)[r15_1]
        var_178_1:8.q = *(&var_188 + (rsi_1 << 2))
        var_158.d = (*(&var_158 + (r11_1 << 2)))[0]
        var_158:8.d = (*(&var_158 + (r9_3 << 2))).d
        var_158:4.d = (*(&var_158 + (r10_1 << 2)))[0]
        zmm1 = zx.o(*(&var_118 + (rsi_1 << 2)))
        var_158:0xc.d = (*(&var_158 + (rdi_1 << 2)))[0]
        var_178_1:4.d = *(&var_188:8 + (r14_1 << 2))
        int32_t rdx_7 = (&var_110)[r14_1]
        var_168_1 = *(&var_188:8 + (rsi_1 << 2))
        int32_t rcx_13 = (&var_110)[rsi_1]
        var_168_1 = *(&var_188:8 + (rbx_2 << 2))
        int32_t rax_21 = (&var_110)[rbx_2]
        int128_t var_fc_1
        var_fc_1:8.q = *(&var_118 + (rbx_2 << 2))
        zmm0_1 = zx.o(*(&var_148 + (rbx_2 << 2)))
        var_10c_1.q = *(&var_118 + (r14_1 << 2))
        zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
        var_118 = *(&var_118 + (r15_1 << 2))
        zmm3_1 = zx.o(*(&var_148 + (r15_1 << 2)))
        var_110 = rdi_2
        int32_t rdi_3 = (&var_140)[r15_1]
        var_10c_1:8.d = rdx_7
        int32_t rdx_8 = (&var_140)[r14_1]
        var_10c_1:0xc.q = zmm1.q
        zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
        var_fc_1:4.d = rcx_13
        int32_t rcx_14 = (&var_140)[rsi_1]
        int32_t var_ec_1 = rax_21
        int32_t rax_22 = (&var_140)[rbx_2]
        int128_t var_12c_1
        var_12c_1:8.q = zmm0_1.q
        var_19c.o = data_142e11d00
        var_188:8.d = r8_5
        var_13c_1.q = zmm2.q
        zmm0_1 = zmm6_1
        zmm0_1[0] = zmm0_1[0] f* zmm6_1.d
        var_140 = rdi_3
        var_2dc = zmm6_1.d
        var_298 = zmm6_1.d
        var_2d8 = zmm7_1[0]
        float var_294_1 = zmm7_1[0]
        var_2d4 = zmm8_1.d
        int32_t var_290_1 = zmm8_1.d
        var_148 = zmm3_1.q
        var_13c_1:8.d = rdx_8
        var_13c_1:0xc.q = zmm1.q
        var_12c_1:4.d = rcx_14
        int32_t var_11c_1 = rax_22
        zmm2.d = zmm7_1.d f* zmm7_1[0]
        rsi = arg4
        zmm2.d = zmm2.d f+ zmm0_1[0]
        zmm1 = zmm8_1
        zmm1[0] = zmm1[0] f* zmm8_1.d
        zmm2.d = zmm2.d f+ zmm1[0]
        rax_22.b = zmm2.d f>= var_2f4
        var_2f4 = zmm2.d
        
        if (not(_mm_cvtps_pd(zmm2.q)[0].q f< 9.9999999999999995e-07) && rax_22.b == 0)
            rbx += 1
            r15 = arg1
            continue
    
    bool cond:0_1 = zmm11_1[0] <= zmm12[0]
    *arg6 = zmm11_1[0]
    
    if (not(cond:0_1))
        zmm7_1 = var_2d0
        zmm8_1 = var_2cc
        zmm5 = 0x3f000000
        zmm0_1 = zmm8_1
        zmm0_1[0] = zmm0_1[0] f* zmm8_1.d
        zmm2.d = zmm7_1.d f* zmm7_1[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm2.d = zmm2.d f+ zmm0_1[0]
        zmm2.d = zmm2.d f+ zmm9[0]
        zmm3_1 = zmm2
        float temp0_12[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        temp0_12[0] = temp0_12[0] * temp0_12[0]
        zmm3_1[0] = zmm3_1[0] * temp0_12[0]
        zmm2.d = 0.5f - zmm3_1[0]
        temp0_12[0] = temp0_12[0] f* zmm2.d
        temp0_12[0] = temp0_12[0] + temp0_12[0]
        temp0_12[0] = temp0_12[0] * temp0_12[0]
        zmm3_1[0] = zmm3_1[0] * temp0_12[0]
        zmm5[0] = 0.5f - zmm3_1[0]
        temp0_12[0] = temp0_12[0] * zmm5[0]
        temp0_12[0] = temp0_12[0] + temp0_12[0]
        zmm7_1[0] = zmm7_1[0] * temp0_12[0]
        zmm8_1.d = zmm8_1.d f* temp0_12[0]
        zmm9[0] = zmm9[0] * temp0_12[0]
        *arg8 = (_mm_unpacklo_ps(zmm7_1, zmm8_1.q)).q
        arg8[1].d = zmm9[0]
        
        if (r12.d s> 0)
            int128_t* rcx_16 = &var_158
            uint64_t i_1 = zx.q(r12.d)
            int32_t* rax_24 = &var_140
            uint64_t i
            
            do
                zmm2 = *rcx_16
                rcx_16 += 4
                zmm0_1 = zmm2
                zmm1 = zmm2
                zmm0_1[0] = zmm0_1[0] f* rax_24[-2]
                zmm1[0] = zmm1[0] f* rax_24[-1]
                zmm2.d = zmm2.d f* *rax_24
                rax_24 = &rax_24[3]
                zmm12[0] = zmm12[0] + zmm0_1[0]
                zmm12[0] = zmm12[0] + zmm1[0]
                zmm12[0] = zmm12[0] f+ zmm2.d
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        zmm11_1[0] = zmm11_1[0] f* *rsi
        zmm11_1[0] = zmm11_1[0] f* *(rsi + 4)
        zmm11_1[0] = zmm11_1[0] f* *(rsi + 8)
        zmm11_1[0] = zmm11_1[0] f+ var_2a8.d
        zmm11_1[0] = zmm11_1[0] f+ var_2a8:4.d
        zmm11_1[0] = zmm11_1[0] f+ var_2a8:8.d
        zmm11_1[0] = zmm11_1[0] + zmm12[0]
        zmm11_1[0] = zmm11_1[0] + zmm12[0]
        zmm11_1[0] = zmm11_1[0] + zmm12[0]
        float temp0_14[0x4] = _mm_unpacklo_ps(zmm11_1, zmm11_1[0].q)
        result = zx.q(zmm11_1[0])
        *arg7 = temp0_14.q
        arg7[1].d = result.d
    
    result.b = 1
    break

__security_check_cookie(rax_1 ^ &var_338)
return result
