// 函数: sub_14166e0a0
// 地址: 0x14166e0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
float zmm13[0x4] = (*arg2)[0xb]
double zmm0[0x2] = arg3[1]
int32_t* r10 = arg1
int64_t r13 = 0
uint128_t* r14 = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f8 = zmm3[0]
double var_318[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t i_7 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t* var_2a8 = r10
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
double var_170[0x2] = data_142d3f7e0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
int32_t i_8 = i_7
float var_1d8[0x4]
int128_t* var_210 = &var_1d8
zmm13[0] = zmm13[0] * zmm13[0]
float* var_208 = &var_1f8
float var_1ec = temp0[0]
double temp0_1[0x2] = _mm_cvtps_pd(zmm13[0].q)
int32_t i_6 = i_8
float (* var_218)[0x4] = arg2
float zmm6[0x4] = *(arg10 + 4)
double zmm5[0x2] = *arg10
temp0_1[0] = temp0_1[0] - -0x3eb0c6f7a0b5ed8d
float zmm7[0x4] = *(arg10 + 8)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1f0 = temp0_2[0]
float temp0_3[0x4] = _mm_cvtpd_ps(temp0_1)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_1f4 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float var_2f4 = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
zmm6[0] = zmm6[0] f* r10[1]
float var_228[0x4] = temp0_8
zmm5[0].d = zmm5[0].d f* *r10
zmm7[0] = zmm7[0] f* r10[2]
float zmm4 = zmm6[0]
zmm6[0] = zmm6[0] f* r10[4]
zmm6[0] = zmm6[0] f+ zmm5[0].d
zmm4 = zmm4 f* r10[7]
zmm5[0].d = zmm5[0].d f* r10[3]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* r10[5]
zmm6[0] = zmm6[0] f+ zmm5[0].d
zmm5[0].d = zmm5[0].d f* r10[6]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* r10[8]
zmm4 = zmm4 f+ zmm5[0].d + zmm7[0]
int32_t rax_4

if (not(zmm6[0] < zmm6[0]) && not(zmm6[0] < zmm4))
    zmm0 = zx.o(*r10)
    rax_4 = r10[2]
else if (zmm6[0] < zmm6[0] || zmm6[0] < zmm4)
    zmm0 = zx.o(*(r10 + 0x18))
    rax_4 = r10[8]
else
    zmm0 = zx.o(*(r10 + 0xc))
    rax_4 = r10[5]

int64_t var_2d8 = zmm0.q
float var_308 = (zmm5 ^ 0x80000000)[0].d
float var_304 = (zmm6 ^ 0x80000000)[0]
float var_300 = (zmm7 ^ 0x80000000)[0]
int64_t var_130 = zmm0.q
int32_t var_128 = rax_4
void var_2f0
int32_t* rax_5
uint128_t zmm8
uint128_t zmm9_1
uint128_t zmm11_1
uint128_t zmm12_1
uint128_t zmm13_1
rax_5, zmm8, zmm9_1, zmm11_1, zmm12_1, zmm13_1 = sub_1417105f0(&var_218, &var_2f0, &var_308)
uint128_t zmm1_1 = var_318[0].d
uint128_t zmm10 = zx.o(0)
uint128_t zmm3_1 = var_318[0]:4.d
uint128_t zmm4_1 = var_318[1].d
uint128_t zmm14 = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
uint128_t zmm15 = zmm3_1
uint32_t result = zx.d(arg9)
uint128_t zmm0_1
zmm0_1.d = var_2d8.d.d f- zmm2_1.d
int32_t var_2a0 = zmm1_1.d
uint128_t zmm6_1 = zmm4_1
int64_t var_100 = zmm2_1.q
int32_t var_29c = zmm3_1.d
uint128_t zmm5_1
zmm5_1.d = zmm1_1.d f- zmm0_1.d
int32_t var_32c = zmm4_1.d
zmm1_1.d = var_2d8:4.d.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
uint32_t result_2 = zmm4_1.d
zmm0_1.d = rax_4.d f- rcx_1
int32_t var_f8 = rcx_1
int64_t var_2c8 = 0
uint128_t zmm7_1
zmm7_1.d = zmm3_1.d f- zmm1_1.d
int32_t var_2c0 = 0x3f800000
zmm3_1.d = zmm4_1.d f- zmm0_1.d
zmm0_1.d = zmm5_1.d f* zmm5_1.d
zmm2_1.d = zmm7_1.d f* zmm7_1.d
int32_t var_324 = zmm3_1.d
zmm1_1.d = zmm3_1.d f* zmm3_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int64_t rbx

if (zmm2_1.d f>= zmm12_1.d || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_2 = 0
int32_t var_328 = 0x7f7fffff
zmm12_1 = 0x7f7fffff
int32_t var_2f8 = 0
uint64_t r15 = zx.q(rbx.b)
char var_330 = 0
char var_338 = rbx.b
int32_t var_280
int64_t var_258
uint32_t result_1

if (rbx.b == 0)
    while (true)
        int32_t rax_6 = rcx_2
        rcx_2 += 1
        var_2f8 = rcx_2
        
        if (rax_6 s>= 0x20)
            zmm6_1 = var_32c
            result = zx.d(arg9)
        else
            zmm1_1.d = zmm3_1.d f* zmm3_1.d
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm2_1.d
            zmm8 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_1.d = zmm8.d f* zmm8.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm8.d f* zmm2_1.d
            zmm8.d = zmm8.d f+ zmm0_1.d
            zmm1_1.d = zmm8.d f* zmm8.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4_1.d = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm8.d f* zmm4_1.d
            zmm8.d = zmm8.d f+ zmm0_1.d
            int32_t var_2ac_1 = zmm8.d
            zmm12_1 = zmm8
            zmm11_1.d = zmm8.d f* zmm5_1.d
            zmm8.d = zmm8.d f* var_324
            zmm12_1.d = zmm12_1.d f* zmm7_1.d
            zmm0_1.d = zmm11_1.d f* *r10
            zmm1_1.d = zmm8.d f* r10[2]
            zmm2_1.d = zmm12_1.d f* r10[1]
            zmm3_1.d = zmm12_1.d f* r10[4]
            zmm4_1.d = zmm12_1.d f* r10[7]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm0_1.d = zmm11_1.d f* r10[3]
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm1_1.d = zmm8.d f* r10[5]
            zmm3_1.d = zmm3_1.d f+ zmm0_1.d
            zmm0_1.d = zmm11_1.d f* r10[6]
            zmm3_1.d = zmm3_1.d f+ zmm1_1.d
            zmm1_1.d = zmm8.d f* r10[8]
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int32_t rax_7
            
            if (not(zmm2_1.d f< zmm3_1.d) && not(zmm2_1.d f< zmm4_1.d))
                zmm0_1 = zx.o(*r10)
                rax_7 = r10[2]
            else if (zmm3_1.d f< zmm2_1.d || zmm3_1.d f< zmm4_1.d)
                zmm0_1 = zx.o(*(r10 + 0x18))
                rax_7 = r10[8]
            else
                zmm0_1 = zx.o(*(r10 + 0xc))
                rax_7 = r10[5]
            
            uint64_t var_2b8_1 = zmm0_1.q
            int32_t var_2d0_1 = rax_7.d
            int32_t var_27c_1 = (zmm12_1 ^ 0x80000000).d
            var_280 = (zmm11_1 ^ 0x80000000).d
            int32_t var_278_1 = (zmm8 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_8
            rax_8, zmm6_1, zmm7_1, zmm8, zmm9_1, zmm10, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
                sub_1417105f0(&var_218, &var_1bc, &var_280)
            zmm1_1 = zx.o(*rax_8)
            int32_t rcx_4 = rax_8[2]
            zmm2_1.d = zmm7_1.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm5_1.d = rax_7.d f- rcx_4
            (&var_184)[sx.q(i_8)] = i_8
            int64_t i_9 = sx.q(i_7)
            int32_t var_324_1 = zmm3_1.d
            zmm4_1.d = zmm15.d f- var_324_1
            zmm3_1.d = zmm14.d f- zmm2_1.d
            int32_t var_2ac_2 = zmm2_1.d
            int64_t rdi = i_9 * 3
            zmm2_1.d = var_32c.d f- zmm5_1.d
            *(&var_130 + (rdi << 2)) = (_mm_unpacklo_ps(zmm7_1, zmm6_1.q)).q
            int32_t var_304_1 = zmm4_1.d
            zmm4_1.d = zmm4_1.d f* zmm12_1.d
            (&var_128)[rdi] = var_2d0_1
            result = rax_8[2]
            var_308 = zmm3_1.d
            zmm3_1.d = zmm3_1.d f* zmm11_1.d
            i_6 = i_9.d
            var_300 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm8.d
            zmm4_1.d = zmm4_1.d f+ zmm3_1.d
            *(&var_100 + (rdi << 2)) = zmm1_1.q
            (&var_f8)[rdi] = result
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1.d f<= zmm13_1.d)
                i_9 = zx.q(i_9.d + 1)
                *(&var_160 + (rdi << 2)) = var_308.q
                *(&var_160:8 + (rdi << 2)) = var_300
                i_6 = i_9.d
                i_7 = i_9.d
            label_14166e940:
                zmm12_1 = var_328
                zmm6_1 = var_32c
                
                if (r15.b != 0 && not(zmm4_1.d f< zmm9_1.d))
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                    rbx.b = zmm4_1.d f>= zmm12_1.d
            else
                zmm3_1 = *(r14 + 4)
                zmm6_1 = *r14
                zmm7_1 = *(r14 + 8)
                zmm2_1.d = zmm6_1.d f* zmm11_1.d
                zmm0_1.d = zmm3_1.d f* zmm12_1.d
                zmm1_1.d = zmm7_1.d f* zmm8.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9_1.d)
                    result.b = 0
                    goto label_14166f3e6
                
                zmm1_1 = zmm10
                zmm0_1.d = zmm4_1.d f- zmm13_1.d
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm10.d = zmm10.d f- zmm0_1.d
                
                if (zmm10.d f<= zmm1_1.d)
                    goto label_14166e940
                
                if (zmm10.d f> arg5)
                    result.b = 0
                    goto label_14166f3e6
                
                zmm1_1 = zx.o(var_2a0.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_258 = zmm1_1.q
                zmm14.d = zmm6_1.d f* zmm10.d
                i_9 = zx.q(i_9.d + 1)
                result_1 = result_2
                zmm15.d = zmm3_1.d f* zmm10.d
                i_6 = i_9.d
                zmm14.d = zmm14.d f+ var_318[0].d
                zmm6_1.d = zmm7_1.d f* zmm10.d
                i_7 = i_9.d
                zmm15.d = zmm15.d f+ var_318[0]:4.d
                var_2c8:4.d = zmm12_1.d
                zmm6_1.d = zmm6_1.d f+ var_318[1].d
                zmm12_1 = 0x7f7fffff
                zmm3_1.d = zmm14.d f- zmm1_1.d
                var_2a0 = zmm14.d
                zmm4_1.d = zmm15.d f- zmm0_1.d
                int32_t var_29c_1 = zmm15.d
                zmm2_1.d = zmm6_1.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                var_32c = zmm6_1.d
                result_2 = zmm6_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_2c8.d = zmm11_1.d
                var_2c0 = zmm8.d
                var_328 = 0x7f7fffff
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_338 = 0
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1.d = var_150_1.d.d f+ zmm4_1.d
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm4_1.d
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm14.d f- var_2ac_2
                zmm2_1.d = zmm15.d f- var_324_1
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm6_1.d f- zmm5_1.d
                *(&var_160 + (rdi << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rdi << 2)) = zmm0_1.d
            
            uint32_t rdx_8
            
            if (rbx.b != 0)
                int64_t* rax_22
                rax_22, zmm6_1, zmm9_1, zmm10, zmm12_1, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_228, &var_160, &i_7, &var_170, &var_130, &var_100)
                r10 = var_2a8
                rdx_8 = zx.d(var_330)
                zmm1_1 = zx.o(*rax_22)
                zmm3_1 = rax_22[1].d
                i_6 = i_7
                zmm7_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                result = zx.d(arg9)
                zmm5_1 = zmm1_1.d
                var_324 = zmm3_1.d
            label_14166ed82:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
            else
                int32_t var_2dc_1
                
                if (i_9.d == 1)
                    int64_t rax_18 = sx.q(var_184)
                    int64_t rcx_11 = rax_18 * 3
                    *(&var_170 + (rax_18 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_11 << 2)))
                    var_2dc_1 = *(&var_160:8 + (rcx_11 << 2))
                else
                    uint64_t* rax_15
                    
                    if (i_9.d == 2)
                        void var_198
                        rax_15, zmm6_1, zmm9_1 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &i_7, &var_170)
                    label_14166e9c0:
                        zmm0_1 = zx.o(*rax_15)
                        r10 = var_2a8
                        var_2dc_1 = rax_15[1].d
                        i_6 = i_7
                    else
                        if (i_9.d == 3)
                            uint64_t var_1a4
                            rax_15, zmm6_1, zmm9_1, zmm10, zmm12_1, zmm13_1, zmm14, zmm15 =
                                sub_1416fa750(&var_1a4, &var_160, &i_7, &var_170)
                            goto label_14166e9c0
                        
                        if (i_9.d == 4)
                            uint64_t var_1b0
                            rax_15, zmm6_1, zmm9_1, zmm10, zmm12_1, zmm13_1, zmm14, zmm15 =
                                sub_1416f9c90(&var_1b0, &var_160, &i_7, &var_170)
                            goto label_14166e9c0
                        
                        int32_t var_2e8_1 = 0
                        zmm0_1 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
                        var_2dc_1 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                rbx = sx.q(var_184)
                int32_t var_180
                int64_t r11_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                uint64_t var_2e4_1 = zmm0_1.q
                int64_t rsi_1 = rdi_1 * 3
                int64_t r12_1 = rbx * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r9_3 * 3
                int32_t r8_5 = *(&var_160:8 + (r12_1 << 2))
                zmm5_1 = var_2e4_1.d
                zmm7_1 = var_2e4_1:4.d
                var_160:0xc.q = *(&var_160 + (r15 << 2))
                var_140_1:4.q = *(&var_160 + (rsi_1 << 2))
                var_150_1:8.q = *(&var_160 + (r14_1 << 2))
                var_160.q = *(&var_160 + (r12_1 << 2))
                int32_t rdi_2 = (&var_128)[r12_1]
                var_170[1].d = (*(&var_170 + (r9_3 << 2))).d
                var_170[0].d = (*(&var_170 + (rbx << 2))).d
                var_170[0]:4.d = (*(&var_170 + (r11_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2))).d
                var_150_1:4.d = *(&var_160:8 + (r15 << 2))
                int32_t rdx_7 = (&var_128)[r15]
                var_140_1 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_13 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rax_20 = (&var_128)[rsi_1]
                var_124_1.q = *(&var_130 + (r15 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r15 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rsi_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (r14_1 << 2))
                zmm1_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                var_130 = *(&var_130 + (r12_1 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r12_1 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_7
                rdx_8 = (&var_f8)[r15]
                var_114_1:4.d = rcx_13
                int32_t rcx_14 = (&var_f8)[r14_1]
                int32_t var_104_1 = rax_20
                int32_t rax_21 = (&var_f8)[rsi_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_f4_1:0xc.q = zmm1_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm7_1.d f* zmm7_1.d
                var_f8 = (&var_f8)[r12_1]
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                var_f4_1:8.d = rdx_8
                var_100 = zmm3_1.q
                zmm3_1 = var_2dc_1
                var_324 = zmm3_1.d
                zmm1_1.d = zmm3_1.d f* zmm3_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_e4_1:4.d = rcx_14
                int32_t var_d4_1 = rax_21
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm1_1 = var_2f4
                result = zx.d(arg9)
                rbx.b = zmm1_1.d f> zmm2_1.d
                bool cond:6_1 = zmm2_1.d f>= zmm12_1.d
                var_328 = zmm2_1.d
                zmm12_1 = zmm2_1
                rdx_8.b = cond:6_1
                var_330 = rdx_8.b
                
                if (result.b == 0)
                    goto label_14166ed82
                
                if (rbx.b == 0)
                    goto label_14166ed8f
                
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                
                if (zmm10.d f!= zmm9_1.d)
                    goto label_14166ed8b
                
                zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                
                if (not(zmm0_1.q f<= zmm11_1.q))
                    zmm0_1 = _mm_cvtps_pd(zmm1_1.q)
                    
                    if (not(zmm0_1.q f<= zmm11_1.q) && i_6 s< 4)
                        r15.b = 1
                        rbx.b = 0
                        var_338 = 1
                        goto label_14166ed95
            
        label_14166ed8b:
            
            if (rbx.b != 0)
                rcx_2 = var_2f8
            else
            label_14166ed8f:
                r15 = zx.q(var_338)
            label_14166ed95:
                zmm11_1 = 0x3eb0c6f7a0b5ed8d
                rcx_2 = var_2f8
                
                if (rdx_8.b == 0)
                    i_8 = i_6
                    r14 = arg4
                    continue
        
        zmm8 = 0x80000000
        zmm1_1 = 0x7f7fffff
        break

int32_t* rdi_4 = arg6
*rdi_4 = zmm10.d

if (not(zmm10.d f<= zmm9_1.d))
    zmm4_1 = zmm9_1
    zmm3_1 = zmm9_1
    *arg8 = var_2c8
    arg8[1].d = var_2c0
    uint64_t i_3 = zx.q(i_6)
    
    if (i_3.d s> 0)
        int128_t* rdx_10 = &var_170
        int32_t* rcx_16 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rdx_10
            rdx_10 += 4
            zmm0_1.d = zmm2_1.d f* rcx_16[-2]
            zmm1_1.d = zmm2_1.d f* rcx_16[-1]
            zmm2_1.d = zmm2_1.d f* *rcx_16
            rcx_16 = &rcx_16[3]
            zmm9_1.d = zmm9_1.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    zmm0_1.d = zmm13_1.d f* *arg8
    zmm1_1.d = zmm10.d f* *arg4
    zmm9_1.d = zmm9_1.d f- zmm0_1.d
    zmm0_1.d = zmm13_1.d f* *(arg8 + 4)
    zmm1_1.d = zmm1_1.d f+ var_318[0].d
    zmm13_1.d = zmm13_1.d f* arg8[1].d
    zmm4_1.d = zmm4_1.d f- zmm0_1.d
    zmm9_1.d = zmm9_1.d f+ zmm1_1.d
    zmm1_1.d = zmm10.d f* *(arg4 + 4)
    zmm3_1.d = zmm3_1.d f- zmm13_1.d
    zmm10.d = zmm10.d f* *(arg4 + 8)
    zmm1_1.d = zmm1_1.d f+ var_318[0]:4.d
    zmm10.d = zmm10.d f+ var_318[1].d
    zmm4_1.d = zmm4_1.d f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm10.d
    *arg7 = (_mm_unpacklo_ps(zmm9_1, zmm4_1.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9_1.d))
        zmm0_1 = _mm_cvtps_pd(zmm12_1.q)
    
    if (zmm13_1.d f<= zmm9_1.d || zmm0_1.q f<= zmm11_1.q || zmm12_1.d f>= zmm1_1.d)
        var_170[0] = 0
        var_170[1] = 0
        var_318[0] = 0
        var_318[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_318[1]:4.d s< 8)
            sub_14083ad30(&var_318, 8)
        
        float rax_40
        float zmm0_2[0x4]
        
        if (var_2f8 == 0)
            int32_t var_2e8_5 = 0x3f800000
            rax_40 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
        label_14166f37c:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_4 = (zmm13_1 ^ zmm8).d
            *arg8 = zmm0_2.q
            zmm0_2 = var_128
            arg8[1].d = rax_40
            zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2_1.q)
            result = zmm0_2[0]
            *arg7 = zmm1_1.q
        else
            if (i_6 s> 0)
                uint64_t i_5 = zx.q(i_6)
                uint64_t i_1
                
                do
                    int64_t rdi_5 = sx.q(var_170[1].d)
                    int32_t rax_33 = (rdi_5 + 1).d
                    var_170[1].d = rax_33
                    
                    if (rax_33 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_21 = var_170[0]
                    int64_t rdx_12 = rdi_5 * 3
                    int32_t rax_34 = *(&var_128 + r13)
                    zmm1_1.d = zmm15.d f+ *(&var_100:4 + r13)
                    *(rcx_21 i+ (rdx_12 << 2)) = *(&var_130 + r13)
                    zmm0_2 = zmm14
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_100 + r13)
                    *(rcx_21 i+ (rdx_12 << 2) + 8) = rax_34
                    int64_t rdi_6 = sx.q(var_318[1].d)
                    int32_t var_304_2 = zmm1_1.d
                    var_308 = zmm0_2[0]
                    zmm0_2 = zmm6_1
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_f8 + r13)
                    int32_t rax_35 = (rdi_6 + 1).d
                    var_318[1].d = rax_35
                    var_300 = zmm0_2[0]
                    
                    if (rax_35 s> var_318[1]:4.d)
                        sub_14083a7e0(&var_318)
                    
                    double rcx_23 = var_318[0]
                    int64_t rdx_14 = rdi_6 * 3
                    r13 += 0xc
                    *(rcx_23 i+ (rdx_14 << 2)) = var_308.q
                    *(rcx_23 i+ (rdx_14 << 2) + 8) = var_300
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_4 = arg6
            
            var_218 = &var_1d8
            float (* var_210_1)[0x4] = arg2
            int128_t* var_208_1 = arg3
            int32_t rax_39
            rax_39, zmm8, zmm13_1 = sub_1415611d0(&var_170, &var_318, &var_2a8, &var_218, &var_2f4, 
                &var_308, &var_258, &var_228)
            zmm0_2 = zx.o(var_308.q)
            rax_40 = var_300
            
            if (rax_39 == 2)
                goto label_14166f37c
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_40
            zmm0_2 = var_2f4 ^ zmm8
            result = result_1
            zmm0_2[0] = zmm0_2[0] f- zmm13_1.d
            *rdi_4 = zmm0_2[0]
            *arg7 = var_258
        double rcx_25 = var_318[0]
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        double rcx_26 = var_170[0]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        zmm3_1 = zmm9_1
        zmm4_1 = zmm9_1
        *arg8 = var_2c8
        zmm5_1 = zmm9_1
        arg8[1].d = var_2c0
        zmm11_1 = zmm9_1
        zmm12_1 = zmm9_1
        zmm10 = zmm9_1
        
        if (rcx_2 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_29 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_30 = var_f8
            zmm5_1 = rax_29
            zmm12_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10 = rax_30
            zmm3_1 = zmm1_1.d
            var_280.q = zmm2_1.q
            zmm11_1 = var_280
        else if (i_6 s> 0)
            int128_t* rcx_17 = &var_170
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_2
            
            do
                zmm2_1 = *rcx_17
                rcx_17 += 4
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r13)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r13)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_128 + r13)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r13)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_100:4 + r13)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r13)
                zmm11_1.d = zmm11_1.d f+ zmm1_1.d
                r13 += 0xc
                zmm12_1.d = zmm12_1.d f+ zmm0_1.d
                zmm10.d = zmm10.d f+ zmm2_1.d
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        zmm14 = var_318[0].d
        zmm6_1.d = var_318[1].d.d f+ zmm10.d
        zmm15 = var_318[0]:4.d
        zmm8.d = zmm14.d f+ zmm11_1.d
        zmm7_1.d = zmm15.d f+ zmm12_1.d
        zmm6_1.d = zmm6_1.d f- zmm5_1.d
        zmm8.d = zmm8.d f- zmm3_1.d
        zmm7_1.d = zmm7_1.d f- zmm4_1.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm0_1.d = zmm8.d f* zmm8.d
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_1.d = zmm4_1.d f* zmm4_1.d
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = zmm4_1.d f* zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm1_1.d = zmm4_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5_1.d = 0.5f f- zmm3_1.d
        zmm0_1.d = zmm4_1.d f* zmm5_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm1_1.d = zmm4_1.d f* zmm7_1.d
        zmm0_1.d = zmm4_1.d f* zmm8.d
        zmm4_1.d = zmm4_1.d f* zmm6_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1.q)
        *arg8 = zmm0_1.q
        int32_t var_2e8_3 = zmm4_1.d
        zmm1_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1.d, var_328).d
        arg8[1].d = var_2e8_3
        
        if (not(zmm1_1.d f< zmm9_1.d))
            zmm9_1 = __minss_xmmss_memss(zmm1_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = arg8[1].d
        zmm0_1.d = zmm1_1.d f* zmm13_1.d
        zmm1_1.d = zmm1_1.d f* zmm9_1.d
        zmm11_1.d = zmm11_1.d f- zmm0_1.d
        zmm0_1.d = zmm2_1.d f* zmm13_1.d
        zmm2_1.d = zmm2_1.d f* zmm9_1.d
        zmm12_1.d = zmm12_1.d f- zmm0_1.d
        zmm0_1.d = zmm3_1.d f* zmm13_1.d
        zmm11_1.d = zmm11_1.d f+ zmm14.d
        zmm3_1.d = zmm3_1.d f* zmm9_1.d
        zmm9_1 ^= data_142d3f780
        zmm10.d = zmm10.d f- zmm0_1.d
        zmm12_1.d = zmm12_1.d f+ zmm15.d
        zmm11_1.d = zmm11_1.d f+ zmm1_1.d
        zmm10.d = zmm10.d f+ var_318[1].d
        zmm12_1.d = zmm12_1.d f+ zmm2_1.d
        zmm10.d = zmm10.d f+ zmm3_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11_1, zmm12_1.q)).q
        arg7[1].d = zmm10.d
        *rdi_4 = zmm9_1.d

result.b = 1
label_14166f3e6:
__security_check_cookie(rax_1 ^ &var_378)
return result
