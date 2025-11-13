// 函数: sub_14280d080
// 地址: 0x14280d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg6
int128_t* r14 = arg5
int32_t* r15 = arg1
*arg4 = *r14
int128_t zmm6 = rdi[3]
int128_t zmm8 = *(r14 + 0x28)
float zmm3 = rdi[1]
zmm8.d = zmm8.d f+ zmm8.d
float zmm2 = *rdi
float zmm4 = rdi[2]
int128_t zmm9 = r14[2].d
int128_t zmm14 = *(r14 + 0x24)
zmm9.d = zmm9.d f+ zmm9.d
int32_t rax = r14[0x15].d
zmm14.d = zmm14.d f+ zmm14.d
int32_t r12 = *(r14 + 0x14c)
int32_t r13 = *(r14 + 0x154)
int128_t zmm15
zmm15.d = zmm8.d f* zmm3
int128_t zmm0
zmm0.d = zmm14.d f* zmm3
int128_t zmm10
zmm10.d = zmm9.d f* zmm4
float zmm5 = zmm9.d * zmm2 f+ zmm0.d
int128_t zmm7
zmm7.d = zmm6.d f* zmm6.d
zmm0.d = zmm14.d f* zmm4
zmm7.d = zmm7.d f- 0.5f
zmm5 = zmm5 + zmm8.d * zmm4
zmm15.d = zmm15.d f- zmm0.d
zmm0.d = zmm7.d f* zmm9.d
zmm15.d = zmm15.d f* zmm6.d
zmm15.d = zmm15.d f+ zmm0.d
zmm9.d = zmm9.d f* zmm3
zmm0.d = zmm8.d f* zmm2
zmm15.d = zmm15.d f+ zmm5 * zmm2
zmm10.d = zmm10.d f- zmm0.d
zmm0 = zmm7
zmm7.d = zmm7.d f* zmm8.d
zmm15.d = zmm15.d f+ rdi[4]
zmm0.d = zmm0.d f* zmm14.d
zmm14.d = zmm14.d f* zmm2
zmm10.d = zmm10.d f* zmm6.d
zmm14.d = zmm14.d f- zmm9.d
int32_t arg_20 = zmm15.d
zmm10.d = zmm10.d f+ zmm0.d
zmm14.d = zmm14.d f* zmm6.d
zmm10.d = zmm10.d f+ zmm5 * zmm3
zmm14.d = zmm14.d f+ zmm7.d
zmm10.d = zmm10.d f+ rdi[5]
zmm14.d = zmm14.d f+ zmm5 * zmm4
int32_t arg_10 = zmm10.d
zmm14.d = zmm14.d f+ rdi[6]
float var_268 = zmm14.d
float var_160
float* rax_1 = sub_1417c7990(rdi, &var_160, &r14[1])
int128_t zmm8_1 = *(r14 + 0x44)
float zmm9_1 = *(r14 + 0x3c)
zmm8_1.d = zmm8_1.d f+ zmm8_1.d
zmm9_1 = zmm9_1 + zmm9_1
int128_t zmm6_1 = arg7[3]
float zmm3_1 = arg7[1]
float zmm2_1 = *arg7
float zmm4_1 = arg7[2]
int128_t zmm12 = *rax_1
int32_t zmm11 = rax_1[1]
int32_t zmm10_1 = rax_1[2]
int128_t zmm13 = rax_1[3]
int32_t var_ec = arg_10.d
int32_t var_e8 = zmm14.d
zmm14 = r14[4].d
zmm14.d = zmm14.d f+ zmm14.d
int32_t var_f0 = zmm15.d
zmm15.d = zmm8_1.d f* zmm3_1
int128_t zmm7_1
zmm7_1.d = zmm6_1.d f* zmm6_1.d
int128_t zmm0_1
zmm0_1.d = zmm14.d f* zmm3_1
zmm7_1.d = zmm7_1.d f- 0.5f
int32_t arg_8 = zmm12.d
float zmm5_1 = zmm9_1 * zmm2_1 f+ zmm0_1.d
int32_t var_100 = zmm12.d
zmm0_1.d = zmm14.d f* zmm4_1
int32_t var_fc = zmm11
zmm5_1 = zmm5_1 + zmm8_1.d * zmm4_1
zmm15.d = zmm15.d f- zmm0_1.d
int32_t var_f8 = zmm10_1
int32_t var_264 = zmm13.d
zmm0_1.d = zmm7_1.d f* zmm9_1
int32_t var_f4 = zmm13.d
zmm15.d = zmm15.d f* zmm6_1.d
zmm15.d = zmm15.d f+ zmm0_1.d
zmm0_1.d = zmm8_1.d f* zmm2_1
zmm15.d = zmm15.d f+ zmm5_1 * zmm2_1
zmm15.d = zmm15.d f+ arg7[4]
float zmm1_1 = zmm9_1 * zmm4_1 f- zmm0_1.d
zmm0_1.d = zmm7_1.d f* zmm14.d
zmm14.d = zmm14.d f* zmm2_1
zmm14.d = zmm14.d f- zmm9_1 * zmm3_1
zmm7_1.d = zmm7_1.d f* zmm8_1.d
zmm14.d = zmm14.d f* zmm6_1.d
arg6.d = zmm1_1 f* zmm6_1.d f+ zmm0_1.d
zmm14.d = zmm14.d f+ zmm7_1.d
zmm0_1.d = arg6.d.d f+ zmm5_1 * zmm3_1
zmm14.d = zmm14.d f+ zmm5_1 * zmm4_1
zmm8_1.d = zmm0_1.d f+ arg7[5]
zmm14.d = zmm14.d f+ arg7[6]
arg6.d = zmm8_1.d
float* rax_2
int128_t zmm8_2
int128_t zmm10_2
int128_t zmm11_1
rax_2, zmm8_2, zmm10_2, zmm11_1 = sub_1417c7990(arg7, &var_160, r14 + 0x2c)
int128_t zmm1_2
zmm1_2.d = zmm8_2.d f- rdi[5]
int32_t var_12c = zmm8_2.d
int128_t zmm2_2
zmm2_2.d = zmm15.d f- rdi[4]
int128_t zmm5_2 = *rax_2
float zmm0_2 = zmm14.d f- rdi[6]
int128_t zmm4_2 = rax_2[1]
int128_t zmm3_2 = rax_2[3]
int128_t zmm7_2 = rax_2[2]
*arg2 = zmm2_2.d
arg2[2] = zmm0_2
arg2[1] = zmm1_2.d
zmm2_2.d = zmm14.d f- arg7[6]
zmm0_2 = var_268 f- rdi[6]
zmm8_2.d = zmm8_2.d f- arg7[5]
int128_t zmm9_2
zmm9_2.d = arg_10.d f- rdi[5]
zmm1_2.d = arg_20.d f- rdi[4]
float zmm6_2 = zmm15.d f- arg7[4]
int32_t var_1e8 = zmm2_2.d
int32_t var_1ac = zmm2_2.d
float var_1f4 = zmm0_2
float var_1b8 = zmm0_2
zmm2_2.d = zmm12.d f* zmm5_2.d
int32_t* var_1d0 = r15
int32_t* var_1c8 = r15
int32_t var_1f0 = zmm1_2.d
int32_t var_1c0 = zmm1_2.d
zmm2_2.d = zmm2_2.d f+ zmm11_1.d f* zmm4_2.d
zmm1_2.d = zmm10_2.d f* zmm7_2.d
int32_t var_1ec = zmm8_2.d
zmm2_2.d = zmm2_2.d f+ zmm1_2.d
int32_t var_1b0 = zmm8_2.d
int32_t var_1f8 = zmm9_2.d
int32_t var_1bc = zmm9_2.d
zmm9_2 = data_142d3f780
int32_t var_22c = zmm5_2.d
zmm2_2.d = zmm2_2.d f+ zmm13.d f* zmm3_2.d
int32_t var_140 = zmm5_2.d
int32_t var_25c = zmm4_2.d
int32_t var_13c = zmm4_2.d
int32_t var_138 = zmm7_2.d
int32_t var_240 = zmm3_2.d
int32_t var_134 = zmm3_2.d
int32_t var_130 = zmm15.d
int32_t var_128 = zmm14.d
float var_1e4 = zmm6_2
float var_1b4 = zmm6_2

if (not(zmm2_2.d f>= 0f))
    zmm5_2 ^= zmm9_2
    zmm4_2 ^= zmm9_2
    zmm3_2 ^= zmm9_2
    var_22c = zmm5_2.d
    var_25c = zmm4_2.d
    var_240 = zmm3_2.d
    var_140 = zmm5_2.d
    int32_t var_13c_1 = zmm4_2.d
    int32_t var_138_1 = (zmm7_2 ^ zmm9_2).d
    int32_t var_134_1 = zmm3_2.d

