// 函数: sub_141604210
// 地址: 0x141604210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t r12 = 0
float var_2b8 = 0f
float zmm2[0x4] = *arg3
float zmm10[0x4] = zx.o(0)
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
float var_1c8[0x4]
int128_t* var_200 = &var_1c8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float zmm5[0x4] = *arg9 ^ 0x80000000
float zmm6[0x4] = *(arg9 + 4) ^ 0x80000000
float zmm7[0x4] = *(arg9 + 8) ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
int32_t r13 = 0
void* var_230 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_210 = arg2
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm5[0]
float var_188[0x4] = temp0_6
var_1c8 = temp0_6
zmm6[0] = zmm6[0] + zmm7[0]
float zmm1[0x4]
bool cond:0_1

if (not(zmm6[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm6[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm1[0] = 1f / temp0_7[0]
    zmm3 = zmm1
    zmm2 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm1[0] = zmm1[0] * zmm7[0]

if (zmm6[0] < 9.99999975e-05f || not(cond:0_1))
    zmm3 = 0xbf800000
    zmm2 = zx.o(0)
    zmm1 = zx.o(0)

float rcx = 0f
void* rax_6 = *(arg1 + 0x10)
float zmm13[0x4] = 0x7f7fffff
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm0[0x4] = *(rax_6 + 0x2c)
float var_294 = 3.40282347e+38f
uint32_t zmm11[0x4]

if (zmm0[0] == 0f)
    zmm11 = zx.o(0)
else
    zmm11 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    zmm11[0] = zmm11[0] f* zmm0[0]

void* rax_7 = *(arg2 + 0x10)
zmm11[0] = zmm11[0] f+ arg8
zmm0 = *(rax_7 + 0x1c)
uint32_t zmm12[0x4]

if (zmm0[0] == 0f)
    zmm12 = zx.o(0)
else
    zmm12 = _mm_and_ps(*(arg2 + 0x28), 0x7fffffff)
    zmm12[0] = zmm12[0] f* zmm0[0]

zmm12[0] = zmm12[0] f+ arg10
int32_t i_6 = var_1a8.d
float zmm8[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm14[0x4]
float var_c8[0x4] = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
int32_t var_2b0
int32_t var_2ac
int32_t var_2a8
uint64_t var_290
uint64_t var_280
int32_t var_278
uint64_t var_270
float var_260
float var_25c
float var_258
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
float rcx_1

while (true)
    rcx_1 = rcx i+ 1
    var_2b8 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_9 = var_230
    void* rcx_2 = *(rax_9 + 0x10)
    zmm7 = *(rax_9 + 0x28)
    zmm14 = *(rax_9 + 0x2c)
    zmm15 = *(rax_9 + 0x30)
    float zmm4[0x4] = *(rcx_2 + 0x20)
    zmm5 = *(rcx_2 + 0x1c)
    zmm6 = *(rcx_2 + 0x24)
    zmm2[0] = zmm2[0] * zmm14[0]
    zmm7[0] = zmm7[0] * zmm3[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm7[0] = zmm7[0] * zmm5[0]
    zmm1[0] = zmm1[0] * zmm15[0]
    zmm2[0] = zmm2[0] + zmm7[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    zmm2[0] = zmm2[0] + zmm1[0]
    int32_t* rax_10
    int32_t r13_1
    
    if (zmm2[0] > -0f)
        r13_1 = r13 | 0x20
        int32_t var_218_1 = *(rcx_2 + 0x18)
        int64_t var_220
        rax_10 = &var_220
        var_220 = *(rcx_2 + 0x10)
    else
        zmm2 = *(rcx_2 + 0x28)
        rax_10 = &var_260
        zmm2[0] = zmm2[0] * zmm5[0]
        r13_1 = r13 | 0x10
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rcx_2 + 0x10)
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm2[0] = zmm2[0] f+ *(rcx_2 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rcx_2 + 0x18)
        var_260 = zmm2[0]
        var_25c = zmm2[0]
        var_258 = zmm2[0]
    
    int32_t rcx_4 = r13_1 & 0xffffffdf
    var_278 = rax_10[2]
    var_280 = *rax_10
    
    if ((r13_1.b & 0x20) == 0)
        rcx_4 = r13_1
    
    r13 = rcx_4
    
    if ((rcx_4.b & 0x10) != 0)
        r13 &= 0xffffffef
    
    void* rcx_5 = var_210
    zmm9 = var_280.d
    zmm8 = var_280:4.d
    zmm9[0] = zmm9[0] * zmm7[0]
    void* rax_14 = *(rcx_5 + 0x10)
    zmm3 = *(rcx_5 + 0x28)
    zmm7 = var_278
    zmm7[0] = zmm7[0] * zmm15[0]
    zmm3[0] = zmm3[0] f* *(rax_14 + 0x10)
    zmm0 = *(rax_14 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx_5 + 0x30)
    zmm2 = *(rax_14 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx_5 + 0x2c)
    float temp0_10[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm8[0] = zmm8[0] * zmm14[0]
    zmm4 = *arg3
    float temp0_12[0x4] = _mm_unpacklo_ps(temp0_10, _mm_unpacklo_ps(zmm2, zmm10[0].q)[0].q)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_15)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_13)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float var_1f0_1 = zmm7[0]
    float temp0_20[0x4] = _mm_sub_ps(temp0_18, temp0_16)
    float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_21)
    float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_15)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xd2)
    float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_12)
    float temp0_30[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_25, temp0_13), temp0_24), temp0_26), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm9[0] = zmm9[0] - temp0_30[0]
    int64_t rdx = sx.q(var_1a8.d)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    float var_1e0_1 = temp0_31[0]
    zmm7[0] = zmm7[0] - temp0_31[0]
    int64_t rcx_6 = rdx * 3
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    zmm8[0] = zmm8[0] - temp0_32[0]
    int32_t i_7 = rdx.d + 1
    *(&var_178 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm9, zmm8[0].q)).q
    (&var_170)[rcx_6] = var_1f0_1
    *(&var_148 + (rcx_6 << 2)) = (_mm_unpacklo_ps(temp0_30, temp0_32[0].q)).q
    (&var_140)[rcx_6] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm9, zmm8[0].q)).q
    int32_t var_110
    (&var_110)[rcx_6] = zmm7[0]
    var_1a8.d = rdx.d + 1
    
    if (rdx.d == 0)
        int64_t rax_24 = sx.q(var_1a8:4.d)
        int64_t rcx_14 = rax_24 * 3
        var_188[rax_24] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_14 << 2)))
        var_2a8 = (&var_110)[rcx_14]
    else
        uint64_t* rax_21
        
        if (rdx.d == 1)
            rax_21 = sub_1416e69d0(&var_290, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_1416046d2:
            zmm0 = zx.o(*rax_21)
            var_2a8 = rax_21[1].d
            i_7 = var_1a8.d
        else
            if (rdx.d == 2)
                rax_21, zmm10, zmm11, zmm12, zmm13 =
                    sub_1416fa750(&var_270, &var_118, &var_1a8, &var_188)
                goto label_1416046d2
            
            if (rdx.d == 3)
                uint64_t var_1b8[0x2]
                rax_21, zmm10, zmm11, zmm12, zmm13 =
                    sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_1416046d2
            
            int32_t var_298_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm10, zmm10[0].q)
            var_2a8 = 0
    
    int32_t var_198
    int64_t r8_3 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm6 = var_2a8
    int64_t rdi = r8_3 * 3
    int32_t rax_25 = (&var_110)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_5 = (&var_110)[r14_1]
    int32_t rcx_15 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm8 = 0x358637bd
    var_2b0.q = zmm0.q
    zmm4 = var_2ac
    zmm5 = var_2b0
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_3]
    int32_t r8_4 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_5
    int32_t rdx_6 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_15
    int32_t rcx_16 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_25
    int32_t rax_26 = (&var_170)[rdi]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_4
    int32_t r8_5 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_6
    int32_t rdx_7 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_16
    int32_t rcx_17 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_26
    int32_t rax_27 = (&var_140)[rdi]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_5
    int64_t var_130_1 = zmm1.q
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_134_1 = rdx_7
    zmm6[0] = zmm6[0] * zmm6[0]
    int32_t var_128_1 = rcx_17
    zmm4[0] = zmm4[0] + zmm5[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_27
    zmm4[0] = zmm4[0] + zmm6[0]
    
    if (zmm4[0] < 9.99999997e-07f || zmm4[0] >= zmm13[0])
        i_6 = i_7
        zmm13 = zmm4
        rcx_1 = var_2b8
        var_294 = zmm4[0]
        break
    
    zmm1 = 0x3f800000
    i_6 = i_7
    zmm13 = zmm4
    rcx = var_2b8
    float temp0_37[0x4] = _mm_sqrt_ss(0, zmm4[0])
    var_294 = zmm4[0]
    zmm1[0] = 1f / temp0_37[0]
    zmm3 = zmm1
    zmm2 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

float result

if (zmm13[0] <= zmm8[0])
    var_270 = 0
    int64_t var_268_1 = 0
    var_290 = 0
    int64_t var_288_1 = 0
    sub_14083ad30(&var_270, 8)
    
    if (var_288_1:4.d s< 8)
        sub_14083ad30(&var_290, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_268_1.d)
            int32_t rax_31 = (rsi_2 + 1).d
            var_268_1.d = rax_31
            
            if (rax_31 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_21 = var_270
            int64_t rdx_10 = rsi_2 * 3
            int32_t rax_32 = *(&var_170 + rbx)
            *(rcx_21 + (rdx_10 << 2)) = *(&var_178 + rbx)
            *(rcx_21 + (rdx_10 << 2) + 8) = rax_32
            int64_t rsi_3 = sx.q(var_288_1.d)
            int32_t rax_33 = (rsi_3 + 1).d
            var_288_1.d = rax_33
            
            if (rax_33 s> var_288_1:4.d)
                sub_14083a7e0(&var_290)
            
            uint64_t rcx_23 = var_290
            int64_t rdx_12 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_34 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_23 + (rdx_12 << 2)) = zmm0_1
            *(rcx_23 + (rdx_12 << 2) + 8) = rax_34
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_35
    float zmm8_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    uint128_t zmm12_1
    rax_35, zmm8_1, zmm10_1, zmm11_1, zmm12_1 = sub_1415a1120(&var_270, &var_290, &var_230, 
        &var_210, &var_2b8, &var_280, &var_260, &var_2b0)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_35 == 2)
        float zmm5_1 = zmm10_1.d
        float zmm6_1 = zmm10_1.d
        float zmm7_1 = zmm10_1.d
        zmm3_1 = zmm10_1
        int64_t zmm4_1 = zmm10_1.q
        
        if (i_6 s> 0)
            float (* rax_38)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_38
                rax_38 = &(*rax_38)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_178 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                zmm7_1 = zmm7_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm10_1.d = zmm10_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm0_2.d = zmm12_1.d f+ zmm11_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_280
        arg7[2] = var_278
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm11_1.d = zmm11_1.d f+ zmm7_1
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm12_1.d f* *arg7
        zmm1_1.d = zmm12_1.d f* arg7[1]
        zmm12_1.d = zmm12_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm10_1.d = zmm10_1.d f- zmm12_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm10_1.d
        float temp3_1 = *arg4
        zmm8_1 - temp3_1
        uint64_t rcx_29 = var_290
        rbx.b = zmm8_1 < temp3_1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        uint64_t rcx_30 = var_270
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_2b0
        *arg7 = var_280
        zmm0_2 = var_2b8
        arg7[2] = var_278
        zmm0_2.d = zmm0_2.d f+ zmm11_1.d
        zmm0_2.d = zmm0_2.d f+ zmm12_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_260
        zmm1_1.d = zmm1_1.d f+ var_25c
        zmm11_1.d = zmm11_1.d f+ var_258
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm12_1.d f* *arg7
        zmm1_1.d = zmm12_1.d f* arg7[1]
        zmm12_1.d = zmm12_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_2ac.d f- zmm1_1.d
        zmm0_2.d = var_2a8.d f- zmm12_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        uint64_t rcx_26 = var_290
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_270
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result.b = 1
else
    var_2b8 = zmm10[0]
    
    if (i_6 s> 0)
        float (* rax_28)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_28
            rax_28 = &(*rax_28)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            r12 += 0xc
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm10[0] = zmm10[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_2b8 = zmm10[0]
    
    zmm5 = 0x3f000000
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm3 = zx.o(0)
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm3[0] = zmm10[0]
    zmm2 = 0x3f000000
    float temp0_38[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_38[0] = temp0_38[0] * temp0_38[0]
    zmm3[0] = zmm3[0] * temp0_38[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_38[0] = temp0_38[0] * zmm2[0]
    temp0_38[0] = temp0_38[0] + temp0_38[0]
    temp0_38[0] = temp0_38[0] * temp0_38[0]
    zmm3[0] = zmm3[0] * temp0_38[0]
    zmm1 = zmm12
    zmm1[0] = zmm1[0] f+ zmm11[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_38[0] = temp0_38[0] * zmm5[0]
    temp0_38[0] = temp0_38[0] + temp0_38[0]
    zmm10[0] = zmm10[0] * temp0_38[0]
    zmm10[0] = zmm10[0] * temp0_38[0]
    zmm10[0] = zmm10[0] * temp0_38[0]
    float temp0_39[0x4] = _mm_unpacklo_ps(zmm10, zmm10[0].q)
    *arg7 = temp0_39.q
    float temp0_40[0x4] = __sqrtss_xmmss_memss(temp0_39[0], var_294)
    float var_298_2 = zmm10[0]
    zmm1[0] = zmm1[0] - temp0_40[0]
    arg7[2] = var_298_2
    zmm0 = zmm11
    *arg4 = zmm1[0]
    zmm1 = zmm11
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm0[0] = zmm0[0] + zmm10[0]
    zmm1[0] = zmm1[0] + zmm10[0]
    zmm11[0] = zmm11[0] f+ var_2b8
    float temp0_41[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    zmm1 = zmm12
    *arg5 = temp0_41.q
    zmm0 = zmm12
    arg5[1].d = zmm11[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm12[0] = zmm12[0] f* arg7[2]
    zmm10[0] = zmm10[0] - zmm0[0]
    zmm10[0] = zmm10[0] - zmm1[0]
    zmm10[0] = zmm10[0] f- zmm12[0]
    *arg6 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    arg6[1].d = zmm10[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2f8)
return result
