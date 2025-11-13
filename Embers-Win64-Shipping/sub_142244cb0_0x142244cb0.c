// 函数: sub_142244cb0
// 地址: 0x142244cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* r14 = arg1
*arg4 = *arg5
float zmm5[0x4] = *(arg6 + 0xc)
float zmm2[0x4] = *(arg6 + 4)
float zmm4[0x4] = *(arg6 + 8)
float zmm13[0x4] = *arg6
int128_t zmm9 = arg5[2].d
float zmm3 = zmm13[0]
int128_t zmm6 = *(arg5 + 0x24)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm8 = *(arg5 + 0x28)
zmm6.d = zmm6.d f+ zmm6.d
int32_t rax_2 = arg5[5].d
zmm8.d = zmm8.d f+ zmm8.d
int32_t r13 = *(arg5 + 0x4c)
float zmm1 = zmm4[0]
int32_t r12 = *(arg5 + 0x48)
zmm5[0] = zmm5[0] * zmm5[0]
zmm2[0] = zmm2[0] f* zmm8.d
zmm5[0] = zmm5[0] - 0.5f
zmm2[0] = zmm2[0] f* zmm6.d
zmm3 = zmm3 f* zmm9.d + zmm2[0]
zmm4[0] = zmm4[0] f* zmm6.d
zmm2[0] = zmm2[0] - zmm4[0]
zmm3 = zmm3 + zmm1 f* zmm8.d
zmm5[0] = zmm5[0] f* zmm9.d
zmm1 = zmm13[0]
zmm2[0] = zmm2[0] * zmm5[0]
zmm2[0] = zmm2[0] + zmm5[0]
zmm13[0] = zmm13[0] f* zmm6.d
zmm13[0] = zmm13[0] f* zmm8.d
zmm2[0] = zmm2[0] + zmm1 * zmm3
zmm2[0] = zmm2[0] f* zmm9.d
zmm1 = zmm2[0] * zmm3
zmm2[0] = zmm2[0] f+ arg6[1].d
zmm13[0] = zmm13[0] - zmm2[0]
float var_248 = zmm2[0]
zmm4[0] = zmm4[0] f* zmm9.d
zmm13[0] = zmm13[0] * zmm5[0]
zmm4[0] = zmm4[0] - zmm13[0]
zmm4[0] = zmm4[0] * zmm3
zmm5[0] = zmm5[0] f* zmm8.d
zmm5[0] = zmm5[0] f* zmm6.d
zmm4[0] = zmm4[0] * zmm5[0]
zmm13[0] = zmm13[0] + zmm5[0]
zmm4[0] = zmm4[0] + zmm5[0]
zmm13[0] = zmm13[0] + zmm4[0]
zmm4[0] = zmm4[0] + zmm1
zmm13[0] = zmm13[0] f+ *(arg6 + 0x18)
zmm4[0] = zmm4[0] f+ *(arg6 + 0x14)
float var_26c = zmm13[0]
float var_24c = zmm4[0]
float var_1a8
float* rax_3
float zmm10_1
rax_3, zmm10_1 = sub_1417c7990(arg6, &var_1a8, &arg5[1])
float zmm0_1 = rax_3[1]
zmm13 = *rax_3
float zmm15[0x4] = rax_3[2]
float var_150 = zmm13[0]
float var_280 = zmm0_1
float var_14c = zmm0_1
float var_27c = zmm15[0]
float zmm9_1 = *(arg5 + 0x3c)
float zmm6_1 = arg5[4].d
zmm9_1 = zmm9_1 + zmm9_1
float zmm4_1 = *(arg7 + 0xc)
zmm6_1 = zmm6_1 + zmm6_1
float zmm2_1 = *(arg7 + 4)
float zmm5_1 = *(arg7 + 8)
float zmm8_1 = *(arg5 + 0x44)
float zmm14[0x4] = rax_3[3]
zmm8_1 = zmm8_1 + zmm8_1
float var_140 = var_248
float var_138 = var_26c
zmm0_1 = *arg7
float var_13c = zmm10_1
float var_148 = zmm15[0]
float var_268 = zmm14[0]
float zmm7_1 = zmm4_1 * zmm4_1 - 0.5f
float zmm3_1 = zmm0_1 * zmm9_1 + zmm2_1 * zmm6_1 + zmm5_1 * zmm8_1
float var_144 = zmm14[0]
float var_284_1 =
    (zmm2_1 * zmm8_1 - zmm5_1 * zmm6_1) * zmm4_1 + zmm7_1 * zmm9_1 + zmm0_1 * zmm3_1 f+ arg7[1].d
float var_260_1 = (zmm5_1 * zmm9_1 - zmm0_1 * zmm8_1) * zmm4_1 + zmm7_1 * zmm6_1
    + zmm2_1 * zmm3_1 f+ *(arg7 + 0x14)
zmm9_1 = (zmm0_1 * zmm6_1 - zmm2_1 * zmm9_1) * zmm4_1 + zmm7_1 * zmm8_1
    + zmm5_1 * zmm3_1 f+ *(arg7 + 0x18)
float* rax_4
float zmm9_2[0x4]
rax_4, zmm9_2 = sub_1417c7990(arg7, &var_1a8, arg5 + 0x2c)
float zmm6_2[0x4] = *rax_4
float zmm5_2[0x4] = rax_4[1]
int128_t zmm4_2 = rax_4[2]
float zmm7_2[0x4] = rax_4[3]
float zmm0_2[0x4] = var_284_1
float zmm1_2[0x4] = var_260_1
zmm0_2[0] = zmm0_2[0] f- arg6[1].d
float zmm11[0x4] = var_284_1
int128_t zmm8_2 = var_280
float var_180 = zmm0_2[0]
zmm9_2[0] = zmm9_2[0] f- *(arg6 + 0x18)
float var_17c = zmm1_2[0]
zmm1_2[0] = zmm1_2[0] f- *(arg6 + 0x14)
*arg2 = zmm0_2[0]
float var_178 = zmm9_2[0]
arg2[2] = zmm9_2[0]
float var_250 = zmm6_2[0]
arg2[1] = zmm1_2[0]
zmm1_2[0] = zmm1_2[0] f- *(arg6 + 0x14)
zmm1_2[0] = zmm1_2[0] f- *(arg7 + 0x14)
zmm11[0] = zmm11[0] f- arg6[1].d
zmm11[0] = zmm11[0] f- arg7[1].d
float var_190 = zmm6_2[0]
float var_204 = zmm1_2[0]
zmm9_2[0] = zmm9_2[0] f- *(arg6 + 0x18)
float var_1f8 = zmm1_2[0]
zmm5_2[0] = zmm5_2[0] f* zmm8_2.d
int64_t* var_218 = r14
float var_208 = zmm11[0]
float var_200 = zmm9_2[0]
zmm9_2[0] = zmm9_2[0] f- *(arg7 + 0x18)
zmm15[0] = zmm15[0] f* zmm4_2.d
int64_t* var_210 = r14
float var_270 = zmm5_2[0]
float var_1f4 = zmm9_2[0]
zmm6_2[0] = zmm6_2[0] * zmm13[0]
float var_18c = zmm5_2[0]
int32_t var_274 = zmm4_2.d
zmm5_2[0] = zmm5_2[0] + zmm6_2[0]
int32_t var_188 = zmm4_2.d
float var_25c = zmm7_2[0]
zmm14[0] = zmm14[0] * zmm7_2[0]
float var_184 = zmm7_2[0]
zmm5_2[0] = zmm5_2[0] + zmm15[0]
float var_1fc = zmm11[0]
zmm5_2[0] = zmm5_2[0] + zmm14[0]

if (not(zmm5_2[0] >= 0f))
    zmm6_2 ^= 0x80000000
    zmm5_2 ^= 0x80000000
    zmm4_2 ^= 0x80000000
    var_250 = zmm6_2[0]
    zmm7_2 ^= 0x80000000
    var_270 = zmm5_2[0]
    var_274 = zmm4_2.d
    var_25c = zmm7_2[0]
    var_190 = zmm6_2[0]
    float var_18c_1 = zmm5_2[0]
    int32_t var_188_1 = zmm4_2.d
    float var_184_1 = zmm7_2[0]

