// 函数: sub_141619990
// 地址: 0x141619990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
float zmm4[0x4] = *arg3
int64_t r12 = 0
float zmm11[0x4] = arg8
float zmm15[0x4] = 0x7f7fffff
zmm11[0] = zmm11[0] f+ *(arg1 + 0x1c)
float zmm9[0x4] = zx.o(0)
float zmm0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa) ^ 0x80000000
float var_1e8
int32_t* var_1c8 = &var_1e8
void* rax_4 = *(arg2 + 0x10)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float var_1e0 = zmm0[0]
zmm0 = data_142d3f7e0
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
var_1e8 = (zmm4 ^ 0x80000000)[0]
float var_1e4 = (temp0_1 ^ 0x80000000)[0]
float var_1dc = temp0_2[0]
void* var_228 = arg1
void* var_1d8 = arg2
float var_188[0x4] = zmm0
zmm0 = *(rax_4 + 0x1c)
bool cond:0 = zmm0[0] == 0f
int32_t rdx_1 = 0
int32_t* var_260 = arg10
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
uint32_t zmm10[0x4]

if (cond:0)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg9
float zmm8[0x4] = 0x358637bd
int32_t i_6 = var_1a0.d
int64_t rbx
int64_t arg_8 = rbx
float zmm6[0x4]
float var_48[0x4] = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint64_t var_280
int32_t var_278
uint64_t var_258
uint64_t var_248
int64_t var_238
int32_t var_230
uint32_t var_1f8
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rdx_2
uint32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]

