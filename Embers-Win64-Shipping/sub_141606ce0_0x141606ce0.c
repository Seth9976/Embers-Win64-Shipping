// 函数: sub_141606ce0
// 地址: 0x141606ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_d8[0x4] = zmm15
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t r12 = 0
int32_t var_2f8 = 0
void* r10 = arg2
float zmm2[0x4] = *arg3
float zmm14[0x4] = zx.o(0)
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float zmm5[0x4] = *arg9 ^ 0x80000000
float zmm6[0x4] = *(arg9 + 4) ^ 0x80000000
float zmm7[0x4] = *(arg9 + 8) ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
float var_1c8[0x4]
int128_t* r8 = &var_1c8
int32_t r13 = 0
void* var_258 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_250 = arg2
zmm7[0] = zmm7[0] * zmm7[0]
int128_t* var_240 = &var_1c8
zmm6[0] = zmm6[0] + zmm5[0]
float var_188[0x4] = temp0_6
var_1c8 = temp0_6
zmm6[0] = zmm6[0] + zmm7[0]
float var_2d4_1
float var_2d0_1
float zmm4[0x4]
bool cond:0_1

if (not(zmm6[0] < 9.99999975e-05f))
    zmm15 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm6[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm15[0] = 1f / temp0_7[0]
    zmm3 = zmm15
    zmm4 = zmm15
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm4[0] = zmm4[0] * zmm6[0]
    var_2d4_1 = zmm3[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    var_2d0_1 = zmm4[0]

if (zmm6[0] < 9.99999975e-05f || not(cond:0_1))
    zmm3 = 0xbf800000
    zmm4 = zx.o(0)
    var_2d4_1 = -1f
    zmm15 = zx.o(0)
    var_2d0_1 = 0f

int32_t rdx = 0
void* rax_6 = *(arg1 + 0x10)
float zmm1[0x4] = 0x7f7fffff
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm0[0x4] = *(rax_6 + 0x2c)
float var_2e4 = 3.40282347e+38f
uint32_t zmm9[0x4]

if (zmm0[0] == 0f)
    zmm9 = zx.o(0)
else
    zmm9 = __andps_xmmxud_memxud(*(arg1 + 0x28), data_142d3f770)
    zmm9[0] = zmm9[0] f* zmm0[0]

zmm9[0] = zmm9[0] f+ arg8
int32_t i_6 = var_1a8.d
int64_t rbx
int64_t arg_8 = rbx
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
uint32_t var_2cc = zmm9[0]
zmm9 = 0x358637bd
float zmm13[0x4]
float var_b8[0x4] = zmm13
uint64_t var_2c8
uint64_t var_2b8
int32_t var_2b0
uint64_t var_2a8
int32_t var_298
int32_t var_294
int32_t var_290
float var_288
float var_284
float var_280
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_1

while (true)
    rdx_1 = rdx + 1
    var_2f8 = rdx_1
    
    if (rdx s>= 0x20)
        break
    
    void* rax_8 = *(arg1 + 0x10)
    zmm8 = *(arg1 + 0x28)
    zmm9 = *(arg1 + 0x2c)
    zmm10 = *(arg1 + 0x30)
    zmm5 = *(rax_8 + 0x20)
    zmm6 = *(rax_8 + 0x1c)
    zmm7 = *(rax_8 + 0x24)
    zmm3[0] = zmm3[0] * zmm8[0]
    zmm4[0] = zmm4[0] f* zmm9[0]
    zmm3[0] = zmm3[0] * zmm6[0]
    zmm4[0] = zmm4[0] * zmm5[0]
    zmm15[0] = zmm15[0] * zmm10[0]
    zmm3[0] = zmm3[0] + zmm4[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm3[0] = zmm3[0] + zmm15[0]
    float* rax_9
    int32_t r13_1
    
    if (zmm3[0] > -0f)
        r13_1 = r13 | 0x20
        int32_t var_230_1 = *(rax_8 + 0x18)
        int64_t var_238
        rax_9 = &var_238
        var_238 = *(rax_8 + 0x10)
    else
        zmm2 = *(rax_8 + 0x28)
        r13_1 = r13 | 0x10
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x10)
        zmm2[0] = zmm2[0] * zmm7[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x18)
        var_288 = zmm2[0]
        rax_9 = &var_288
        var_284 = zmm2[0]
        var_280 = zmm2[0]
    
    int32_t rcx_1 = r13_1 & 0xffffffdf
    var_2b0 = rax_9[2]
    var_2b8 = *rax_9
    
    if ((r13_1.b & 0x20) == 0)
        rcx_1 = r13_1
    
    r13 = rcx_1
    
    if ((rcx_1.b & 0x10) != 0)
        r13 &= 0xffffffef
    
    zmm5 = *(r8 + 8)
    zmm7 = *r8
    zmm13 = var_2b8.d
    zmm12 = var_2b8:4.d
    zmm11 = var_2b0
    zmm4[0] = zmm4[0] * zmm5[0]
    zmm11[0] = zmm11[0] * zmm10[0]
    zmm10 = zmm3
    zmm10[0] = zmm10[0] * zmm5[0]
    zmm12[0] = zmm12[0] f* zmm9[0]
    zmm9 = zmm15
    zmm4[0] = zmm4[0] * zmm7[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm8 = *(r8 + 4)
    zmm9[0] = zmm9[0] f* zmm8[0]
    float var_1f8_1 = zmm11[0]
    zmm9[0] = zmm9[0] f- zmm4[0]
    zmm15[0] = zmm15[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm15[0]
    zmm0 = zmm3
    zmm3 = *(r8 + 0xc)
    zmm9[0] = zmm9[0] f+ zmm9[0]
    zmm0[0] = zmm0[0] * zmm8[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm4[0] = zmm4[0] - zmm0[0]
    zmm3[0] = zmm3[0] f* zmm9[0]
    zmm2 = zmm9
    zmm9[0] = zmm9[0] f* zmm8[0]
    zmm3[0] = zmm3[0] + var_2d4_1
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm8[0]
    zmm4[0] = zmm4[0] - zmm10[0]
    zmm4[0] = zmm4[0] * zmm7[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] * zmm10[0]
    zmm2[0] = zmm2[0] - zmm4[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm3[0] = zmm3[0] + var_2d0_1
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm3[0] = zmm3[0] + zmm15[0]
    zmm2[0] = zmm2[0] + zmm3[0]
    zmm10[0] = zmm10[0] f- zmm9[0]
    float temp0_9[0x4] = _mm_unpacklo_ps(zmm4, zmm2[0].q)
    zmm10[0] = zmm10[0] + zmm3[0]
    int64_t var_228 = temp0_9.q
    float var_220_1 = zmm10[0]
    zmm11 = sub_141758e70(r10, &var_298, &var_228, zmm14)
    float temp0_10[0x4] = _mm_unpacklo_ps(var_298, var_290[0].q)
    zmm4 = *arg3
    float temp0_12[0x4] = _mm_unpacklo_ps(temp0_10, _mm_unpacklo_ps(var_294, zmm14[0].q)[0].q)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_13)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_16)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_20[0x4] = _mm_sub_ps(temp0_18, temp0_15)
    float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_21)
    float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_13)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xd2)
    float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_12)
    float temp0_30[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_25, temp0_16), temp0_24), temp0_26), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm13[0] = zmm13[0] - temp0_30[0]
    int64_t rdx_3 = sx.q(var_1a8.d)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    float var_1e8_1 = temp0_31[0]
    zmm11[0] = zmm11[0] - temp0_31[0]
    int64_t rcx_3 = rdx_3 * 3
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    zmm12[0] = zmm12[0] - temp0_32[0]
    int32_t i_7 = rdx_3.d + 1
    *(&var_178 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm13, zmm12[0].q)).q
    (&var_170)[rcx_3] = var_1f8_1
    *(&var_148 + (rcx_3 << 2)) = (_mm_unpacklo_ps(temp0_30, temp0_32[0].q)).q
    (&var_140)[rcx_3] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm13, zmm12[0].q)).q
    int32_t var_110
    (&var_110)[rcx_3] = zmm11[0]
    var_1a8.d = rdx_3.d + 1
    int32_t var_2d8_1
    
    if (rdx_3.d == 0)
        int64_t rax_23 = sx.q(var_1a8:4.d)
        int64_t rcx_11 = rax_23 * 3
        var_188[rax_23] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_11 << 2)))
        var_2d8_1 = (&var_110)[rcx_11]
    else
        uint64_t* rax_20
        
        if (rdx_3.d == 1)
            rax_20 = sub_1416e69d0(&var_2c8, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_14160729e:
            zmm0 = zx.o(*rax_20)
            var_2d8_1 = rax_20[1].d
            i_7 = var_1a8.d
        else
            if (rdx_3.d == 2)
                rax_20, zmm14, zmm15 = sub_1416fa750(&var_2a8, &var_118, &var_1a8, &var_188)
                goto label_14160729e
            
            if (rdx_3.d == 3)
                uint64_t var_1b8[0x2]
                rax_20, zmm14, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_14160729e
            
            int32_t var_2e8_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm14, zmm14[0].q)
            var_2d8_1 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm6 = var_2d8_1
    int64_t rdi = r8_5 * 3
    int32_t rax_24 = (&var_110)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t rcx_12 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm9 = 0x358637bd
    int64_t var_2e0_1 = zmm0.q
    zmm5 = var_2e0_1:4.d
    zmm4 = var_2e0_1.d
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_5]
    int32_t r8_6 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_8
    int32_t rdx_9 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_12
    int32_t rcx_13 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_24
    int32_t rax_25 = (&var_170)[rdi]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_6
    int32_t r8_7 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_9
    int32_t rdx_10 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_13
    int32_t rcx_14 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_25
    int32_t rax_26 = (&var_140)[rdi]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    zmm5[0] = zmm5[0] * zmm5[0]
    var_140 = r8_7
    int64_t var_130_1 = zmm1.q
    zmm4[0] = zmm4[0] * zmm4[0]
    int32_t var_134_1 = rdx_10
    zmm6[0] = zmm6[0] * zmm6[0]
    int32_t var_128_1 = rcx_14
    zmm5[0] = zmm5[0] + zmm4[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_26
    zmm5[0] = zmm5[0] + zmm6[0]
    
    if (zmm5[0] < 9.99999997e-07f || zmm5[0] >= var_2e4)
        i_6 = i_7
        zmm1 = zmm5
        rdx_1 = var_2f8
        var_2e4 = zmm5[0]
        break
    
    zmm15 = 0x3f800000
    arg1 = var_258
    zmm1 = zmm5
    r8 = var_240
    r10 = var_250
    i_6 = i_7
    rdx = var_2f8
    float temp0_37[0x4] = _mm_sqrt_ss(0, zmm5[0])
    var_2e4 = zmm5[0]
    zmm15[0] = 1f / temp0_37[0]
    zmm3 = zmm15
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm4 = zmm15
    zmm4[0] = zmm4[0] * zmm5[0]
    var_2d4_1 = zmm3[0]
    zmm15[0] = zmm15[0] * zmm6[0]
    var_2d0_1 = zmm4[0]
    continue

if (arg11 != 0)
    *arg11 = rdx_1

float result

if (zmm1[0] f<= zmm9[0])
    var_2a8 = 0
    int64_t var_2a0_1 = 0
    var_2c8 = 0
    int64_t var_2c0_1 = 0
    sub_14083ad30(&var_2a8, 8)
    
    if (var_2c0_1:4.d s< 8)
        sub_14083ad30(&var_2c8, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_2a0_1.d)
            int32_t rax_30 = (rsi_2 + 1).d
            var_2a0_1.d = rax_30
            
            if (rax_30 s> var_2a0_1:4.d)
                sub_14083a7e0(&var_2a8)
            
            uint64_t rcx_18 = var_2a8
            int64_t rdx_13 = rsi_2 * 3
            int32_t rax_31 = *(&var_170 + rbx)
            *(rcx_18 + (rdx_13 << 2)) = *(&var_178 + rbx)
            *(rcx_18 + (rdx_13 << 2) + 8) = rax_31
            int64_t rsi_3 = sx.q(var_2c0_1.d)
            int32_t rax_32 = (rsi_3 + 1).d
            var_2c0_1.d = rax_32
            
            if (rax_32 s> var_2c0_1:4.d)
                sub_14083a7e0(&var_2c8)
            
            uint64_t rcx_20 = var_2c8
            int64_t rdx_15 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_33 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_20 + (rdx_15 << 2)) = zmm0_1
            *(rcx_20 + (rdx_15 << 2) + 8) = rax_33
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_34
    float zmm9_1
    float zmm14_1[0x4]
    rax_34, zmm9_1, zmm14_1 = sub_1415bb8f0(&var_2a8, &var_2c8, &var_258, &var_250, zmm14, zmm15, 
        &var_2f8, &var_2b8, &var_298, &var_288)
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (rax_34 == 2)
        float zmm6_1 = zmm14_1[0]
        float zmm7_1 = zmm14_1[0]
        int64_t zmm5_1 = zmm14_1[0].q
        
        if (i_6 s> 0)
            float (* rax_37)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_37
                rax_37 = &(*rax_37)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm7_1 = zmm7_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm14_1[0] = zmm14_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm14_1[0] = zmm14_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm5_1.d = zmm5_1.d f+ zmm2_1[0]
                zmm14_1[0] = zmm14_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm3_1 = var_2cc
        zmm2_1 = arg10
        zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
        *arg4 = zmm3_1[0]
        *arg7 = var_2b8
        arg7[2] = var_2b0
        zmm3_1[0] = zmm3_1[0] f* *arg7
        zmm3_1[0] = zmm3_1[0] f* arg7[1]
        zmm3_1[0] = zmm3_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] + zmm6_1
        zmm3_1[0] = zmm3_1[0] + zmm7_1
        zmm3_1[0] = zmm3_1[0] + zmm14_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm3_1, zmm3_1[0].q)).q
        arg5[1].d = zmm3_1[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm14_1[0] = zmm14_1[0] - zmm2_1[0]
        zmm5_1.d = zmm5_1.d f- zmm2_1[0]
        zmm14_1[0] = zmm14_1[0] - zmm2_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm14_1, zmm5_1)).q
        arg6[1].d = zmm14_1[0]
        float temp3_1 = *arg4
        zmm9_1 - temp3_1
        uint64_t rcx_26 = var_2c8
        rbx.b = zmm9_1 < temp3_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_2a8
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_2cc
        float zmm4_1[0x4] = arg10
        zmm2_1 = var_284
        *arg7 = var_2b8
        float zmm0_2[0x4] = var_2f8
        zmm0_2[0] = zmm0_2[0] + zmm3_1[0]
        arg7[2] = var_2b0
        zmm0_2[0] = zmm0_2[0] + zmm4_1[0]
        *arg4 = zmm0_2[0]
        zmm3_1[0] = zmm3_1[0] f* *arg7
        zmm3_1[0] = zmm3_1[0] f* arg7[1]
        zmm3_1[0] = zmm3_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] f+ var_298
        zmm3_1[0] = zmm3_1[0] f+ var_294
        zmm3_1[0] = zmm3_1[0] f+ var_290
        *arg5 = (_mm_unpacklo_ps(zmm3_1, zmm3_1[0].q)).q
        float var_2e8_5 = zmm3_1[0]
        zmm3_1 = var_288
        arg5[1].d = var_2e8_5
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* arg7[1]
        zmm4_1[0] = zmm4_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
        zmm0_2 = var_280
        zmm2_1[0] = zmm2_1[0] - zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        uint64_t rcx_23 = var_2c8
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_2a8
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_27)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_27
            rax_27 = &(*rax_27)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm14[0] = zmm14[0] + zmm2[0]
            r12 += 0xc
            zmm14[0] = zmm14[0] + zmm2[0]
            zmm14[0] = zmm14[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm5 = 0x3f000000
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm9 = var_2cc
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm14[0] = zmm14[0] - zmm14[0]
    zmm3 = zx.o(0)
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm3[0] = zmm14[0]
    zmm2 = 0x3f000000
    float temp0_38[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_38[0] = temp0_38[0] * temp0_38[0]
    zmm3[0] = zmm3[0] * temp0_38[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_38[0] = temp0_38[0] * zmm2[0]
    zmm2 = arg10
    temp0_38[0] = temp0_38[0] + temp0_38[0]
    temp0_38[0] = temp0_38[0] * temp0_38[0]
    zmm3[0] = zmm3[0] * temp0_38[0]
    zmm1 = zmm9
    zmm1[0] = zmm1[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_38[0] = temp0_38[0] * zmm5[0]
    temp0_38[0] = temp0_38[0] + temp0_38[0]
    zmm14[0] = zmm14[0] * temp0_38[0]
    zmm14[0] = zmm14[0] * temp0_38[0]
    zmm14[0] = zmm14[0] * temp0_38[0]
    float temp0_39[0x4] = _mm_unpacklo_ps(zmm14, zmm14[0].q)
    *arg7 = temp0_39.q
    float temp0_40[0x4] = __sqrtss_xmmss_memss(temp0_39[0], var_2e4)
    float var_2e8_2 = zmm14[0]
    zmm1[0] = zmm1[0] - temp0_40[0]
    arg7[2] = var_2e8_2
    zmm0 = zmm9
    *arg4 = zmm1[0]
    zmm1 = zmm9
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm9[0] = zmm9[0] f* arg7[2]
    zmm0[0] = zmm0[0] + zmm14[0]
    zmm1[0] = zmm1[0] + zmm14[0]
    zmm9[0] = zmm9[0] f+ zmm14[0]
    *arg5 = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
    arg5[1].d = zmm9[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm14[0] = zmm14[0] - zmm2[0]
    zmm14[0] = zmm14[0] - zmm2[0]
    zmm14[0] = zmm14[0] - zmm2[0]
    *arg6 = (_mm_unpacklo_ps(zmm14, zmm14[0].q)).q
    arg6[1].d = zmm14[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_338)
return result
