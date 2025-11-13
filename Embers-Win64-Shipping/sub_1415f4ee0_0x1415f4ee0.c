// 函数: sub_1415f4ee0
// 地址: 0x1415f4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t r12 = 0
float var_2d8 = 0f
float zmm2[0x4] = *arg3
float zmm11[0x4] = zx.o(0)
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_1[0] = (temp0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_5[0] = temp0_4[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
float (* r8)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm3[0] = zmm3[0] * zmm3[0]
int32_t r13 = 0
void* var_230 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_228 = arg2
zmm6[0] = zmm6[0] * zmm6[0]
float (* var_218)[0x4] = &var_1c8
zmm5[0] = zmm5[0] + zmm3[0]
zmm5[0] = zmm5[0] + zmm6[0]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm13 = 0xbf800000
    zmm14 = zx.o(0)
    zmm12 = zx.o(0)

float rcx = 0f
void* rax_6 = *(arg2 + 0x10)
float zmm1[0x4] = 0x7f7fffff
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm0[0x4] = arg8
zmm0[0] = zmm0[0] f+ *(arg1 + 0x2c)
zmm2 = *(rax_6 + 0x2c)
arg8 = zmm0[0]
float var_2c4 = 3.40282347e+38f
uint32_t zmm15[0x4]

if (zmm2[0] == 0f)
    zmm15 = zx.o(0)
else
    zmm15 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm15[0] = zmm15[0] f* zmm2[0]

zmm15[0] = zmm15[0] f+ arg10
int32_t i_6 = var_1a8.d
float zmm9[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm10[0x4]
float var_88[0x4] = zmm10
uint64_t var_2b0
uint64_t var_2a0
int32_t var_298
uint64_t var_290
float var_280
float var_27c
float var_278
float var_270
float var_26c
float var_268
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
float rcx_1

while (true)
    rcx_1 = rcx i+ 1
    var_2d8 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_8 = var_230
    zmm3 = *(rax_8 + 0x20)
    float zmm4[0x4] = *(rax_8 + 0x1c)
    zmm5 = *(rax_8 + 0x24)
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm13[0] = zmm13[0] + zmm14[0]
    zmm13[0] = zmm13[0] + zmm12[0]
    int32_t* r9_1
    int32_t r13_1
    
    if (zmm13[0] > -0f)
        int64_t var_208
        r9_1 = &var_208
        int32_t rax_9 = *(rax_8 + 0x18)
        r13_1 = r13 | 0x20
        var_208 = *(rax_8 + 0x10)
        int32_t var_200_1 = rax_9
    else
        zmm2 = *(rax_8 + 0x28)
        r9_1 = &var_280
        zmm2[0] = zmm2[0] * zmm4[0]
        r13_1 = r13 | 0x10
        zmm2[0] = zmm2[0] * zmm3[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x10)
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x18)
        var_280 = zmm2[0]
        var_27c = zmm2[0]
        var_278 = zmm2[0]
    
    zmm5 = (*r8)[2]
    zmm8 = (*r8)[1]
    zmm10 = zmm13
    zmm7 = *r8
    zmm4 = (*r8)[3]
    int32_t rax_10 = r9_1[2]
    int32_t rcx_3 = r13_1 & 0xffffffdf
    var_2a0 = *r9_1
    zmm14[0] = zmm14[0] * zmm5[0]
    var_298 = rax_10
    zmm10[0] = zmm10[0] * zmm5[0]
    
    if ((r13_1.b & 0x20) == 0)
        rcx_3 = r13_1
    
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    int32_t rdx_1 = rcx_3 & 0xffffffef
    
    if ((rcx_3.b & 0x10) == 0)
        rdx_1 = rcx_3
    
    void* rcx_4 = var_228
    zmm12[0] = zmm12[0] - zmm14[0]
    zmm12[0] = zmm12[0] * zmm7[0]
    void* rax_13 = *(rcx_4 + 0x10)
    zmm10[0] = zmm10[0] - zmm12[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm14[0] = zmm14[0] - zmm13[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm4[0] = zmm4[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm13 = *(rcx_4 + 0x2c)
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    zmm5 = *(rax_13 + 0x20)
    zmm14[0] = zmm14[0] * zmm8[0]
    zmm14[0] = zmm14[0] - zmm10[0]
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm14[0] = zmm14[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm10[0]
    zmm12[0] = zmm12[0] - zmm14[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm14[0] = zmm14[0] f* *(rcx_4 + 0x28)
    zmm4[0] = zmm4[0] + zmm14[0]
    zmm4[0] = zmm4[0] * zmm14[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    zmm14[0] = zmm14[0] f* *(rax_13 + 0x1c)
    zmm6 = *(rcx_4 + 0x30)
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm13[0]
    zmm10[0] = zmm10[0] + zmm4[0]
    zmm4 = *(rax_13 + 0x24)
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm14[0] = zmm14[0] + zmm10[0]
    float* rax_14
    int32_t r8_1
    
    if (zmm14[0] < zmm11[0])
        r8_1 = 0x80
        int32_t var_1f4_1 = *(rax_13 + 0x18)
        int64_t var_1fc
        rax_14 = &var_1fc
        var_1fc = *(rax_13 + 0x10)
    else
        zmm2 = *(rax_13 + 0x28)
        r8_1 = 0x40
        zmm2[0] = zmm2[0] f* *(rax_13 + 0x1c)
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_13 + 0x10)
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_13 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_13 + 0x18)
        var_270 = zmm2[0]
        rax_14 = &var_270
        var_26c = zmm2[0]
        var_268 = zmm2[0]
    
    int32_t rdx_2 = rdx_1 | r8_1
    int32_t rax_16 = rax_14[2]
    r13 = rdx_2 & 0xffffff7f
    int64_t var_240_1 = *rax_14
    
    if ((rdx_2.b & 0x80) == 0)
        r13 = rdx_2
    
    if ((r13.b & 0x40) != 0)
        r13 &= 0xffffffbf
    
    zmm3 = var_240_1.d
    zmm3[0] = zmm3[0] f* *(rcx_4 + 0x28)
    zmm0 = rax_16
    zmm2 = var_240_1:4.d
    zmm0[0] = zmm0[0] * zmm6[0]
    zmm4 = *arg3
    zmm2[0] = zmm2[0] * zmm13[0]
    float temp0_9[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_13[0x4] = _mm_unpacklo_ps(temp0_9, _mm_unpacklo_ps(zmm2, zmm11[0].q)[0].q)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_11)
    float temp0_19[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_10), temp0_16)
    float temp0_20[0x4] = _mm_add_ps(temp0_19, temp0_19)
    float temp0_21[0x4] = _mm_mul_ps(temp0_14, temp0_20)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xd2)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
    zmm2 = var_2a0:4.d
    float temp0_24[0x4] = _mm_mul_ps(temp0_23, temp0_11)
    float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_13)
    zmm3 = var_2a0.d
    zmm0 = var_298
    float temp0_29[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_22, temp0_10), temp0_24), temp0_25), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_29[0]
    int64_t rdx_3 = sx.q(var_1a8.d)
    int32_t rax_20 = r9_1[2]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
    zmm0[0] = zmm0[0] - temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
    int64_t rcx_5 = rdx_3 * 3
    float var_1e8_1 = temp0_30[0]
    zmm2[0] = zmm2[0] - temp0_31[0]
    int32_t i_7 = rdx_3.d + 1
    var_1a8.d = rdx_3.d + 1
    float var_1d8_1 = zmm0[0]
    *(&var_178 + (rcx_5 << 2)) = *r9_1
    (&var_170)[rcx_5] = rax_20
    *(&var_148 + (rcx_5 << 2)) = (_mm_unpacklo_ps(temp0_29, temp0_31[0].q)).q
    (&var_140)[rcx_5] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_110
    (&var_110)[rcx_5] = var_1d8_1
    int32_t var_2b8_1
    
    if (rdx_3.d == 0)
        int64_t rax_27 = sx.q(var_1a8:4.d)
        int64_t rcx_13 = rax_27 * 3
        var_188[rax_27] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_13 << 2)))
        var_2b8_1 = (&var_110)[rcx_13]
    else
        uint64_t* rax_24
        
        if (rdx_3.d == 1)
            rax_24 = sub_1416e69d0(&var_2b0, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1415f5501:
            zmm0 = zx.o(*rax_24)
            var_2b8_1 = rax_24[1].d
            i_7 = var_1a8.d
        else
            if (rdx_3.d == 2)
                rax_24, zmm11, zmm15 = sub_1416fa750(&var_290, &var_118, &var_1a8, &var_188)
                goto label_1415f5501
            
            if (rdx_3.d == 3)
                uint64_t var_1b8[0x2]
                rax_24, zmm11, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1415f5501
            
            int32_t var_2c8_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2b8_1 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm5 = var_2b8_1
    int64_t rdi = r8_5 * 3
    int32_t rax_28 = (&var_110)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t rcx_14 = (&var_110)[rsi_1]
    int32_t r9_5 = (&var_110)[r15_1]
    zmm9 = 0x358637bd
    int64_t var_2c0_1 = zmm0.q
    zmm4 = var_2c0_1.d
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
    int32_t var_f8_1 = rcx_14
    int32_t rcx_15 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_28
    int32_t rax_29 = (&var_170)[rdi]
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
    int32_t var_158_1 = rcx_15
    int32_t rcx_16 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_29
    int32_t rax_30 = (&var_140)[rdi]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_5
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2c0_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_10
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_16
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_30
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_2c4)
        i_6 = i_7
        zmm1 = zmm3
        rcx_1 = var_2d8
        var_2c4 = zmm3[0]
        break
    
    zmm12 = 0x3f800000
    i_6 = i_7
    zmm1 = zmm3
    r8 = var_218
    rcx = var_2d8
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_2c4 = zmm3[0]
    zmm12[0] = 1f / temp0_35[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

uint32_t result

if (zmm1[0] <= zmm9[0])
    var_290 = 0
    int64_t var_288_1 = 0
    var_2b0 = 0
    int64_t var_2a8_1 = 0
    sub_14083ad30(&var_290, 8)
    
    if (var_2a8_1:4.d s< 8)
        sub_14083ad30(&var_2b0, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_288_1.d)
            int32_t rax_34 = (rsi_2 + 1).d
            var_288_1.d = rax_34
            
            if (rax_34 s> var_288_1:4.d)
                sub_14083a7e0(&var_290)
            
            uint64_t rcx_20 = var_290
            int64_t rdx_13 = rsi_2 * 3
            int32_t rax_35 = *(&var_170 + rbx)
            *(rcx_20 + (rdx_13 << 2)) = *(&var_178 + rbx)
            *(rcx_20 + (rdx_13 << 2) + 8) = rax_35
            int64_t rsi_3 = sx.q(var_2a8_1.d)
            int32_t rax_36 = (rsi_3 + 1).d
            var_2a8_1.d = rax_36
            
            if (rax_36 s> var_2a8_1:4.d)
                sub_14083a7e0(&var_2b0)
            
            uint64_t rcx_22 = var_2b0
            int64_t rdx_15 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_37 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_22 + (rdx_15 << 2)) = zmm0_1
            *(rcx_22 + (rdx_15 << 2) + 8) = rax_37
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_38
    float zmm9_1
    float zmm11_1[0x4]
    float zmm15_1[0x4]
    rax_38, zmm9_1, zmm11_1, zmm15_1 = sub_14155ca60(&var_290, &var_2b0, &var_230, &var_228, 
        &var_2d8, &var_2a0, &var_270, &var_280)
    float zmm2_1[0x4]
    float zmm6_1[0x4]
    
    if (rax_38 == 2)
        float zmm5_1 = zmm11_1[0]
        int64_t zmm4_1 = zmm11_1[0].q
        
        if (i_6 s> 0)
            float (* rax_41)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_41
                rax_41 = &(*rax_41)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm6_1 = arg8
        zmm15_1[0] = zmm15_1[0] + zmm6_1[0]
        *arg4 = zmm15_1[0]
        *arg7 = var_2a0
        arg7[2] = var_298
        zmm6_1[0] = zmm6_1[0] f* *arg7
        zmm6_1[0] = zmm6_1[0] f* arg7[1]
        zmm6_1[0] = zmm6_1[0] f* arg7[2]
        zmm6_1[0] = zmm6_1[0] + zmm5_1
        zmm6_1[0] = zmm6_1[0] + zmm11_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm11_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
        arg5[1].d = zmm6_1[0]
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* arg7[1]
        zmm15_1[0] = zmm15_1[0] f* arg7[2]
        zmm11_1[0] = zmm11_1[0] - zmm15_1[0]
        zmm4_1.d = zmm4_1.d f- zmm15_1[0]
        zmm11_1[0] = zmm11_1[0] - zmm15_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_1, zmm4_1)).q
        arg6[1].d = zmm11_1[0]
        float temp1_1 = *arg4
        zmm9_1 - temp1_1
        uint64_t rcx_28 = var_2b0
        rbx.b = zmm9_1 < temp1_1
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        uint64_t rcx_29 = var_290
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        result = zx.d(rbx.b)
    else
        zmm6_1 = arg8
        float zmm3_1[0x4] = var_280
        zmm2_1 = var_27c
        *arg7 = var_2a0
        float zmm0_2[0x4] = var_2d8
        arg7[2] = var_298
        zmm0_2[0] = zmm0_2[0] + zmm6_1[0]
        zmm0_2[0] = zmm0_2[0] + zmm15_1[0]
        *arg4 = zmm0_2[0]
        zmm6_1[0] = zmm6_1[0] f* *arg7
        zmm6_1[0] = zmm6_1[0] f* arg7[1]
        zmm6_1[0] = zmm6_1[0] f* arg7[2]
        zmm6_1[0] = zmm6_1[0] + var_270
        zmm6_1[0] = zmm6_1[0] + var_26c
        zmm6_1[0] = zmm6_1[0] + var_268
        *arg5 = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
        arg5[1].d = zmm6_1[0]
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* arg7[1]
        zmm15_1[0] = zmm15_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm15_1[0]
        zmm0_2 = var_278
        zmm2_1[0] = zmm2_1[0] - zmm15_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm15_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        uint64_t rcx_25 = var_2b0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_290
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result.b = 1
else
    var_2d8 = zmm11[0]
    
    if (i_6 s> 0)
        float (* rax_31)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_31
            rax_31 = &(*rax_31)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm11[0] = zmm11[0] + zmm2[0]
            r12 += 0xc
            zmm11[0] = zmm11[0] + zmm2[0]
            zmm11[0] = zmm11[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_2d8 = zmm11[0]
    
    zmm5 = 0x3f000000
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm9 = arg8
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm3 = zx.o(0)
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm3[0] = zmm11[0]
    zmm2 = 0x3f000000
    float temp0_36[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm2[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm1 = zmm15
    zmm1[0] = zmm1[0] + zmm9[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    zmm11[0] = zmm11[0] * temp0_36[0]
    float temp0_37[0x4] = _mm_unpacklo_ps(zmm11, zmm11[0].q)
    *arg7 = temp0_37.q
    float temp0_38[0x4] = __sqrtss_xmmss_memss(temp0_37[0], var_2c4)
    float var_2c8_2 = zmm11[0]
    zmm1[0] = zmm1[0] - temp0_38[0]
    arg7[2] = var_2c8_2
    *arg4 = zmm1[0]
    zmm9[0] = zmm9[0] f* *arg7
    zmm9[0] = zmm9[0] f* arg7[1]
    zmm9[0] = zmm9[0] f* arg7[2]
    zmm9[0] = zmm9[0] + zmm11[0]
    zmm9[0] = zmm9[0] + zmm11[0]
    zmm9[0] = zmm9[0] + var_2d8
    zmm1 = zmm15
    *arg5 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    zmm0 = zmm15
    arg5[1].d = zmm9[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm15[0] = zmm15[0] f* arg7[2]
    zmm11[0] = zmm11[0] - zmm0[0]
    zmm11[0] = zmm11[0] - zmm1[0]
    zmm11[0] = zmm11[0] f- zmm15[0]
    *arg6 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    arg6[1].d = zmm11[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_318)
return result