zmm1_2.d = arg6.d.d f- arg_10
zmm15.d = zmm15.d f- arg_20
zmm14.d = zmm14.d f- var_268
int32_t var_214 = zmm13.d
zmm1_2.d = zmm1_2.d f* 2f
zmm15.d = zmm15.d f* 2f
zmm4_2 = zmm12 ^ zmm9_2
arg6.d = zmm1_2.d
zmm6_2 = zmm13.d f* zmm13.d - 0.5f
zmm14.d = zmm14.d f* 2f
zmm3_2 = zmm11_1 ^ zmm9_2
int32_t var_220 = zmm4_2.d
zmm2_2.d = zmm1_2.d f* zmm3_2.d
int32_t var_21c = zmm3_2.d
zmm5_2 = zmm10_2 ^ zmm9_2
zmm1_2.d = zmm14.d f* zmm5_2.d
zmm2_2.d = zmm2_2.d f+ zmm15.d f* zmm4_2.d
zmm2_2.d = zmm2_2.d f+ zmm1_2.d
int32_t var_218 = zmm5_2.d
zmm1_2.d = zmm14.d f* zmm3_2.d
zmm1_2.d = zmm1_2.d f- arg6.d f* zmm5_2.d
zmm1_2.d = zmm1_2.d f* zmm13.d
zmm1_2.d = zmm1_2.d f+ zmm6_2 f* zmm15.d
float var_23c = zmm1_2.d
zmm1_2.d = zmm2_2.d f* zmm4_2.d
zmm0_2 = var_23c f+ zmm1_2.d
zmm1_2.d = zmm15.d f* zmm5_2.d
zmm15.d = zmm15.d f* zmm3_2.d
float var_23c_1 = zmm0_2
zmm1_2.d = zmm1_2.d f- zmm14.d f* zmm4_2.d
zmm1_2.d = zmm1_2.d f* zmm13.d
zmm1_2.d = zmm1_2.d f+ zmm6_2 f* arg6.d
float var_238 = zmm1_2.d
zmm1_2.d = zmm2_2.d f* zmm3_2.d
zmm2_2.d = zmm2_2.d f* zmm5_2.d
zmm0_2 = var_238 f+ zmm1_2.d
zmm1_2.d = arg6.d.d f* zmm4_2.d
zmm1_2.d = zmm1_2.d f- zmm15.d
zmm1_2.d = zmm1_2.d f* zmm13.d
zmm1_2.d = zmm1_2.d f+ zmm6_2 f* zmm14.d
zmm1_2.d = zmm1_2.d f+ zmm2_2.d
arg6.d = zmm1_2.d
float* rax_3
int128_t zmm7_3
int128_t zmm9_3
int128_t zmm10_3
int128_t zmm11_2
rax_3, zmm7_3, zmm9_3, zmm10_3, zmm11_2 = sub_1417c7990(&var_220, &var_160, &var_140)
zmm15 = *rax_3
int128_t zmm0_3 = rax_3[1]
int32_t var_250 = zmm15.d
int32_t var_120 = zmm15.d
int32_t var_24c = zmm0_3.d
zmm14 = rax_3[3]
int32_t var_11c = zmm0_3.d
int128_t zmm1_3
zmm1_3.d = zmm10_3.d f+ zmm10_3.d
zmm0_3 = rax_3[2]
int32_t var_258 = zmm0_3.d
int32_t var_118 = zmm0_3.d
int128_t zmm5_3
zmm5_3.d = zmm12.d f+ zmm12.d
int32_t var_110 = var_23c_1.d
int32_t var_10c = zmm0_2.d
int32_t var_108 = arg6.d.d
zmm0_3.d = zmm11_2.d f+ zmm11_2.d
int128_t zmm2_3
zmm2_3.d = zmm10_3.d f* zmm1_3.d
int128_t zmm3_3
zmm3_3.d = zmm5_3.d f* zmm11_2.d
int128_t zmm4_3
zmm4_3.d = zmm13.d f* zmm5_3.d
int32_t var_254 = zmm14.d
int128_t zmm6_3
zmm6_3.d = zmm0_3.d f* zmm11_2.d
zmm11_2.d = zmm10_3.d f* zmm0_3.d
arg_20 = zmm3_3.d
zmm3_3.d = zmm10_3.d f* zmm5_3.d
zmm10_3.d = zmm13.d f* zmm0_3.d
zmm0_3 = zmm13
zmm13 = 0x3f800000
zmm0_3.d = zmm0_3.d f* zmm1_3.d
zmm5_3.d = zmm5_3.d f* zmm12.d
zmm1_3.d = 1f f- zmm6_3.d
int32_t var_114 = zmm14.d
zmm1_3.d = zmm1_3.d f- zmm2_3.d
int32_t var_1e0 = zmm1_3.d
zmm1_3 = arg_20
int128_t zmm8_3
zmm8_3.d = zmm0_3.d f+ zmm1_3.d
zmm1_3.d = zmm1_3.d f- zmm0_3.d
zmm0_3.d = 1f f- zmm5_3.d
int32_t var_1dc = zmm8_3.d
zmm8_3.d = zmm3_3.d f- zmm10_3.d
arg_20 = zmm1_3.d
int32_t var_194 = zmm1_3.d
zmm5_3.d = zmm0_3.d f- zmm2_3.d
zmm0_3.d = zmm0_3.d f- zmm6_3.d
zmm10_3.d = zmm10_3.d f+ zmm3_3.d
zmm3_3 = var_25c
int32_t var_1d8 = zmm8_3.d
zmm2_3.d = zmm11_2.d f+ zmm4_3.d
zmm11_2.d = zmm11_2.d f- zmm4_3.d
float var_1a0 = var_1e0.d
int32_t var_260 = zmm5_3.d
int32_t var_190 = zmm5_3.d
int32_t var_234 = zmm0_3.d
int32_t var_180 = zmm0_3.d
zmm0_3 = var_22c
int32_t var_19c = var_1dc.d
zmm5_3.d = zmm0_3.d f+ zmm0_3.d
int32_t var_198 = var_1d8.d
int32_t var_230 = zmm2_3.d
int32_t var_18c = zmm2_3.d
arg_10 = zmm10_3.d
arg7.d = zmm11_2.d
int32_t var_188 = zmm10_3.d
int32_t var_184 = zmm11_2.d
zmm10_3 = var_240
zmm0_3.d = zmm3_3.d f+ zmm3_3.d
zmm12.d = zmm5_3.d f* zmm3_3.d
zmm1_3.d = zmm7_3.d f+ zmm7_3.d
zmm11_2.d = zmm10_3.d f* zmm0_3.d
zmm4_3.d = zmm10_3.d f* zmm5_3.d
zmm8_3 = zx.o(0)
zmm2_3.d = zmm7_3.d f* zmm1_3.d
zmm10_3.d = zmm10_3.d f* zmm1_3.d
zmm1_3 = zmm11_2.d
zmm6_3.d = zmm0_3.d f* zmm3_3.d
zmm3_3 = zmm7_3
zmm7_3.d = zmm7_3.d f* zmm0_3.d
zmm3_3.d = zmm3_3.d f* zmm5_3.d
zmm11_2.d = 1f f- zmm6_3.d
zmm5_3.d = zmm5_3.d f* var_22c
zmm0_3 = zmm12.d
zmm11_2.d = zmm11_2.d f- zmm2_3.d
int32_t var_240_1 = zmm10_3.d
zmm10_3.d = zmm10_3.d f+ zmm12.d
zmm12.d = zmm3_3.d f- zmm1_3.d
zmm1_3.d = zmm1_3.d f+ zmm3_3.d
int32_t var_16c = zmm11_2.d
int32_t var_168 = zmm10_3.d
zmm0_3.d = zmm0_3.d f- var_240_1
int32_t var_210 = zmm12.d
int32_t var_268_2 = zmm1_3.d
int32_t var_25c_2 = zmm0_3.d
zmm0_3.d = 1f f- zmm5_3.d
zmm5_3 = zmm0_3
zmm0_3.d = zmm0_3.d f- zmm6_3.d
zmm5_3.d = zmm5_3.d f- zmm2_3.d
zmm2_3.d = zmm7_3.d f+ zmm4_3.d
zmm7_3.d = zmm7_3.d f- zmm4_3.d
int32_t var_174 = zmm0_3.d
int32_t var_22c_1 = zmm5_3.d
int32_t var_240_2 = zmm2_3.d
int32_t var_178 = zmm7_3.d
int32_t var_208

if ((r13.b & 7) != 0)
    zmm0_3.d = (*(r14 + 0x128)).d f- var_23c_1
    void* r10_1 = &r14[0xc]
    zmm1_3.d = (*(r14 + 0x12c)).d f- zmm0_2
    zmm8_3 = var_1f4
    int32_t* rbx_1 = &var_208
    zmm14 = var_1f0
    int32_t* r11_1 = &var_19c
    zmm15 = var_1e8
    zmm11_2 = var_1e4
    zmm10_3 = var_1ec
    zmm12 = var_1f8
    int64_t i_1 = 3
    var_208 = zmm0_3.d
    zmm0_3.d = r14[0x13].d.d f- arg6.d
    int32_t r9 = 1
    int32_t var_204_1 = zmm1_3.d
    int32_t var_200_1 = zmm0_3.d
    int64_t i
    
    do
        if ((r13 & r9) != 0)
            zmm7_3 = *(r14 - &var_208 + rbx_1 + 0x134)
            int32_t* r8_3 = r15
            zmm5_3 = *r11_1
            zmm4_3 = r11_1[1]
            zmm6_3 = r11_1[-1]
            int32_t rax_4 = *rbx_1
            *(r8_3 + 0x4e) = 0
            r15 = &r15[0x14]
            *r8_3 = zmm6_3.d
            r8_3[1] = zmm5_3.d
            r8_3[2] = zmm4_3.d
            zmm0_3.d = zmm8_3.d f* zmm5_3.d
            var_1c8 = r15
            zmm3_3.d = zmm12.d f* zmm4_3.d
            zmm2_3.d = zmm8_3.d f* zmm6_3.d
            zmm3_3.d = zmm3_3.d f- zmm0_3.d
            zmm1_3.d = zmm14.d f* zmm5_3.d
            zmm0_3.d = zmm14.d f* zmm4_3.d
            r8_3[4] = zmm3_3.d
            zmm3_3.d = zmm10_3.d f* zmm4_3.d
            zmm2_3.d = zmm2_3.d f- zmm0_3.d
            zmm0_3.d = zmm12.d f* zmm6_3.d
            r8_3[5] = zmm2_3.d
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            zmm0_3.d = zmm15.d f* zmm5_3.d
            zmm2_3.d = zmm15.d f* zmm6_3.d
            r8_3[6] = zmm1_3.d
            zmm3_3.d = zmm3_3.d f- zmm0_3.d
            r8_3[8] = zmm6_3.d
            r8_3[9] = zmm5_3.d
            r8_3[0xa] = zmm4_3.d
            zmm0_3.d = zmm11_2.d f* zmm4_3.d
            r8_3[0xc] = zmm3_3.d
            zmm1_3.d = zmm11_2.d f* zmm5_3.d
            zmm2_3.d = zmm2_3.d f- zmm0_3.d
            zmm0_3.d = zmm10_3.d f* zmm6_3.d
            r8_3[0xd] = zmm2_3.d
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            r8_3[0xe] = zmm1_3.d
            int16_t rdx_3 = r8_3[0x13].w
            r8_3[3] = rax_4
            rdx_3 |= 0x21
            r8_3[7] = (zmm7_3 ^ zmm9_3).d
            int16_t rcx_3 = rdx_3 | 2
            
            if (((*(r10_1 + 4)).b & 1) == 0)
                rcx_3 = rdx_3
            
            r8_3[0x13].w = rcx_3
            r8_3[0x10] = *(r10_1 - 8)
            r8_3[0x11] = *(r10_1 - 4)
            r8_3[0xb] = (*r10_1 ^ zmm9_3).d
            r8_3[0xf] = *r10_1
        
        r9 = rol.d(r9, 1)
        r10_1 += 0x10
        r11_1 = &r11_1[3]
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    zmm10_3 = var_168
    zmm8_3 = zx.o(0)
    zmm11_2 = var_16c
    zmm12 = var_210
    zmm15 = var_250
    zmm14 = var_254
    r14 = arg5