zmm11[0] = zmm11[0] - var_248
zmm1_2[0] = zmm1_2[0] - var_24c
zmm7_2 = zmm9_1
zmm7_2[0] = zmm7_2[0] - var_26c
float var_1d4 = zmm14[0]
zmm11[0] = zmm11[0] + zmm11[0]
zmm14[0] = zmm14[0] * zmm14[0]
zmm1_2[0] = zmm1_2[0] + zmm1_2[0]
zmm7_2[0] = zmm7_2[0] + zmm7_2[0]
zmm5_2 = zmm13 ^ 0x80000000
zmm14[0] = zmm14[0] - 0.5f
float var_284_2 = zmm11[0]
zmm11[0] = zmm11[0] * zmm5_2[0]
float var_1e0 = zmm5_2[0]
float var_288_2 = zmm7_2[0]
zmm4_2 = zmm8_2 ^ 0x80000000
zmm6_2 = zmm15 ^ 0x80000000
zmm1_2[0] = zmm1_2[0] f* zmm4_2.d
zmm7_2[0] = zmm7_2[0] f* zmm4_2.d
zmm1_2[0] = zmm1_2[0] + zmm11[0]
zmm7_2[0] = zmm7_2[0] * zmm6_2[0]
int32_t var_1dc = zmm4_2.d
zmm1_2[0] = zmm1_2[0] * zmm6_2[0]
zmm1_2[0] = zmm1_2[0] + zmm7_2[0]
float var_1d8 = zmm6_2[0]
zmm7_2[0] = zmm7_2[0] - zmm1_2[0]
zmm14[0] = zmm14[0] * zmm11[0]
zmm11[0] = zmm11[0] * zmm6_2[0]
zmm1_2[0] = zmm1_2[0] * zmm5_2[0]
zmm7_2[0] = zmm7_2[0] * zmm14[0]
zmm7_2[0] = zmm7_2[0] + zmm14[0]
zmm7_2[0] = zmm7_2[0] + zmm1_2[0]
zmm1_2[0] = zmm1_2[0] f* zmm4_2.d
zmm1_2[0] = zmm1_2[0] * zmm6_2[0]
float var_248_1 = zmm7_2[0]
zmm7_2 = var_288_2
zmm7_2[0] = zmm7_2[0] * zmm5_2[0]
zmm11[0] = zmm11[0] - zmm7_2[0]
zmm14[0] = zmm14[0] * zmm1_2[0]
zmm1_2[0] = zmm1_2[0] * zmm5_2[0]
zmm11[0] = zmm11[0] * zmm14[0]
zmm14[0] = zmm14[0] * zmm7_2[0]
zmm11[0] = zmm11[0] + zmm14[0]
zmm0_2 = var_284_2
zmm0_2[0] = zmm0_2[0] f* zmm4_2.d
zmm1_2[0] = zmm1_2[0] - zmm0_2[0]
zmm11[0] = zmm11[0] + zmm1_2[0]
zmm1_2[0] = zmm1_2[0] * zmm14[0]
float var_1d0 = zmm11[0]
zmm1_2[0] = zmm1_2[0] + zmm14[0]
zmm1_2[0] = zmm1_2[0] + zmm1_2[0]
float var_260_2 = zmm1_2[0]
float* rax_5
float zmm8_3[0x4]
int128_t zmm9_3
float zmm11_1[0x4]
rax_5, zmm8_3, zmm9_3, zmm11_1 = sub_1417c7990(&var_1e0, &var_1a8, &var_190)
float zmm0_3[0x4] = *rax_5
float zmm7_3[0x4] = rax_5[3]
float var_278 = zmm0_3[0]
float var_170 = zmm0_3[0]
zmm0_3 = rax_5[1]
float var_288_3 = zmm0_3[0]
float var_16c = zmm0_3[0]
zmm0_3 = rax_5[2]
float var_284_3 = zmm0_3[0]
float var_168 = zmm0_3[0]
float var_164 = zmm7_3[0]
float var_160 = var_248_1[0]
float zmm3_3[0x4] = zmm15
zmm0_3 = var_27c
zmm3_3[0] = zmm3_3[0] + zmm15[0]
float zmm2_3[0x4] = zmm0_3
float var_15c = zmm11_1[0]
zmm11_1 = zmm0_3
float var_158 = zmm1_2[0]
float zmm1_3[0x4] = zmm15
float zmm6_3[0x4] = zmm8_3
float zmm12[0x4] = zmm8_3
zmm13[0] = zmm13[0] + zmm13[0]
zmm1_3[0] = zmm1_3[0] * zmm3_3[0]
zmm3_3[0] = zmm3_3[0] * zmm14[0]
zmm12[0] = zmm12[0] + zmm8_3[0]
zmm15 = zmm8_3
zmm8_3 = 0x3f800000
zmm2_3[0] = zmm2_3[0] * zmm13[0]
zmm15[0] = zmm15[0] * zmm13[0]
zmm0_3 = 0x3f800000
zmm11_1[0] = zmm11_1[0] * zmm12[0]
zmm6_3[0] = zmm6_3[0] * zmm12[0]
zmm13[0] = zmm13[0] * zmm14[0]
zmm0_3[0] = 1f - zmm6_3[0]
zmm12[0] = zmm12[0] * zmm14[0]
zmm0_3[0] = zmm0_3[0] - zmm1_3[0]
float var_1c4 = zmm0_3[0]
float var_108 = zmm0_3[0]
zmm3_3[0] = zmm3_3[0] + zmm15[0]
zmm15[0] = zmm15[0] - zmm3_3[0]
float var_1c0 = zmm3_3[0]
float var_104 = zmm3_3[0]
zmm0_3 = zmm2_3
zmm0_3[0] = zmm0_3[0] - zmm12[0]
float var_fc = zmm15[0]
zmm12[0] = zmm12[0] + zmm2_3[0]
zmm2_3 = var_270
zmm2_3[0] = zmm2_3[0] + zmm2_3[0]
float var_198 = zmm0_3[0]
float var_100 = zmm0_3[0]
zmm13[0] = zmm13[0] * zmm13[0]
float zmm4_3[0x4] = 0x3f800000
float var_f0 = zmm12[0]
zmm4_3[0] = 1f - zmm13[0]
zmm4_3[0] = zmm4_3[0] - zmm6_3[0]
zmm6_3 = var_274
zmm4_3[0] = zmm4_3[0] - zmm1_3[0]
zmm3_3 = zmm6_3
zmm3_3[0] = zmm3_3[0] + zmm6_3[0]
float var_23c = zmm4_3[0]
float var_230 = zmm4_3[0]
float var_f8 = zmm4_3[0]
zmm11_1[0] = zmm11_1[0] + zmm13[0]
float var_e8 = zmm4_3[0]
zmm11_1[0] = zmm11_1[0] - zmm13[0]
zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
float var_234 = zmm11_1[0]
float var_f4 = zmm11_1[0]
zmm0_3 = var_250
float zmm5_3[0x4] = zmm0_3
float var_238 = zmm11_1[0]
zmm5_3[0] = zmm5_3[0] + zmm0_3[0]
float var_ec = zmm11_1[0]
zmm5_3[0] = zmm5_3[0] * zmm2_3[0]
zmm5_3[0] = zmm5_3[0] * zmm0_3[0]
zmm0_3 = zmm3_3
float var_244 = zmm5_3[0]
zmm11_1 = var_25c
zmm0_3[0] = zmm0_3[0] * zmm6_3[0]
zmm5_3[0] = zmm5_3[0] * zmm6_3[0]
int32_t r9 = rax_2
zmm2_3[0] = zmm2_3[0] * zmm6_3[0]
zmm3_3[0] = zmm3_3[0] * zmm11_1[0]
zmm2_3[0] = zmm2_3[0] * zmm11_1[0]
float var_26c_1 = zmm2_3[0]
zmm6_3 = zmm3_3
float zmm10_2[0x4] = var_244
float var_250_1 = zmm2_3[0]
zmm10_2[0] = zmm10_2[0] - zmm3_3[0]
zmm5_3[0] = zmm5_3[0] * zmm11_1[0]
zmm3_3 = 0x3f800000
float var_228 = zmm15[0]
zmm3_3[0] = 1f - zmm5_3[0]
var_1e0 = zmm12[0]
zmm14 = 0x3f800000
float var_124 = zmm10_2[0]
zmm14[0] = 1f - zmm2_3[0]
zmm11_1 = zmm5_3
zmm6_3[0] = zmm6_3[0] + var_244
float var_244_1 = zmm10_2[0]
zmm3_3[0] = zmm3_3[0] - zmm0_3[0]
zmm10_2 = zx.o(0)
zmm14[0] = zmm14[0] - zmm0_3[0]
zmm0_3 = var_26c_1
zmm3_3[0] = zmm3_3[0] - zmm2_3[0]
float var_254 = zmm6_3[0]
float var_12c = zmm6_3[0]
zmm6_3 = var_250_1
float var_1bc = zmm3_3[0]
zmm11_1[0] = zmm11_1[0] - zmm6_3[0]
float var_120 = zmm3_3[0]
float var_24c_1 = zmm14[0]
zmm0_3[0] = zmm0_3[0] + zmm5_3[0]
float var_130 = zmm14[0]
zmm0_3[0] = zmm0_3[0] - zmm5_3[0]
float var_1b4 = zmm3_3[0]
zmm6_3[0] = zmm6_3[0] + zmm5_3[0]
float var_128 = zmm11_1[0]
float var_110 = zmm3_3[0]
float var_1b8 = zmm0_3[0]
float var_11c = zmm0_3[0]
float var_26c_2 = zmm0_3[0]
float var_114 = zmm0_3[0]
float var_220 = var_234[0]
float var_224 = var_230[0]
float var_1d8_1 = var_23c[0]
float var_250_2 = zmm6_3[0]
float var_118 = zmm6_3[0]
float var_1dc_1 = var_238[0]
float var_1f0

