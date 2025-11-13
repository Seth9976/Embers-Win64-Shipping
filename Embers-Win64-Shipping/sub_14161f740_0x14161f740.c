// 函数: sub_14161f740
// 地址: 0x14161f740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm3[0x4] = *arg3
float zmm6[0x4] = 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float zmm9[0x4] = zx.o(0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_208 = (zmm3 ^ 0x80000000)[0]
float var_1fc = _mm_shuffle_ps(zmm3, zmm3, 0xff)[0]
float var_200 = (temp0_1 ^ 0x80000000)[0]
float var_204 = (temp0 ^ 0x80000000)[0]
int32_t* var_1d0 = &var_208
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
void* var_210 = arg1
zmm4[0] = zmm4[0] * zmm4[0]
void* var_1e0 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
int128_t* var_1d8 = arg3
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
float var_2a0
float var_29c_1
float var_298_1
float zmm1[0x4]
float zmm2[0x4]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm1[0] = 1f / temp0_3[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]
    var_29c_1 = zmm3[0]
    var_2a0 = zmm2[0]
    var_298_1 = zmm1[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm2 = 0xbf800000
    zmm3 = zx.o(0)
    zmm1 = zx.o(0)
    var_2a0 = -1f
    var_29c_1 = 0f
    var_298_1 = 0f

int64_t r12 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rdx_1 = 0
float zmm7[0x4] = 0x7f7fffff
float var_188[0x4] = data_142d3f7e0
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x2c)
float var_278 = 3.40282347e+38f
uint32_t zmm10[0x4]

if (zmm0[0] == 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg10
float zmm11[0x4] = 0x358637bd
int32_t i_6 = var_1a0.d
int64_t rbx
int64_t arg_8 = rbx
int32_t var_2a8
float var_270
int32_t var_268
uint64_t var_260
uint64_t var_250
float var_240
float var_23c
float var_238
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_2
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]

while (true)
    rdx_2 = rdx_1 + 1
    var_2a8 = rdx_2
    
    if (rdx_1 s>= 0x20)
        break
    
    var_23c = (zmm3 ^ zmm6)[0]
    var_240 = (zmm2 ^ zmm6)[0]
    var_238 = (zmm1 ^ zmm6)[0]
    sub_141758e70(arg1, &var_270, &var_240, zmm9)
    float var_1b8
    float* rax_7
    float zmm8[0x4]
    rax_7, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_14170b7f0(&var_1e0, &var_1b8, &var_2a0)
    int32_t var_26c
    zmm2 = var_26c
    zmm3 = var_270
    zmm1 = zx.o(*rax_7)
    int32_t rcx_1 = rax_7[2]
    zmm3[0] = zmm3[0] - zmm1[0]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm2[0] = zmm2[0] - temp0_5[0]
    zmm0 = var_268
    zmm0[0] = zmm0[0] f- rcx_1
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r13 = sx.q(var_1a0.d)
    float var_1c0_1 = zmm0[0]
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm3, zmm2[0].q)
    var_270.q = temp0_6.q
    int64_t rcx_3 = r13 * 3
    i_6 = r13.d + 1
    var_1a0.d = i_6
    *(&var_178 + (rcx_3 << 2)) = temp0_6.q
    (&var_170)[rcx_3] = var_268
    int32_t rax_10 = rax_7[2]
    *(&var_148 + (rcx_3 << 2)) = zmm1.q
    (&var_140)[rcx_3] = rax_10
    int64_t var_118
    *(&var_118 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_110
    (&var_110)[rcx_3] = var_1c0_1
    int32_t rax_12
    
    if (i_6 == 1)
        int64_t rax_16 = sx.q(var_1a0:4.d)
        int64_t rcx_11 = rax_16 * 3
        var_188[rax_16] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_11 << 2)))
        rax_12 = (&var_110)[rcx_11]
    else if (i_6 == 2)
        uint64_t* rax_15
        rax_15, zmm6, zmm7, zmm8, zmm9 =
            sub_1416e69d0(&var_260, &var_118, &var_1a0:4, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_15)
        rax_12 = rax_15[1].d
    else if (i_6 == 3)
        uint64_t* rax_14
        rax_14, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_250, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_14)
        rax_12 = rax_14[1].d
    else if (i_6 == 4)
        uint64_t var_1ac
        uint64_t* rax_13
        rax_13, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1ac, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_13)
        rax_12 = rax_13[1].d
    else
        int32_t var_288_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_12 = 0
    
    int32_t var_190
    int64_t r8_5 = sx.q(var_190)
    rbx = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    int64_t var_284_1 = zmm0.q
    int64_t rdi_1 = r8_5 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_9 = (&var_110)[r14_1]
    int32_t rcx_12 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_284_1:4.d
    int32_t rax_17 = (&var_110)[rdi_1]
    zmm5 = rax_12
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_5]
    int32_t r8_6 = (&var_170)[r15_1]
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_9
    int32_t rdx_10 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_12
    int32_t rcx_13 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_17
    int32_t rax_18 = (&var_170)[rdi_1]
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_6
    int32_t r8_7 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_10
    int32_t rdx_11 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_13
    int32_t rcx_14 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_18
    int32_t rax_19 = (&var_140)[rdi_1]
    int64_t var_124_1 = zmm0.q
    int64_t var_13c_1 = zmm2.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_284_1.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_11
    var_2a0 = zmm3[0]
    var_29c_1 = zmm4[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    var_298_1 = zmm5[0]
    int32_t var_128_1 = rcx_14
    int32_t var_11c_1 = rax_19
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm5[0]
    
    if (zmm4[0] < zmm11[0] || zmm4[0] >= zmm7[0])
        rdx_2 = var_2a8
        zmm7 = zmm4
        var_278 = zmm4[0]
        break
    
    arg1 = var_210
    rdx_1 = var_2a8
    zmm1 = zmm8
    float temp0_10[0x4] = _mm_sqrt_ss(0, zmm4[0])
    zmm7 = zmm4
    var_278 = zmm4[0]
    zmm1[0] = zmm1[0] / temp0_10[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]
    var_29c_1 = zmm3[0]
    var_2a0 = zmm2[0]
    var_298_1 = zmm1[0]
    continue

if (arg11 != 0)
    *arg11 = rdx_2

uint32_t result

if (zmm7[0] <= zmm11[0])
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
            int32_t rax_23 = (rdi_2 + 1).d
            var_248_1.d = rax_23
            
            if (rax_23 s> var_248_1:4.d)
                sub_14083a7e0(&var_250)
            
            uint64_t rcx_19 = var_250
            int64_t rdx_13 = rdi_2 * 3
            int32_t rax_24 = *(&var_170 + rbx)
            *(rcx_19 + (rdx_13 << 2)) = *(&var_178 + rbx)
            *(rcx_19 + (rdx_13 << 2) + 8) = rax_24
            int64_t rdi_3 = sx.q(var_258.d)
            int32_t rax_25 = (rdi_3 + 1).d
            var_258.d = rax_25
            
            if (rax_25 s> var_258:4.d)
                sub_14083a7e0(&var_260)
            
            uint64_t rcx_21 = var_260
            int64_t rdx_15 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_26 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_21 + (rdx_15 << 2)) = zmm0_1
            *(rcx_21 + (rdx_15 << 2) + 8) = rax_26
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_27
    uint128_t zmm9_1
    uint128_t zmm10_1
    float zmm11_1
    rax_27, zmm9_1, zmm10_1, zmm11_1 = sub_1415bc6d0(&var_250, &var_260, &var_210, &var_1e0, 
        &var_2a8, &var_270, &var_240, &var_2a0)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_27 == 2)
        float zmm5_1 = zmm9_1.d
        float zmm6_1 = zmm9_1.d
        float zmm7_1 = zmm9_1.d
        zmm3_1 = zmm9_1
        int64_t zmm4_1 = zmm9_1.q
        
        if (i_6 s> 0)
            float (* rax_30)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_30
                rax_30 = &(*rax_30)[1]
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
        *arg7 = var_270.q
        arg7[2] = var_268
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
        float temp4_1 = *arg4
        zmm11_1 - temp4_1
        uint64_t rcx_27 = var_260
        rbx.b = zmm11_1 < temp4_1
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_250
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        zmm3_1 = var_2a0
        *arg7 = var_270.q
        zmm0_2.d = var_2a8.d f+ zmm2_1.d
        arg7[2] = var_268
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm2_1.d f* *arg7
        uint64_t rcx_24 = var_260
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_240
        zmm1_1.d = zmm1_1.d f+ var_23c
        zmm2_1.d = zmm2_1.d f+ var_238
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_29c_1.d f- zmm1_1.d
        zmm0_2.d = var_298_1.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        uint64_t rcx_25 = var_250
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        result.b = 1
else
    float var_a8_1[0x4] = zmm12
    float var_b8_1[0x4] = zmm13
    float var_c8_1[0x4] = zmm14
    float var_d8_1[0x4] = zmm15
    
    if (i_6 s> 0)
        float (* rax_20)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_20
            rax_20 = &(*rax_20)[1]
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
    float temp0_11[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_11[0] = temp0_11[0] * temp0_11[0]
    zmm3[0] = zmm3[0] * temp0_11[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_11[0] = temp0_11[0] * zmm2[0]
    zmm2 = arg8
    temp0_11[0] = temp0_11[0] + temp0_11[0]
    temp0_11[0] = temp0_11[0] * temp0_11[0]
    zmm3[0] = zmm3[0] * temp0_11[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_11[0] = temp0_11[0] * zmm5[0]
    temp0_11[0] = temp0_11[0] + temp0_11[0]
    zmm9[0] = zmm9[0] * temp0_11[0]
    zmm9[0] = zmm9[0] * temp0_11[0]
    zmm9[0] = zmm9[0] * temp0_11[0]
    float temp0_12[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    *arg7 = temp0_12.q
    float temp0_13[0x4] = __sqrtss_xmmss_memss(temp0_12[0], var_278)
    float var_288_2 = zmm9[0]
    zmm1[0] = zmm1[0] - temp0_13[0]
    arg7[2] = var_288_2
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

__security_check_cookie(rax_1 ^ &var_2e8)
return result