zmm7_3 = var_24c

if ((r13.b & 0x38) != 0)
    zmm1_3.d = var_258.d f* r14[0x12].d
    zmm0_3.d = zmm15.d f* *(r14 + 0x118)
    zmm2_3.d = zmm7_3.d f* *(r14 + 0x11c)
    zmm2_3.d = zmm2_3.d f+ zmm0_3.d
    zmm0_3.d = zmm14.d f* *(r14 + 0x124)
    zmm2_3.d = zmm2_3.d f+ zmm1_3.d
    zmm2_3.d = zmm2_3.d f+ zmm0_3.d
    zmm0_3 = *(r14 + 0x118)
    
    if (not(zmm2_3.d f> zmm8_3.d))
        zmm0_3 ^= zmm9_3
    
    var_220.o = zmm0_3
    zmm5_3 = var_214
    zmm2_3 = var_220 ^ zmm9_3
    zmm3_3 = var_21c ^ zmm9_3
    zmm6_3.d = zmm5_3.d f* zmm15.d
    zmm4_3 = var_218 ^ zmm9_3
    zmm1_3.d = zmm3_3.d f* var_258
    zmm0_3.d = zmm2_3.d f* zmm14.d
    zmm14.d = zmm5_3.d f* zmm7_3.d
    zmm6_3.d = zmm6_3.d f+ zmm0_3.d
    zmm0_3.d = zmm4_3.d f* zmm7_3.d
    zmm7_3 = var_254
    zmm6_3.d = zmm6_3.d f+ zmm1_3.d
    zmm1_3.d = zmm4_3.d f* zmm15.d
    zmm15 = zmm4_3
    zmm4_3.d = zmm4_3.d f* var_258
    zmm15.d = zmm15.d f* zmm7_3.d
    zmm6_3.d = zmm6_3.d f- zmm0_3.d
    zmm0_3.d = zmm3_3.d f* zmm7_3.d
    zmm14.d = zmm14.d f+ zmm0_3.d
    zmm0_3.d = zmm2_3.d f* var_258
    zmm14.d = zmm14.d f+ zmm1_3.d
    zmm1_3 = zmm2_3
    zmm2_3.d = zmm2_3.d f* var_250
    zmm1_3.d = zmm1_3.d f* var_24c
    zmm14.d = zmm14.d f- zmm0_3.d
    zmm0_3.d = zmm5_3.d f* var_258
    zmm5_3.d = zmm5_3.d f* zmm7_3.d
    zmm7_3 = var_24c
    zmm15.d = zmm15.d f+ zmm0_3.d
    zmm0_3 = zmm3_3
    zmm3_3.d = zmm3_3.d f* zmm7_3.d
    zmm0_3.d = zmm0_3.d f* var_250
    zmm5_3.d = zmm5_3.d f- zmm2_3.d
    zmm15.d = zmm15.d f+ zmm1_3.d
    zmm5_3.d = zmm5_3.d f- zmm3_3.d
    zmm15.d = zmm15.d f- zmm0_3.d
    zmm5_3.d = zmm5_3.d f- zmm4_3.d
    void* r8_5
    
    if ((r13.b & 0x20) == 0)
        if ((r13.b & 0x10) != 0)
            zmm1_3 = r14[0x14].d
            int32_t* r8_6 = r15
            r15 = &r15[0x14]
            zmm0_3.d = zmm6_3.d f* -2f
            var_1c8 = r15
            *(r8_6 + 0x4e) = 0
            *r8_6 = 0
            r8_6[2] = 0
            r8_6[4] = zmm11_2.d
            r8_6[5] = zmm10_3.d
            r8_6[6] = zmm12.d
            *(r8_6 + 0x20) = 0
            r8_6[0xa] = 0
            r8_6[0xc] = zmm11_2.d
            r8_6[0xd] = zmm10_3.d
            r8_6[0xe] = zmm12.d
            int16_t rdx_8 = r8_6[0x13].w
            r8_6[3] = zmm0_3.d
            rdx_8 |= 0x21
            r8_6[7] = zmm1_3.d
            int16_t rcx_8 = rdx_8 | 2
            
            if (((*(r14 + 0x104)).b & 1) == 0)
                rcx_8 = rdx_8
            
            r8_6[0x13].w = rcx_8
            r8_6[0x10] = *(r14 + 0xf8)
            r8_6[0x11] = *(r14 + 0xfc)
            r8_6[0xb] = (r14[0x10].d ^ zmm9_3).d
            r8_6[0xf] = r14[0x10].d
        
        if ((r13.b & 8) != 0)
            zmm2_3 = zmm6_3
            zmm6_3.d = zmm6_3.d f* zmm8_3.d
            zmm2_3.d = zmm2_3.d f* 2f
            zmm1_3.d = zmm15.d f* zmm8_3.d
            zmm0_3.d = zmm14.d f* zmm8_3.d
            zmm3_3.d = zmm5_3.d f* zmm5_3.d
            zmm2_3.d = zmm2_3.d f+ zmm0_3.d
            zmm3_3.d = zmm3_3.d f- 0.5f
            zmm2_3.d = zmm2_3.d f+ zmm1_3.d
            zmm1_3.d = zmm15.d f* 2f
            zmm3_3.d = zmm3_3.d f* zmm8_3.d
            zmm1_3.d = zmm1_3.d f- zmm6_3.d
            zmm0_3.d = zmm2_3.d f* zmm14.d
            zmm14.d = zmm14.d f* 2f
            zmm2_3.d = zmm2_3.d f* zmm15.d
            zmm1_3.d = zmm1_3.d f* zmm5_3.d
            zmm6_3.d = zmm6_3.d f- zmm14.d
            zmm1_3.d = zmm1_3.d f+ zmm3_3.d
            zmm6_3.d = zmm6_3.d f* zmm5_3.d
            zmm6_3.d = zmm6_3.d f+ zmm3_3.d
            zmm1_3.d = zmm1_3.d f+ zmm0_3.d
            zmm6_3.d = zmm6_3.d f+ zmm2_3.d
            
            if ((r12.b & 0x10) == 0)
                zmm0_3 = *(r14 + 0x144)
                int32_t* r8_7 = r15
                zmm2_3 = var_25c_2
                r15 = &r15[0x14]
                zmm3_3 = var_22c_1
                zmm4_3 = var_240_2
                *(r8_7 + 0x4e) = 0
                *r8_7 = 0
                r8_7[2] = 0
                r8_7[4] = zmm2_3.d
                r8_7[5] = zmm3_3.d
                r8_7[6] = zmm4_3.d
                *(r8_7 + 0x20) = 0
                r8_7[0xa] = 0
                r8_7[0xc] = zmm2_3.d
                r8_7[0xd] = zmm3_3.d
                r8_7[0xe] = zmm4_3.d
                int16_t rdx_9 = r8_7[0x13].w
                r8_7[7] = zmm0_3.d
                rdx_9 |= 0x21
                r8_7[3] = zmm6_3.d
                int16_t rcx_9 = rdx_9 | 2
                var_1c8 = r15
                
                if (((*(r14 + 0xf4)).b & 1) == 0)
                    rcx_9 = rdx_9
                
                r8_7[0x13].w = rcx_9
                r8_7[0x10] = *(r14 + 0xe8)
                r8_7[0x11] = *(r14 + 0xec)
                r8_7[0xb] = (r14[0xf].d ^ zmm9_3).d
                r8_7[0xf] = r14[0xf].d
            
            if ((r12.b & 0x20) == 0)
                zmm0_3 = *(r14 + 0x148)
                r8_5 = r15
                zmm3_3 = var_268_2
                r15 = &r15[0x14]
                zmm2_3 = var_178
                zmm4_3 = var_174
                *(r8_5 + 0x4e) = 0
                *r8_5 = 0
                *(r8_5 + 8) = 0
                *(r8_5 + 0x10) = zmm3_3.d
                *(r8_5 + 0x14) = zmm2_3.d
                *(r8_5 + 0x18) = zmm4_3.d
                *(r8_5 + 0x20) = 0
                *(r8_5 + 0x28) = 0
                *(r8_5 + 0x30) = zmm3_3.d
                *(r8_5 + 0x34) = zmm2_3.d
                *(r8_5 + 0x38) = zmm4_3.d
                int16_t rdx_10 = *(r8_5 + 0x4c)
                *(r8_5 + 0x1c) = zmm0_3.d
                rdx_10 |= 0x21
                *(r8_5 + 0xc) = (zmm1_3 ^ zmm9_3).d
                int16_t rcx_10 = rdx_10 | 2
                var_1c8 = r15
                
                if (((*(r14 + 0xf4)).b & 1) == 0)
                    rcx_10 = rdx_10
                
                *(r8_5 + 0x4c) = rcx_10
                *(r8_5 + 0x40) = *(r14 + 0xe8)
                *(r8_5 + 0x44) = *(r14 + 0xec)
                *(r8_5 + 0x2c) = (r14[0xf].d ^ zmm9_3).d
                *(r8_5 + 0x3c) = r14[0xf].d
    else
        zmm3_3 = *(r14 + 0x148)
        zmm4_3 = r14[0x14].d
        zmm3_3.d = zmm3_3.d f+ zmm3_3.d
        zmm7_3 = *(r14 + 0x144)
        zmm4_3.d = zmm4_3.d f+ zmm4_3.d
        zmm7_3.d = zmm7_3.d f+ zmm7_3.d
        int32_t var_180_1 = 0x3f800000
        zmm5_3.d = zmm3_3.d f* zmm11
        zmm2_3.d = zmm4_3.d f* arg_8
        zmm0_3.d = zmm7_3.d f* zmm11
        zmm2_3.d = zmm2_3.d f+ zmm0_3.d
        zmm0_3 = zmm10_1
        zmm1_3 = zmm0_3
        zmm0_3.d = zmm0_3.d f* zmm7_3.d
        zmm1_3.d = zmm1_3.d f* zmm3_3.d
        zmm5_3.d = zmm5_3.d f- zmm0_3.d
        zmm0_3.d = zmm6_2.d f* zmm4_3.d
        zmm2_3.d = zmm2_3.d f+ zmm1_3.d
        zmm5_3.d = zmm5_3.d f* var_264
        zmm1_3.d = zmm2_3.d f* arg_8
        zmm5_3.d = zmm5_3.d f+ zmm0_3.d
        zmm0_3.d = zmm3_3.d f* arg_8
        zmm5_3.d = zmm5_3.d f+ zmm1_3.d
        zmm1_3.d = zmm10_1.d f* zmm4_3.d
        zmm4_3.d = zmm4_3.d f* zmm11
        zmm1_3.d = zmm1_3.d f- zmm0_3.d
        zmm5_3 ^= zmm9_3
        zmm0_3.d = zmm6_2.d f* zmm7_3.d
        zmm7_3.d = zmm7_3.d f* arg_8
        zmm1_3.d = zmm1_3.d f* var_264
        zmm7_3.d = zmm7_3.d f- zmm4_3.d
        int32_t var_210_1 = zmm5_3.d
        zmm4_3 = zmm10_1
        zmm1_3.d = zmm1_3.d f+ zmm0_3.d
        zmm7_3.d = zmm7_3.d f* var_264
        arg5.d = zmm1_3.d
        zmm1_3.d = zmm2_3.d f* zmm11
        zmm0_3.d = arg5.d.d f+ zmm1_3.d
        zmm1_3.d = zmm4_3.d f* zmm2_3.d
        arg5.d = zmm0_3.d
        zmm0_3.d = zmm6_2.d f* zmm3_3.d
        zmm3_3 = arg5.d ^ zmm9_3
        zmm7_3.d = zmm7_3.d f+ zmm0_3.d
        arg5.d = zmm3_3.d
        zmm0_3 = data_142d4cc00
        var_1a0.o = zmm0_3
        var_190.o = zmm0_3
        zmm7_3.d = zmm7_3.d f+ zmm1_3.d
        zmm7_3 ^= zmm9_3
        
        if (zmm8_3.d f== *(r14 + 0x108))
            zmm4_3 = 0x3f800000
        else
            zmm3_3 = var_264
            zmm0_3.d = var_214.d f* arg_8
            zmm2_3.d = zmm3_3.d f* var_220
            zmm5_3 = zmm11
            zmm3_3.d = zmm3_3.d f* var_21c
            zmm2_3.d = zmm2_3.d f+ zmm0_3.d
            zmm1_3.d = var_218.d f* zmm5_3.d
            zmm0_3.d = zmm4_3.d f* var_21c
            zmm2_3.d = zmm2_3.d f+ zmm1_3.d
            zmm1_3.d = zmm4_3.d f* var_220
            zmm2_3.d = zmm2_3.d f- zmm0_3.d
            zmm0_3.d = var_214.d f* zmm5_3.d
            zmm3_3.d = zmm3_3.d f+ zmm0_3.d
            var_208 = zmm2_3.d
            zmm2_3.d = zmm4_3.d f* var_214
            zmm3_3.d = zmm3_3.d f+ zmm1_3.d
            zmm1_3 = var_218
            zmm0_3.d = zmm1_3.d f* arg_8
            zmm3_3.d = zmm3_3.d f- zmm0_3.d
            zmm0_3.d = var_264.d f* zmm1_3.d
            zmm1_3.d = var_21c.d f* arg_8
            zmm2_3.d = zmm2_3.d f+ zmm0_3.d
            int32_t var_204_2 = zmm3_3.d
            zmm0_3.d = var_220.d f* zmm5_3.d
            zmm2_3.d = zmm2_3.d f+ zmm1_3.d
            zmm1_3.d = var_264.d f* var_214
            zmm2_3.d = zmm2_3.d f- zmm0_3.d
            zmm0_3.d = var_220.d f* arg_8
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            int32_t var_200_2 = zmm2_3.d
            zmm0_3.d = var_21c.d f* zmm5_3.d
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            zmm0_3.d = zmm4_3.d f* var_218
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            int32_t var_1fc_1 = zmm1_3.d
            zmm6_3, zmm7_3, zmm8_3, zmm9_3, zmm10_3, zmm11_2, zmm12, zmm13, zmm14, zmm15 =
                sub_14280f8f0(&var_1a0, &var_208, &var_140)
            zmm4_3 = var_180_1
            zmm5_3 = var_210_1
            zmm3_3 = arg5.d
        
        zmm0_3 = var_1a0
        r8_5 = &r15[0x28]
        zmm2_3 = var_19c
        *(r15 + 0x4e) = 0x102
        *r15 = 0
        r15[2] = 0
        r15[5] = zmm2_3.d
        r15[4] = zmm0_3.d
        zmm1_3 = var_198
        r15[6] = zmm1_3.d
        *(r15 + 0x20) = 0
        r15[0xa] = 0
        r15[0xd] = zmm2_3.d
        r15[0xc] = zmm0_3.d
        r15[0xe] = zmm1_3.d
        int16_t rdx_5 = r15[0x13].w
        r15[3] = (zmm6_3 ^ zmm9_3).d
        rdx_5 |= 0x21
        zmm0_3.d = zmm0_3.d f* zmm5_3.d
        int16_t rcx_5 = rdx_5 | 2
        zmm2_3.d = zmm2_3.d f* zmm3_3.d
        zmm1_3.d = zmm1_3.d f* zmm7_3.d
        zmm2_3.d = zmm2_3.d f+ zmm0_3.d
        zmm2_3.d = zmm2_3.d f+ zmm1_3.d
        zmm1_3 = var_18c
        r15[7] = zmm2_3.d
        zmm2_3 = var_190
        
        if (((*(r14 + 0x114)).b & 1) == 0)
            rcx_5 = rdx_5
        
        r15[0x13].w = rcx_5
        r15[0x10] = *(r14 + 0x108)
        r15[0x11] = *(r14 + 0x10c)
        r15[0xb] = (r14[0x11].d ^ zmm9_3).d
        zmm0_3 = var_194
        r15[0xf] = r14[0x11].d
        *(r15 + 0x9e) = 0x102
        *(r15 + 0x50) = 0
        r15[0x16] = 0
        r15[0x18] = zmm0_3.d
        r15[0x19] = zmm2_3.d
        r15[0x1a] = zmm1_3.d
        *(r15 + 0x70) = 0
        r15[0x1e] = 0
        r15[0x20] = zmm0_3.d
        r15[0x21] = zmm2_3.d
        r15[0x22] = zmm1_3.d
        r15[0x17] = (zmm14 ^ zmm9_3).d
        zmm0_3.d = zmm0_3.d f* zmm5_3.d
        zmm2_3.d = zmm2_3.d f* zmm3_3.d
        zmm1_3.d = zmm1_3.d f* zmm7_3.d
        zmm2_3.d = zmm2_3.d f+ zmm0_3.d
        zmm2_3.d = zmm2_3.d f+ zmm1_3.d
        r15[0x1b] = zmm2_3.d
        int16_t rdx_6 = r15[0x27].w | 0x21
        int16_t rcx_6 = rdx_6 | 2
        
        if (((*(r14 + 0x114)).b & 1) == 0)
            rcx_6 = rdx_6
        
        r15[0x27].w = rcx_6
        r15[0x24] = *(r14 + 0x108)
        r15[0x25] = *(r14 + 0x10c)
        r15[0x1f] = (r14[0x11].d ^ zmm9_3).d
        r15[0x23] = r14[0x11].d
        r15 = &r15[0x3c]
        zmm0_3 = var_188
        zmm1_3 = var_184
        *(r8_5 + 0x4e) = 0x102
        *r8_5 = 0
        *(r8_5 + 8) = 0
        *(r8_5 + 0x10) = zmm0_3.d
        *(r8_5 + 0x14) = zmm1_3.d
        *(r8_5 + 0x18) = zmm4_3.d
        *(r8_5 + 0x20) = 0
        *(r8_5 + 0x28) = 0
        *(r8_5 + 0x30) = zmm0_3.d
        *(r8_5 + 0x34) = zmm1_3.d
        *(r8_5 + 0x38) = zmm4_3.d
        *(r8_5 + 0xc) = (zmm15 ^ zmm9_3).d
        zmm0_3.d = zmm0_3.d f* zmm5_3.d
        var_1c8 = r15
        zmm1_3.d = zmm1_3.d f* zmm3_3.d
        zmm4_3.d = zmm4_3.d f* zmm7_3.d
        zmm7_3 = var_24c
        zmm1_3.d = zmm1_3.d f+ zmm0_3.d
        zmm1_3.d = zmm1_3.d f+ zmm4_3.d
        *(r8_5 + 0x1c) = zmm1_3.d
        int16_t rdx_7 = *(r8_5 + 0x4c) | 0x21
        int16_t rcx_7 = rdx_7 | 2
        
        if (((*(r14 + 0x114)).b & 1) == 0)
            rcx_7 = rdx_7
        
        *(r8_5 + 0x4c) = rcx_7
        *(r8_5 + 0x40) = *(r14 + 0x108)
        *(r8_5 + 0x44) = *(r14 + 0x10c)
        *(r8_5 + 0x2c) = (r14[0x11].d ^ zmm9_3).d
        *(r8_5 + 0x3c) = r14[0x11].d
    zmm15 = var_250
    zmm14 = var_254