if ((r9.b & 7) != 0)
    zmm0_3 = *(arg5 + 0x12c)
    zmm0_3[0] = zmm0_3[0] - var_248_1
    zmm1_3 = arg5[0x13].d
    int32_t* r14_1 = &var_1f0
    zmm1_3[0] = zmm1_3[0] - var_1d0
    void* rbx_1 = arg5 + 0xc4
    int32_t i = 0
    var_1f0 = zmm0_3[0]
    int32_t rdi_1 = 1
    zmm0_3 = *(arg5 + 0x134)
    zmm0_3[0] = zmm0_3[0] - var_260_2
    float var_1ec_1 = zmm1_3[0]
    float var_1e8_1 = zmm0_3[0]
    
    do
        if ((r9 & rdi_1) != 0)
            *(r14_1 + arg5 - &var_1f0 + 0x138)
            int32_t* rax_7
            rax_7, zmm6_3, zmm7_3, zmm8_3 =
                sub_142257980(&var_218, &(&var_108)[zx.q(i) * 3], (*r14_1)[0], 0)
            int16_t r8_3 = rax_7[0x13].w
            rax_7[7] = zmm6_3[0]
            r8_3 |= 0x21
            int16_t rdx_4 = r8_3 | 2
            
            if (((*(rbx_1 + 4)).b & 1) == 0)
                rdx_4 = r8_3
            
            rax_7[0x13].w = rdx_4
            rax_7[0x10] = *(rbx_1 - 8)
            rax_7[0x11] = *(rbx_1 - 4)
            rax_7[0xb] = (*rbx_1 ^ zmm9_3)[0]
            rax_7[0xf] = *rbx_1
            r9 = rax_2
        
        i += 1
        rdi_1 = rol.d(rdi_1, 1)
        rbx_1 += 0x10
        r14_1 = &r14_1[1]
    while (i u< 3)
    
    r14 = var_210

float var_240

