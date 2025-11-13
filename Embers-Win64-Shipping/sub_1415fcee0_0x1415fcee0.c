// 函数: sub_1415fcee0
// 地址: 0x1415fcee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
float zmm3[0x4] = *arg3
float zmm9[0x4] = zx.o(0)
float zmm14[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1f8 = (zmm3 ^ 0x80000000)[0]
float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
float var_1f0 = (temp0 ^ 0x80000000)[0]
float var_1f4 = zmm1[0]
float* var_1d8 = &var_1f8
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float zmm5[0x4] = *arg9 ^ 0x80000000
float zmm6[0x4] = *(arg9 + 4) ^ 0x80000000
float zmm7[0x4] = *(arg9 + 8) ^ 0x80000000
float var_1ec = temp0_2[0]
zmm6[0] = zmm6[0] * zmm6[0]
int64_t var_220 = arg11
zmm5[0] = zmm5[0] * zmm5[0]
void* var_200 = arg1
zmm7[0] = zmm7[0] * zmm7[0]
void* var_1e8 = arg2
zmm6[0] = zmm6[0] + zmm5[0]
zmm6[0] = zmm6[0] + zmm7[0]
float zmm2[0x4]
bool cond:0_1

if (not(zmm6[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm6[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm1[0] = 1f / temp0_3[0]
    zmm3 = zmm1
    zmm2 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm1[0] = zmm1[0] * zmm7[0]

if (zmm6[0] < 9.99999975e-05f || not(cond:0_1))
    zmm3 = 0xbf800000
    zmm2 = zx.o(0)
    zmm1 = zx.o(0)

int64_t r12 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rcx = 0
float zmm13[0x4] = 0x7f7fffff
float var_188[0x4] = data_142d3f7e0
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x1c)
float var_264 = 3.40282347e+38f
uint32_t zmm10[0x4]

if (zmm0[0] == 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg10
zmm7 = 0x80000000
float zmm15[0x4] = 0x358637bd
int32_t i_6 = var_1a0.d
int64_t rbx
int64_t arg_8 = rbx
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
int32_t var_288
uint64_t var_280
int32_t var_278
uint64_t var_260
uint64_t var_250
float var_208
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_1

while (true)
    rcx_1 = rcx + 1
    var_288 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_7 = var_200
    float zmm4[0x4] = *(rax_7 + 0x28)
    zmm5 = *(rax_7 + 0x2c)
    zmm12 = *(rax_7 + 0x30)
    void* rcx_2 = *(rax_7 + 0x10)
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    bool cond:2_1 = zmm3[0] <= zmm7[0]
    zmm1[0] = zmm1[0] * zmm12[0]
    
    if (cond:2_1)
        zmm11 = *(rcx_2 + 0x1c)
    else
        zmm11 = *(rcx_2 + 0x10)
    
    if (zmm2[0] <= zmm7[0])
        zmm8 = *(rcx_2 + 0x20)
    else
        zmm8 = *(rcx_2 + 0x14)
    
    if (zmm1[0] <= zmm7[0])
        zmm0 = *(rcx_2 + 0x24)
    else
        zmm0 = *(rcx_2 + 0x18)
    
    void* rcx_3 = var_1e8
    zmm12[0] = zmm12[0] * zmm0[0]
    zmm11[0] = zmm11[0] * zmm4[0]
    void* rax_8 = *(rcx_3 + 0x10)
    zmm3 = *(rcx_3 + 0x28)
    zmm8[0] = zmm8[0] * zmm5[0]
    zmm3[0] = zmm3[0] f* *(rax_8 + 0x10)
    zmm0 = *(rax_8 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx_3 + 0x30)
    zmm2 = *(rax_8 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx_3 + 0x2c)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    var_208 = zmm12[0]
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, zmm9[0].q)
    zmm4 = *arg3
    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
    float temp0_25[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), temp0_19), temp0_21), arg3[1])
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    zmm11[0] = zmm11[0] - temp0_25[0]
    int64_t r13 = sx.q(var_1a0.d)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    float var_1c8_1 = temp0_26[0]
    zmm12[0] = zmm12[0] - temp0_26[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    int64_t rcx_5 = r13 * 3
    zmm8[0] = zmm8[0] - temp0_27[0]
    i_6 = r13.d + 1
    float temp0_28[0x4] = _mm_unpacklo_ps(zmm11, zmm8[0].q)
    float var_1b8_1 = zmm12[0]
    *(&var_178 + (rcx_5 << 2)) = temp0_28.q
    (&var_170)[rcx_5] = var_208
    *(&var_148 + (rcx_5 << 2)) = (_mm_unpacklo_ps(temp0_25, temp0_27[0].q)).q
    (&var_140)[rcx_5] = var_1c8_1
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm11, zmm8[0].q)).q
    int32_t var_110
    (&var_110)[rcx_5] = var_1b8_1
    var_1a0.d = i_6
    int32_t rax_14
    
    if (i_6 == 1)
        int64_t rax_18 = sx.q(var_1a0:4.d)
        int64_t rcx_13 = rax_18 * 3
        var_188[rax_18] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_13 << 2)))
        rax_14 = (&var_110)[rcx_13]
    else if (i_6 == 2)
        uint64_t* rax_17
        rax_17, zmm7, zmm9 = sub_1416e69d0(&var_260, &var_118, &var_1a0:4, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_17)
        rax_14 = rax_17[1].d
    else if (i_6 == 3)
        uint64_t* rax_16
        rax_16, zmm7, zmm9, zmm10, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_250, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_16)
        rax_14 = rax_16[1].d
    else if (i_6 == 4)
        uint64_t var_1b0[0x2]
        uint64_t* rax_15
        rax_15, zmm7, zmm9, zmm10, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1b0, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_15)
        rax_14 = rax_15[1].d
    else
        int32_t var_268_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_14 = 0
    
    int32_t var_190
    int64_t r8_3 = sx.q(var_190)
    rbx = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    var_280 = zmm0.q
    int64_t rdi_1 = r8_3 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_3 = (&var_110)[r14_1]
    int32_t rcx_14 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_280:4.d
    zmm5 = var_280.d
    var_278 = rax_14
    int32_t rax_19 = (&var_110)[rdi_1]
    zmm6 = var_278
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_3]
    int32_t r8_4 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_3
    int32_t rdx_4 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_14
    int32_t rcx_15 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_19
    int32_t rax_20 = (&var_170)[rdi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_4
    int32_t r8_5 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_4
    int32_t rdx_5 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_15
    int32_t rcx_16 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_20
    int32_t rax_21 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_5
    int64_t var_130_1 = zmm1.q
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_134_1 = rdx_5
    zmm6[0] = zmm6[0] * zmm6[0]
    int32_t var_128_1 = rcx_16
    zmm4[0] = zmm4[0] + zmm5[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_21
    zmm4[0] = zmm4[0] + zmm6[0]
    
    if (zmm4[0] < zmm15[0] || zmm4[0] >= zmm13[0])
        rcx_1 = var_288
        zmm13 = zmm4
        var_264 = zmm4[0]
        break
    
    rcx = var_288
    float temp0_32[0x4] = _mm_sqrt_ss(0, zmm4[0])
    zmm1 = zmm14
    var_264 = zmm4[0]
    zmm13 = zmm4
    zmm1[0] = zmm1[0] / temp0_32[0]
    zmm3 = zmm1
    zmm2 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    continue

int64_t r9_5 = var_220

if (r9_5 != 0)
    *r9_5 = rcx_1

float result

if (zmm13[0] <= zmm15[0])
    __builtin_memset(&var_260, 0, 0x20)
    sub_14083ad30(&var_250, 8)
    int64_t var_258
    
    if (var_258:4.d s< 8)
        sub_14083ad30(&var_260, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_248_1
            int64_t rdi_2 = sx.q(var_248_1.d)
            int32_t rax_25 = (rdi_2 + 1).d
            var_248_1.d = rax_25
            
            if (rax_25 s> var_248_1:4.d)
                sub_14083a7e0(&var_250)
            
            uint64_t rcx_21 = var_250
            int64_t rdx_7 = rdi_2 * 3
            int32_t rax_26 = *(&var_170 + rbx)
            *(rcx_21 + (rdx_7 << 2)) = *(&var_178 + rbx)
            *(rcx_21 + (rdx_7 << 2) + 8) = rax_26
            int64_t rdi_3 = sx.q(var_258.d)
            int32_t rax_27 = (rdi_3 + 1).d
            var_258.d = rax_27
            
            if (rax_27 s> var_258:4.d)
                sub_14083a7e0(&var_260)
            
            uint64_t rcx_23 = var_260
            int64_t rdx_9 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_28 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_23 + (rdx_9 << 2)) = zmm0_1
            *(rcx_23 + (rdx_9 << 2) + 8) = rax_28
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t var_210
    int32_t rax_29
    uint128_t zmm9_1
    uint128_t zmm10_1
    float zmm15_1
    rax_29, zmm9_1, zmm10_1, zmm15_1 = sub_1415bad20(&var_250, &var_260, &var_200, &var_1e8, 
        &var_288, &var_280, &var_220, &var_210)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_29 == 2)
        float zmm5_1 = zmm9_1.d
        float zmm6_1 = zmm9_1.d
        float zmm7_1 = zmm9_1.d
        zmm3_1 = zmm9_1
        int64_t zmm4_1 = zmm9_1.q
        
        if (i_6 s> 0)
            float (* rax_32)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_32
                rax_32 = &(*rax_32)[1]
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
                zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm0_2.d = zmm10_1.d f+ zmm2_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_280
        arg7[2] = var_278
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm2_1.d = zmm2_1.d f+ zmm7_1
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm9_1.d = zmm9_1.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm9_1.d
        float temp1_1 = *arg4
        zmm15_1 - temp1_1
        uint64_t rcx_29 = var_260
        rbx.b = zmm15_1 < temp1_1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        uint64_t rcx_30 = var_250
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        zmm3_1 = var_210
        *arg7 = var_280
        zmm0_2.d = var_288.d f+ zmm2_1.d
        arg7[2] = var_278
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm2_1.d f* *arg7
        uint64_t rcx_26 = var_260
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_220.d
        zmm1_1.d = zmm1_1.d f+ var_220:4.d
        int32_t var_218
        zmm2_1.d = zmm2_1.d f+ var_218
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        int32_t var_20c
        zmm2_1.d = var_20c.d f- zmm1_1.d
        zmm0_2.d = var_208.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_250
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_22)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_22
            rax_22 = &(*rax_22)[1]
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            r12 += 0xc
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm3 = zx.o(0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm3[0] = zmm9[0]
    zmm2 = 0x3f000000
    float temp0_33[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_33[0] = temp0_33[0] * temp0_33[0]
    zmm3[0] = zmm3[0] * temp0_33[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_33[0] = temp0_33[0] * zmm2[0]
    zmm2 = arg8
    temp0_33[0] = temp0_33[0] + temp0_33[0]
    temp0_33[0] = temp0_33[0] * temp0_33[0]
    zmm3[0] = zmm3[0] * temp0_33[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_33[0] = temp0_33[0] * zmm5[0]
    temp0_33[0] = temp0_33[0] + temp0_33[0]
    zmm9[0] = zmm9[0] * temp0_33[0]
    zmm9[0] = zmm9[0] * temp0_33[0]
    zmm9[0] = zmm9[0] * temp0_33[0]
    float temp0_34[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    *arg7 = temp0_34.q
    float temp0_35[0x4] = __sqrtss_xmmss_memss(temp0_34[0], var_264)
    float var_268_2 = zmm9[0]
    zmm1[0] = zmm1[0] - temp0_35[0]
    arg7[2] = var_268_2
    *arg4 = zmm1[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm1 = zmm10
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    zmm0 = zmm10
    arg5[1].d = zmm2[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm10[0] = zmm10[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm0[0]
    zmm9[0] = zmm9[0] - zmm1[0]
    zmm9[0] = zmm9[0] f- zmm10[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2c8)
return result