if ((rax.b & 0x38) == 0)
    zmm14 = arg_10
    zmm15 = arg7.d
else
    int128_t var_150
    
    if (zmm15.d f== zmm8_3.d)
        var_150 = data_142d3f660
    else
        zmm0_3.d = zmm14.d f* zmm14.d
        zmm1_3.d = zmm15.d f* zmm15.d
        zmm1_3.d = zmm1_3.d f+ zmm0_3.d
        zmm2_3.d = zmm13.d f/ _mm_sqrt_ss(0, zmm1_3.d).d
        zmm0_3.d = zmm2_3.d f* zmm8_3.d
        zmm1_3.d = zmm2_3.d f* zmm15.d
        zmm2_3.d = zmm2_3.d f* zmm14.d
        var_150.d = zmm1_3.d
        var_150:4.d = zmm0_3.d
        var_150:8.d = zmm0_3.d
        var_150:0xc.d = zmm2_3.d
    
    zmm2_3 = var_150.d ^ zmm9_3
    zmm5_3 = var_150:8.d ^ zmm9_3
    zmm6_3 = var_150:0xc.d
    zmm4_3 = var_150:4.d ^ zmm9_3
    zmm3_3 = zmm6_3
    zmm0_3.d = zmm2_3.d f* zmm14.d
    zmm1_3.d = zmm5_3.d f* zmm7_3.d
    zmm6_3.d = zmm6_3.d f* zmm7_3.d
    zmm7_3.d = var_150:0xc.d.d f* var_258
    zmm3_3.d = zmm3_3.d f* zmm15.d
    zmm3_3.d = zmm3_3.d f+ zmm0_3.d
    zmm0_3.d = zmm4_3.d f* var_258
    zmm3_3.d = zmm3_3.d f+ zmm1_3.d
    zmm1_3.d = zmm2_3.d f* var_258
    zmm3_3.d = zmm3_3.d f- zmm0_3.d
    zmm0_3.d = zmm4_3.d f* zmm14.d
    var_160 = zmm3_3.d
    zmm6_3.d = zmm6_3.d f+ zmm0_3.d
    zmm0_3.d = zmm5_3.d f* zmm15.d
    zmm6_3.d = zmm6_3.d f+ zmm1_3.d
    zmm1_3 = zmm4_3
    zmm4_3.d = zmm4_3.d f* var_24c
    zmm1_3.d = zmm1_3.d f* zmm15.d
    zmm6_3.d = zmm6_3.d f- zmm0_3.d
    zmm0_3 = zmm5_3
    zmm5_3.d = zmm5_3.d f* var_258
    zmm0_3.d = zmm0_3.d f* zmm14.d
    zmm14.d = var_150:0xc.d.d f* var_254
    int32_t var_15c_1 = zmm6_3.d
    zmm7_3.d = zmm7_3.d f+ zmm0_3.d
    zmm0_3 = zmm2_3
    zmm2_3.d = zmm2_3.d f* zmm15.d
    zmm0_3.d = zmm0_3.d f* var_24c
    zmm14.d = zmm14.d f- zmm2_3.d
    zmm7_3.d = zmm7_3.d f+ zmm1_3.d
    zmm14.d = zmm14.d f- zmm4_3.d
    zmm7_3.d = zmm7_3.d f- zmm0_3.d
    zmm14.d = zmm14.d f- zmm5_3.d
    int32_t var_158_1 = zmm7_3.d
    int32_t var_154_1 = zmm14.d
    int32_t* rcx_12
    int16_t rdx_12
    bool cond:23_1
    
    if ((rax.b & 0x30) != 0x30)
        zmm5_3 = *(r14 + 0x16c)
        zmm15 = r14[0x16].d
        arg5.d = zmm5_3.d
        int32_t var_268_3 = zmm15.d
        
        if ((rax.b & 0x10) == 0)
            zmm2_3 = arg_20
            zmm0_3 = var_260
        else if ((r12.b & 0x20) == 0)
            zmm5_3 = arg7.d
            zmm4_3 = arg_10
            zmm2_3 = var_234
            zmm0_3.d = zmm11_2.d f* zmm4_3.d
            zmm1_3.d = zmm12.d f* zmm2_3.d
            zmm3_3.d = zmm10_3.d f* zmm5_3.d
            zmm15.d = zmm11_2.d f* zmm2_3.d
            zmm3_3.d = zmm3_3.d f+ zmm0_3.d
            zmm6_3.d = zmm12.d f* zmm5_3.d
            zmm0_3.d = zmm10_3.d f* zmm2_3.d
            zmm3_3.d = zmm3_3.d f+ zmm1_3.d
            zmm2_3.d = zmm10_3.d f* zmm4_3.d
            zmm6_3.d = zmm6_3.d f- zmm0_3.d
            arg_8 = var_268_3.d
            zmm0_3.d = zmm12.d f* zmm4_3.d
            zmm3_3 ^= zmm9_3
            zmm15.d = zmm15.d f- zmm0_3.d
            zmm0_3.d = zmm11_2.d f* zmm5_3.d
            zmm5_3 = *(r14 + 0x158)
            zmm2_3.d = zmm2_3.d f- zmm0_3.d
            zmm4_3 = zmm5_3 ^ zmm9_3
            zmm0_3.d = zmm3_3.d f* zmm3_3.d
            int32_t var_25c_3 = zmm2_3.d
            zmm1_3.d = zmm13.d f- zmm0_3.d
            zmm1_3.d = zmm1_3.d f+ zmm13.d
            zmm3_3.d = zmm3_3.d f/ zmm1_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || not(zmm8_3.d f>= *(r14 + 0xa4)))
                arg_8 = zmm8_3.d
            
            zmm1_3 = arg_8
            zmm0_3.d = zmm4_3.d f+ zmm1_3.d
            
            if (not(zmm3_3.d f>= zmm0_3.d))
                zmm4_3.d = zmm4_3.d f- zmm3_3.d
                int32_t* rcx_15 = r15
                zmm0_3 = var_25c_3 ^ zmm9_3
                r15 = &r15[0x14]
                zmm2_3 = zmm6_3 ^ zmm9_3
                var_1c8 = r15
                zmm4_3.d = zmm4_3.d f* -2f
                zmm1_3 = zmm15 ^ zmm9_3
                *(rcx_15 + 0x4e) = 0
                *rcx_15 = 0
                rcx_15[2] = 0
                rcx_15[4] = zmm2_3.d
                rcx_15[5] = zmm1_3.d
                rcx_15[6] = zmm0_3.d
                *(rcx_15 + 0x20) = 0
                rcx_15[0xa] = 0
                rcx_15[0xc] = zmm2_3.d
                rcx_15[0xd] = zmm1_3.d
                rcx_15[0xe] = zmm0_3.d
                int16_t rdx_15 = rcx_15[0x13].w | 0x10
                rcx_15[3] = zmm4_3.d
                
                if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                    rdx_15 |= 1
                    rcx_15[0x10] = *(r14 + 0xa4)
                    rcx_15[0x11] = *(r14 + 0xa8)
                else
                    *(rcx_15 + 0x4e) = 0x401
                    rcx_15[0x10] = *(r14 + 0x9c)
                    rcx_15[0x11] = r14[0xa].d
                    
                    if (not(zmm4_3.d f<= zmm8_3.d))
                        rdx_15 |= 8
                    
                    if (not(zmm8_3.d f>= *(r14 + 0x9c)))
                        rdx_15 |= 4
                
                zmm2_3 = var_25c_3
                zmm1_3 = arg_8
                rcx_15[0x13].w = rdx_15
                rcx_15[0xb] = 0
            
            zmm0_3.d = zmm5_3.d f- zmm1_3.d
            
            if (not(zmm3_3.d f<= zmm0_3.d))
                int32_t* rcx_16 = r15
                zmm5_3.d = zmm5_3.d f- zmm3_3.d
                r15 = &r15[0x14]
                var_1c8 = r15
                *(rcx_16 + 0x4e) = 0
                *rcx_16 = 0
                zmm5_3.d = zmm5_3.d f+ zmm5_3.d
                rcx_16[2] = 0
                rcx_16[4] = zmm6_3.d
                rcx_16[5] = zmm15.d
                rcx_16[6] = zmm2_3.d
                *(rcx_16 + 0x20) = 0
                rcx_16[0xa] = 0
                rcx_16[0xc] = zmm6_3.d
                rcx_16[0xd] = zmm15.d
                rcx_16[0xe] = zmm2_3.d
                int16_t rdx_16 = rcx_16[0x13].w | 0x10
                rcx_16[3] = zmm5_3.d
                
                if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                    rdx_16 |= 1
                    rcx_16[0x10] = *(r14 + 0xa4)
                    rcx_16[0x11] = *(r14 + 0xa8)
                else
                    *(rcx_16 + 0x4e) = 0x401
                    rcx_16[0x10] = *(r14 + 0x9c)
                    rcx_16[0x11] = r14[0xa].d
                    
                    if (not(zmm5_3.d f<= zmm8_3.d))
                        rdx_16 |= 8
                    
                    if (not(zmm8_3.d f>= *(r14 + 0x9c)))
                        rdx_16 |= 4
                
                rcx_16[0x13].w = rdx_16
                rcx_16[0xb] = 0
            
            zmm15 = var_268_3
            zmm5_3 = arg5.d
            zmm2_3 = arg_20
            zmm0_3 = var_260
        else
            zmm4_3 = *(r14 + 0x164)
            zmm0_3.d = zmm14.d f+ zmm13.d
            zmm3_3 = zmm4_3 ^ zmm9_3
            zmm6_3.d = zmm6_3.d f/ zmm0_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || not(zmm8_3.d f>= *(r14 + 0xa4)))
                zmm5_3 = zmm8_3
            
            zmm0_3.d = zmm5_3.d f+ zmm3_3.d
            
            if (not(zmm6_3.d f>= zmm0_3.d))
                zmm3_3.d = zmm3_3.d f- zmm6_3.d
                int32_t* rcx_13 = r15
                zmm2_3 = arg_20 ^ zmm9_3
                zmm1_3 = var_260 ^ zmm9_3
                zmm0_3 = var_230 ^ zmm9_3
                r15 = &r15[0x14]
                zmm3_3.d = zmm3_3.d f* -4f
                *(rcx_13 + 0x4e) = 0
                *rcx_13 = 0
                rcx_13[2] = 0
                rcx_13[4] = zmm2_3.d
                rcx_13[5] = zmm1_3.d
                rcx_13[6] = zmm0_3.d
                *(rcx_13 + 0x20) = 0
                rcx_13[0xa] = 0
                rcx_13[0xc] = zmm2_3.d
                rcx_13[0xd] = zmm1_3.d
                rcx_13[0xe] = zmm0_3.d
                int16_t rdx_13 = rcx_13[0x13].w | 0x10
                rcx_13[3] = zmm3_3.d
                var_1c8 = r15
                
                if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                    rdx_13 |= 1
                    rcx_13[0x10] = *(r14 + 0xa4)
                    rcx_13[0x11] = *(r14 + 0xa8)
                else
                    *(rcx_13 + 0x4e) = 0x401
                    rcx_13[0x10] = *(r14 + 0x9c)
                    rcx_13[0x11] = r14[0xa].d
                    
                    if (not(zmm3_3.d f<= zmm8_3.d))
                        rdx_13 |= 8
                    
                    if (not(zmm8_3.d f>= *(r14 + 0x9c)))
                        rdx_13 |= 4
                
                rcx_13[0x13].w = rdx_13
                rcx_13[0xb] = 0
            
            zmm2_3 = arg_20
            zmm0_3.d = zmm4_3.d f- zmm5_3.d
            bool cond:11_1 = zmm6_3.d f<= zmm0_3.d
            zmm0_3 = var_260
            
            if (cond:11_1)
                zmm5_3 = arg5.d
            else
                zmm1_3 = var_230
                zmm4_3.d = zmm4_3.d f- zmm6_3.d
                int32_t* rcx_14 = r15
                r15 = &r15[0x14]
                var_1c8 = r15
                zmm4_3.d = zmm4_3.d f* 4f
                *(rcx_14 + 0x4e) = 0
                *rcx_14 = 0
                rcx_14[2] = 0
                rcx_14[4] = zmm2_3.d
                rcx_14[5] = zmm0_3.d
                rcx_14[6] = zmm1_3.d
                *(rcx_14 + 0x20) = 0
                rcx_14[0xa] = 0
                rcx_14[0xc] = zmm2_3.d
                rcx_14[0xd] = zmm0_3.d
                rcx_14[0xe] = zmm1_3.d
                int16_t rdx_14 = rcx_14[0x13].w | 0x10
                rcx_14[3] = zmm4_3.d
                
                if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                    rdx_14 |= 1
                    rcx_14[0x10] = *(r14 + 0xa4)
                    rcx_14[0x11] = *(r14 + 0xa8)
                label_14280eadf:
                    rcx_14[0x13].w = rdx_14
                    rcx_14[0xb] = 0
                    zmm5_3 = arg5.d
                else
                    *(rcx_14 + 0x4e) = 0x401
                    rcx_14[0x10] = *(r14 + 0x9c)
                    rcx_14[0x11] = r14[0xa].d
                    
                    if (not(zmm4_3.d f<= zmm8_3.d))
                        rdx_14 |= 8
                    
                    if (zmm8_3.d f>= *(r14 + 0x9c))
                        goto label_14280eadf
                    
                    zmm5_3 = arg5.d
                    rcx_14[0x13].w = rdx_14 | 4
                    rcx_14[0xb] = 0
        
        if ((rax.b & 0x20) == 0)
            goto label_14280f225
        
        if ((r12.b & 0x10) == 0)
            zmm4_3 = var_230
            zmm3_3.d = zmm10_3.d f* zmm0_3.d
            zmm1_3.d = zmm12.d f* zmm4_3.d
            zmm0_3.d = zmm11_2.d f* zmm2_3.d
            zmm6_3.d = zmm12.d f* var_260
            zmm3_3.d = zmm3_3.d f+ zmm0_3.d
            zmm7_3.d = zmm11_2.d f* zmm4_3.d
            zmm0_3.d = zmm10_3.d f* zmm4_3.d
            zmm4_3 = *(r14 + 0x15c)
            zmm3_3.d = zmm3_3.d f+ zmm1_3.d
            zmm14.d = zmm10_3.d f* zmm2_3.d
            zmm6_3.d = zmm6_3.d f- zmm0_3.d
            zmm5_3 = zmm4_3 ^ zmm9_3
            zmm0_3.d = zmm12.d f* zmm2_3.d
            zmm6_3 ^= zmm9_3
            zmm7_3.d = zmm7_3.d f- zmm0_3.d
            zmm0_3.d = zmm11_2.d f* var_260
            zmm14.d = zmm14.d f- zmm0_3.d
            zmm7_3 ^= zmm9_3
            zmm0_3.d = zmm3_3.d f* zmm3_3.d
            zmm14 ^= zmm9_3
            zmm1_3.d = zmm13.d f- zmm0_3.d
            zmm1_3.d = zmm1_3.d f+ zmm13.d
            zmm3_3.d = zmm3_3.d f/ zmm1_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || not(zmm8_3.d f>= *(r14 + 0xa4)))
                zmm15 = zmm8_3
            
            zmm0_3.d = zmm5_3.d f+ zmm15.d
            
            if (not(zmm3_3.d f>= zmm0_3.d))
                int32_t* rcx_19 = r15
                zmm5_3.d = zmm5_3.d f- zmm3_3.d
                r15 = &r15[0x14]
                zmm2_3 = zmm6_3 ^ zmm9_3
                var_1c8 = r15
                *(rcx_19 + 0x4e) = 0
                zmm1_3 = zmm7_3 ^ zmm9_3
                zmm5_3.d = zmm5_3.d f* -2f
                zmm0_3 = zmm14 ^ zmm9_3
                *rcx_19 = 0
                rcx_19[2] = 0
                rcx_19[4] = zmm2_3.d
                rcx_19[5] = zmm1_3.d
                rcx_19[6] = zmm0_3.d
                *(rcx_19 + 0x20) = 0
                rcx_19[0xa] = 0
                rcx_19[0xc] = zmm2_3.d
                rcx_19[0xd] = zmm1_3.d
                rcx_19[0xe] = zmm0_3.d
                int16_t rdx_19 = rcx_19[0x13].w | 0x10
                rcx_19[3] = zmm5_3.d
                
                if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                    rdx_19 |= 1
                    rcx_19[0x10] = *(r14 + 0xa4)
                    rcx_19[0x11] = *(r14 + 0xa8)
                else
                    *(rcx_19 + 0x4e) = 0x401
                    rcx_19[0x10] = *(r14 + 0x9c)
                    rcx_19[0x11] = r14[0xa].d
                    
                    if (not(zmm5_3.d f<= zmm8_3.d))
                        rdx_19 |= 8
                    
                    if (not(zmm8_3.d f>= *(r14 + 0x9c)))
                        rdx_19 |= 4
                
                rcx_19[0x13].w = rdx_19
                rcx_19[0xb] = 0
            
            zmm0_3.d = zmm4_3.d f- zmm15.d
            
            if (zmm3_3.d f<= zmm0_3.d)
                goto label_14280f225
            
            rcx_12 = r15
            zmm4_3.d = zmm4_3.d f- zmm3_3.d
            r15 = &r15[0x14]
            var_1c8 = r15
            *(rcx_12 + 0x4e) = 0
            *rcx_12 = 0
            zmm4_3.d = zmm4_3.d f+ zmm4_3.d
            rcx_12[2] = 0
            rcx_12[4] = zmm6_3.d
            rcx_12[5] = zmm7_3.d
            rcx_12[6] = zmm14.d
            *(rcx_12 + 0x20) = 0
            rcx_12[0xa] = 0
            rcx_12[0xc] = zmm6_3.d
            rcx_12[0xd] = zmm7_3.d
            rcx_12[0xe] = zmm14.d
            rdx_12 = rcx_12[0x13].w | 0x10
            rcx_12[3] = zmm4_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                goto label_14280e86e
            
            cond:23_1 = zmm4_3.d f<= zmm8_3.d
            goto label_14280e82d
        
        zmm4_3 = *(r14 + 0x168)
        zmm14.d = zmm14.d f+ zmm13.d
        zmm3_3 = zmm4_3 ^ zmm9_3
        zmm7_3.d = zmm7_3.d f/ zmm14.d
        
        if (zmm8_3.d f< *(r14 + 0xa8) || not(zmm8_3.d f>= *(r14 + 0xa4)))
            zmm5_3 = zmm8_3
        
        zmm14 = arg_10
        zmm15 = arg7.d
        zmm0_3.d = zmm5_3.d f+ zmm3_3.d
        zmm6_3 = var_234
        
        if (not(zmm7_3.d f>= zmm0_3.d))
            int32_t* rcx_17 = r15
            zmm3_3.d = zmm3_3.d f- zmm7_3.d
            r15 = &r15[0x14]
            zmm2_3 = zmm14 ^ zmm9_3
            var_1c8 = r15
            *(rcx_17 + 0x4e) = 0
            zmm1_3 = zmm15 ^ zmm9_3
            zmm3_3.d = zmm3_3.d f* -4f
            zmm0_3 = zmm6_3 ^ zmm9_3
            *rcx_17 = 0
            rcx_17[2] = 0
            rcx_17[4] = zmm2_3.d
            rcx_17[5] = zmm1_3.d
            rcx_17[6] = zmm0_3.d
            *(rcx_17 + 0x20) = 0
            rcx_17[0xa] = 0
            rcx_17[0xc] = zmm2_3.d
            rcx_17[0xd] = zmm1_3.d
            rcx_17[0xe] = zmm0_3.d
            int16_t rdx_17 = rcx_17[0x13].w | 0x10
            rcx_17[3] = zmm3_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                rdx_17 |= 1
                rcx_17[0x10] = *(r14 + 0xa4)
                rcx_17[0x11] = *(r14 + 0xa8)
            else
                *(rcx_17 + 0x4e) = 0x401
                rcx_17[0x10] = *(r14 + 0x9c)
                rcx_17[0x11] = r14[0xa].d
                
                if (not(zmm3_3.d f<= zmm8_3.d))
                    rdx_17 |= 8
                
                if (not(zmm8_3.d f>= *(r14 + 0x9c)))
                    rdx_17 |= 4
            
            rcx_17[0x13].w = rdx_17
            rcx_17[0xb] = 0
        
        zmm0_3.d = zmm4_3.d f- zmm5_3.d
        
        if (zmm7_3.d f<= zmm0_3.d)
            zmm7_3 = 0x40800000
        else
            int32_t* rcx_18 = r15
            zmm4_3.d = zmm4_3.d f- zmm7_3.d
            zmm7_3 = 0x40800000
            r15 = &r15[0x14]
            var_1c8 = r15
            *(rcx_18 + 0x4e) = 0
            *rcx_18 = 0
            rcx_18[2] = 0
            rcx_18[4] = zmm14.d
            rcx_18[5] = zmm15.d
            rcx_18[6] = zmm6_3.d
            *(rcx_18 + 0x20) = 0
            rcx_18[0xa] = 0
            rcx_18[0xc] = zmm14.d
            rcx_18[0xd] = zmm15.d
            rcx_18[0xe] = zmm6_3.d
            zmm4_3.d = zmm4_3.d f* 4f
            int16_t rdx_18 = rcx_18[0x13].w | 0x10
            rcx_18[3] = zmm4_3.d
            
            if (zmm8_3.d f< *(r14 + 0xa8) || zmm8_3.d f< *(r14 + 0xa4))
                rcx_18[0x10] = *(r14 + 0xa4)
                rcx_18[0x11] = *(r14 + 0xa8)
                rcx_18[0x13].w = rdx_18 | 1
                rcx_18[0xb] = 0
            else
                *(rcx_18 + 0x4e) = 0x401
                rcx_18[0x10] = *(r14 + 0x9c)
                rcx_18[0x11] = r14[0xa].d
                
                if (not(zmm4_3.d f<= zmm8_3.d))
                    rdx_18 |= 8
                
                if (zmm8_3.d f>= *(r14 + 0x9c))
                    rcx_18[0x13].w = rdx_18
                    rcx_18[0xb] = 0
                else
                    rcx_18[0xb] = 0
                    rcx_18[0x13].w = rdx_18 | 4
    else
        zmm1_3 = *(r14 + 0x164)
        var_208 = (*(r14 + 0x168)).d
        int32_t var_200_3 = (*(r14 + 0x16c)).d
        int32_t var_204_3 = zmm1_3.d
        char rax_34
        rax_34, zmm8_3, zmm9_3, zmm10_3, zmm11_2, zmm12, zmm13 =
            sub_14280fe80(&var_208, &var_160, &var_220, &arg5)
        
        if (rax_34 == 0)
            goto label_14280f225
        
        rcx_12 = r15
        zmm15 = zmm11
        zmm14 = zmm10_1
        r15 = &r15[0x14]
        zmm5_3 = var_220
        zmm7_3.d = var_21c.d f* 2f
        *(rcx_12 + 0x4e) = 0
        zmm5_3.d = zmm5_3.d f* 2f
        *rcx_12 = 0
        zmm3_3.d = var_218.d f* 2f
        rcx_12[2] = 0
        zmm0_3.d = zmm7_3.d f* zmm15.d
        var_1c8 = r15
        zmm4_3.d = zmm5_3.d f* arg_8
        zmm2_3.d = zmm14.d f* zmm5_3.d
        zmm4_3.d = zmm4_3.d f+ zmm0_3.d
        zmm1_3.d = zmm14.d f* zmm3_3.d
        zmm6_3.d = zmm3_3.d f* zmm15.d
        zmm0_3.d = zmm14.d f* zmm7_3.d
        zmm4_3.d = zmm4_3.d f+ zmm1_3.d
        zmm6_3.d = zmm6_3.d f- zmm0_3.d
        zmm0_3.d = zmm6_2.d f* zmm5_3.d
        zmm5_3.d = zmm5_3.d f* zmm15.d
        zmm1_3.d = zmm4_3.d f* arg_8
        zmm6_3.d = zmm6_3.d f* var_264
        zmm14.d = zmm14.d f* zmm4_3.d
        zmm6_3.d = zmm6_3.d f+ zmm0_3.d
        zmm0_3.d = zmm3_3.d f* arg_8
        zmm2_3.d = zmm2_3.d f- zmm0_3.d
        zmm0_3.d = zmm6_2.d f* zmm7_3.d
        zmm6_3.d = zmm6_3.d f+ zmm1_3.d
        zmm7_3.d = zmm7_3.d f* arg_8
        zmm2_3.d = zmm2_3.d f* var_264
        rcx_12[4] = zmm6_3.d
        zmm7_3.d = zmm7_3.d f- zmm5_3.d
        zmm1_3.d = zmm4_3.d f* zmm15.d
        zmm2_3.d = zmm2_3.d f+ zmm0_3.d
        zmm0_3.d = zmm6_2.d f* zmm3_3.d
        zmm7_3.d = zmm7_3.d f* var_264
        zmm2_3.d = zmm2_3.d f+ zmm1_3.d
        zmm7_3.d = zmm7_3.d f+ zmm0_3.d
        zmm0_3 = arg5.d
        rcx_12[5] = zmm2_3.d
        zmm7_3.d = zmm7_3.d f+ zmm14.d
        rcx_12[6] = zmm7_3.d
        *(rcx_12 + 0x20) = 0
        rcx_12[0xa] = 0
        rcx_12[0xc] = zmm6_3.d
        rcx_12[0xd] = zmm2_3.d
        rcx_12[0xe] = zmm7_3.d
        rdx_12 = rcx_12[0x13].w | 0x10
        rcx_12[3] = zmm0_3.d
        
        if (not(zmm8_3.d f< *(r14 + 0xa8)) && not(zmm8_3.d f< *(r14 + 0xa4)))
            cond:23_1 = zmm0_3.d f<= zmm8_3.d
        label_14280e82d:
            *(rcx_12 + 0x4e) = 0x401
            rcx_12[0x10] = *(r14 + 0x9c)
            rcx_12[0x11] = r14[0xa].d
            
            if (not(cond:23_1))
                rdx_12 |= 8
            
            if (zmm8_3.d f>= *(r14 + 0x9c))
                goto label_14280e87f
            
            rcx_12[0x13].w = rdx_12 | 4
            rcx_12[0xb] = 0
            goto label_14280f225
        
    label_14280e86e:
        rdx_12 |= 1
        rcx_12[0x10] = *(r14 + 0xa4)
        rcx_12[0x11] = *(r14 + 0xa8)
    label_14280e87f:
        rcx_12[0x13].w = rdx_12
        rcx_12[0xb] = 0
    label_14280f225:
        zmm14 = arg_10
        zmm15 = arg7.d
        zmm7_3 = 0x40800000
    
    if ((rax.b & 8) != 0)
        zmm0_3.d = var_150:0xc.d.d f+ zmm13.d
        zmm5_3 = *(r14 + 0x178)
        zmm3_3 = *(r14 + 0x174)
        zmm4_3 = r14[0x17].d
        zmm6_3.d = var_150.d.d f/ zmm0_3.d
        
        if (zmm8_3.d f< *(r14 + 0x8c) || not(zmm8_3.d f>= *(r14 + 0x88)))
            zmm5_3 = zmm8_3
        
        zmm0_3.d = zmm5_3.d f+ zmm4_3.d
        
        if (not(zmm6_3.d f>= zmm0_3.d))
            int32_t* rcx_20 = r15
            zmm4_3.d = zmm4_3.d f- zmm6_3.d
            r15 = &r15[0x14]
            zmm2_3 = zmm11_2 ^ zmm9_3
            var_1c8 = r15
            *(rcx_20 + 0x4e) = 0
            zmm1_3 = zmm10_3 ^ zmm9_3
            zmm4_3.d = zmm4_3.d f* -4f
            zmm0_3 = zmm12 ^ zmm9_3
            *rcx_20 = 0
            rcx_20[2] = 0
            rcx_20[4] = zmm2_3.d
            rcx_20[5] = zmm1_3.d
            rcx_20[6] = zmm0_3.d
            *(rcx_20 + 0x20) = 0
            rcx_20[0xa] = 0
            rcx_20[0xc] = zmm2_3.d
            rcx_20[0xd] = zmm1_3.d
            rcx_20[0xe] = zmm0_3.d
            int16_t rdx_20 = rcx_20[0x13].w | 0x10
            rcx_20[3] = zmm4_3.d
            
            if (zmm8_3.d f< *(r14 + 0x8c) || zmm8_3.d f< *(r14 + 0x88))
                rdx_20 |= 1
                rcx_20[0x10] = *(r14 + 0x88)
                rcx_20[0x11] = *(r14 + 0x8c)
            else
                *(rcx_20 + 0x4e) = 0x401
                rcx_20[0x10] = r14[8].d
                rcx_20[0x11] = *(r14 + 0x84)
                
                if (not(zmm4_3.d f<= zmm8_3.d))
                    rdx_20 |= 8
                
                if (not(zmm8_3.d f>= r14[8].d))
                    rdx_20 |= 4
            
            rcx_20[0x13].w = rdx_20
            rcx_20[0xb] = 0
        
        zmm0_3.d = zmm3_3.d f- zmm5_3.d
        
        if (not(zmm6_3.d f<= zmm0_3.d))
            int32_t* rcx_21 = r15
            zmm3_3.d = zmm3_3.d f- zmm6_3.d
            r15 = &r15[0x14]
            var_1c8 = r15
            *(rcx_21 + 0x4e) = 0
            *rcx_21 = 0
            rcx_21[2] = 0
            rcx_21[4] = zmm11_2.d
            rcx_21[5] = zmm10_3.d
            rcx_21[6] = zmm12.d
            *(rcx_21 + 0x20) = 0
            rcx_21[0xa] = 0
            rcx_21[0xc] = zmm11_2.d
            rcx_21[0xd] = zmm10_3.d
            rcx_21[0xe] = zmm12.d
            zmm3_3.d = zmm3_3.d f* zmm7_3.d
            int16_t rdx_21 = rcx_21[0x13].w | 0x10
            rcx_21[3] = zmm3_3.d
            
            if (zmm8_3.d f< *(r14 + 0x8c) || zmm8_3.d f< *(r14 + 0x88))
                rcx_21[0x10] = *(r14 + 0x88)
                rcx_21[0x11] = *(r14 + 0x8c)
                rcx_21[0x13].w = rdx_21 | 1
                rcx_21[0xb] = 0
            else
                *(rcx_21 + 0x4e) = 0x401
                rcx_21[0x10] = r14[8].d
                rcx_21[0x11] = *(r14 + 0x84)
                
                if (not(zmm3_3.d f<= zmm8_3.d))
                    rdx_21 |= 8
                
                if (zmm8_3.d f>= r14[8].d)
                    rcx_21[0x13].w = rdx_21
                    rcx_21[0xb] = 0
                else
                    rcx_21[0xb] = 0
                    rcx_21[0x13].w = rdx_21 | 4