if ((r9.b & 0x38) != 0)
    zmm3_3 = arg5[0x12].d
    zmm8_3 = *(arg5 + 0x11c)
    zmm0_3 = var_288_3
    zmm4_3 = *(arg5 + 0x124)
    zmm2_3 = var_278
    zmm5_3 = var_284_3
    zmm6_3 = *(arg5 + 0x128)
    zmm2_3[0] = zmm2_3[0] * zmm8_3[0]
    zmm0_3[0] = zmm0_3[0] * zmm3_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
    zmm2_3[0] = zmm2_3[0] + zmm0_3[0]
    float var_1cc_1 = zmm3_3[0]
    float var_25c_1 = zmm8_3[0]
    zmm7_3[0] = zmm7_3[0] * zmm6_3[0]
    float var_1c8_1 = zmm4_3[0]
    zmm2_3[0] = zmm2_3[0] + zmm5_3[0]
    zmm2_3[0] = zmm2_3[0] + zmm7_3[0]
    
    if (not(zmm2_3[0] > 0f))
        zmm3_3 ^= zmm9_3
        zmm4_3 ^= zmm9_3
        zmm8_3 ^= zmm9_3
        var_1cc_1 = zmm3_3[0]
        var_1c8_1 = zmm4_3[0]
        zmm6_3 ^= zmm9_3
        var_25c_1 = zmm8_3[0]
    
    zmm3_3 ^= zmm9_3
    zmm2_3 = zmm8_3 ^ zmm9_3
    zmm4_3 ^= zmm9_3
    zmm7_3[0] = zmm7_3[0] * zmm2_3[0]
    zmm8_3 = zmm6_3
    zmm8_3[0] = zmm8_3[0] * var_278
    zmm5_3[0] = zmm5_3[0] * zmm3_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm2_3[0]
    zmm8_3[0] = zmm8_3[0] + zmm7_3[0]
    zmm0_3 = var_288_3
    zmm0_3[0] = zmm0_3[0] * zmm4_3[0]
    float var_1b0_1 = zmm5_3[0]
    zmm8_3[0] = zmm8_3[0] + zmm5_3[0]
    zmm6_3[0] = zmm6_3[0] * var_288_3
    zmm8_3[0] = zmm8_3[0] - zmm0_3[0]
    zmm7_3[0] = zmm7_3[0] * zmm3_3[0]
    zmm6_3[0] = zmm6_3[0] + zmm7_3[0]
    zmm0_3 = zmm6_3[0]
    zmm1_3 = var_278
    zmm1_3[0] = zmm1_3[0] * zmm4_3[0]
    zmm0_3[0] = zmm0_3[0] + zmm1_3[0]
    zmm6_3[0] = zmm6_3[0] * var_284_3
    float var_264_2 = zmm0_3[0]
    zmm7_3[0] = zmm7_3[0] * zmm4_3[0]
    zmm6_3[0] = zmm6_3[0] + zmm7_3[0]
    zmm0_3 = zmm6_3[0]
    zmm1_3 = var_288_3
    zmm1_3[0] = zmm1_3[0] * zmm2_3[0]
    zmm0_3[0] = zmm0_3[0] + zmm1_3[0]
    zmm1_3 = var_278
    float var_270_2 = zmm0_3[0]
    zmm14 = var_270_2
    zmm1_3[0] = zmm1_3[0] * zmm3_3[0]
    var_240 = zmm1_3[0]
    zmm14[0] = zmm14[0] - zmm1_3[0]
    zmm6_3[0] = zmm6_3[0] * zmm7_3[0]
    float var_258_1 = zmm14[0]
    zmm14 = var_24c_1
    float var_274_1 = zmm6_3[0]
    zmm0_3 = zmm1_3
    zmm1_3 = var_288_3
    zmm0_3[0] = zmm0_3[0] * zmm2_3[0]
    zmm2_3 = var_274_1
    zmm1_3[0] = zmm1_3[0] * zmm3_3[0]
    zmm2_3[0] = zmm2_3[0] - zmm0_3[0]
    zmm0_3 = var_284_3
    zmm0_3[0] = zmm0_3[0] * zmm4_3[0]
    zmm2_3[0] = zmm2_3[0] - zmm1_3[0]
    zmm2_3[0] = zmm2_3[0] - zmm0_3[0]
    float var_274_2 = zmm2_3[0]
    int64_t* r8_5
    
    if ((r9.b & 0x20) == 0)
        if ((r9.b & 0x10) != 0)
            zmm1_3 = *(arg5 + 0x144)
            int64_t* r8_6 = r14
            zmm0_3 = var_254
            r14 = &r14[0xa]
            var_210 = r14
            *(r8_6 + 0x4e) = 0
            *r8_6 = 0
            r8_6[1].d = 0
            *(r8_6 + 0x14) = zmm0_3[0]
            r8_6[2].d = zmm14[0]
            r8_6[3].d = zmm11_1[0]
            r8_6[4] = 0
            r8_6[5].d = 0
            *(r8_6 + 0x34) = zmm0_3[0]
            zmm8_3[0] = zmm8_3[0] * -2f
            r8_6[6].d = zmm14[0]
            r8_6[7].d = zmm11_1[0]
            int16_t rdx_9 = *(r8_6 + 0x4c)
            *(r8_6 + 0xc) = zmm8_3[0]
            rdx_9 |= 0x21
            *(r8_6 + 0x1c) = zmm1_3[0]
            int16_t rcx_10 = rdx_9 | 2
            
            if (((*(arg5 + 0x108)).b & 1) == 0)
                rcx_10 = rdx_9
            
            *(r8_6 + 0x4c) = rcx_10
            r8_6[8].d = *(arg5 + 0xfc)
            *(r8_6 + 0x44) = arg5[0x10].d
            *(r8_6 + 0x2c) = (*(arg5 + 0x104) ^ zmm9_3)[0]
            *(r8_6 + 0x3c) = *(arg5 + 0x104)
        
        if ((r9.b & 8) != 0)
            zmm8_3[0] = zmm8_3[0] + zmm8_3[0]
            zmm5_3[0] = zmm5_3[0] - var_264_2
            
            if ((r12.b & 0x10) == 0)
                zmm2_3 = *(arg5 + 0x148)
                int64_t* r8_7 = r14
                zmm0_3 = var_244_1
                r14 = &r14[0xa]
                zmm1_3 = var_1bc
                zmm3_3 = var_1b8
                *(r8_7 + 0x4e) = 0
                *r8_7 = 0
                r8_7[1].d = 0
                *(r8_7 + 0x14) = zmm1_3[0]
                r8_7[2].d = zmm0_3[0]
                r8_7[3].d = zmm3_3[0]
                r8_7[4] = 0
                r8_7[5].d = 0
                *(r8_7 + 0x34) = zmm1_3[0]
                r8_7[6].d = zmm0_3[0]
                zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
                r8_7[7].d = zmm3_3[0]
                zmm8_3[0] = zmm8_3[0] * var_258_1
                int16_t rdx_10 = *(r8_7 + 0x4c)
                *(r8_7 + 0x1c) = zmm2_3[0]
                rdx_10 |= 0x21
                zmm5_3[0] = zmm5_3[0] * var_274_2
                int16_t rcx_11 = rdx_10 | 2
                var_210 = r14
                zmm2_3 = var_274_2
                zmm5_3[0] = zmm5_3[0] + zmm8_3[0]
                *(r8_7 + 0xc) = zmm5_3[0]
                
                if (((*(arg5 + 0xf8)).b & 1) == 0)
                    rcx_11 = rdx_10
                
                *(r8_7 + 0x4c) = rcx_11
                r8_7[8].d = *(arg5 + 0xec)
                *(r8_7 + 0x44) = arg5[0xf].d
                *(r8_7 + 0x2c) = (*(arg5 + 0xf4) ^ zmm9_3)[0]
                *(r8_7 + 0x3c) = *(arg5 + 0xf4)
            
            if ((r12.b & 0x20) == 0)
                zmm0_3 = *(arg5 + 0x14c)
                r8_5 = r14
                zmm1_3 = var_250_2
                r14 = &r14[0xa]
                zmm3_3 = var_26c_2
                zmm4_3 = var_1b4
                *(r8_5 + 0x4e) = 0
                *r8_5 = 0
                r8_5[1].d = 0
                r8_5[2].d = zmm1_3[0]
                *(r8_5 + 0x14) = zmm3_3[0]
                r8_5[3].d = zmm4_3[0]
                r8_5[4] = 0
                r8_5[5].d = 0
                r8_5[6].d = zmm1_3[0]
                zmm1_3 = var_240
                zmm1_3[0] = zmm1_3[0] - var_270_2
                *(r8_5 + 0x34) = zmm3_3[0]
                r8_5[7].d = zmm4_3[0]
                int16_t rdx_11 = *(r8_5 + 0x4c)
                *(r8_5 + 0x1c) = zmm0_3[0]
                rdx_11 |= 0x21
                zmm1_3[0] = zmm1_3[0] + zmm1_3[0]
                zmm8_3[0] = zmm8_3[0] * zmm5_3[0]
                var_210 = r14
                int16_t rcx_12 = rdx_11 | 2
                zmm1_3[0] = zmm1_3[0] * zmm2_3[0]
                zmm1_3[0] = zmm1_3[0] + zmm8_3[0]
                *(r8_5 + 0xc) = zmm1_3[0]
                
                if (((*(arg5 + 0xf8)).b & 1) == 0)
                    rcx_12 = rdx_11
                
                *(r8_5 + 0x4c) = rcx_12
                r8_5[8].d = *(arg5 + 0xec)
                *(r8_5 + 0x44) = arg5[0xf].d
                *(r8_5 + 0x2c) = (*(arg5 + 0xf4) ^ zmm9_3)[0]
                *(r8_5 + 0x3c) = *(arg5 + 0xf4)
    else
        bool cond:0_1 = 0f f== *(arg5 + 0x10c)
        zmm5_3 = *(arg5 + 0x144)
        zmm4_3 = *(arg5 + 0x14c)
        zmm5_3[0] = zmm5_3[0] + zmm5_3[0]
        zmm14 = *(arg5 + 0x148)
        zmm4_3[0] = zmm4_3[0] + zmm4_3[0]
        zmm0_3 = var_268
        zmm14[0] = zmm14[0] + zmm14[0]
        zmm3_3 = zmm0_3
        zmm3_3[0] = zmm3_3[0] * zmm0_3[0]
        zmm2_3 = zmm5_3
        zmm4_3[0] = zmm4_3[0] * var_27c
        zmm14[0] = zmm14[0] * var_280
        zmm3_3[0] = zmm3_3[0] - 0.5f
        zmm2_3[0] = zmm2_3[0] * zmm13[0]
        zmm2_3[0] = zmm2_3[0] + zmm14[0]
        zmm14[0] = zmm14[0] * var_27c
        zmm2_3[0] = zmm2_3[0] + zmm4_3[0]
        zmm4_3[0] = zmm4_3[0] * var_280
        zmm4_3[0] = zmm4_3[0] - zmm14[0]
        zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
        zmm4_3[0] = zmm4_3[0] * var_268
        zmm4_3[0] = zmm4_3[0] + zmm3_3[0]
        zmm0_3 = zmm4_3[0]
        zmm2_3[0] = zmm2_3[0] * zmm13[0]
        zmm0_3[0] = zmm0_3[0] + zmm2_3[0]
        zmm1_3 = zmm5_3
        zmm1_3[0] = zmm1_3[0] * var_27c
        zmm5_3[0] = zmm5_3[0] * var_280
        float var_270_4 = (zmm0_3 ^ zmm9_3)[0]
        zmm4_3[0] = zmm4_3[0] * zmm13[0]
        zmm1_3[0] = zmm1_3[0] - zmm4_3[0]
        zmm3_3[0] = zmm3_3[0] * zmm14[0]
        zmm14[0] = zmm14[0] * zmm13[0]
        zmm1_3[0] = zmm1_3[0] * var_268
        zmm14[0] = zmm14[0] - zmm5_3[0]
        zmm3_3[0] = zmm3_3[0] * zmm4_3[0]
        zmm5_3 = var_268
        zmm1_3[0] = zmm1_3[0] + zmm3_3[0]
        zmm14[0] = zmm14[0] * zmm5_3[0]
        zmm0_3 = zmm1_3[0]
        zmm2_3[0] = zmm2_3[0] * var_280
        zmm14[0] = zmm14[0] + zmm3_3[0]
        zmm2_3[0] = zmm2_3[0] * var_27c
        zmm0_3[0] = zmm0_3[0] + zmm2_3[0]
        zmm14[0] = zmm14[0] + zmm2_3[0]
        float var_274_4 = (zmm0_3 ^ zmm9_3)[0]
        zmm0_3 = data_142d4cc00
        zmm14 ^= zmm9_3
        var_108.o = zmm0_3
        var_f8.o = zmm0_3
        int32_t var_e8_1 = 0x3f800000
        
        if (cond:0_1)
            zmm6_3 = 0x3f800000
        else
            zmm4_3 = var_1cc_1
            zmm6_3[0] = zmm6_3[0] * zmm13[0]
            zmm0_3 = zmm5_3
            zmm0_3[0] = zmm0_3[0] * var_25c_1
            zmm5_3 = var_1c8_1
            zmm6_3[0] = zmm6_3[0] * var_280
            zmm5_3[0] = zmm5_3[0] * var_280
            zmm6_3[0] = zmm6_3[0] + zmm0_3[0]
            zmm6_3[0] = zmm6_3[0] + zmm5_3[0]
            zmm1_3 = var_27c
            zmm4_3[0] = zmm4_3[0] * zmm1_3[0]
            zmm1_3[0] = zmm1_3[0] * var_25c_1
            zmm6_3[0] = zmm6_3[0] - zmm4_3[0]
            zmm4_3[0] = zmm4_3[0] * var_268
            zmm6_3[0] = zmm6_3[0] + zmm4_3[0]
            var_1f0 = zmm6_3[0]
            zmm6_3[0] = zmm6_3[0] * var_27c
            zmm6_3[0] = zmm6_3[0] * var_268
            zmm5_3[0] = zmm5_3[0] * zmm13[0]
            zmm6_3[0] = zmm6_3[0] + zmm1_3[0]
            zmm4_3[0] = zmm4_3[0] * var_280
            zmm4_3[0] = zmm4_3[0] * zmm13[0]
            zmm6_3[0] = zmm6_3[0] - zmm5_3[0]
            zmm5_3[0] = zmm5_3[0] * var_268
            zmm5_3[0] = zmm5_3[0] * var_27c
            zmm6_3[0] = zmm6_3[0] + zmm5_3[0]
            float var_1ec_2 = zmm6_3[0]
            zmm0_3 = var_280
            zmm0_3[0] = zmm0_3[0] * var_25c_1
            zmm6_3[0] = zmm6_3[0] + zmm4_3[0]
            zmm6_3[0] = zmm6_3[0] - zmm0_3[0]
            zmm13[0] = zmm13[0] * var_25c_1
            zmm6_3[0] = zmm6_3[0] - zmm13[0]
            float var_1e8_2 = zmm6_3[0]
            zmm6_3[0] = zmm6_3[0] - zmm4_3[0]
            zmm6_3[0] = zmm6_3[0] - zmm5_3[0]
            float var_1e4_1 = zmm6_3[0]
            zmm7_3, zmm8_3, zmm9_3, zmm10_2, zmm11_1, zmm12, zmm14, zmm15 =
                sub_142256ec0(&var_108, &var_1f0, &var_190)
            zmm6_3 = var_e8_1
        
        zmm2_3 = var_108
        r8_5 = &r14[0x14]
        zmm0_3 = var_104
        *(r14 + 0x4e) = 0x102
        *r14 = 0
        r14[1].d = 0
        r14[2].d = zmm2_3[0]
        *(r14 + 0x14) = zmm0_3[0]
        zmm1_3 = var_100
        r14[3].d = zmm1_3[0]
        r14[4] = 0
        r14[5].d = 0
        r14[6].d = zmm2_3[0]
        *(r14 + 0x34) = zmm0_3[0]
        r14[7].d = zmm1_3[0]
        zmm4_3 = var_270_4
        int16_t rdx_6 = *(r14 + 0x4c) | 0x21
        zmm5_3 = var_274_4
        zmm3_3 = var_1b0_1
        int16_t rcx_7 = rdx_6 | 2
        zmm3_3[0] = zmm3_3[0] - var_264_2
        *(r14 + 0xc) = (zmm8_3 ^ zmm9_3)[0]
        zmm0_3[0] = zmm0_3[0] * zmm5_3[0]
        zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
        zmm1_3[0] = zmm1_3[0] * zmm14[0]
        zmm2_3[0] = zmm2_3[0] + zmm0_3[0]
        zmm2_3[0] = zmm2_3[0] + zmm1_3[0]
        zmm1_3 = var_f4
        *(r14 + 0x1c) = zmm2_3[0]
        zmm2_3 = var_fc
        
        if (((*(arg5 + 0x118)).b & 1) == 0)
            rcx_7 = rdx_6
        
        *(r14 + 0x4c) = rcx_7
        r14[8].d = *(arg5 + 0x10c)
        *(r14 + 0x44) = arg5[0x11].d
        *(r14 + 0x2c) = (*(arg5 + 0x114) ^ zmm9_3)[0]
        zmm0_3 = var_f8
        *(r14 + 0x3c) = *(arg5 + 0x114)
        *(r14 + 0x9e) = 0x102
        r14[0xa] = 0
        r14[0xb].d = 0
        r14[0xc].d = zmm2_3[0]
        *(r14 + 0x64) = zmm0_3[0]
        r14[0xd].d = zmm1_3[0]
        r14[0xe] = 0
        r14[0xf].d = 0
        r14[0x10].d = zmm2_3[0]
        *(r14 + 0x84) = zmm0_3[0]
        r14[0x11].d = zmm1_3[0]
        *(r14 + 0x5c) = zmm3_3[0]
        zmm0_3[0] = zmm0_3[0] * zmm5_3[0]
        zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
        zmm1_3[0] = zmm1_3[0] * zmm14[0]
        zmm2_3[0] = zmm2_3[0] + zmm0_3[0]
        zmm2_3[0] = zmm2_3[0] + zmm1_3[0]
        *(r14 + 0x6c) = zmm2_3[0]
        int16_t rdx_7 = *(r14 + 0x9c) | 0x21
        int16_t rcx_8 = rdx_7 | 2
        
        if (((*(arg5 + 0x118)).b & 1) == 0)
            rcx_8 = rdx_7
        
        *(r14 + 0x9c) = rcx_8
        r14[0x12].d = *(arg5 + 0x10c)
        *(r14 + 0x94) = arg5[0x11].d
        *(r14 + 0x7c) = (*(arg5 + 0x114) ^ zmm9_3)[0]
        zmm0_3 = var_ec
        zmm1_3 = var_f0
        *(r14 + 0x8c) = *(arg5 + 0x114)
        *(r8_5 + 0x4e) = 0x102
        r14 = &r8_5[0xa]
        *r8_5 = 0
        r8_5[1].d = 0
        r8_5[2].d = zmm1_3[0]
        *(r8_5 + 0x14) = zmm0_3[0]
        r8_5[3].d = zmm6_3[0]
        r8_5[4] = 0
        r8_5[5].d = 0
        r8_5[6].d = zmm1_3[0]
        *(r8_5 + 0x34) = zmm0_3[0]
        r8_5[7].d = zmm6_3[0]
        *(r8_5 + 0xc) = (var_258_1 ^ zmm9_3)[0]
        zmm0_3[0] = zmm0_3[0] * zmm5_3[0]
        var_210 = r14
        zmm1_3[0] = zmm1_3[0] * zmm4_3[0]
        zmm6_3[0] = zmm6_3[0] * zmm14[0]
        zmm14 = var_24c_1
        zmm1_3[0] = zmm1_3[0] + zmm0_3[0]
        zmm1_3[0] = zmm1_3[0] + zmm6_3[0]
        *(r8_5 + 0x1c) = zmm1_3[0]
        int16_t rdx_8 = *(r8_5 + 0x4c) | 0x21
        int16_t rcx_9 = rdx_8 | 2
        
        if (((*(arg5 + 0x118)).b & 1) == 0)
            rcx_9 = rdx_8
        
        *(r8_5 + 0x4c) = rcx_9
        r8_5[8].d = *(arg5 + 0x10c)
        *(r8_5 + 0x44) = arg5[0x11].d
        *(r8_5 + 0x2c) = (*(arg5 + 0x114) ^ zmm9_3)[0]
        *(r8_5 + 0x3c) = *(arg5 + 0x114)
    zmm8_3 = 0x3f800000