while (true)
    rdx_2 = rdx_1 + 1
    
    if (rdx_1 s>= 0x20)
        break
    
    void* rcx = var_1d8
    void* rdx_3 = var_228
    zmm3 = *(rcx + 0x28)
    zmm7 = zx.o(*(rdx_3 + 0x10))
    var_230 = *(rdx_3 + 0x18)
    void* rax_7 = *(rcx + 0x10)
    var_238 = zmm7.q
    zmm3[0] = zmm3[0] f* *(rax_7 + 0x10)
    zmm0 = *(rax_7 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx + 0x30)
    zmm2 = *(rax_7 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx + 0x2c)
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2, zmm9[0].q)
    zmm4 = *arg3
    float temp0_6[0x4] = _mm_unpacklo_ps(temp0_4, temp0_5[0].q)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), zmm1)
    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_7)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_10)
    float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_15)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), zmm1)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xd2)
    float temp0_20[0x4] = _mm_add_ps(temp0_16, temp0_6)
    float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_7)
    zmm2 = zmm7
    zmm3 = zmm7
    float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm0 = var_230
    float temp0_25[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_21, temp0_18), temp0_20), arg3[1])
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_25[0]
    int64_t r13 = sx.q(var_1a0.d)
    int32_t rax_10 = *(rdx_3 + 0x18)
    zmm1 = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    zmm0[0] = zmm0[0] f- zmm1[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    var_1f8 = zmm1[0]
    int64_t rcx_2 = r13 * 3
    temp0_22[0] = temp0_22[0] - temp0_27[0]
    i_6 = r13.d + 1
    var_1a0.d = i_6
    float var_1b8_1 = zmm0[0]
    *(&var_148 + (rcx_2 << 2)) = (_mm_unpacklo_ps(temp0_25, temp0_27[0].q)).q
    *(&var_178 + (rcx_2 << 2)) = zmm7.q
    (&var_170)[rcx_2] = rax_10
    (&var_140)[rcx_2] = var_1f8
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = (_mm_unpacklo_ps(zmm3, temp0_22[0].q)).q
    int32_t var_110
    (&var_110)[rcx_2] = var_1b8_1
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_1a0:4.d)
        int64_t rcx_10 = rax_17 * 3
        var_188[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        rax_13 = (&var_110)[rcx_10]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm8, zmm9 = sub_1416e69d0(&var_258, &var_118, &var_1a0:4, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_248, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1b0[0x2]
        uint64_t* rax_14
        rax_14, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1b0, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_268_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_190
    int64_t r8_3 = sx.q(var_190)
    rbx = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    int64_t rdi_1 = r8_3 * 3
    var_280 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_7 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    var_278 = rax_13
    int32_t rax_18 = (&var_110)[rdi_1]
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
    int32_t var_104_1 = rdx_7
    int32_t rdx_8 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_11
    int32_t rcx_12 = (&var_170)[rsi_1]
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
    int32_t var_164_1 = rdx_8
    int32_t rdx_9 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_12
    int32_t rcx_13 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_19
    int32_t rax_20 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    zmm2 = var_280:4.d
    int64_t var_124_1 = zmm0.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    zmm0 = var_280.d
    zmm2[0] = zmm2[0] * zmm2[0]
    var_140 = r8_5
    int64_t var_130_1 = zmm1.q
    zmm1 = var_278
    zmm0[0] = zmm0[0] * zmm0[0]
    int32_t var_134_1 = rdx_9
    zmm1[0] = zmm1[0] f* zmm1[0]
    int32_t var_128_1 = rcx_13
    zmm2[0] = zmm2[0] + zmm0[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_20
    zmm2[0] = zmm2[0] f+ zmm1[0]
    
    if (zmm2[0] < zmm8[0] || zmm2[0] >= zmm15[0])
        zmm15 = zmm2
        break
    
    rdx_1 = rdx_2
    zmm15 = zmm2
    continue

int32_t* r9_5 = var_260

if (r9_5 != 0)
    *r9_5 = rdx_2

float result

if (zmm15[0] <= zmm8[0])
    __builtin_memset(&var_258, 0, 0x20)
    sub_14083ad30(&var_248, 8)
    int64_t var_250
    
    if (var_250:4.d s< 8)
        sub_14083ad30(&var_258, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_240_1
            int64_t rdi_2 = sx.q(var_240_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_240_1.d = rax_24
            
            if (rax_24 s> var_240_1:4.d)
                sub_14083a7e0(&var_248)
            
            uint64_t rcx_18 = var_248
            int64_t rdx_11 = rdi_2 * 3
            int32_t rax_25 = *(&var_170 + rbx)
            *(rcx_18 + (rdx_11 << 2)) = *(&var_178 + rbx)
            *(rcx_18 + (rdx_11 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_250.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_250.d = rax_26
            
            if (rax_26 s> var_250:4.d)
                sub_14083a7e0(&var_258)
            
            uint64_t rcx_20 = var_258
            int64_t rdx_13 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_27 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_20 + (rdx_13 << 2)) = zmm0_1
            *(rcx_20 + (rdx_13 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t var_200
    int32_t rax_28
    float zmm8_1
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    rax_28, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_14159f940(&var_248, &var_258, &var_228, 
        &var_1d8, &var_260, &var_280, &var_200, &var_238)
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
        
        zmm0_2.d = zmm10_1.d f+ zmm11_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_280
        arg7[2] = var_278
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6[0]
        zmm11_1.d = zmm11_1.d f+ zmm7.d
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm9_1.d = zmm9_1.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm9_1.d
        uint32_t temp4_1 = *arg4
        zmm8_1 f- temp4_1
        uint64_t rcx_26 = var_258
        rbx.b = zmm8_1 f< temp4_1
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_248
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_238.d
        zmm2_1 = var_238:4.d
        *arg7 = var_280
        zmm0_2 = var_260.d
        arg7[2] = var_278
        zmm0_2.d = zmm0_2.d f+ zmm11_1.d
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm11_1.d f* *arg7
        uint64_t rcx_23 = var_258
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_200
        int32_t var_1fc
        zmm1_1.d = zmm1_1.d f+ var_1fc
        zmm11_1.d = zmm11_1.d f+ var_1f8
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = zmm2_1.d f- zmm1_1.d
        zmm0_2.d = var_230.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        uint64_t rcx_24 = var_248
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        result.b = 1
else
    float var_a8_1[0x4] = zmm12
    float var_b8_1[0x4] = zmm13
    float var_c8_1[0x4] = zmm14
    float var_288_2 = zmm9[0]
    var_260.d = zmm9[0]
    
    if (i_6 s> 0)
        float (* rax_21)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_21
            rax_21 = &(*rax_21)[1]
            zmm1 = zmm2
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm1[0] = zmm1[0] f* *(&var_178:4 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm9[0] = zmm9[0] f+ zmm1[0]
            zmm1 = zmm2
            zmm1[0] = zmm1[0] f* *(&var_148 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm9[0] = zmm9[0] f+ zmm1[0]
            r12 += 0xc
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_260.d = zmm9[0]
        var_288_2 = zmm9[0]
    
    int64_t* rsi_2 = arg7
    float zmm5[0x4] = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm7.d = zmm9.d f- zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm3 = zx.o(0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm2 = zmm7
    zmm2[0] = zmm2[0] f* zmm7.d
    zmm1 = zmm9
    zmm1[0] = zmm1[0] f* zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] f+ zmm1[0]
    zmm3[0] = zmm2[0]
    zmm2 = 0x3f000000
    float temp0_32[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_32[0] = temp0_32[0] * temp0_32[0]
    zmm1 = zmm3
    zmm1[0] = zmm1[0] f* temp0_32[0]
    zmm2[0] = 0.5f f- zmm1[0]
    temp0_32[0] = temp0_32[0] * zmm2[0]
    temp0_32[0] = temp0_32[0] + temp0_32[0]
    zmm1 = temp0_32
    zmm1[0] = zmm1[0] f* temp0_32[0]
    zmm3[0] = zmm3[0] f* zmm1[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_32[0] = temp0_32[0] * zmm5[0]
    temp0_32[0] = temp0_32[0] + temp0_32[0]
    zmm1 = temp0_32
    temp0_32[0] = temp0_32[0] * zmm9[0]
    zmm1[0] = zmm1[0] f* zmm7.d
    temp0_32[0] = temp0_32[0] * zmm9[0]
    *rsi_2 = (_mm_unpacklo_ps(temp0_32, zmm1[0].q)).q
    zmm10[0] = zmm10[0] f+ zmm11[0]
    float var_268_2 = temp0_32[0]
    float temp0_34[0x4] = _mm_sqrt_ss(0, zmm15[0])
    rsi_2[1].d = var_268_2
    zmm10[0] = zmm10[0] f- temp0_34[0]
    *arg4 = zmm10[0]
    zmm1 = zmm11
    zmm11[0] = zmm11[0] f* *rsi_2
    zmm1[0] = zmm1[0] f* *(rsi_2 + 4)
    zmm11[0] = zmm11[0] f* rsi_2[1].d
    zmm11[0] = zmm11[0] + zmm9[0]
    zmm1[0] = zmm1[0] f+ var_288_2
    zmm11[0] = zmm11[0] f+ var_260.d
    *arg5 = (_mm_unpacklo_ps(zmm11, zmm1[0].q)).q
    zmm0 = zmm10
    arg5[1].d = zmm11[0]
    zmm0[0] = zmm0[0] f* *rsi_2
    zmm10[0] = zmm10[0] f* *(rsi_2 + 4)
    zmm10[0] = zmm10[0] f* rsi_2[1].d
    zmm9[0] = zmm9[0] - zmm0[0]
    zmm9[0] = zmm9[0] f- zmm10[0]
    zmm9[0] = zmm9[0] f- zmm10[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2c8)
return result
