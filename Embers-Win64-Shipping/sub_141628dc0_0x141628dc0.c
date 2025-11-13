// 函数: sub_141628dc0
// 地址: 0x141628dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm14[0x4]
float var_c8[0x4] = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
float zmm2[0x4] = *arg3
void* r10 = arg2
float zmm5[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
float zmm11[0x4] = zx.o(0)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
float (* r8)[0x4] = &var_1c8
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
int32_t* var_210 = arg1
void* var_208 = r10
zmm4[0] = zmm4[0] + zmm3[0]
float (* var_1f8)[0x4] = &var_1c8
zmm4[0] = zmm4[0] + zmm6[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm12 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm12[0] = 1f / temp0_7[0]
    zmm14 = zmm12
    zmm15 = zmm12
    zmm14[0] = zmm14[0] * zmm3[0]
    zmm15[0] = zmm15[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm6[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm14 = 0xbf800000
    zmm15 = zx.o(0)
    zmm12 = zx.o(0)

zmm6 = arg8
int64_t r12 = 0
zmm6[0] = zmm6[0] f+ arg10
int32_t rdx_1 = 0
float zmm9[0x4] = 0x7f7fffff
int32_t i_6 = 0
float zmm10[0x4] = 0x358637bd
int64_t rbx
int64_t arg_8 = rbx
var_188 = data_142d3f7e0
float zmm0[0x4] = _mm_cvtps_pd(zmm6[0].q)
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
uint128_t zmm7
uint128_t var_58 = zmm7
zmm0[0].q = zmm0[0].q f+ 0.001
float zmm8[0x4]
float var_68[0x4] = zmm8
float var_268 = 3.40282347e+38f
float var_264 = zmm6[0]
uint128_t zmm13
uint128_t var_b8 = zmm13
float var_2a8 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    int32_t rdx_2 = rdx_1 + 1
    
    if (rdx_1 s>= 0x20)
        goto label_141629616
    
    zmm4 = zmm15 ^ zmm5
    zmm3 = zmm14 ^ zmm5
    zmm4[0] = zmm4[0] f* arg1[4]
    zmm2 = zmm12 ^ zmm5
    zmm3[0] = zmm3[0] f* *arg1
    zmm2[0] = zmm2[0] f* arg1[2]
    zmm4[0] = zmm4[0] f* arg1[1]
    zmm4[0] = zmm4[0] f* arg1[7]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* arg1[3]
    zmm3[0] = zmm3[0] f* arg1[6]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* arg1[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* arg1[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t rbx_1
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm13 = zx.o(*arg1)
        rbx_1 = arg1[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm13 = zx.o(*(arg1 + 0x18))
        rbx_1 = arg1[8]
    else
        zmm13 = zx.o(*(arg1 + 0xc))
        rbx_1 = arg1[5]
    
    zmm8 = (*r8)[1]
    zmm5 = (*r8)[2]
    zmm7 = *r8
    zmm3 = (*r8)[3]
    zmm15[0] = zmm15[0] * zmm5[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm15[0] = zmm15[0] f* zmm7.d
    zmm12[0] = zmm12[0] - zmm15[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    uint64_t var_260_1 = zmm13.q
    zmm12[0] = zmm12[0] f* zmm7.d
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm14[0] = zmm14[0] * zmm8[0]
    zmm3[0] = zmm3[0] * zmm12[0]
    zmm15[0] = zmm15[0] - zmm14[0]
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm14[0] = zmm14[0] + zmm14[0]
    zmm12[0] = zmm12[0] * zmm8[0]
    zmm3[0] = zmm3[0] + zmm14[0]
    zmm15[0] = zmm15[0] + zmm15[0]
    zmm14[0] = zmm14[0] * zmm5[0]
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm15[0] = zmm15[0] - zmm14[0]
    zmm15[0] = zmm15[0] f* zmm7.d
    zmm15[0] = zmm15[0] + zmm3[0]
    zmm3[0] = zmm3[0] * zmm14[0]
    zmm12[0] = zmm12[0] - zmm15[0]
    zmm3[0] = zmm3[0] * zmm15[0]
    zmm14[0] = zmm14[0] f* zmm7.d
    zmm3[0] = zmm3[0] + zmm15[0]
    zmm3[0] = zmm3[0] + zmm12[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm3[0]
    zmm14[0] = zmm14[0] + zmm3[0]
    int64_t var_1e8 = (_mm_unpacklo_ps(zmm15, zmm12[0].q)).q
    float var_1e0_1 = zmm14[0]
    int32_t var_240
    zmm11 = sub_141758e70(r10, &var_240, &var_1e8, zmm11)
    int32_t var_238
    float temp0_11[0x4] = _mm_unpacklo_ps(var_240, var_238[0].q)
    zmm5 = *arg3
    int32_t var_23c
    float temp0_13[0x4] = _mm_unpacklo_ps(temp0_11, _mm_unpacklo_ps(var_23c, zmm11[0].q)[0].q)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_14)
    float temp0_18[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_20[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(temp0_15, temp0_18))
    float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_18)
    float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), temp0_14)
    zmm3 = var_260_1.d
    float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_21)
    zmm2 = var_260_1:4.d
    float temp0_31[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_25, temp0_23), _mm_add_ps(temp0_27, temp0_13)), arg3[1])
    zmm3[0] = zmm3[0] - temp0_31[0]
    float var_250 = temp0_31[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    zmm2[0] = zmm2[0] - temp0_32[0]
    float var_24c = temp0_32[0]
    zmm0 = rbx_1
    float var_288 = zmm3[0]
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    zmm0[0] = zmm0[0] - temp0_33[0]
    zmm3[0] = zmm3[0] * zmm14[0]
    float var_284_1 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm15[0]
    float var_280 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm12[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    float var_248 = temp0_33[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    int128_t* result
    
    if (zmm3[0] > var_2a8)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_2f8)
        return result
    
    zmm0 = zx.o(var_250.q)
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r13 = sx.q(var_1a8.d)
    int64_t rcx_2 = r13 * 3
    i_6 = r13.d + 1
    var_1a8.d = i_6
    int64_t var_148
    *(&var_148 + (rcx_2 << 2)) = zmm0.q
    zmm0 = zx.o(var_288.q)
    int32_t var_140
    (&var_140)[rcx_2] = var_248
    int64_t var_118
    *(&var_118 + (rcx_2 << 2)) = zmm0.q
    int64_t var_178
    *(&var_178 + (rcx_2 << 2)) = zmm13.q
    int32_t var_110
    (&var_110)[rcx_2] = var_280
    int32_t var_170
    (&var_170)[rcx_2] = rbx_1
    uint64_t var_298
    uint64_t var_278
    int32_t rax_10
    
    if (i_6 == 1)
        int64_t rax_14 = sx.q(var_1a8:4.d)
        int64_t rcx_10 = rax_14 * 3
        var_188[rax_14] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_10 << 2)))
        rax_10 = (&var_110)[rcx_10]
    else if (i_6 == 2)
        uint64_t* rax_13 = sub_1416e69d0(&var_298, &var_118, &var_1a8:4, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_13)
        rax_10 = rax_13[1].d
    else if (i_6 == 3)
        uint64_t* rax_12
        rax_12, zmm11, zmm14 = sub_1416fa750(&var_278, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_12)
        rax_10 = rax_12[1].d
    else if (i_6 == 4)
        uint64_t var_1b8[0x2]
        uint64_t* rax_11
        rax_11, zmm11, zmm14 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
        i_6 = var_1a8.d
        zmm0 = zx.o(*rax_11)
        rax_10 = rax_11[1].d
    else
        int32_t var_2ac_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
        rax_10 = 0
    
    int32_t var_198
    int64_t r8_5 = sx.q(var_198)
    rbx = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t r11_1 = sx.q(var_1a0.d)
    int64_t r10_1 = sx.q(var_1a0:4.d)
    zmm10 = 0x358637bd
    int64_t rdi_1 = r8_5 * 3
    int64_t var_2a4_1 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_7 = (&var_110)[r14_1]
    int32_t rcx_11 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    zmm4 = var_2a4_1.d
    int32_t rax_15 = (&var_110)[rdi_1]
    zmm5 = rax_10
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    float zmm1[0x4] = var_188[r11_1]
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
    int32_t var_104_1 = rdx_7
    int32_t rdx_8 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_11
    int32_t rcx_12 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_15
    int32_t rax_16 = (&var_170)[rdi_1]
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
    int32_t var_164_1 = rdx_8
    int32_t rdx_9 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_12
    int32_t rcx_13 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_16
    int32_t rax_17 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r9_4
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_2a4_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = rdx_9
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rcx_13
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_17
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_268)
        zmm9 = zmm3
    label_141629616:
        
        if (arg11 != 0)
            *arg11 = rdx_2
        
        if (not(zmm9[0] <= zmm10[0]))
            zmm14 = zmm11
            float var_2b8_2 = zmm11[0]
            zmm15 = zmm11
            zmm12 = zmm11
            zmm13 = zmm11
            zmm10 = zmm11
            
            if (i_6 s> 0)
                float (* rax_18)[0x4] = &var_188
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    zmm2 = *rax_18
                    rax_18 = &(*rax_18)[1]
                    zmm2[0] = zmm2[0] f* *(&var_178 + r12)
                    zmm2[0] = zmm2[0] f* *(&var_178:4 + r12)
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r12)
                    zmm15[0] = zmm15[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148 + r12)
                    zmm11[0] = zmm11[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
                    zmm2[0] = zmm2[0] f* *(&var_140 + r12)
                    zmm12[0] = zmm12[0] + zmm2[0]
                    r12 += 0xc
                    zmm13.d = zmm13.d f+ zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_2b8_2 = zmm11[0]
            
            zmm5 = 0x3f000000
            zmm12[0] = zmm12[0] - zmm14[0]
            zmm10[0] = zmm10[0] - zmm11[0]
            zmm3 = zx.o(0)
            zmm7.d = zmm13.d f- zmm15[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm2 = zmm7
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm2[0] = zmm2[0] + zmm12[0]
            zmm2[0] = zmm2[0] + zmm10[0]
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
            zmm5[0] = 0.5f - zmm3[0]
            temp0_36[0] = temp0_36[0] * zmm5[0]
            temp0_36[0] = temp0_36[0] + temp0_36[0]
            temp0_36[0] = temp0_36[0] * zmm12[0]
            temp0_36[0] = temp0_36[0] f* zmm7.d
            temp0_36[0] = temp0_36[0] * zmm10[0]
            zmm1 = var_264
            *arg7 = (_mm_unpacklo_ps(temp0_36, temp0_36[0].q)).q
            float temp0_38[0x4] = _mm_sqrt_ss(0, zmm9[0])
            float var_2ac_2 = temp0_36[0]
            zmm1[0] = zmm1[0] - temp0_38[0]
            arg7[2] = var_2ac_2
            
            if (not(zmm1[0] < zmm11[0]))
                zmm11 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            zmm9 = arg8
            zmm2 = arg10
            *arg4 = zmm11[0]
            zmm9[0] = zmm9[0] f* *arg7
            zmm9[0] = zmm9[0] f* arg7[1]
            zmm9[0] = zmm9[0] f* arg7[2]
            zmm9[0] = zmm9[0] + zmm14[0]
            zmm9[0] = zmm9[0] + zmm15[0]
            zmm9[0] = zmm9[0] + var_2b8_2
            *arg5 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
            arg5[1].d = zmm9[0]
            zmm2[0] = zmm2[0] f* *arg7
            zmm2[0] = zmm2[0] f* arg7[1]
            zmm2[0] = zmm2[0] f* arg7[2]
            zmm12[0] = zmm12[0] - zmm2[0]
            zmm13.d = zmm13.d f- zmm2[0]
            zmm10[0] = zmm10[0] - zmm2[0]
            *arg6 = (_mm_unpacklo_ps(zmm12, zmm13.q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_2f8)
            return result
        
        var_278 = 0
        int64_t var_270_1 = 0
        var_298 = 0
        int64_t var_290_1 = 0
        sub_14083ad30(&var_278, 8)
        
        if (var_290_1:4.d s< 8)
            sub_14083ad30(&var_298, 8)
        
        if (i_6 s> 0)
            rbx = 0
            uint64_t i_5 = zx.q(i_6)
            uint64_t i_1
            
            do
                int64_t rdi_2 = sx.q(var_270_1.d)
                int32_t rax_21 = (rdi_2 + 1).d
                var_270_1.d = rax_21
                
                if (rax_21 s> var_270_1:4.d)
                    sub_14083a7e0(&var_278)
                
                uint64_t rcx_18 = var_278
                int64_t rdx_11 = rdi_2 * 3
                int32_t rax_22 = *(&var_170 + rbx)
                *(rcx_18 + (rdx_11 << 2)) = *(&var_178 + rbx)
                *(rcx_18 + (rdx_11 << 2) + 8) = rax_22
                int64_t rdi_3 = sx.q(var_290_1.d)
                int32_t rax_23 = (rdi_3 + 1).d
                var_290_1.d = rax_23
                
                if (rax_23 s> var_290_1:4.d)
                    sub_14083a7e0(&var_298)
                
                uint64_t rcx_20 = var_298
                int64_t rdx_13 = rdi_3 * 3
                int64_t zmm0_1 = *(&var_148 + rbx)
                int32_t rax_24 = *(&var_140 + rbx)
                rbx += 0xc
                *(rcx_20 + (rdx_13 << 2)) = zmm0_1
                *(rcx_20 + (rdx_13 << 2) + 8) = rax_24
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_25
        float zmm10_1
        uint128_t zmm11_1
        rax_25, zmm10_1, zmm11_1 = sub_1415c1b90(&var_278, &var_298, &var_210, &var_208, zmm14, 
            &var_2a8, &var_288, &var_240, &var_250)
        uint128_t zmm0_2
        uint128_t zmm1_1
        uint128_t zmm2_1
        uint128_t zmm3_1
        
        if (rax_25 == 2)
            float zmm5_1 = zmm11_1.d
            zmm7 = zmm11_1
            zmm8 = zmm11_1
            zmm3_1 = zmm11_1
            int64_t zmm4_1 = zmm11_1.q
            
            if (i_6 s> 0)
                uint128_t* rax_28 = &var_188
                uint64_t i_4 = zx.q(i_6)
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_28
                    rax_28 += 4
                    zmm0_2.d = zmm2_1.d f* *(&var_178 + r12)
                    zmm1_1.d = zmm2_1.d f* *(&var_178:4 + r12)
                    zmm5_1 = zmm5_1 f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                    zmm7.d = zmm7.d f+ zmm1_1.d
                    zmm1_1.d = zmm2_1.d f* *(&var_148 + r12)
                    zmm8[0] = zmm8[0] f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r12)
                    zmm2_1.d = zmm2_1.d f* *(&var_140 + r12)
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    r12 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                    zmm11_1.d = zmm11_1.d f+ zmm2_1.d
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            uint128_t zmm6_1 = arg8
            zmm0_2 = zx.o(var_288.q)
            *arg4 = var_264.d
            *arg7 = zmm0_2.q
            arg7[2] = var_280
            zmm0_2.d = zmm6_1.d f* *arg7
            zmm1_1.d = zmm6_1.d f* arg7[1]
            zmm6_1.d = zmm6_1.d f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ zmm5_1
            zmm1_1.d = zmm1_1.d f+ zmm7.d
            zmm7 = arg10
            zmm6_1.d = zmm6_1.d f+ zmm8[0]
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm6_1.d
            zmm0_2.d = zmm7.d f* *arg7
            zmm1_1.d = zmm7.d f* arg7[1]
            zmm7.d = zmm7.d f* arg7[2]
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm4_1.d = zmm4_1.d f- zmm1_1.d
            zmm11_1.d = zmm11_1.d f- zmm7.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
            arg6[1].d = zmm11_1.d
            float temp3_1 = *arg4
            zmm10_1 - temp3_1
            uint64_t rcx_26 = var_298
            rbx.b = zmm10_1 < temp3_1
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            uint64_t rcx_27 = var_278
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            result = zx.q(rbx.b)
        else
            uint128_t zmm9_1 = arg8
            zmm7 = arg10
            zmm3_1 = var_250
            *arg7 = var_288.q
            zmm0_2 = var_2a8
            arg7[2] = var_280
            zmm0_2.d = zmm0_2.d f+ zmm9_1.d
            zmm0_2.d = zmm0_2.d f+ zmm7.d
            *arg4 = zmm0_2.d
            zmm0_2.d = zmm9_1.d f* *arg7
            uint64_t rcx_23 = var_298
            zmm1_1.d = zmm9_1.d f* arg7[1]
            zmm9_1.d = zmm9_1.d f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ var_240
            zmm1_1.d = zmm1_1.d f+ var_23c
            zmm9_1.d = zmm9_1.d f+ var_238
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm9_1.d
            zmm0_2.d = zmm7.d f* *arg7
            zmm1_1.d = zmm7.d f* arg7[1]
            zmm7.d = zmm7.d f* arg7[2]
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm2_1.d = var_24c.d f- zmm1_1.d
            zmm0_2.d = var_248.d f- zmm7.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
            arg6[1].d = zmm0_2.d
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            uint64_t rcx_24 = var_278
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_2f8)
        return result
    
    zmm12 = 0x3f800000
    arg1 = var_210
    zmm9 = zmm3
    r8 = var_1f8
    r10 = var_208
    rdx_1 = rdx_2
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_268 = zmm3[0]
    zmm12[0] = 1f / temp0_35[0]
    zmm14 = zmm12
    zmm15 = zmm12
    zmm12[0] = zmm12[0] * zmm5[0]
    zmm5 = 0x80000000
    zmm14[0] = zmm14[0] * zmm4[0]
    zmm15[0] = zmm15[0] * zmm3[0]