if ((r13.b & 0x38) != 0)
    zmm5_3 = var_278
    
    if (zmm5_3[0] == zmm10_2[0])
        zmm6_3 = zmm10_2
        zmm3_3 = zmm8_3
    else
        zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
        zmm6_3 = zmm8_3
        zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
        zmm5_3[0] = zmm5_3[0] + zmm7_3[0]
        float temp0_1[0x4] = _mm_sqrt_ss(0, zmm5_3[0])
        zmm6_3[0] = zmm6_3[0] / temp0_1[0]
        zmm3_3 = zmm6_3
        zmm6_3[0] = zmm6_3[0] * zmm5_3[0]
        zmm3_3[0] = zmm3_3[0] * zmm7_3[0]
    
    zmm4_3 = var_284_3
    zmm7_3[0] = zmm7_3[0] * zmm3_3[0]
    zmm1_3 = zmm6_3 ^ zmm9_3
    float var_258_2 = zmm3_3[0]
    zmm7_3[0] = zmm7_3[0] * zmm1_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm1_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm3_3[0]
    float var_278_1 = zmm6_3[0]
    zmm7_3[0] = zmm7_3[0] - zmm5_3[0]
    zmm5_3[0] = zmm5_3[0] + zmm7_3[0]
    zmm0_3 = var_288_3
    zmm0_3[0] = zmm0_3[0] * zmm3_3[0]
    float var_19c_1 = zmm7_3[0]
    zmm14 = zmm0_3[0]
    zmm4_3[0] = zmm4_3[0] * zmm1_3[0]
    zmm4_3[0] = zmm4_3[0] * zmm3_3[0]
    var_1a8 = zmm5_3[0]
    zmm14[0] = zmm14[0] + zmm4_3[0]
    zmm0_3 = var_288_3
    zmm0_3[0] = zmm0_3[0] * zmm1_3[0]
    zmm1_3 = zmm14
    zmm14 = var_24c_1
    float var_1a4_1 = zmm1_3[0]
    zmm4_3[0] = zmm4_3[0] - zmm0_3[0]
    float var_284_4 = zmm4_3[0]
    float var_1a0_1 = zmm4_3[0]
    int32_t var_2a0
    
    if ((r13.b & 0x30) != 0x30)
        zmm5_3 = *(arg5 + 0x158)
        zmm13 = *(arg5 + 0x164)
        var_240 = zmm5_3[0]
        
        if ((r13.b & 0x10) == 0)
            zmm6_3 = var_254
        else if ((r12.b & 0x20) == 0)
            zmm3_3 = var_238
            zmm2_3 = var_23c
            zmm6_3 = var_254
            zmm3_3[0] = zmm3_3[0] * zmm6_3[0]
            zmm12[0] = zmm12[0] * zmm14[0]
            var_2a0.q = &var_228
            zmm11_1[0] = zmm11_1[0] * zmm2_3[0]
            zmm12[0] = zmm12[0] + zmm3_3[0]
            float var_2a8_3 = zmm5_3[0]
            zmm2_3[0] = zmm2_3[0] * zmm14[0]
            zmm2_3[0] = zmm2_3[0] * zmm6_3[0]
            zmm12[0] = zmm12[0] + zmm11_1[0]
            zmm11_1[0] = zmm11_1[0] * zmm3_3[0]
            zmm11_1[0] = zmm11_1[0] - zmm2_3[0]
            zmm4_3 = zmm12 ^ zmm9_3
            zmm11_1[0] = zmm11_1[0] * zmm12[0]
            var_228 = zmm11_1[0]
            zmm2_3[0] = zmm2_3[0] - zmm11_1[0]
            zmm12[0] = zmm12[0] * zmm6_3[0]
            zmm0_3 = zmm3_3
            zmm3_3 = arg5[0x15].d
            zmm0_3[0] = zmm0_3[0] * zmm14[0]
            float var_224_1 = zmm2_3[0]
            zmm12[0] = zmm12[0] - zmm0_3[0]
            zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
            float var_220_1 = zmm12[0]
            zmm8_3[0] = zmm8_3[0] - zmm4_3[0]
            zmm8_3[0] = zmm8_3[0] + zmm8_3[0]
            zmm4_3[0] = zmm4_3[0] / zmm8_3[0]
            zmm6_3, zmm7_3, zmm8_3 = sub_1422577a0(&var_218, zmm4_3, zmm3_3 ^ zmm9_3, zmm3_3, 
                var_2a8_3, var_2a0, &arg5[0xa])
            zmm4_3 = var_284_4
            r14 = var_210
        else
            zmm3_3 = *(arg5 + 0x15c)
            zmm7_3[0] = zmm7_3[0] + zmm8_3[0]
            var_2a0.q = &var_228
            float var_2a8_1 = zmm13[0]
            zmm1_3[0] = zmm1_3[0] / zmm7_3[0]
            zmm7_3, zmm8_3 = sub_142257ff0(&var_218, zmm1_3, zmm3_3 ^ zmm9_3, zmm3_3, var_2a8_1, 
                var_2a0, &arg5[0xa])
            zmm4_3 = var_284_4
            r14 = var_210
            zmm6_3 = var_254
        
        if ((r13.b & 0x20) != 0)
            if ((r12.b & 0x10) == 0)
                zmm3_3 = var_230
                zmm5_3 = var_234
                zmm3_3[0] = zmm3_3[0] * zmm6_3[0]
                var_2a0.q = &var_1e0
                zmm15[0] = zmm15[0] * zmm14[0]
                zmm11_1[0] = zmm11_1[0] * zmm5_3[0]
                zmm15[0] = zmm15[0] + zmm3_3[0]
                zmm11_1[0] = zmm11_1[0] * zmm15[0]
                zmm11_1[0] = zmm11_1[0] * zmm3_3[0]
                zmm15[0] = zmm15[0] + zmm11_1[0]
                zmm5_3[0] = zmm5_3[0] * zmm6_3[0]
                zmm5_3[0] = zmm5_3[0] - zmm11_1[0]
                zmm5_3[0] = zmm5_3[0] * zmm14[0]
                zmm11_1[0] = zmm11_1[0] - zmm5_3[0]
                var_1e0 = zmm5_3[0]
                zmm1_3 = zmm3_3
                zmm3_3 = *(arg5 + 0x154)
                zmm1_3[0] = zmm1_3[0] * zmm14[0]
                zmm15[0] = zmm15[0] * zmm6_3[0]
                float var_1dc_2 = zmm11_1[0]
                zmm1_3[0] = zmm1_3[0] - zmm15[0]
                zmm15[0] = zmm15[0] * zmm15[0]
                float var_1d8_2 = zmm1_3[0]
                zmm8_3[0] = zmm8_3[0] - zmm15[0]
                float var_2a8_4 = var_240[0]
                zmm8_3[0] = zmm8_3[0] + zmm8_3[0]
                zmm15[0] = zmm15[0] / zmm8_3[0]
                zmm8_3 = sub_1422577a0(&var_218, zmm15, zmm3_3 ^ zmm9_3, zmm3_3, var_2a8_4, 
                    var_2a0, &arg5[0xa])
            else
                zmm3_3 = arg5[0x16].d
                zmm7_3[0] = zmm7_3[0] + zmm8_3[0]
                var_2a0.q = &var_1e0
                float var_2a8_2 = zmm13[0]
                zmm4_3[0] = zmm4_3[0] / zmm7_3[0]
                zmm8_3 = sub_142257ff0(&var_218, zmm4_3, zmm3_3 ^ zmm9_3, zmm3_3, var_2a8_2, 
                    var_2a0, &arg5[0xa])
            
            r14 = var_210
        
        zmm6_3 = var_278_1
    else
        zmm1_3 = *(arg5 + 0x15c)
        var_1f0 = arg5[0x16].d[0]
        float var_1e8_3 = (*(arg5 + 0x164))[0]
        float var_1ec_3 = zmm1_3[0]
        char rax_36
        rax_36, zmm6_3, zmm8_3, zmm9_3, zmm10_2, zmm11_1, zmm12, zmm13, zmm14, zmm15 =
            sub_142257370(&var_1f0, &var_1a8, &var_228, &var_240)
        
        if (rax_36 != 0)
            int64_t* rcx_14 = r14
            zmm2_3 = var_268
            r14 = &r14[0xa]
            zmm8_3 = var_280
            zmm5_3 = zmm2_3
            zmm7_3 = var_228
            zmm3_3 = var_224
            zmm6_3 = var_220
            zmm6_3[0] = zmm6_3[0] * 2f
            *(rcx_14 + 0x4e) = 0
            zmm3_3[0] = zmm3_3[0] * 2f
            *rcx_14 = 0
            zmm7_3[0] = zmm7_3[0] * 2f
            rcx_14[1].d = 0
            zmm5_3[0] = zmm5_3[0] * zmm2_3[0]
            var_210 = r14
            zmm13[0] = zmm13[0] * zmm7_3[0]
            zmm5_3[0] = zmm5_3[0] - 0.5f
            zmm8_3[0] = zmm8_3[0] * zmm6_3[0]
            zmm8_3[0] = zmm8_3[0] * zmm3_3[0]
            zmm8_3[0] = zmm8_3[0] + zmm13[0]
            zmm0_3 = var_27c
            zmm0_3[0] = zmm0_3[0] * zmm3_3[0]
            zmm0_3[0] = zmm0_3[0] * zmm6_3[0]
            zmm8_3[0] = zmm8_3[0] - zmm0_3[0]
            zmm5_3[0] = zmm5_3[0] * zmm7_3[0]
            zmm8_3[0] = zmm8_3[0] + zmm0_3[0]
            zmm8_3[0] = zmm8_3[0] * zmm2_3[0]
            zmm2_3 = var_27c
            zmm2_3[0] = zmm2_3[0] * zmm7_3[0]
            zmm8_3[0] = zmm8_3[0] + zmm5_3[0]
            zmm13[0] = zmm13[0] * zmm8_3[0]
            zmm13[0] = zmm13[0] * zmm3_3[0]
            zmm13[0] = zmm13[0] * zmm6_3[0]
            zmm8_3[0] = zmm8_3[0] + zmm13[0]
            zmm2_3[0] = zmm2_3[0] - zmm13[0]
            zmm5_3[0] = zmm5_3[0] * zmm3_3[0]
            rcx_14[2].d = zmm8_3[0]
            zmm5_3[0] = zmm5_3[0] * zmm6_3[0]
            zmm2_3[0] = zmm2_3[0] * var_268
            zmm2_3[0] = zmm2_3[0] + zmm5_3[0]
            zmm0_3 = var_280
            zmm1_3 = zmm0_3
            zmm0_3[0] = zmm0_3[0] * zmm7_3[0]
            zmm1_3[0] = zmm1_3[0] * zmm8_3[0]
            zmm13[0] = zmm13[0] - zmm0_3[0]
            zmm0_3 = var_27c
            zmm0_3[0] = zmm0_3[0] * zmm8_3[0]
            zmm2_3[0] = zmm2_3[0] + zmm1_3[0]
            zmm1_3 = var_240
            zmm13[0] = zmm13[0] * var_268
            *(rcx_14 + 0x14) = zmm2_3[0]
            zmm13[0] = zmm13[0] + zmm5_3[0]
            zmm13[0] = zmm13[0] + zmm0_3[0]
            rcx_14[3].d = zmm13[0]
            rcx_14[4] = 0
            rcx_14[5].d = 0
            rcx_14[6].d = zmm8_3[0]
            *(rcx_14 + 0x34) = zmm2_3[0]
            rcx_14[7].d = zmm13[0]
            int16_t rdx_13 = *(rcx_14 + 0x4c)
            *(rcx_14 + 0xc) = zmm1_3[0]
            zmm0_3 = *(arg5 + 0xa8)
            int16_t r8_9 = rdx_13 | 0x10
            
            if (zmm10_2[0] f< *(arg5 + 0xac) || zmm0_3[0] > zmm10_2[0])
                rcx_14[8].d = zmm0_3[0]
                rdx_13 |= 0x11
                *(rcx_14 + 0x44) = *(arg5 + 0xac)
            else
                rdx_13 |= 0x18
                *(rcx_14 + 0x4e) = 0x401
                bool cond:2_1 = zmm1_3[0] <= zmm10_2[0]
                rcx_14[8].d = arg5[0xa].d
                *(rcx_14 + 0x44) = *(arg5 + 0xa4)
                
                if (cond:2_1)
                    rdx_13 = r8_9
                
                if (not(zmm10_2[0] f>= arg5[0xa].d))
                    rdx_13 |= 4
            
            zmm8_3 = 0x3f800000
            *(rcx_14 + 0x4c) = rdx_13
            *(rcx_14 + 0x2c) = 0
            zmm6_3 = var_278_1
    
    if ((r13.b & 8) != 0)
        zmm0_3 = var_258_2
        zmm3_3 = *(arg5 + 0x16c)
        zmm0_3[0] = zmm0_3[0] + zmm8_3[0]
        zmm2_3 = *(arg5 + 0x168)
        var_2a0.q = &var_130
        zmm6_3[0] = zmm6_3[0] / zmm0_3[0]
        zmm8_3 =
            sub_142257ff0(&var_218, zmm6_3, zmm2_3, zmm3_3, arg5[0x17].d[0], var_2a0, arg5 + 0x84)
        r14 = var_210