if ((rax.b & 7) != 0)
    zmm3_3 = zmm8_3
    zmm4_3 = zmm8_3
    zmm5_3 = zmm8_3
    
    if ((rax & 1) != 0)
        zmm0_3 = var_23c_1
        zmm3_3.d = var_1e0.d f* zmm0_3.d
        zmm4_3.d = var_1dc.d f* zmm0_3.d
        zmm5_3.d = var_1d8.d f* zmm0_3.d
    
    if ((rax & 2) != 0)
        zmm6_3 = zmm0_2
        zmm2_3.d = arg_20.d f* zmm6_3.d
        zmm1_3.d = var_260.d f* zmm6_3.d
        zmm0_3.d = var_230.d f* zmm6_3.d
        zmm3_3.d = zmm3_3.d f+ zmm2_3.d
        zmm4_3.d = zmm4_3.d f+ zmm1_3.d
        zmm5_3.d = zmm5_3.d f+ zmm0_3.d
    
    if ((rax & 4) != 0)
        zmm6_3 = arg6.d
        zmm2_3.d = zmm14.d f* zmm6_3.d
        zmm1_3.d = zmm15.d f* zmm6_3.d
        zmm0_3.d = var_234.d f* zmm6_3.d
        zmm3_3.d = zmm3_3.d f+ zmm2_3.d
        zmm4_3.d = zmm4_3.d f+ zmm1_3.d
        zmm5_3.d = zmm5_3.d f+ zmm0_3.d
    
    zmm2_3.d = zmm4_3.d f* zmm4_3.d
    zmm0_3.d = zmm3_3.d f* zmm3_3.d
    zmm1_3.d = zmm5_3.d f* zmm5_3.d
    zmm2_3.d = zmm2_3.d f+ zmm0_3.d
    zmm2_3.d = zmm2_3.d f+ zmm1_3.d
    zmm6_3 = _mm_sqrt_ss(zx.o(0).d, zmm2_3.d)
    
    if (not(zmm6_3.d f<= *(r14 + 0x17c)))
        zmm13.d = zmm13.d f/ zmm6_3.d
        zmm2_3.d = zmm13.d f* zmm3_3.d
        zmm3_3.d = zmm13.d f* zmm4_3.d
        zmm4_3 = *(r14 + 0x7c)
        zmm13.d = zmm13.d f* zmm5_3.d
        
        if (zmm8_3.d f< *(r14 + 0x74) || zmm8_3.d f< r14[7].d)
            zmm0_3 = zmm8_3
        else
            zmm0_3 = *(r14 + 0x78)
        
        zmm0_3.d = zmm0_3.d f+ zmm6_3.d
        
        if (not(zmm0_3.d f<= zmm4_3.d))
            zmm14 = var_1f8
            zmm4_3.d = zmm4_3.d f- zmm6_3.d
            zmm5_3 = var_1f4
            int32_t* rcx_22 = r15
            zmm7_3 = var_1f0
            zmm0_3.d = zmm5_3.d f* zmm3_3.d
            r15 = &r15[0x14]
            zmm1_3.d = zmm14.d f* zmm13.d
            *(rcx_22 + 0x4e) = 0
            *rcx_22 = zmm2_3.d
            rcx_22[1] = zmm3_3.d
            rcx_22[2] = zmm13.d
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            zmm5_3.d = zmm5_3.d f* zmm2_3.d
            var_1c8 = r15
            zmm0_3.d = zmm7_3.d f* zmm13.d
            rcx_22[4] = zmm1_3.d
            zmm7_3.d = zmm7_3.d f* zmm3_3.d
            zmm5_3.d = zmm5_3.d f- zmm0_3.d
            zmm14.d = zmm14.d f* zmm2_3.d
            zmm7_3.d = zmm7_3.d f- zmm14.d
            zmm14 = var_1ec
            rcx_22[5] = zmm5_3.d
            zmm5_3 = var_1e8
            zmm1_3.d = zmm14.d f* zmm13.d
            rcx_22[6] = zmm7_3.d
            zmm7_3 = var_1e4
            rcx_22[8] = zmm2_3.d
            rcx_22[9] = zmm3_3.d
            rcx_22[0xa] = zmm13.d
            zmm0_3.d = zmm5_3.d f* zmm3_3.d
            zmm5_3.d = zmm5_3.d f* zmm2_3.d
            zmm1_3.d = zmm1_3.d f- zmm0_3.d
            zmm14.d = zmm14.d f* zmm2_3.d
            zmm0_3 = zmm7_3
            zmm7_3.d = zmm7_3.d f* zmm3_3.d
            zmm0_3.d = zmm0_3.d f* zmm13.d
            rcx_22[0xc] = zmm1_3.d
            zmm7_3.d = zmm7_3.d f- zmm14.d
            zmm5_3.d = zmm5_3.d f- zmm0_3.d
            rcx_22[0xe] = zmm7_3.d
            rcx_22[0xd] = zmm5_3.d
            int16_t rdx_22 = rcx_22[0x13].w | 0x10
            rcx_22[3] = zmm4_3.d
            
            if (zmm8_3.d f< *(r14 + 0x74) || zmm8_3.d f< r14[7].d)
                rdx_22 |= 1
                rcx_22[0x10] = r14[7].d
                rcx_22[0x11] = *(r14 + 0x74)
            else
                *(rcx_22 + 0x4e) = 0x401
                rcx_22[0x10] = *(r14 + 0x68)
                rcx_22[0x11] = *(r14 + 0x6c)
                
                if (not(zmm4_3.d f<= zmm8_3.d))
                    rdx_22 |= 8
                
                if (not(zmm8_3.d f>= *(r14 + 0x68)))
                    rdx_22 |= 4
            
            rcx_22[0x13].w = rdx_22
            rcx_22[0xb] = 0

