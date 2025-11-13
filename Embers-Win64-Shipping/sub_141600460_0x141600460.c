// 函数: sub_141600460
// 地址: 0x141600460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t r12 = 0
float var_2f0 = 0f
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
int32_t r13 = 0
void* var_248 = arg2
float (* rdx)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
void* var_250 = arg1
zmm3[0] = zmm3[0] * zmm3[0]
zmm5[0] = zmm5[0] * zmm5[0]
float (* var_238)[0x4] = &var_1c8
zmm6[0] = zmm6[0] * zmm6[0]
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

int32_t rcx = 0
void* rax_6 = *(arg1 + 0x10)
float zmm1[0x4] = 0x7f7fffff
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm0[0x4] = *(rax_6 + 0x2c)
float var_2e0 = 3.40282347e+38f
uint32_t zmm15[0x4]

if (zmm0[0] == 0f)
    zmm15 = zx.o(0)
else
    zmm15 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    zmm15[0] = zmm15[0] f* zmm0[0]

void* rax_7 = *(arg2 + 0x10)
zmm15[0] = zmm15[0] f+ arg8
zmm0 = *(rax_7 + 0x2c)
uint32_t zmm9[0x4]

if (zmm0[0] == 0f)
    zmm9 = zx.o(0)
else
    zmm9 = _mm_and_ps(*(arg2 + 0x28), 0x7fffffff)
    zmm9[0] = zmm9[0] f* zmm0[0]

zmm9[0] = zmm9[0] f+ arg10
int32_t i_6 = var_1a8.d
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
uint32_t var_2d0 = zmm9[0]
zmm9 = 0x358637bd
uint32_t zmm8[0x4]
uint32_t var_68[0x4] = zmm8
float zmm10[0x4]
float var_88[0x4] = zmm10
uint64_t var_2c8
uint64_t var_2b8
int32_t var_2b0
uint64_t var_2a8
float var_298
float var_294
float var_290
float var_288
float var_284
float var_280
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_1