if ((r13.b & 7) != 0)
    zmm5_3 = zmm10_2
    zmm6_3 = zmm10_2
    zmm7_3 = zmm10_2
    
    if ((r13.b & 1) != 0)
        zmm0_3 = var_248_1
        zmm5_3 = var_1c4
        zmm6_3 = var_1c0
        zmm7_3 = var_198
        zmm5_3[0] = zmm5_3[0] * zmm0_3[0]
        zmm6_3[0] = zmm6_3[0] * zmm0_3[0]
        zmm7_3[0] = zmm7_3[0] * zmm0_3[0]
    
    if ((r13.b & 2) != 0)
        zmm2_3 = var_1d0
        zmm1_3 = var_230
        zmm15[0] = zmm15[0] * zmm2_3[0]
        zmm1_3[0] = zmm1_3[0] * zmm2_3[0]
        zmm5_3[0] = zmm5_3[0] + zmm15[0]
        zmm0_3 = var_234
        zmm0_3[0] = zmm0_3[0] * zmm2_3[0]
        zmm6_3[0] = zmm6_3[0] + zmm1_3[0]
        zmm7_3[0] = zmm7_3[0] + zmm0_3[0]
    
    if ((r13.b & 4) != 0)
        zmm2_3 = var_260_2
        zmm1_3 = var_238
        zmm12[0] = zmm12[0] * zmm2_3[0]
        zmm1_3[0] = zmm1_3[0] * zmm2_3[0]
        zmm5_3[0] = zmm5_3[0] + zmm12[0]
        zmm0_3 = var_23c
        zmm0_3[0] = zmm0_3[0] * zmm2_3[0]
        zmm6_3[0] = zmm6_3[0] + zmm1_3[0]
        zmm7_3[0] = zmm7_3[0] + zmm0_3[0]
    
    zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm5_3[0]
    zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
    zmm6_3[0] = zmm6_3[0] + zmm5_3[0]
    zmm6_3[0] = zmm6_3[0] + zmm7_3[0]
    float temp0_2[0x4] = _mm_sqrt_ss(0, zmm6_3[0])
    
    if (not(temp0_2[0] f<= *(arg5 + 0x174)))
        bool cond:1_1 = zmm10_2[0] f< *(arg5 + 0x78)
        zmm8_3[0] = zmm8_3[0] / temp0_2[0]
        zmm5_3[0] = zmm5_3[0] * zmm8_3[0]
        zmm6_3[0] = zmm6_3[0] * zmm8_3[0]
        zmm7_3[0] = zmm7_3[0] * zmm8_3[0]
        zmm8_3 = arg5[8].d
        
        if (cond:1_1 || zmm10_2[0] f< *(arg5 + 0x74))
            zmm0_3 = zmm10_2
        else
            zmm0_3 = *(arg5 + 0x7c)
        
        zmm0_3[0] = zmm0_3[0] + temp0_2[0]
        
        if (not(zmm0_3[0] <= zmm8_3[0]))
            zmm2_3 = var_204
            zmm8_3[0] = zmm8_3[0] - temp0_2[0]
            zmm3_3 = var_200
            int64_t* rcx_20 = r14
            zmm1_3 = var_208
            zmm3_3[0] = zmm3_3[0] * zmm6_3[0]
            r14 = &r14[0xa]
            zmm2_3[0] = zmm2_3[0] * zmm7_3[0]
            *(rcx_20 + 0x4e) = 0
            *rcx_20 = zmm5_3[0]
            *(rcx_20 + 4) = zmm6_3[0]
            rcx_20[1].d = zmm7_3[0]
            zmm2_3[0] = zmm2_3[0] - zmm3_3[0]
            zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
            var_210 = r14
            zmm1_3[0] = zmm1_3[0] * zmm7_3[0]
            rcx_20[2].d = zmm2_3[0]
            zmm1_3[0] = zmm1_3[0] * zmm6_3[0]
            zmm3_3[0] = zmm3_3[0] - zmm1_3[0]
            zmm2_3[0] = zmm2_3[0] * zmm5_3[0]
            zmm1_3[0] = zmm1_3[0] - zmm2_3[0]
            zmm2_3 = var_1f8
            *(rcx_20 + 0x14) = zmm3_3[0]
            zmm3_3 = var_1f4
            zmm2_3[0] = zmm2_3[0] * zmm7_3[0]
            rcx_20[3].d = zmm1_3[0]
            zmm1_3 = var_1fc
            rcx_20[4].d = zmm5_3[0]
            *(rcx_20 + 0x24) = zmm6_3[0]
            rcx_20[5].d = zmm7_3[0]
            zmm3_3[0] = zmm3_3[0] * zmm6_3[0]
            zmm3_3[0] = zmm3_3[0] * zmm5_3[0]
            zmm2_3[0] = zmm2_3[0] - zmm3_3[0]
            zmm2_3[0] = zmm2_3[0] * zmm5_3[0]
            zmm1_3[0] = zmm1_3[0] * zmm6_3[0]
            zmm1_3[0] = zmm1_3[0] * zmm7_3[0]
            rcx_20[6].d = zmm2_3[0]
            zmm1_3[0] = zmm1_3[0] - zmm2_3[0]
            zmm3_3[0] = zmm3_3[0] - zmm1_3[0]
            rcx_20[7].d = zmm1_3[0]
            *(rcx_20 + 0x34) = zmm3_3[0]
            int16_t rdx_14 = *(rcx_20 + 0x4c)
            *(rcx_20 + 0xc) = zmm8_3[0]
            int16_t r8_10 = rdx_14 | 0x10
            
            if (zmm10_2[0] f< *(arg5 + 0x78) || zmm10_2[0] f< *(arg5 + 0x74))
                rdx_14 |= 0x11
                rcx_20[8].d = *(arg5 + 0x74)
                *(rcx_20 + 0x44) = *(arg5 + 0x78)
            else
                rdx_14 |= 0x18
                *(rcx_20 + 0x4e) = 0x401
                bool cond:3_1 = zmm8_3[0] <= zmm10_2[0]
                rcx_20[8].d = *(arg5 + 0x6c)
                *(rcx_20 + 0x44) = arg5[7].d
                
                if (cond:3_1)
                    rdx_14 = r8_10
                
                if (not(zmm10_2[0] f>= *(arg5 + 0x6c)))
                    rdx_14 |= 4
            
            *(rcx_20 + 0x4c) = rdx_14
            *(rcx_20 + 0x2c) = 0

