// 函数: sub_141618d90
// 地址: 0x141618d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm3[0x4] = *arg3
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float zmm9[0x4] = zx.o(0)
float var_1f8 = (zmm3 ^ 0x80000000)[0]
float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
float var_1f0 = (temp0 ^ 0x80000000)[0]
float var_1f4 = zmm1[0]
int32_t* var_1c8 = &var_1f8
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float zmm5[0x4] = *arg9 ^ 0x80000000
uint128_t zmm6 = *(arg9 + 4) ^ 0x80000000
float zmm7[0x4] = *(arg9 + 8) ^ 0x80000000
float var_1ec = temp0_2[0]
float zmm2[0x4] = zmm6
zmm2[0] = zmm2[0] f* zmm6.d
int32_t* var_260 = arg11
zmm5[0] = zmm5[0] * zmm5[0]
void* var_228 = arg1
zmm7[0] = zmm7[0] * zmm7[0]
void* var_1d8 = arg2
zmm2[0] = zmm2[0] + zmm5[0]
int128_t* var_1d0 = arg3
zmm2[0] = zmm2[0] + zmm7[0]
float var_270
int64_t var_26c

if (zmm2[0] < 9.99999975e-05f)
    var_270 = -1f
    var_26c = 0
else
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm2[0])
    zmm2 = 0x3f800000
    bool cond:0_1 = temp0_3[0] != 0f
    zmm2[0] = 1f / temp0_3[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm2[0] = zmm2[0] f* zmm6.d
    zmm2[0] = zmm2[0] * zmm7[0]
    var_270 = zmm2[0]
    var_26c.d = zmm2[0]
    var_26c:4.d = zmm2[0]
    
    if (not(cond:0_1))
        var_270 = -1f
        var_26c = 0

float zmm0[0x4] = data_142d3f7e0
int64_t r12 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rcx_1 = 0
float zmm11[0x4] = arg8
float zmm15[0x4] = 0x7f7fffff
zmm11[0] = zmm11[0] f+ *(arg1 + 0x1c)
float var_180[0x4] = zmm0
int64_t var_198
__builtin_memset(&var_198, 0, 0x14)
zmm0 = *(rax_5 + 0x2c)
uint32_t zmm10[0x4]

if (zmm0[0] == 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg10
float zmm12[0x4] = 0x358637bd
int32_t i_6 = var_198.d
int64_t rbx
int64_t arg_8 = rbx
int64_t var_290
int32_t var_288
uint64_t var_258
uint64_t var_248
int64_t var_238
int32_t var_230
int64_t var_170
int32_t var_168
int64_t var_140
int32_t var_138
int32_t rcx_2
float zmm13[0x4]
float zmm14[0x4]

while (true)
    rcx_2 = rcx_1 + 1
    
    if (rcx_1 s>= 0x20)
        break
    
    void* rbx_1 = var_228
    *(rbx_1 + 0x10)
    var_230 = *(rbx_1 + 0x18)
    float var_1b0
    float* rax_8
    float zmm8[0x4]
    rax_8, zmm6, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_14170b7f0(&var_1d8, &var_1b0, &var_270)
    var_238 = zmm6.q
    zmm3 = zmm6
    zmm2 = zmm6
    float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm1 = zx.o(*rax_8)
    int32_t rcx_4 = rax_8[2]
    zmm3[0] = zmm3[0] - zmm1[0]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    temp0_5[0] = temp0_5[0] - temp0_6[0]
    zmm0 = var_230
    zmm0[0] = zmm0[0] f- rcx_4
    *(&var_198:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r13 = sx.q(var_198.d)
    int32_t rax_10 = *(rbx_1 + 0x18)
    float var_1b8_1 = zmm0[0]
    float temp0_7[0x4] = _mm_unpacklo_ps(zmm3, temp0_5[0].q)
    int64_t rcx_6 = r13 * 3
    i_6 = r13.d + 1
    var_198.d = i_6
    *(&var_170 + (rcx_6 << 2)) = zmm6.q
    (&var_168)[rcx_6] = rax_10
    int32_t rax_11 = rax_8[2]
    *(&var_140 + (rcx_6 << 2)) = zmm1.q
    (&var_138)[rcx_6] = rax_11
    int64_t var_110
    *(&var_110 + (rcx_6 << 2)) = temp0_7.q
    int32_t var_108
    (&var_108)[rcx_6] = var_1b8_1
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_198:4.d)
        int64_t rcx_14 = rax_17 * 3
        var_180[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_110 + (rcx_14 << 2)))
        rax_13 = (&var_108)[rcx_14]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm8, zmm9 = sub_1416e69d0(&var_258, &var_110, &var_198:4, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_248, &var_110, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1a4
        uint64_t* rax_14
        rax_14, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1a4, &var_110, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_278_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_188
    int64_t r8_4 = sx.q(var_188)
    rbx = sx.q(var_198:4.d)
    int64_t var_190
    int64_t r11_1 = sx.q(var_190.d)
    int64_t r10_1 = sx.q(var_190:4.d)
    var_290 = zmm0.q
    int64_t rdi_1 = r8_4 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_5 = (&var_108)[r14_1]
    int32_t rcx_15 = (&var_108)[rsi_1]
    int32_t r9_4 = (&var_108)[r15_1]
    float zmm4[0x4] = var_290.d
    var_288 = rax_13
    int32_t rax_18 = (&var_108)[rdi_1]
    zmm5 = var_288
    int64_t var_104_1 = *(&var_110 + (r14_1 << 2))
    zmm2 = var_180[r10_1]
    int64_t var_ec_1 = *(&var_110 + (rdi_1 << 2))
    zmm0 = var_180[rbx]
    int64_t var_f8_1 = *(&var_110 + (rsi_1 << 2))
    zmm1 = var_180[r11_1]
    var_110 = *(&var_110 + (r15_1 << 2))
    zmm3 = var_180[r8_4]
    int32_t r8_5 = (&var_168)[r15_1]
    var_180[2] = zmm2[0]
    zmm2 = zx.o(*(&var_170 + (r14_1 << 2)))
    var_180[0] = zmm0[0]
    zmm0 = zx.o(*(&var_170 + (rdi_1 << 2)))
    var_180[1] = zmm1[0]
    zmm1 = zx.o(*(&var_170 + (rsi_1 << 2)))
    var_180[3] = zmm3[0]
    int32_t var_fc_1 = rdx_5
    int32_t rdx_6 = (&var_168)[r14_1]
    int32_t var_f0_1 = rcx_15
    int32_t rcx_16 = (&var_168)[rsi_1]
    int32_t var_e4_1 = rax_18
    int32_t rax_19 = (&var_168)[rdi_1]
    int64_t var_164_1 = zmm2.q
    zmm2 = zx.o(*(&var_140 + (r14_1 << 2)))
    int64_t var_14c_1 = zmm0.q
    zmm0 = zx.o(*(&var_140 + (rdi_1 << 2)))
    int64_t var_158_1 = zmm1.q
    zmm1 = zx.o(*(&var_140 + (rsi_1 << 2)))
    var_170 = *(&var_170 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_140 + (r15_1 << 2)))
    var_168 = r8_5
    int32_t r8_6 = (&var_138)[r15_1]
    int32_t var_15c_1 = rdx_6
    int32_t rdx_7 = (&var_138)[r14_1]
    int32_t var_150_1 = rcx_16
    int32_t rcx_17 = (&var_138)[rsi_1]
    int32_t var_144_1 = rax_19
    int32_t rax_20 = (&var_138)[rdi_1]
    int64_t var_134_1 = zmm2.q
    int64_t var_11c_1 = zmm0.q
    var_198:4.o = data_142e11d00
    var_108 = r9_4
    int64_t var_128_1 = zmm1.q
    var_140 = zmm3.q
    zmm3 = var_290:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_138 = r8_6
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_12c_1 = rdx_7
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_120_1 = rcx_17
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_114_1 = rax_20
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < zmm12[0] || zmm3[0] >= zmm15[0])
        zmm15 = zmm3
        break
    
    rcx_1 = rcx_2
    float temp0_10[0x4] = _mm_sqrt_ss(0, zmm3[0])
    zmm15 = zmm3
    zmm8[0] = zmm8[0] / temp0_10[0]
    zmm8[0] = zmm8[0] * zmm4[0]
    zmm8[0] = zmm8[0] * zmm3[0]
    zmm8[0] = zmm8[0] * zmm5[0]
    var_270 = zmm8[0]
    var_26c.d = zmm8[0]
    var_26c:4.d = zmm8[0]
    continue