while (true)
    rcx_1 = rcx + 1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_9 = var_250
    void* rcx_2 = *(rax_9 + 0x10)
    zmm6 = *(rax_9 + 0x28)
    zmm7 = *(rax_9 + 0x2c)
    zmm8 = *(rax_9 + 0x30)
    float zmm4[0x4] = *(rcx_2 + 0x20)
    zmm3 = *(rcx_2 + 0x1c)
    zmm5 = *(rcx_2 + 0x24)
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm13[0] = zmm13[0] * zmm6[0]
    zmm14[0] = zmm14[0] * zmm4[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm12[0] = zmm12[0] f* zmm8[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    int32_t* rax_10
    int32_t r13_1
    
    if (zmm14[0] > -0f)
        r13_1 = r13 | 0x20
        int32_t var_208_1 = *(rcx_2 + 0x18)
        int64_t var_210
        rax_10 = &var_210
        var_210 = *(rcx_2 + 0x10)
    else
        zmm0 = *(rcx_2 + 0x28)
        rax_10 = &var_298
        zmm3[0] = zmm3[0] * zmm0[0]
        r13_1 = r13 | 0x10
        zmm4[0] = zmm4[0] * zmm0[0]
        zmm3[0] = zmm3[0] f+ *(rcx_2 + 0x10)
        zmm5[0] = zmm5[0] * zmm0[0]
        zmm4[0] = zmm4[0] f+ *(rcx_2 + 0x14)
        zmm5[0] = zmm5[0] f+ *(rcx_2 + 0x18)
        var_298 = zmm3[0]
        var_294 = zmm4[0]
        var_290 = zmm5[0]
    
    zmm0 = zx.o(*rax_10)
    int32_t rax_12 = rax_10[2]
    zmm1 = zmm0
    zmm5 = (*rdx)[2]
    int32_t rcx_4 = r13_1 & 0xffffffdf
    zmm4 = (*rdx)[3]
    zmm10 = zmm5
    zmm6[0] = zmm6[0] * zmm0[0]
    zmm0 = rax_12
    zmm0[0] = zmm0[0] f* zmm8[0]
    
    if ((r13_1.b & 0x20) == 0)
        rcx_4 = r13_1
    
    zmm8 = (*rdx)[1]
    float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_2f0 = zmm0[0]
    float var_1d0_1 = zmm0[0]
    int32_t r8_1 = rcx_4 & 0xffffffef
    temp0_10[0] = temp0_10[0] * zmm7[0]
    zmm7 = *rdx
    zmm5[0] = zmm5[0] * zmm14[0]
    
    if ((rcx_4.b & 0x10) == 0)
        r8_1 = rcx_4
    
    void* rcx_5 = var_248
    zmm10[0] = zmm10[0] * zmm13[0]
    int64_t var_220_1 = temp0_10.q
    void* rax_15 = *(rcx_5 + 0x10)
    zmm8[0] = zmm8[0] f* zmm12[0]
    float var_278_1 = zmm6[0]
    zmm7[0] = zmm7[0] * zmm14[0]
    zmm8[0] = zmm8[0] f- zmm5[0]
    zmm7[0] = zmm7[0] * zmm12[0]
    zmm10[0] = zmm10[0] - zmm7[0]
    zmm0 = zmm8
    zmm0[0] = zmm0[0] * zmm13[0]
    zmm8[0] = zmm8[0] f+ zmm8[0]
    zmm7[0] = zmm7[0] - zmm0[0]
    zmm0 = *(rcx_5 + 0x30)
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm4[0] = zmm4[0] f* zmm8[0]
    float var_2f8_1 = zmm0[0]
    zmm2 = zmm8
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm13[0]
    zmm8[0] = zmm8[0] f* zmm8[0]
    zmm13 = *(rcx_5 + 0x2c)
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    zmm5 = *(rax_15 + 0x20)
    zmm7[0] = zmm7[0] f* zmm8[0]
    zmm7[0] = zmm7[0] - zmm10[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] + zmm4[0]
    zmm4[0] = zmm4[0] * zmm10[0]
    zmm2[0] = zmm2[0] - zmm7[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm7[0] = zmm7[0] f* *(rcx_5 + 0x28)
    zmm4[0] = zmm4[0] + zmm14[0]
    zmm4[0] = zmm4[0] * zmm7[0]
    zmm10[0] = zmm10[0] f- zmm8[0]
    zmm7[0] = zmm7[0] f* *(rax_15 + 0x1c)
    zmm2[0] = zmm2[0] + zmm4[0]
    zmm4[0] = zmm4[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm13[0]
    zmm10[0] = zmm10[0] + zmm4[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm7[0] = zmm7[0] + zmm2[0]
    zmm2 = *(rcx_5 + 0x30)
    zmm4 = *(rax_15 + 0x24)
    zmm10[0] = zmm10[0] * zmm2[0]
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm7[0] = zmm7[0] + zmm10[0]
    float* rax_16
    int32_t rdx_1
    
    if (zmm7[0] < zmm11[0])
        rdx_1 = 0x80
        int32_t var_228_1 = *(rax_15 + 0x18)
        int64_t var_230
        rax_16 = &var_230
        var_230 = *(rax_15 + 0x10)
    else
        zmm2 = *(rax_15 + 0x28)
        rdx_1 = 0x40
        zmm1 = zmm2
        zmm2[0] = zmm2[0] f* *(rax_15 + 0x1c)
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_15 + 0x10)
        zmm1[0] = zmm1[0] * zmm5[0]
        zmm2[0] = zmm2[0] f+ *(rax_15 + 0x18)
        zmm1[0] = zmm1[0] f+ *(rax_15 + 0x14)
        var_288 = zmm2[0]
        rax_16 = &var_288
        var_280 = zmm2[0]
        zmm2 = var_2f8_1
        var_284 = zmm1[0]
    
    int32_t rdx_2 = rdx_1 | r8_1
    r13 = rdx_2 & 0xffffff7f
    var_2b0 = rax_16[2]
    var_2b8 = *rax_16
    
    if ((rdx_2.b & 0x80) == 0)
        r13 = rdx_2
    
    if ((r13.b & 0x40) != 0)
        r13 &= 0xffffffbf
    
    zmm2[0] = zmm2[0] f* var_2b0
    zmm3 = var_2b8.d
    zmm3[0] = zmm3[0] f* *(rcx_5 + 0x28)
    zmm13[0] = zmm13[0] f* var_2b8:4.d
    zmm4 = *arg3
    zmm7 = var_2f0
    float temp0_11[0x4] = _mm_unpacklo_ps(zmm3, zmm2[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_unpacklo_ps(temp0_11, _mm_unpacklo_ps(zmm13, zmm11[0].q)[0].q)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_12)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_21[0x4] = _mm_sub_ps(temp0_19, temp0_17)
    float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_22)
    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), temp0_15)
    zmm1 = var_278_1
    float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_14)
    zmm5 = zx.o(var_220_1)
    float temp0_31[0x4] = __addps_xmmps_memps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xd2), temp0_12), temp0_25), 
            temp0_26), 
        arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm1[0] = zmm1[0] - temp0_31[0]
    int64_t rdx_3 = sx.q(var_1a8.d)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    float var_1f0_1 = temp0_32[0]
    zmm7[0] = zmm7[0] - temp0_32[0]
    int64_t rcx_6 = rdx_3 * 3
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    zmm5[0] = zmm5[0] - temp0_33[0]
    int32_t i_7 = rdx_3.d + 1
    *(&var_178 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1, zmm5[0].q)).q
    (&var_170)[rcx_6] = var_1d0_1
    *(&var_148 + (rcx_6 << 2)) = (_mm_unpacklo_ps(temp0_31, temp0_33[0].q)).q
    (&var_140)[rcx_6] = var_1f0_1
    int64_t var_118
    *(&var_118 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1, zmm5[0].q)).q
    int32_t var_110
    (&var_110)[rcx_6] = zmm7[0]
    var_1a8.d = rdx_3.d + 1
    int32_t var_2d4_1
    
    if (rdx_3.d == 0)
        int64_t rax_29 = sx.q(var_1a8:4.d)
        int64_t rcx_14 = rax_29 * 3
        var_188[rax_29] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_14 << 2)))
        var_2d4_1 = (&var_110)[rcx_14]
    else
        uint64_t* rax_26
        
        if (rdx_3.d == 1)
            rax_26 = sub_1416e69d0(&var_2c8, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_141600b0c:
            zmm0 = zx.o(*rax_26)
            var_2d4_1 = rax_26[1].d
            i_7 = var_1a8.d
        else
            if (rdx_3.d == 2)
                rax_26, zmm11, zmm15 = sub_1416fa750(&var_2a8, &var_118, &var_1a8, &var_188)
                goto label_141600b0c
            
            if (rdx_3.d == 3)
                uint64_t var_1b8[0x2]
                rax_26, zmm11, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_141600b0c
            
            int32_t var_2e4_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
            var_2d4_1 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm5 = var_2d4_1
    int64_t rdi = r8_5 * 3
    int32_t rax_30 = (&var_110)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_8 = (&var_110)[r14_1]
    int32_t rcx_15 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm9 = 0x358637bd
    int64_t var_2dc_1 = zmm0.q
    zmm4 = var_2dc_1.d
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
    int32_t var_f8_1 = rcx_15
    int32_t rcx_16 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_30
    int32_t rax_31 = (&var_170)[rdi]
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
    int32_t var_158_1 = rcx_16
    int32_t rcx_17 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_31
    int32_t rax_32 = (&var_140)[rdi]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2dc_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_10
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_17
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_32
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_2e0)
        i_6 = i_7
        zmm1 = zmm3
        var_2e0 = zmm3[0]
        break
    
    zmm12 = 0x3f800000
    i_6 = i_7
    zmm1 = zmm3
    rdx = var_238
    rcx = rcx_1
    float temp0_38[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_2e0 = zmm3[0]
    zmm12[0] = 1f / temp0_38[0]
    zmm13 = zmm12
    zmm14 = zmm12
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

uint32_t result

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
            int32_t rax_36 = (rsi_2 + 1).d
            var_2a0_1.d = rax_36
            
            if (rax_36 s> var_2a0_1:4.d)
                sub_14083a7e0(&var_2a8)
            
            uint64_t rcx_21 = var_2a8
            int64_t rdx_13 = rsi_2 * 3
            int32_t rax_37 = *(&var_170 + rbx)
            *(rcx_21 + (rdx_13 << 2)) = *(&var_178 + rbx)
            *(rcx_21 + (rdx_13 << 2) + 8) = rax_37
            int64_t rsi_3 = sx.q(var_2c0_1.d)
            int32_t rax_38 = (rsi_3 + 1).d
            var_2c0_1.d = rax_38
            
            if (rax_38 s> var_2c0_1:4.d)
                sub_14083a7e0(&var_2c8)
            
            uint64_t rcx_23 = var_2c8
            int64_t rdx_15 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_39 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_23 + (rdx_15 << 2)) = zmm0_1
            *(rcx_23 + (rdx_15 << 2) + 8) = rax_39
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_40
    float zmm9_1
    float zmm11_1[0x4]
    float zmm15_1[0x4]
    rax_40, zmm9_1, zmm11_1, zmm15_1 = sub_1415b0ff0(&var_2a8, &var_2c8, &var_250, &var_248, 
        &var_2f0, &var_2b8, &var_288, &var_298)
    float zmm2_1[0x4]
    float zmm4_1[0x4]
    
    if (rax_40 == 2)
        float zmm6_1 = zmm11_1[0]
        zmm8 = zmm11_1
        int64_t zmm5_1 = zmm11_1[0].q
        
        if (i_6 s> 0)
            float (* rax_43)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_43
                rax_43 = &(*rax_43)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm8[0] = zmm8[0] f+ zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm5_1.d = zmm5_1.d f+ zmm2_1[0]
                zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm4_1 = var_2d0
        zmm4_1[0] = zmm4_1[0] + zmm15_1[0]
        *arg4 = zmm4_1[0]
        *arg7 = var_2b8
        arg7[2] = var_2b0
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* arg7[1]
        zmm15_1[0] = zmm15_1[0] f* arg7[2]
        zmm15_1[0] = zmm15_1[0] + zmm6_1
        zmm15_1[0] = zmm15_1[0] + zmm11_1[0]
        zmm15_1[0] = zmm15_1[0] f+ zmm8[0]
        *arg5 = (_mm_unpacklo_ps(zmm15_1, zmm15_1[0].q)).q
        arg5[1].d = zmm15_1[0]
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* arg7[1]
        zmm4_1[0] = zmm4_1[0] f* arg7[2]
        zmm11_1[0] = zmm11_1[0] - zmm4_1[0]
        zmm5_1.d = zmm5_1.d f- zmm4_1[0]
        zmm11_1[0] = zmm11_1[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm11_1, zmm5_1)).q
        arg6[1].d = zmm11_1[0]
        float temp1_1 = *arg4
        zmm9_1 - temp1_1
        uint64_t rcx_29 = var_2c8
        rbx.b = zmm9_1 < temp1_1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        uint64_t rcx_30 = var_2a8
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        result = zx.d(rbx.b)
    else
        zmm4_1 = var_2d0
        float zmm3_1[0x4] = var_298
        zmm2_1 = var_294
        *arg7 = var_2b8
        float zmm0_2[0x4] = var_2f0
        arg7[2] = var_2b0
        zmm0_2[0] = zmm0_2[0] + zmm15_1[0]
        zmm0_2[0] = zmm0_2[0] + zmm4_1[0]
        *arg4 = zmm0_2[0]
        zmm15_1[0] = zmm15_1[0] f* *arg7
        zmm15_1[0] = zmm15_1[0] f* arg7[1]
        zmm15_1[0] = zmm15_1[0] f* arg7[2]
        zmm15_1[0] = zmm15_1[0] + var_288
        zmm15_1[0] = zmm15_1[0] + var_284
        zmm15_1[0] = zmm15_1[0] + var_280
        *arg5 = (_mm_unpacklo_ps(zmm15_1, zmm15_1[0].q)).q
        arg5[1].d = zmm15_1[0]
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* arg7[1]
        zmm4_1[0] = zmm4_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
        zmm0_2 = var_290
        zmm2_1[0] = zmm2_1[0] - zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        uint64_t rcx_26 = var_2c8
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_2a8
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result.b = 1
else
    float var_2f4_2 = zmm11[0]
    
    if (i_6 s> 0)
        float (* rax_33)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_33
            rax_33 = &(*rax_33)[1]
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
        var_2f4_2 = zmm11[0]
    
    zmm8 = zmm11
    zmm5 = 0x3f000000
    zmm8[0] = zmm8[0] f- zmm11[0]
    zmm9 = var_2d0
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm11[0] = zmm11[0] - zmm11[0]
    zmm0 = zmm8
    zmm3 = zx.o(0)
    zmm0[0] = zmm0[0] f* zmm8[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    zmm11[0] = zmm11[0] + zmm0[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm3[0] = zmm11[0]
    zmm2 = 0x3f000000
    float temp0_39[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    zmm3[0] = zmm3[0] * temp0_39[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_39[0] = temp0_39[0] * zmm2[0]
    temp0_39[0] = temp0_39[0] + temp0_39[0]
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    zmm3[0] = zmm3[0] * temp0_39[0]
    zmm1 = zmm9
    zmm1[0] = zmm1[0] f+ zmm15[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_39[0] = temp0_39[0] * zmm5[0]
    temp0_39[0] = temp0_39[0] + temp0_39[0]
    zmm8[0] = zmm8[0] f* temp0_39[0]
    zmm11[0] = zmm11[0] * temp0_39[0]
    zmm11[0] = zmm11[0] * temp0_39[0]
    float temp0_40[0x4] = _mm_unpacklo_ps(zmm8, zmm11[0].q)
    *arg7 = temp0_40.q
    float temp0_41[0x4] = __sqrtss_xmmss_memss(temp0_40[0], var_2e0)
    float var_2e4_2 = zmm11[0]
    zmm1[0] = zmm1[0] - temp0_41[0]
    arg7[2] = var_2e4_2
    zmm0 = zmm15
    *arg4 = zmm1[0]
    zmm1 = zmm15
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm15[0] = zmm15[0] f* arg7[2]
    zmm0[0] = zmm0[0] + zmm11[0]
    zmm1[0] = zmm1[0] + zmm11[0]
    zmm15[0] = zmm15[0] f+ var_2f4_2
    float temp0_42[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    zmm1 = zmm9
    *arg5 = temp0_42.q
    zmm0 = zmm9
    arg5[1].d = zmm15[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm9[0] = zmm9[0] f* arg7[2]
    zmm11[0] = zmm11[0] - zmm0[0]
    zmm11[0] = zmm11[0] - zmm1[0]
    zmm11[0] = zmm11[0] f- zmm9[0]
    *arg6 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    arg6[1].d = zmm11[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_338)
return result
