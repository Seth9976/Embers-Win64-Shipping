// 函数: sub_141618030
// 地址: 0x141618030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm2[0x4] = *arg3
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float zmm9[0x4] = zx.o(0)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
float (* rcx_1)[0x4] = &var_1c8
zmm3[0] = zmm3[0] * zmm3[0]
int64_t var_220 = arg11
zmm5[0] = zmm5[0] * zmm5[0]
void* var_210 = arg1
void* var_208 = arg2
zmm5[0] = zmm5[0] + zmm3[0]
float (* var_1f8)[0x4] = &var_1c8
zmm5[0] = zmm5[0] + zmm6[0]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm10 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm10[0] = 1f / temp0_7[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm10[0] = zmm10[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm11 = 0xbf800000
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
int64_t r12 = 0
float zmm15[0x4] = 0x7f7fffff
int32_t rdx = 0
float zmm14[0x4] = arg8
int32_t i_6 = 0
zmm14[0] = zmm14[0] f+ *(arg1 + 0x1c)
float zmm8[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm13[0x4]
float var_b8[0x4] = zmm13
float var_274 = 3.40282347e+38f
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
int32_t var_298
int32_t var_290
int32_t var_28c
int32_t var_288
uint64_t var_270
uint64_t var_260
int32_t var_258
uint64_t var_250
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_1

while (true)
    rdx_1 = rdx + 1
    var_298 = rdx_1
    
    if (rdx s>= 0x20)
        break
    
    zmm6 = (*rcx_1)[1]
    zmm7 = (*rcx_1)[2]
    zmm8 = zmm10
    zmm3 = *rcx_1
    zmm2 = (*rcx_1)[3]
    void* rdx_2 = var_210
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm8[0] = zmm8[0] * zmm6[0]
    int32_t rax_6 = *(rdx_2 + 0x18)
    var_260 = *(rdx_2 + 0x10)
    zmm12[0] = zmm12[0] * zmm7[0]
    var_258 = rax_6
    void* rax_7 = var_208
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm8[0] = zmm8[0] - zmm12[0]
    void* rcx_2 = *(rax_7 + 0x10)
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm8[0] = zmm8[0] * zmm7[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm11[0]
    zmm2[0] = zmm2[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm8[0] = zmm8[0] - zmm12[0]
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm8[0] = zmm8[0] * zmm6[0]
    zmm8[0] = zmm8[0] + zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm11[0] = zmm11[0] - zmm8[0]
    zmm8[0] = zmm8[0] f* *(rax_7 + 0x2c)
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm10 = *(rax_7 + 0x30)
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm2[0] = zmm2[0] * zmm8[0]
    zmm11[0] = zmm11[0] + zmm2[0]
    float zmm1[0x4] = *(rax_7 + 0x28)
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm11[0] = zmm11[0] * zmm10[0]
    zmm12[0] = zmm12[0] + zmm2[0]
    zmm12[0] = zmm12[0] * zmm1[0]
    
    if (zmm12[0] >= zmm9[0])
        zmm3 = *(rcx_2 + 0x1c)
    else
        zmm3 = *(rcx_2 + 0x10)
    
    if (zmm8[0] >= zmm9[0])
        zmm2 = *(rcx_2 + 0x20)
    else
        zmm2 = *(rcx_2 + 0x14)
    
    if (zmm11[0] >= zmm9[0])
        zmm0 = *(rcx_2 + 0x24)
    else
        zmm0 = *(rcx_2 + 0x18)
    
    zmm2[0] = zmm2[0] f* *(rax_7 + 0x2c)
    zmm0[0] = zmm0[0] * zmm10[0]
    zmm3[0] = zmm3[0] * zmm1[0]
    float zmm4[0x4] = *arg3
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm2, zmm9[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_8[0].q)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_9)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_12)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_9)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_11)
    zmm2 = var_260:4.d
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_12)
    zmm3 = var_260.d
    zmm0 = var_258
    float temp0_28[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_25, temp0_22), temp0_24), arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_28[0]
    int64_t r13 = sx.q(var_1a8.d)
    int32_t rax_10 = *(rdx_2 + 0x18)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    zmm0[0] = zmm0[0] - temp0_29[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    float var_1e8_1 = temp0_29[0]
    int64_t rcx_4 = r13 * 3
    zmm2[0] = zmm2[0] - temp0_30[0]
    i_6 = r13.d + 1
    var_1a8.d = i_6
    float var_1d8_1 = zmm0[0]
    *(&var_178 + (rcx_4 << 2)) = *(rdx_2 + 0x10)
    (&var_170)[rcx_4] = rax_10
    *(&var_148 + (rcx_4 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_4] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_4 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_110
    (&var_110)[rcx_4] = var_1d8_1
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_1a8:4.d)
        int64_t rcx_12 = rax_17 * 3
        var_188[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_12 << 2)))
        rax_13 = (&var_110)[rcx_12]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm9 = sub_1416e69d0(&var_270, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm9, zmm14, zmm15 = sub_1416fa750(&var_250, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_14
        rax_14, zmm9, zmm14, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_278_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_198
    int64_t r8_3 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm8 = 0x358637bd
    int64_t rdi_1 = r8_3 * 3
    var_290.q = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_6 = (&var_110)[r14_1]
    int32_t rcx_13 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_290
    var_288 = rax_13
    int32_t rax_18 = (&var_110)[rdi_1]
    zmm5 = var_288
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
    int32_t var_104_1 = rdx_6
    int32_t rdx_7 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_13
    int32_t rcx_14 = (&var_170)[rsi_1]
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
    var_170 = r8_4
    int32_t r8_5 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_7
    int32_t rdx_8 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_14
    int32_t rcx_15 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_19
    int32_t rax_20 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_28c
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_5
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_8
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_15
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_20
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= zmm15[0])
        rdx_1 = var_298
        zmm15 = zmm3
        var_274 = zmm3[0]
        break
    
    zmm10 = 0x3f800000
    rcx_1 = var_1f8
    zmm15 = zmm3
    rdx = var_298
    float temp0_34[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_274 = zmm3[0]
    zmm10[0] = 1f / temp0_34[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    continue

int64_t r9_5 = var_220

if (r9_5 != 0)
    *r9_5 = rdx_1

uint32_t result

if (zmm15[0] <= zmm8[0])
    var_250 = 0
    int64_t var_248_1 = 0
    var_270 = 0
    int64_t var_268_1 = 0
    sub_14083ad30(&var_250, 8)
    
    if (var_268_1:4.d s< 8)
        sub_14083ad30(&var_270, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rdi_2 = sx.q(var_248_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_248_1.d = rax_24
            
            if (rax_24 s> var_248_1:4.d)
                sub_14083a7e0(&var_250)
            
            uint64_t rcx_20 = var_250
            int64_t rdx_10 = rdi_2 * 3
            int32_t rax_25 = *(&var_170 + rbx)
            *(rcx_20 + (rdx_10 << 2)) = *(&var_178 + rbx)
            *(rcx_20 + (rdx_10 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_268_1.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_268_1.d = rax_26
            
            if (rax_26 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_22 = var_270
            int64_t rdx_12 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_27 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_22 + (rdx_12 << 2)) = zmm0_1
            *(rcx_22 + (rdx_12 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    float zmm8_1
    float zmm9_1[0x4]
    float zmm14_1[0x4]
    rax_28, zmm8_1, zmm9_1, zmm14_1 = sub_14158df30(&var_250, &var_270, &var_210, &var_208, 
        &var_298, &var_260, &var_290, &var_220)
    float zmm2_1[0x4]
    
    if (rax_28 == 2)
        float zmm5_1 = zmm9_1[0]
        float zmm6_1 = zmm9_1[0]
        
        if (i_6 s> 0)
            float (* rax_31)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_31
                rax_31 = &(*rax_31)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg10
        zmm14_1[0] = zmm14_1[0] + zmm2_1[0]
        *arg4 = zmm14_1[0]
        *arg7 = var_260
        arg7[2] = var_258
        zmm14_1[0] = zmm14_1[0] f* *arg7
        zmm14_1[0] = zmm14_1[0] f* arg7[1]
        zmm14_1[0] = zmm14_1[0] f* arg7[2]
        zmm14_1[0] = zmm14_1[0] + zmm5_1
        zmm14_1[0] = zmm14_1[0] + zmm6_1
        zmm14_1[0] = zmm14_1[0] + zmm9_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm14_1, zmm14_1[0].q)).q
        arg5[1].d = zmm14_1[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm9_1[0] = zmm9_1[0] - zmm2_1[0]
        zmm9_1[0] = zmm9_1[0] - zmm2_1[0]
        zmm9_1[0] = zmm9_1[0] - zmm2_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm9_1, zmm9_1[0].q)).q
        arg6[1].d = zmm9_1[0]
        float temp1_1 = *arg4
        zmm8_1 - temp1_1
        uint64_t rcx_28 = var_270
        rbx.b = zmm8_1 < temp1_1
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        uint64_t rcx_29 = var_250
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        result = zx.d(rbx.b)
    else
        float zmm4_1[0x4] = arg10
        float zmm3_1[0x4] = var_220.d
        zmm2_1 = var_220:4.d
        *arg7 = var_260
        float zmm0_2[0x4] = var_298
        arg7[2] = var_258
        zmm0_2[0] = zmm0_2[0] + zmm14_1[0]
        zmm0_2[0] = zmm0_2[0] + zmm4_1[0]
        *arg4 = zmm0_2[0]
        zmm14_1[0] = zmm14_1[0] f* *arg7
        uint64_t rcx_25 = var_270
        zmm14_1[0] = zmm14_1[0] f* arg7[1]
        zmm14_1[0] = zmm14_1[0] f* arg7[2]
        zmm14_1[0] = zmm14_1[0] f+ var_290
        zmm14_1[0] = zmm14_1[0] f+ var_28c
        zmm14_1[0] = zmm14_1[0] f+ var_288
        *arg5 = (_mm_unpacklo_ps(zmm14_1, zmm14_1[0].q)).q
        arg5[1].d = zmm14_1[0]
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* arg7[1]
        zmm4_1[0] = zmm4_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
        int32_t var_218
        zmm0_2 = var_218
        zmm2_1[0] = zmm2_1[0] - zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_250
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result.b = 1
else
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
    float temp0_35[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_35[0] = temp0_35[0] * temp0_35[0]
    zmm3[0] = zmm3[0] * temp0_35[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_35[0] = temp0_35[0] * zmm2[0]
    zmm2 = arg10
    temp0_35[0] = temp0_35[0] + temp0_35[0]
    temp0_35[0] = temp0_35[0] * temp0_35[0]
    zmm3[0] = zmm3[0] * temp0_35[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_35[0] = temp0_35[0] * zmm5[0]
    temp0_35[0] = temp0_35[0] + temp0_35[0]
    temp0_35[0] = temp0_35[0] * zmm9[0]
    temp0_35[0] = temp0_35[0] * zmm9[0]
    temp0_35[0] = temp0_35[0] * zmm9[0]
    float temp0_36[0x4] = _mm_unpacklo_ps(temp0_35, temp0_35[0].q)
    *arg7 = temp0_36.q
    zmm14[0] = zmm14[0] + zmm2[0]
    float temp0_37[0x4] = __sqrtss_xmmss_memss(temp0_36[0], var_274)
    float var_278_2 = temp0_35[0]
    zmm14[0] = zmm14[0] - temp0_37[0]
    arg7[2] = var_278_2
    *arg4 = zmm14[0]
    zmm14[0] = zmm14[0] f* *arg7
    zmm14[0] = zmm14[0] f* arg7[1]
    zmm14[0] = zmm14[0] f* arg7[2]
    zmm14[0] = zmm14[0] + zmm9[0]
    zmm14[0] = zmm14[0] + zmm9[0]
    zmm14[0] = zmm14[0] + zmm9[0]
    *arg5 = (_mm_unpacklo_ps(zmm14, zmm14[0].q)).q
    arg5[1].d = zmm14[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm2[0]
    zmm9[0] = zmm9[0] - zmm2[0]
    zmm9[0] = zmm9[0] - zmm2[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2d8)
return result