int32_t rax_46 = r12 & 0x38

if (rax_46 == 0x10)
    zmm6_3 = var_23c
    zmm4_3 = var_254
    zmm5_3 = var_238
    zmm11_1[0] = zmm11_1[0] * zmm5_3[0]
    var_210 = &r14[0xa]
    zmm11_1[0] = zmm11_1[0] * zmm12[0]
    *(r14 + 0x4e) = 0x400
    *r14 = 0
    r14[1].d = 0
    zmm6_3[0] = zmm6_3[0] * zmm4_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
    zmm6_3[0] = zmm6_3[0] - zmm11_1[0]
    zmm5_3[0] = zmm5_3[0] * zmm14[0]
    zmm11_1[0] = zmm11_1[0] * zmm6_3[0]
    zmm6_3[0] = zmm6_3[0] * zmm14[0]
    r14[2].d = zmm6_3[0]
    zmm11_1[0] = zmm11_1[0] - zmm6_3[0]
    zmm12[0] = zmm12[0] * zmm14[0]
    zmm12[0] = zmm12[0] * zmm4_3[0]
    *(r14 + 0x14) = zmm11_1[0]
    zmm12[0] = zmm12[0] + zmm5_3[0]
    zmm5_3[0] = zmm5_3[0] - zmm12[0]
    zmm12[0] = zmm12[0] + zmm11_1[0]
    r14[3].d = zmm5_3[0]
    r14[4] = 0
    r14[5].d = 0
    r14[6].d = zmm6_3[0]
    *(r14 + 0x34) = zmm11_1[0]
    r14[7].d = zmm5_3[0]
    *(r14 + 0x4c) |= 0x10
    *(r14 + 0xc) = (zmm12 ^ zmm9_3)[0]
    r12 &= 0xffffffef