int32_t rax_80 = r12 & 0x38
int32_t* rax_81
int32_t* r15_1

if (rax_80 == 0x10)
    zmm6_3 = var_234
    rax_81 = r15
    zmm5_3 = arg7.d
    zmm4_3 = arg_10
    zmm0_3.d = zmm12.d f* zmm5_3.d
    r15_1 = &r15[0x14]
    zmm3_3.d = zmm10_3.d f* zmm6_3.d
    *(rax_81 + 0x4e) = 0x400
    *rax_81 = 0
    rax_81[2] = 0
    zmm3_3.d = zmm3_3.d f- zmm0_3.d
    zmm2_3.d = zmm12.d f* zmm4_3.d
    zmm1_3.d = zmm11_2.d f* zmm5_3.d
    zmm0_3.d = zmm11_2.d f* zmm6_3.d
    rax_81[4] = zmm3_3.d
    zmm2_3.d = zmm2_3.d f- zmm0_3.d
    zmm0_3.d = zmm10_3.d f* zmm4_3.d
    rax_81[5] = zmm2_3.d
    zmm1_3.d = zmm1_3.d f- zmm0_3.d
    rax_81[6] = zmm1_3.d
    *(rax_81 + 0x20) = 0
    rax_81[0xa] = 0
    rax_81[0xc] = zmm3_3.d
    rax_81[0xd] = zmm2_3.d
    rax_81[0xe] = zmm1_3.d
    rax_81[0x13].w |= 0x10
    r12 &= 0xffffffef
