// 函数: sub_141615970
// 地址: 0x141615970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm3[0x4] = *arg3
int64_t r12 = 0
float zmm4[0x4] = zmm3 ^ 0x80000000
float zmm10[0x4] = arg8
float zmm11[0x4] = arg9
float zmm9[0x4] = zx.o(0)
float zmm15[0x4] = 0x7f7fffff
int32_t i_6 = 0
zmm10[0] = zmm10[0] f+ *(arg1 + 0x1c)
zmm11[0] = zmm11[0] f+ *(arg2 + 0x1c)
float zmm8[0x4] = 0x358637bd
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
int64_t rbx
int64_t arg_8 = rbx
float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0[0] = zmm1[0]
float zmm0[0x4] = data_142d3f7e0
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
temp0_4[0] = _mm_shuffle_ps(zmm3, zmm3, 0xff)[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_188[0x4] = temp0_6
int32_t r8 = 0
float zmm6[0x4]
float var_48[0x4] = zmm6
var_188 = zmm0
int32_t* var_270 = arg10
void* var_228 = arg1
float var_1c8[0x4] = temp0_6
void* var_200 = arg2
float (* var_1f0)[0x4] = &var_1c8
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
uint128_t zmm7
uint128_t var_58 = zmm7
uint64_t var_290
int32_t var_288
uint64_t var_268
uint64_t var_258
int64_t var_248
int32_t var_240
int64_t var_238
int32_t var_230
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t r8_1
float zmm2[0x4]
float zmm5[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]

while (true)
    r8_1 = r8 + 1
    
    if (r8 s>= 0x20)
        break
    
    void* rdx = var_228
    zmm7 = zx.o(*(rdx + 0x10))
    var_240 = *(rdx + 0x18)
    void* rax_6 = var_200
    var_248 = zmm7.q
    zmm4 = zx.o(*(rax_6 + 0x10))
    zmm5 = zmm4
    var_230 = *(rax_6 + 0x18)
    float temp0_8[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm9[0].q)
    var_238 = zmm4.q
    zmm4 = *arg3
    float temp0_10[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, var_230[0].q), temp0_8[0].q)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_11)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_13)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_10)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_11)
    zmm2 = zmm7
    zmm3 = zmm7
    float temp0_26[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm0 = var_240
    float temp0_29[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_25, temp0_22), temp0_24), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_29[0]
    int64_t r13 = sx.q(var_1a8.d)
    int32_t rax_10 = *(rdx + 0x18)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
    zmm0[0] = zmm0[0] - temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
    float var_1e0_1 = temp0_30[0]
    int64_t rcx_1 = r13 * 3
    temp0_26[0] = temp0_26[0] - temp0_31[0]
    i_6 = r13.d + 1
    var_1a8.d = i_6
    float var_1d0_1 = zmm0[0]
    *(&var_148 + (rcx_1 << 2)) = (_mm_unpacklo_ps(temp0_29, temp0_31[0].q)).q
    *(&var_178 + (rcx_1 << 2)) = zmm7.q
    (&var_170)[rcx_1] = rax_10
    (&var_140)[rcx_1] = var_1e0_1
    int64_t var_118
    *(&var_118 + (rcx_1 << 2)) = (_mm_unpacklo_ps(zmm3, temp0_26[0].q)).q
    int32_t var_110
    (&var_110)[rcx_1] = var_1d0_1
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_1a8:4.d)
        int64_t rcx_9 = rax_17 * 3
        var_188[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_9 << 2)))
        rax_13 = (&var_110)[rcx_9]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm8, zmm9 = sub_1416e69d0(&var_268, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_258, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_14
        rax_14, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_278_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    int64_t rdi_1 = r8_5 * 3
    var_290 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_4 = (&var_110)[r14_1]
    int32_t rcx_10 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    var_288 = rax_13
    int32_t rax_18 = (&var_110)[rdi_1]
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_5]
    int32_t r8_6 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_4
    int32_t rdx_5 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_10
    int32_t rcx_11 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_18
    int32_t rax_19 = (&var_170)[rdi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_6
    int32_t r8_7 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_5
    int32_t rdx_6 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_11
    int32_t rcx_12 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_19
    int32_t rax_20 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    zmm2 = var_290:4.d
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    zmm0 = var_290.d
    zmm2[0] = zmm2[0] * zmm2[0]
    var_140 = r8_7
    int64_t var_130_1 = zmm1.q
    zmm1 = var_288
    zmm0[0] = zmm0[0] * zmm0[0]
    int32_t var_134_1 = rdx_6
    zmm1[0] = zmm1[0] * zmm1[0]
    int32_t var_128_1 = rcx_12
    zmm2[0] = zmm2[0] + zmm0[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_20
    zmm2[0] = zmm2[0] + zmm1[0]
    
    if (zmm2[0] < zmm8[0] || zmm2[0] >= zmm15[0])
        zmm15 = zmm2
        break
    
    r8 = r8_1
    zmm15 = zmm2
    continue

int32_t* r9_5 = var_270

if (r9_5 != 0)
    *r9_5 = r8_1

float result

if (zmm15[0] <= zmm8[0])
    __builtin_memset(&var_268, 0, 0x20)
    sub_14083ad30(&var_258, 8)
    int64_t var_260
    
    if (var_260:4.d s< 8)
        sub_14083ad30(&var_268, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_250_1
            int64_t rdi_2 = sx.q(var_250_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_250_1.d = rax_24
            
            if (rax_24 s> var_250_1:4.d)
                sub_14083a7e0(&var_258)
            
            uint64_t rcx_17 = var_258
            int64_t rdx_8 = rdi_2 * 3
            int32_t rax_25 = *(&var_170 + rbx)
            *(rcx_17 + (rdx_8 << 2)) = *(&var_178 + rbx)
            *(rcx_17 + (rdx_8 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_260.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_260.d = rax_26
            
            if (rax_26 s> var_260:4.d)
                sub_14083a7e0(&var_268)
            
            uint64_t rcx_19 = var_268
            int64_t rdx_10 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_27 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_19 + (rdx_10 << 2)) = zmm0_1
            *(rcx_19 + (rdx_10 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    float zmm8_1
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    rax_28, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_141556a00(&var_258, &var_268, &var_228, 
        &var_200, &var_270, &var_290, &var_248, &var_238)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_28 == 2)
        float zmm5_1 = zmm9_1.d
        zmm6 = zmm9_1
        zmm7 = zmm9_1
        zmm3_1 = zmm9_1
        int64_t zmm4_1 = zmm9_1.q
        
        if (i_6 s> 0)
            float (* rax_31)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_31
                rax_31 = &(*rax_31)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_178 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm6[0] = zmm6[0] f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                zmm7.d = zmm7.d f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm0_2.d = zmm11_1.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_290
        arg7[2] = var_288
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6[0]
        zmm10_1.d = zmm10_1.d f+ zmm7.d
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm10_1.d
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm9_1.d = zmm9_1.d f- zmm11_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm9_1.d
        float temp4_1 = *arg4
        zmm8_1 - temp4_1
        uint64_t rcx_25 = var_268
        rbx.b = zmm8_1 < temp4_1
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_258
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_238.d
        zmm2_1 = var_238:4.d
        *arg7 = var_290
        zmm0_2 = var_270.d
        arg7[2] = var_288
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        zmm0_2.d = zmm0_2.d f+ zmm11_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm10_1.d f* *arg7
        uint64_t rcx_22 = var_268
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_248.d
        zmm1_1.d = zmm1_1.d f+ var_248:4.d
        zmm10_1.d = zmm10_1.d f+ var_240
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm10_1.d
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = zmm2_1.d f- zmm1_1.d
        zmm0_2.d = var_230.d f- zmm11_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        uint64_t rcx_23 = var_258
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        result.b = 1
else
    float var_a8_1[0x4] = zmm12
    float var_b8_1[0x4] = zmm13
    float var_c8_1[0x4] = zmm14
    float var_298_2 = zmm9[0]
    var_270.d = zmm9[0]
    
    if (i_6 s> 0)
        float (* rax_21)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_21
            rax_21 = &(*rax_21)[1]
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
        var_270.d = zmm9[0]
        var_298_2 = zmm9[0]
    
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm7.d = zmm9.d f- zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm3 = zx.o(0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm2 = zmm7
    zmm2[0] = zmm2[0] f* zmm7.d
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm3[0] = zmm2[0]
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
    zmm11[0] = zmm11[0] + zmm10[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    zmm9[0] = zmm9[0] * temp0_36[0]
    zmm7.d = zmm7.d f* temp0_36[0]
    zmm9[0] = zmm9[0] * temp0_36[0]
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm7.q)).q
    float temp0_38[0x4] = _mm_sqrt_ss(0, zmm15[0])
    float var_278_2 = zmm9[0]
    zmm11[0] = zmm11[0] - temp0_38[0]
    arg7[2] = var_278_2
    *arg4 = zmm11[0]
    zmm10[0] = zmm10[0] f* *arg7
    zmm10[0] = zmm10[0] f* arg7[1]
    zmm10[0] = zmm10[0] f* arg7[2]
    zmm10[0] = zmm10[0] + zmm9[0]
    zmm10[0] = zmm10[0] + var_298_2
    zmm10[0] = zmm10[0] f+ var_270.d
    *arg5 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    arg5[1].d = zmm10[0]
    zmm11[0] = zmm11[0] f* *arg7
    zmm11[0] = zmm11[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm11[0]
    zmm9[0] = zmm9[0] - zmm11[0]
    zmm9[0] = zmm9[0] - zmm11[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2d8)
return result
