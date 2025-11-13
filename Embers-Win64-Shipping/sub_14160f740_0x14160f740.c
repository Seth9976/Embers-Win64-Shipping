// 函数: sub_14160f740
// 地址: 0x14160f740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
float zmm2[0x4] = *arg3
int64_t rbx = arg1
float zmm4[0x4] = 0x80000000
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
float (* var_210)[0x4] = &var_1c8
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
int64_t var_228 = rbx
zmm6[0] = zmm6[0] * zmm6[0]
void* var_220 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm5[0] = zmm5[0] + zmm3[0]
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
int32_t rcx_1 = 0
int32_t i_6 = 0
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
var_188 = zmm0
uint64_t var_2b8
int32_t var_2b0
float var_29c
uint64_t var_298
uint64_t var_288
float var_270
float var_26c
float var_268
int32_t var_260
int32_t var_25c
int32_t var_258
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_2

while (true)
    rcx_2 = rcx_1 + 1
    
    if (rcx_1 s>= 0x20)
        zmm10 = 0x358637bd
        break
    
    void* rcx_3 = *(rbx + 0x10)
    zmm11[0] = zmm11[0] f* *(rbx + 0x28)
    zmm12[0] = zmm12[0] f* *(rbx + 0x2c)
    var_270 = (zmm11 ^ zmm4)[0]
    zmm10[0] = zmm10[0] f* *(rbx + 0x30)
    var_26c = (zmm12 ^ zmm4)[0]
    var_268 = (zmm10 ^ zmm4)[0]
    zmm9, zmm10, zmm11 = sub_141758e70(rcx_3, &var_260, &var_270, zmm9)
    zmm0 = var_260
    zmm0[0] = zmm0[0] f* *(rbx + 0x28)
    zmm6 = (*var_210)[1]
    zmm7 = (*var_210)[2]
    zmm3 = *var_210
    zmm2 = (*var_210)[3]
    zmm14 = var_258
    zmm14[0] = zmm14[0] f* *(rbx + 0x30)
    void* rax_7 = var_220
    float var_250_1 = zmm0[0]
    zmm0 = var_25c
    zmm0[0] = zmm0[0] f* *(rbx + 0x2c)
    zmm12[0] = zmm12[0] * zmm3[0]
    var_29c = zmm0[0]
    zmm12[0] = zmm12[0] * zmm7[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    float var_1f8_1 = zmm14[0]
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm11[0]
    zmm2[0] = zmm2[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm10[0] = zmm10[0] + zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm11[0] = zmm11[0] + zmm2[0]
    zmm12[0] = zmm12[0] + zmm2[0]
    
    if (zmm12[0] >= zmm9[0])
        zmm3 = *(rax_7 + 0x1c)
    else
        zmm3 = *(rax_7 + 0x10)
    
    if (zmm10[0] >= zmm9[0])
        zmm2 = *(rax_7 + 0x20)
    else
        zmm2 = *(rax_7 + 0x14)
    
    if (zmm11[0] >= zmm9[0])
        zmm0 = *(rax_7 + 0x24)
    else
        zmm0 = *(rax_7 + 0x18)
    
    float temp0_10[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), _mm_unpacklo_ps(zmm2, zmm9[0].q)[0].q)
    zmm4 = *arg3
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd2), temp0_12)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_16, temp0_14)
    float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, temp0_19)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_13)
    float zmm1[0x4] = var_250_1
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_10)
    zmm5 = var_29c
    float temp0_28[0x4] = __addps_xmmps_memps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd2), temp0_12), temp0_22), 
            temp0_23), 
        arg3[1])
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    zmm1[0] = zmm1[0] - temp0_28[0]
    int64_t r13 = sx.q(var_1a8.d)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float var_1e8_1 = temp0_29[0]
    zmm14[0] = zmm14[0] - temp0_29[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    int64_t rcx_5 = r13 * 3
    zmm5[0] = zmm5[0] - temp0_30[0]
    i_6 = r13.d + 1
    float temp0_31[0x4] = _mm_unpacklo_ps(zmm1, zmm5[0].q)
    float var_1d8_1 = zmm14[0]
    *(&var_178 + (rcx_5 << 2)) = temp0_31.q
    (&var_170)[rcx_5] = var_1f8_1
    *(&var_148 + (rcx_5 << 2)) = (_mm_unpacklo_ps(temp0_28, temp0_30[0].q)).q
    (&var_140)[rcx_5] = var_1e8_1
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1, zmm5[0].q)).q
    int32_t var_110
    (&var_110)[rcx_5] = var_1d8_1
    var_1a8.d = i_6
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_1a8:4.d)
        int64_t rcx_13 = rax_17 * 3
        var_188[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_13 << 2)))
        rax_13 = (&var_110)[rcx_13]
    else if (i_6 == 2)
        uint64_t* rax_16
        rax_16, zmm9 = sub_1416e69d0(&var_298, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm9, zmm15 = sub_1416fa750(&var_288, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_14
        rax_14, zmm9, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_2a0_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        rax_13 = 0
    
    int32_t var_198
    int64_t r8_4 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm10 = 0x358637bd
    int64_t rdi_1 = r8_4 * 3
    var_2b8 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_4 = (&var_110)[r14_1]
    int32_t rcx_14 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2b8.d
    var_2b0 = rax_13
    int32_t rax_18 = (&var_110)[rdi_1]
    zmm5 = var_2b0
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_4]
    int32_t r8_5 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_4
    int32_t rdx_5 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_14
    int32_t rcx_15 = (&var_170)[rsi_1]
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
    var_170 = r8_5
    int32_t r8_6 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_5
    int32_t rdx_6 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_15
    int32_t rcx_16 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_19
    int32_t rax_20 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2b8:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_6
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_6
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_16
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_20
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= zmm15[0])
        zmm15 = zmm3
        break
    
    zmm10 = 0x3f800000
    rbx = var_228
    zmm15 = zmm3
    rcx_1 = rcx_2
    zmm10[0] = 1f / _mm_sqrt_ss(0, zmm3[0])[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm4 = 0x80000000
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_2

uint32_t result

if (zmm15[0] <= zmm10[0])
    __builtin_memset(&var_298, 0, 0x20)
    sub_14083ad30(&var_288, 8)
    int64_t var_290
    
    if (var_290:4.d s< 8)
        sub_14083ad30(&var_298, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_280_1
            int64_t rdi_2 = sx.q(var_280_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_280_1.d = rax_24
            
            if (rax_24 s> var_280_1:4.d)
                sub_14083a7e0(&var_288)
            
            uint64_t rcx_21 = var_288
            int64_t rdx_8 = rdi_2 * 3
            int32_t rax_25 = *(&var_170 + rbx)
            *(rcx_21 + (rdx_8 << 2)) = *(&var_178 + rbx)
            *(rcx_21 + (rdx_8 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_290.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_290.d = rax_26
            
            if (rax_26 s> var_290:4.d)
                sub_14083a7e0(&var_298)
            
            uint64_t rcx_23 = var_298
            int64_t rdx_10 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_27 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_23 + (rdx_10 << 2)) = zmm0_1
            *(rcx_23 + (rdx_10 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    float zmm9_1[0x4]
    rax_28, zmm9_1, zmm10 = sub_1415c3550(&var_288, &var_298, &var_228, &var_220, &var_29c, 
        &var_2b8, &var_260, &var_270)
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (rax_28 == 2)
        float zmm6_1 = zmm9_1[0]
        int64_t zmm5_1 = zmm9_1[0].q
        
        if (i_6 s> 0)
            float (* rax_31)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_31
                rax_31 = &(*rax_31)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm6_1 = zmm6_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm5_1.d = zmm5_1.d f+ zmm2_1[0]
                zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm3_1 = arg10
        zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
        *arg4 = zmm2_1[0]
        *arg7 = var_2b8
        arg7[2] = var_2b0
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] + zmm6_1
        zmm2_1[0] = zmm2_1[0] + zmm9_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm9_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        arg5[1].d = zmm2_1[0]
        zmm3_1[0] = zmm3_1[0] f* *arg7
        zmm3_1[0] = zmm3_1[0] f* arg7[1]
        zmm3_1[0] = zmm3_1[0] f* arg7[2]
        zmm9_1[0] = zmm9_1[0] - zmm3_1[0]
        zmm5_1.d = zmm5_1.d f- zmm3_1[0]
        zmm9_1[0] = zmm9_1[0] - zmm3_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm9_1, zmm5_1)).q
        arg6[1].d = zmm9_1[0]
        float temp2_1 = *arg4
        zmm10[0] - temp2_1
        uint64_t rcx_29 = var_298
        rbx.b = zmm10[0] < temp2_1
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        uint64_t rcx_30 = var_288
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        float zmm4_1[0x4] = arg10
        zmm3_1 = var_270
        *arg7 = var_2b8
        float zmm0_2[0x4] = var_29c
        zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
        arg7[2] = var_2b0
        zmm0_2[0] = zmm0_2[0] + zmm4_1[0]
        *arg4 = zmm0_2[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        uint64_t rcx_26 = var_298
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] f+ var_260
        zmm2_1[0] = zmm2_1[0] f+ var_25c
        zmm2_1[0] = zmm2_1[0] f+ var_258
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        float var_2a0_5 = zmm2_1[0]
        zmm2_1 = var_26c
        arg5[1].d = var_2a0_5
        zmm4_1[0] = zmm4_1[0] f* *arg7
        zmm4_1[0] = zmm4_1[0] f* arg7[1]
        zmm4_1[0] = zmm4_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
        zmm0_2 = var_268
        zmm2_1[0] = zmm2_1[0] - zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm4_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_288
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
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
    
    zmm3 = zx.o(0)
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm3[0] = zmm9[0]
    zmm2 = 0x3f000000
    float temp0_36[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_36[0] = temp0_36[0] * zmm2[0]
    zmm2 = arg8
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * temp0_36[0]
    zmm3[0] = zmm3[0] * temp0_36[0]
    zmm5[0] = 0.5f - zmm3[0]
    zmm3 = arg10
    temp0_36[0] = temp0_36[0] * zmm5[0]
    temp0_36[0] = temp0_36[0] + temp0_36[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    temp0_36[0] = temp0_36[0] * zmm9[0]
    *arg7 = (_mm_unpacklo_ps(temp0_36, temp0_36[0].q)).q
    zmm2[0] = zmm2[0] + zmm3[0]
    float var_2a0_2 = temp0_36[0]
    float temp0_38[0x4] = _mm_sqrt_ss(0, zmm15[0])
    arg7[2] = var_2a0_2
    zmm2[0] = zmm2[0] - temp0_38[0]
    *arg4 = zmm2[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    zmm2[0] = zmm2[0] + zmm9[0]
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    arg5[1].d = zmm2[0]
    zmm3[0] = zmm3[0] f* *arg7
    zmm3[0] = zmm3[0] f* arg7[1]
    zmm3[0] = zmm3[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm3[0]
    zmm9[0] = zmm9[0] - zmm3[0]
    zmm9[0] = zmm9[0] - zmm3[0]
    float temp0_40[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    result = zmm9[0]
    *arg6 = temp0_40.q
    arg6[1].d = result
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2f8)
return result