label_14280f820:
    zmm10_3.d = zmm10_3.d f* zmm5_3.d
    var_1c8 = r15_1
    zmm11_2.d = zmm11_2.d f* zmm4_3.d
    zmm12.d = zmm12.d f* zmm6_3.d
    zmm10_3.d = zmm10_3.d f+ zmm11_2.d
    zmm10_3.d = zmm10_3.d f+ zmm12.d
    rax_81[3] = (zmm10_3 ^ zmm9_3).d
else if (rax_80 == 0x20)
    zmm6_3 = var_230
    rax_81 = r15
    zmm5_3 = var_260
    zmm4_3 = arg_20
    zmm0_3.d = zmm12.d f* zmm5_3.d
    r12 &= 0xffffffdf
    zmm3_3.d = zmm10_3.d f* zmm6_3.d
    *(rax_81 + 0x4e) = 0x400
    r15_1 = &r15[0x14]
    *rax_81 = 0
    rax_81[2] = 0
    zmm3_3.d = zmm3_3.d f- zmm0_3.d
    zmm2_3.d = zmm12.d f* zmm4_3.d
    zmm1_3.d = zmm11_2.d f* zmm5_3.d
    zmm0_3.d = zmm11_2.d f* zmm6_3.d
    rax_81[4] = zmm3_3.d
    zmm2_3.d = zmm2_3.d f- zmm0_3.d
    zmm0_3.d = zmm10_3.d f* zmm4_3.d
    rax_81[5] = zmm2_3.d
    zmm1_3.d = zmm1_3.d f- zmm0_3.d
    rax_81[6] = zmm1_3.d
    *(rax_81 + 0x20) = 0
    rax_81[0xa] = 0
    rax_81[0xc] = zmm3_3.d
    rax_81[0xd] = zmm2_3.d
    rax_81[0xe] = zmm1_3.d
    rax_81[0x13].w |= 0x10
    goto label_14280f820
sub_142810290(&var_1d0, &var_100, &var_140, &var_110, r12 & 7, r12 u>> 3)
return (var_1c8 - var_1d0) s/ 0x50
