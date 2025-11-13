// 函数: sub_1415ed4e0
// 地址: 0x1415ed4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm3[0x4] = *arg3
float zmm9[0x4] = zx.o(0)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_208 = (zmm3 ^ 0x80000000)[0]
float var_1fc = _mm_shuffle_ps(zmm3, zmm3, 0xff)[0]
float var_200 = (temp0_1 ^ 0x80000000)[0]
float var_204 = (temp0 ^ 0x80000000)[0]
int32_t* var_1d0 = &var_208
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
void* var_210 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_1e0 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
int128_t* var_1d8 = arg3
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm3[0]
zmm5[0] = zmm5[0] + zmm6[0]
float var_280
float var_27c_1
float var_278_1
float zmm1[0x4]
float zmm2[0x4]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm1[0] = 1f / temp0_3[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    var_27c_1 = zmm3[0]
    var_280 = zmm2[0]
    var_278_1 = zmm1[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm2 = 0xbf800000
    zmm3 = zx.o(0)
    zmm1 = zx.o(0)
    var_280 = -1f
    var_27c_1 = 0f
    var_278_1 = 0f

int64_t r12 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rcx = 0
float zmm12[0x4] = 0x7f7fffff
float var_188[0x4] = data_142d3f7e0
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x2c)
float var_264 = 3.40282347e+38f
uint32_t zmm10[0x4]

if (zmm0[0] == 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg10
float zmm11[0x4] = 0x80000000
float zmm14[0x4] = 0x358637bd
int32_t i_6 = var_1a0.d
int64_t rbx
int64_t arg_8 = rbx
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
int32_t var_298
int32_t var_290
int32_t var_28c
int32_t var_288
uint64_t var_260
float var_250
float var_248
uint64_t var_240
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_1
float zmm15[0x4]

while (true)
    rcx_1 = rcx + 1
    var_298 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_7 = var_210
    
    if (zmm2[0] <= zmm11[0])
        zmm7 = *(rax_7 + 0x1c)
    else
        zmm7 = *(rax_7 + 0x10)
    
    bool cond:3_1 = zmm3[0] <= zmm11[0]
    var_250 = zmm7[0]
    
    if (cond:3_1)
        zmm6 = *(rax_7 + 0x20)
    else
        zmm6 = *(rax_7 + 0x14)
    
    float var_24c_1 = zmm6[0]
    
    if (zmm1[0] <= zmm11[0])
        zmm8 = *(rax_7 + 0x24)
    else
        zmm8 = *(rax_7 + 0x18)
    
    var_248 = zmm8[0]
    float var_1b8
    float* rax_8
    float zmm13[0x4]
    rax_8, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_14170b7f0(&var_1e0, &var_1b8, &var_280)
    zmm1 = zx.o(*rax_8)
    int32_t rcx_3 = rax_8[2]
    zmm7[0] = zmm7[0] - zmm1[0]
    zmm8[0] = zmm8[0] f- rcx_3
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm6[0] = zmm6[0] - temp0_5[0]
    zmm0 = zx.o(var_250.q)
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r13 = sx.q(var_1a0.d)
    float var_1c0_1 = zmm8[0]
    int64_t rcx_5 = r13 * 3
    i_6 = r13.d + 1
    var_1a0.d = i_6
    *(&var_178 + (rcx_5 << 2)) = zmm0.q
    (&var_170)[rcx_5] = var_248
    int32_t rax_11 = rax_8[2]
    *(&var_148 + (rcx_5 << 2)) = zmm1.q
    (&var_140)[rcx_5] = rax_11
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
    int32_t var_110
    (&var_110)[rcx_5] = var_1c0_1
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_1a0:4.d)
        int64_t rcx_13 = rax_17 * 3
        var_188[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_13 << 2)))
        rax_13 = (&var_110)[rcx_13]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm9 = sub_1416e69d0(&var_260, &var_118, &var_1a0:4, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_240, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1ac
        uint64_t* rax_14
        rax_14, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1ac, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_268_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_190
    int64_t r8_4 = sx.q(var_190)
    rbx = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    var_290.q = zmm0.q
    int64_t rdi_1 = r8_4 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_5 = (&var_110)[r14_1]
    int32_t rcx_14 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    float zmm4[0x4] = var_28c
    var_288 = rax_13
    int32_t rax_18 = (&var_110)[rdi_1]
    zmm5 = var_288
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_4]
    int32_t r8_5 = (&var_170)[r15_1]
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_5
    int32_t rdx_6 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_14
    int32_t rcx_15 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_18
    int32_t rax_19 = (&var_170)[rdi_1]
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_5
    int32_t r8_6 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_6
    int32_t rdx_7 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_15
    int32_t rcx_16 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_19
    int32_t rax_20 = (&var_140)[rdi_1]
    int64_t var_124_1 = zmm0.q
    int64_t var_13c_1 = zmm2.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_290
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_6
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_7
    var_280 = zmm3[0]
    var_27c_1 = zmm4[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    var_278_1 = zmm5[0]
    int32_t var_128_1 = rcx_16
    int32_t var_11c_1 = rax_20
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm4[0] = zmm4[0] + zmm5[0]
    
    if (zmm4[0] < zmm14[0] || zmm4[0] >= zmm12[0])
        rcx_1 = var_298
        zmm12 = zmm4
        var_264 = zmm4[0]
        break
    
    rcx = var_298
    float temp0_8[0x4] = _mm_sqrt_ss(0, zmm4[0])
    zmm1 = zmm13
    var_264 = zmm4[0]
    zmm12 = zmm4
    zmm1[0] = zmm1[0] / temp0_8[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]
    var_27c_1 = zmm3[0]
    var_280 = zmm2[0]
    var_278_1 = zmm1[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

float result

if (zmm12[0] <= zmm14[0])
    var_240 = 0
    int64_t var_238_1 = 0
    var_260 = 0
    int64_t var_258_1 = 0
    sub_14083ad30(&var_240, 8)
    
    if (var_258_1:4.d s< 8)
        sub_14083ad30(&var_260, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rdi_2 = sx.q(var_238_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_238_1.d = rax_24
            
            if (rax_24 s> var_238_1:4.d)
                sub_14083a7e0(&var_240)
            
            uint64_t rcx_21 = var_240
            int64_t rdx_9 = rdi_2 * 3
            int32_t rax_25 = *(&var_170 + rbx)
            *(rcx_21 + (rdx_9 << 2)) = *(&var_178 + rbx)
            *(rcx_21 + (rdx_9 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_258_1.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_258_1.d = rax_26
            
            if (rax_26 s> var_258_1:4.d)
                sub_14083a7e0(&var_260)
            
            uint64_t rcx_23 = var_260
            int64_t rdx_11 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_27 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_23 + (rdx_11 << 2)) = zmm0_1
            *(rcx_23 + (rdx_11 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    uint128_t zmm9_1
    uint128_t zmm10_1
    float zmm14_1
    rax_28, zmm9_1, zmm10_1, zmm14_1 = sub_141590fd0(&var_240, &var_260, &var_210, &var_1e0, 
        &var_298, &var_250, &var_280, &var_290)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_28 == 2)
        float zmm5_1 = zmm9_1.d
        float zmm6_1 = zmm9_1.d
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
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                zmm7[0] = zmm7[0] f+ zmm0_2.d
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
        *arg7 = var_250.q
        arg7[2] = var_248
        zmm0_2.d = zmm2_1.d f* *arg7
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm2_1.d = zmm2_1.d f+ zmm7[0]
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
        zmm14_1 - temp1_1
        uint64_t rcx_29 = var_260
        rbx.b = zmm14_1 < temp1_1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        uint64_t rcx_30 = var_240
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        zmm3_1 = var_290
        *arg7 = var_250.q
        zmm0_2.d = var_298.d f+ zmm2_1.d
        arg7[2] = var_248
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm2_1.d f* *arg7
        uint64_t rcx_26 = var_260
        zmm1_1.d = zmm2_1.d f* arg7[1]
        zmm2_1.d = zmm2_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_280
        zmm1_1.d = zmm1_1.d f+ var_27c_1
        zmm2_1.d = zmm2_1.d f+ var_278_1
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm2_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_28c.d f- zmm1_1.d
        zmm0_2.d = var_288.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_240
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        result.b = 1
else
    float var_d8_1[0x4] = zmm15
    
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
    float temp0_9[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_9[0] = temp0_9[0] * temp0_9[0]
    zmm3[0] = zmm3[0] * temp0_9[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_9[0] = temp0_9[0] * zmm2[0]
    zmm2 = arg8
    temp0_9[0] = temp0_9[0] + temp0_9[0]
    temp0_9[0] = temp0_9[0] * temp0_9[0]
    zmm3[0] = zmm3[0] * temp0_9[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_9[0] = temp0_9[0] * zmm5[0]
    temp0_9[0] = temp0_9[0] + temp0_9[0]
    zmm9[0] = zmm9[0] * temp0_9[0]
    zmm9[0] = zmm9[0] * temp0_9[0]
    zmm9[0] = zmm9[0] * temp0_9[0]
    float temp0_10[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    *arg7 = temp0_10.q
    float temp0_11[0x4] = __sqrtss_xmmss_memss(temp0_10[0], var_264)
    float var_268_2 = zmm9[0]
    zmm1[0] = zmm1[0] - temp0_11[0]
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

__security_check_cookie(rax_1 ^ &var_2d8)
return result