else if (rax_46 == 0x20)
    zmm6_3 = var_234
    zmm4_3 = var_254
    zmm5_3 = var_230
    zmm11_1[0] = zmm11_1[0] * zmm5_3[0]
    var_210 = &r14[0xa]
    zmm11_1[0] = zmm11_1[0] * zmm15[0]
    *(r14 + 0x4e) = 0x400
    r12 &= 0xffffffdf
    *r14 = 0
    r14[1].d = 0
    zmm6_3[0] = zmm6_3[0] * zmm4_3[0]
    zmm5_3[0] = zmm5_3[0] * zmm4_3[0]
    zmm6_3[0] = zmm6_3[0] - zmm11_1[0]
    zmm5_3[0] = zmm5_3[0] * zmm14[0]
    zmm11_1[0] = zmm11_1[0] * zmm6_3[0]
    zmm6_3[0] = zmm6_3[0] * zmm14[0]
    r14[2].d = zmm6_3[0]
    zmm11_1[0] = zmm11_1[0] - zmm6_3[0]
    zmm15[0] = zmm15[0] * zmm14[0]
    zmm15[0] = zmm15[0] * zmm4_3[0]
    *(r14 + 0x14) = zmm11_1[0]
    zmm15[0] = zmm15[0] + zmm5_3[0]
    zmm5_3[0] = zmm5_3[0] - zmm15[0]
    zmm15[0] = zmm15[0] + zmm11_1[0]
    r14[3].d = zmm5_3[0]
    r14[4] = 0
    r14[5].d = 0
    r14[6].d = zmm6_3[0]
    *(r14 + 0x34) = zmm11_1[0]
    r14[7].d = zmm5_3[0]
    *(r14 + 0x4c) |= 0x10
    *(r14 + 0xc) = (zmm15 ^ zmm9_3)[0]

sub_142257ba0(&var_218, &var_150, &var_190, &var_160, r12 & 7, r12 u>> 3)
int64_t rax_51
int64_t rdx_16
rdx_16:rax_51 = muls.dp.q(0x6666666666666667, var_210 - var_218)
int64_t rdx_17 = rdx_16 s>> 5
__security_check_cookie(rax_1 ^ &var_2c8)
return (rdx_17 u>> 0x3f) + rdx_17