int32_t* r9_5 = var_260

if (r9_5 != 0)
    *r9_5 = rcx_2

float result

if (zmm15[0] <= zmm12[0])
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
            
            uint64_t rcx_22 = var_248
            int64_t rdx_9 = rdi_2 * 3
            int32_t rax_25 = *(&var_168 + rbx)
            *(rcx_22 + (rdx_9 << 2)) = *(&var_170 + rbx)
            *(rcx_22 + (rdx_9 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_250.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_250.d = rax_26
            
            if (rax_26 s> var_250:4.d)
                sub_14083a7e0(&var_258)
            
            uint64_t rcx_24 = var_258
            int64_t rdx_11 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_140 + rbx)
            int32_t rax_27 = *(&var_138 + rbx)
            rbx += 0xc
            *(rcx_24 + (rdx_11 << 2)) = zmm0_1
            *(rcx_24 + (rdx_11 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    float zmm12_1
    rax_28, zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_1415675c0(&var_248, &var_258, &var_228, 
        &var_1d8, &var_260, &var_270, &var_290, &var_238)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_28 == 2)
        float zmm5_1 = zmm9_1.d
        float zmm6_1 = zmm9_1.d
        float zmm7_1 = zmm9_1.d
        zmm3_1 = zmm9_1
        int64_t zmm4_1 = zmm9_1.q
        
        if (i_6 s> 0)
            float (* rax_31)[0x4] = &var_180
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_31
                rax_31 = &(*rax_31)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_170:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_168 + r12)
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm7_1 = zmm7_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_140:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_138 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm0_2.d = zmm10_1.d f+ zmm11_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_270.q
        arg7[2] = var_26c:4.d
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm11_1.d = zmm11_1.d f+ zmm7_1
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
        float temp4_1 = *arg4
        zmm12_1 - temp4_1
        uint64_t rcx_30 = var_258
        rbx.b = zmm12_1 < temp4_1
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        uint64_t rcx_31 = var_248
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_238.d
        zmm2_1 = var_238:4.d
        *arg7 = var_270.q
        zmm0_2 = var_260.d
        arg7[2] = var_26c:4.d
        zmm0_2.d = zmm0_2.d f+ zmm11_1.d
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm11_1.d f* *arg7
        uint64_t rcx_27 = var_258
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_290.d
        zmm1_1.d = zmm1_1.d f+ var_290:4.d
        zmm11_1.d = zmm11_1.d f+ var_288
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
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_248
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result.b = 1
else
    float var_b8_1[0x4] = zmm13
    float var_c8_1[0x4] = zmm14
    float var_298_2 = zmm9[0]
    var_260.d = zmm9[0]
    
    if (i_6 s> 0)
        float (* rax_21)[0x4] = &var_180
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_21
            rax_21 = &(*rax_21)[1]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm2[0] = zmm2[0] f* *(&var_170:4 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_168 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_138 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            r12 += 0xc
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_260.d = zmm9[0]
        var_298_2 = zmm9[0]
    
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm6.d = zmm9.d f- zmm9[0]
    zmm3 = zx.o(0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm1 = zmm6
    zmm1[0] = zmm1[0] f* zmm6.d
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm9[0] = zmm9[0] + zmm1[0]
    zmm3[0] = zmm9[0]
    zmm2 = 0x3f000000
    float temp0_11[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_11[0] = temp0_11[0] * temp0_11[0]
    zmm3[0] = zmm3[0] * temp0_11[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_11[0] = temp0_11[0] * zmm2[0]
    temp0_11[0] = temp0_11[0] + temp0_11[0]
    temp0_11[0] = temp0_11[0] * temp0_11[0]
    zmm3[0] = zmm3[0] * temp0_11[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] + zmm11[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_11[0] = temp0_11[0] * zmm5[0]
    temp0_11[0] = temp0_11[0] + temp0_11[0]
    zmm9[0] = zmm9[0] * temp0_11[0]
    zmm9[0] = zmm9[0] * temp0_11[0]
    zmm6.d = zmm6.d f* temp0_11[0]
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    float temp0_13[0x4] = _mm_sqrt_ss(0, zmm15[0])
    int32_t var_278_2 = zmm6.d
    zmm1[0] = zmm1[0] - temp0_13[0]
    arg7[2] = var_278_2
    *arg4 = zmm1[0]
    zmm11[0] = zmm11[0] f* *arg7
    zmm11[0] = zmm11[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm11[0] = zmm11[0] + zmm9[0]
    zmm11[0] = zmm11[0] + var_298_2
    zmm11[0] = zmm11[0] f+ var_260.d
    zmm1 = zmm10
    *arg5 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    zmm0 = zmm10
    arg5[1].d = zmm11[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm10[0] = zmm10[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm0[0]
    zmm9[0] = zmm9[0] - zmm1[0]
    zmm9[0] = zmm9[0] f- zmm10[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2d8)
return result
