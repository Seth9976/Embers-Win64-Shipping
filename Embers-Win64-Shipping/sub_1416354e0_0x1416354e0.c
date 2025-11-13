// 函数: sub_1416354e0
// 地址: 0x1416354e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t r12 = 0
int32_t var_344 = 0
float zmm3[0x4] = *arg3
double (* r14)[0x2] = arg4
float zmm12[0x4] = *(arg1 + 0x2c)
double zmm0[0x2] = arg3[1]
float var_208 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
double var_338[0x2] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
void* var_258 = arg1
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
double var_170[0x2] = data_142d3f7e0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_1fc = temp0[0]
zmm12[0] = zmm12[0] * zmm12[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_1[0x2] = _mm_cvtps_pd(zmm12[0].q)
float var_1d8[0x4]
int128_t* var_230 = &var_1d8
int32_t* var_228 = &var_208
float (* var_238)[0x4] = arg2
temp0_1[0] = temp0_1[0] + 9.9999999999999995e-07
double zmm8[0x2] = *(arg10 + 4)
float zmm7[0x4] = *arg10
float zmm10[0x4] = *(arg10 + 8)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm0 = _mm_cvtpd_ps(temp0_1)
float var_200 = temp0_2[0]
int32_t var_2e8 = zmm0[0].d
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int32_t var_204 = zmm0[0].d
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
float zmm4 = *(arg1 + 0x20)
float zmm5 = *(arg1 + 0x24)
float var_248[0x4] = temp0_8
zmm3 = *(arg1 + 0x1c)
zmm7[0] = zmm7[0] * zmm3[0]
zmm8[0].d = zmm8[0].d f* zmm4
zmm10[0] = zmm10[0] * zmm5
zmm7[0] = zmm7[0] f+ zmm8[0].d
zmm7[0] = zmm7[0] + zmm10[0]
float var_360
int64_t var_308
float* rdx
int32_t rdi

if (zmm7[0] < 0f)
    rdx = &var_308
    int32_t rax_5 = *(arg1 + 0x18)
    rdi = 2
    var_308 = *(arg1 + 0x10)
    int32_t var_300_1 = rax_5
else
    zmm0 = *(arg1 + 0x28)
    rdx = &var_360
    zmm3[0] = zmm3[0] f* zmm0[0].d
    rdi = 1
    zmm4 = zmm4 f* zmm0[0].d
    zmm3[0] = zmm3[0] f+ *(arg1 + 0x10)
    zmm4 = zmm4 f+ *(arg1 + 0x14)
    zmm5 = zmm5 f* zmm0[0].d f+ *(arg1 + 0x18)
    var_360 = zmm3[0]
    float var_35c_1 = zmm4
    float var_358_1 = zmm5

int32_t rax_6 = rdx[2]
int32_t rcx_1 = rdi & 0xfffffffd
int64_t var_130 = *rdx

if ((rdi.b & 2) == 0)
    rcx_1 = rdi

int32_t rsi_1 = rcx_1 & 0xfffffffe
int32_t rax_9 = rdx[2]

if ((rcx_1.b & 1) == 0)
    rsi_1 = rcx_1

var_360 = (zmm7 ^ 0x80000000)[0]
int32_t var_35c_2 = (zmm8 ^ 0x80000000)[0].d
float var_358_2 = (zmm10 ^ 0x80000000)[0]
int32_t var_128 = rax_9
int32_t var_324
int32_t* rax_10
double zmm6_1[0x2]
double zmm9[0x2]
double zmm12_1[0x2]
uint128_t zmm13
rax_10, zmm6_1, zmm9, zmm12_1, zmm13 = sub_14170c1c0(&var_238, &var_324, &var_360)
double zmm1_1[0x2] = var_338[0].d
double zmm5_1[0x2] = var_338[1].d
double zmm3_1[0x2] = zmm1_1
uint128_t zmm4_1 = var_338[0]:4.d
double zmm14[0x2] = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_10)
int32_t rcx_3 = rax_10[2]
zmm6_1[0].d = zmm6_1[0].d f- zmm2_1.d
int32_t var_2d8 = zmm1_1[0].d
double zmm11[0x2] = zmm5_1
int64_t var_100 = zmm2_1.q
zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
uint32_t result = zx.d(arg9)
uint128_t zmm8_1 = zx.o(0)
zmm3_1[0].d = zmm3_1[0].d f- zmm6_1[0].d
double zmm0_1[0x2] = zmm2_1
int32_t var_2d4 = zmm4_1.d
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
uint128_t zmm15 = zmm4_1
zmm1_1[0].d = zmm1_1[0].d f- zmm0_1[0].d
int32_t var_350 = zmm5_1[0].d
zmm0_1 = rax_6
uint128_t zmm7_1 = zmm5_1
zmm0_1[0].d = zmm0_1[0].d f- rcx_3
uint32_t result_2 = zmm5_1[0].d
int32_t var_348 = zmm3_1[0].d
uint128_t zmm10_1
zmm10_1.d = zmm4_1.d f- zmm1_1[0].d
int32_t var_f8 = rcx_3
int64_t var_2f8 = 0
zmm11[0].d = zmm11[0].d f- zmm0_1[0].d
int32_t var_2f0 = 0x3f800000
zmm3_1[0].d = zmm3_1[0].d f* zmm3_1[0].d
zmm2_1.d = zmm10_1.d f* zmm10_1.d
zmm11[0].d = zmm11[0].d f* zmm11[0].d
zmm2_1.d = zmm2_1.d f+ zmm3_1[0].d
zmm2_1.d = zmm2_1.d f+ zmm11[0].d

if (zmm2_1.d f>= var_2e8 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_4 = 0
int32_t var_34c = 0x7f7fffff
zmm6_1 = 0x7f7fffff
int32_t var_328 = 0
uint64_t r15 = zx.q(rdi.b)
char var_367 = 0
char var_368 = rdi.b
int32_t var_2c8
int64_t var_2a8
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_11 = rcx_4
        rcx_4 += 1
        var_328 = rcx_4
        
        if (rax_11 s>= 0x20)
            zmm7_1 = var_350
            result = zx.d(arg9)
        else
            zmm5_1 = 0x3f000000
            void* rax_12 = var_258
            zmm0_1 = zmm10_1
            zmm2_1.d = zmm3_1.d f* zmm3_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm10_1.d
            zmm11[0].d = zmm11[0].d f* zmm11[0].d
            zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm11[0].d
            zmm3_1 = zmm2_1
            zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0].d)
            zmm3_1[0].d = zmm3_1[0].d f* 0.5f
            zmm0_1 = zmm4_1
            zmm0_1[0].d = zmm0_1[0].d f* zmm4_1.d
            zmm3_1[0].d = zmm3_1[0].d f* zmm0_1[0].d
            zmm0_1 = zmm4_1
            zmm2_1.d = 0.5f f- zmm3_1[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1[0].d
            zmm1_1 = zmm4_1
            zmm0_1 = zmm4_1
            zmm1_1[0].d = zmm1_1[0].d f* zmm4_1.d
            zmm3_1[0].d = zmm3_1[0].d f* zmm1_1[0].d
            zmm5_1[0].d = 0.5f f- zmm3_1[0].d
            zmm3_1 = *(rax_12 + 0x1c)
            zmm0_1[0].d = zmm0_1[0].d f* zmm5_1[0].d
            zmm5_1 = *(rax_12 + 0x24)
            zmm4_1.d = zmm4_1.d f+ zmm0_1[0].d
            zmm10_1.d = zmm10_1.d f* zmm4_1.d
            zmm13.d = zmm4_1.d f* var_348
            zmm11[0].d = zmm11[0].d f* zmm4_1.d
            zmm2_1.d = zmm3_1.d f* zmm13.d
            var_344 = zmm4_1.d
            zmm4_1 = *(rax_12 + 0x20)
            zmm0_1 = zmm4_1
            zmm5_1[0].d = zmm5_1[0].d f* zmm11[0].d
            zmm0_1[0].d = zmm0_1[0].d f* zmm10_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
            zmm2_1.d = zmm2_1.d f+ zmm5_1[0].d
            int32_t* rax_13
            int32_t rcx_5
            
            if (zmm2_1.d f< zmm9[0].d)
                rcx_5 = 8
                int32_t var_1e0_1 = *(rax_12 + 0x18)
                int64_t var_1e8
                rax_13 = &var_1e8
                var_1e8 = *(rax_12 + 0x10)
            else
                zmm0_1 = *(rax_12 + 0x28)
                rcx_5 = 4
                zmm3_1[0].d = zmm3_1[0].d f* zmm0_1[0].d
                zmm4_1.d = zmm4_1.d f* zmm0_1[0].d
                zmm3_1[0].d = zmm3_1[0].d f+ *(rax_12 + 0x10)
                zmm5_1[0].d = zmm5_1[0].d f* zmm0_1[0].d
                zmm4_1.d = zmm4_1.d f+ *(rax_12 + 0x14)
                zmm5_1[0].d = zmm5_1[0].d f+ *(rax_12 + 0x18)
                int32_t var_220 = zmm3_1[0].d
                rax_13 = &var_220
                int32_t var_21c_1 = zmm4_1.d
                int32_t var_218_1 = zmm5_1[0].d
            
            int32_t rax_15 = rax_13[2]
            int32_t rsi_2 = rsi_1 | rcx_5
            int32_t rcx_7 = rsi_2 & 0xfffffff7
            int32_t var_280_1 = rax_15[0].d
            uint64_t var_278_1 = *rax_13
            
            if ((rsi_2.b & 8) == 0)
                rcx_7 = rsi_2
            
            int32_t rdx_3 = rcx_7 & 0xfffffffb
            var_2c8 = (zmm13 ^ 0x80000000)[0].d
            
            if ((rcx_7.b & 4) == 0)
                rdx_3 = rcx_7
            
            int32_t var_2c4_1 = (zmm10_1 ^ 0x80000000)[0].d
            var_344 = rdx_3
            int32_t var_2c0_1 = (zmm11 ^ 0x80000000)[0].d
            int32_t var_1bc
            int32_t* rax_18
            rax_18, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                sub_14170c1c0(&var_238, &var_1bc, &var_2c8)
            zmm5_1 = rax_15
            zmm1_1 = zx.o(*rax_18)
            zmm2_1.d = zmm7_1.d f- zmm1_1[0].d
            zmm5_1[0].d = zmm5_1[0].d f- rax_18[2]
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            zmm6_1[0].d = zmm6_1[0].d f- zmm0_1[0].d
            int32_t var_2b8_1 = zmm2_1.d
            zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1[0])
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            int32_t var_348_1 = zmm6_1[0].d
            zmm4_1.d = zmm15.d f- var_348_1
            zmm14[0].d = zmm14[0].d f- zmm2_1.d
            zmm2_1.d = var_350.d f- zmm5_1[0].d
            uint64_t rcx_11 = r13 * 3
            int32_t var_35c_3 = zmm4_1.d
            zmm4_1.d = zmm4_1.d f* zmm10_1.d
            var_360 = zmm14[0].d
            zmm14[0].d = zmm14[0].d f* zmm13.d
            var_358_2 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm11[0].d
            zmm4_1.d = zmm4_1.d f+ zmm14[0].d
            *(&var_130 + (rcx_11 << 2)) = zmm0_1.q
            (&var_128)[rcx_11] = var_280_1
            result = rax_18[2]
            *(&var_100 + (rcx_11 << 2)) = zmm1_1.q
            (&var_f8)[rcx_11] = result
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1.d f<= zmm12_1[0].d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_11 << 2)) = var_360.q
                *(&var_160:8 + (rcx_11 << 2)) = var_358_2
                var_188 = r13.d
            label_141635da8:
                zmm6_1 = var_34c
                zmm7_1 = var_350
                
                if (r15.b != 0 && not(zmm4_1.d f< zmm9[0].d))
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                    rdi.b = zmm4_1.d f>= zmm6_1[0].d
            else
                zmm3_1 = *(r14 + 4)
                zmm6_1 = *r14
                zmm7_1 = (*r14)[1].d
                zmm2_1.d = zmm6_1.d f* zmm13.d
                zmm1_1 = zmm7_1
                zmm3_1[0].d = zmm3_1[0].d f* zmm10_1.d
                zmm1_1[0].d = zmm1_1[0].d f* zmm11[0].d
                zmm2_1.d = zmm2_1.d f+ zmm3_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm1_1[0].d
                
                if (zmm2_1.d f>= zmm9[0].d)
                    result.b = 0
                    goto label_141636829
                
                zmm0_1 = zmm4_1
                zmm1_1 = zmm8_1
                zmm0_1[0].d = zmm0_1[0].d f- zmm12_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f/ zmm2_1.d
                zmm8_1.d = zmm8_1.d f- zmm0_1[0].d
                
                if (zmm8_1.d f<= zmm1_1[0].d)
                    goto label_141635da8
                
                if (zmm8_1.d f> arg5)
                    result.b = 0
                    goto label_141636829
                
                zmm1_1 = zx.o(var_2d8.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm14 = zmm6_1
                zmm6_1 = 0x7f7fffff
                r13 = zx.q(r13.d + 1)
                var_2a8 = zmm1_1.q
                zmm14[0].d = zmm14[0].d f* zmm8_1.d
                result_1 = result_2
                zmm15.d = zmm3_1.d f* zmm8_1.d
                var_188 = r13.d
                zmm14[0].d = zmm14[0].d f+ var_338[0].d
                zmm7_1.d = zmm7_1.d f* zmm8_1.d
                var_368 = 0
                zmm15.d = zmm15.d f+ var_338[0]:4.d
                var_2f8.d = zmm13.d
                zmm7_1.d = zmm7_1.d f+ var_338[1].d
                var_2d8 = zmm14[0].d
                zmm14[0].d = zmm14[0].d f- zmm1_1[0].d
                var_2f8:4.d = zmm10_1.d
                zmm1_1 = var_160:4.d
                zmm4_1.d = zmm15.d f- zmm0_1[0].d
                int32_t var_2d4_1 = zmm15.d
                zmm0_1 = var_160.d
                zmm2_1.d = zmm7_1.d f- result_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm14[0].d
                var_350 = zmm7_1.d
                result_2 = zmm7_1.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm4_1.d
                var_2f0 = zmm11[0].d
                var_34c = 0x7f7fffff
                var_160.d = zmm0_1[0].d
                zmm0_1 = var_160:8.d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_160:4.d = zmm1_1[0].d
                zmm1_1 = var_160:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm14[0].d
                var_160:8.d = zmm0_1[0].d
                zmm0_1 = var_150_1.d
                var_160:0xc.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm4_1.d
                zmm1_1 = var_150_1:4.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm2_1.d
                var_150_1.d = zmm0_1[0].d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1[0].d
                zmm0_1[0].d = zmm0_1[0].d f+ zmm14[0].d
                zmm1_1 = var_150_1:0xc.d
                zmm1_1[0].d = zmm1_1[0].d f+ zmm4_1.d
                var_150_1:8.d = zmm0_1[0].d
                zmm0_1 = var_140_1
                zmm0_1[0].d = zmm0_1[0].d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1[0].d
                zmm14[0].d = zmm14[0].d f- var_2b8_1
                zmm2_1.d = zmm15.d f- var_348_1
                var_140_1 = zmm0_1[0].d
                zmm0_1 = zmm7_1
                zmm0_1[0].d = zmm0_1[0].d f- zmm5_1[0].d
                *(&var_160 + (rcx_11 << 2)) = (_mm_unpacklo_ps(zmm14, zmm2_1.q)).q
                *(&var_160:8 + (rcx_11 << 2)) = zmm0_1[0].d
            
            uint32_t rdx_11
            
            if (rdi.b != 0)
                int64_t* rax_32
                rax_32, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm12_1, zmm14, zmm15 =
                    sub_1416f4530(&var_248, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_11 = zx.d(var_367)
                zmm1_1 = zx.o(*rax_32)
                zmm11 = rax_32[1].d
                result = zx.d(arg9)
                var_308 = zmm1_1.q
                zmm3_1 = var_308.d
                zmm10_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_348 = zmm3_1[0].d
            else
                int32_t rcx_12 = r13.d
                int32_t rax_24
                
                if (rcx_12 == 1)
                    int64_t rax_28 = sx.q(var_184)
                    int64_t rcx_19 = rax_28 * 3
                    *(&var_170 + (rax_28 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_19 << 2)))
                    rax_24 = *(&var_160:8 + (rcx_19 << 2))
                else if (rcx_12 == 2)
                    void var_198
                    uint64_t* rax_27
                    rax_27, zmm6_1, zmm7_1, zmm8_1, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_27)
                    rax_24 = rax_27[1].d
                else if (rcx_12 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_26
                    rax_26, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm12_1, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_26)
                    rax_24 = rax_26[1].d
                else if (rcx_12 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_25
                    rax_25, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm12_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_25)
                    rax_24 = rax_25[1].d
                else
                    int32_t var_31c_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9, zmm9[0])
                    rax_24 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                zmm4_1 = var_2e8
                int64_t rbx_1 = rdi_1 * 3
                int64_t var_318_1 = zmm0_1.q
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_3 = r9_3 * 3
                int32_t r8_5 = *(&var_160:8 + (r15 << 2))
                zmm10_1 = var_318_1:4.d
                zmm11 = rax_24
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                var_150_1:8.q = *(&var_160 + (rsi_3 << 2))
                var_160.q = *(&var_160 + (r15 << 2))
                int32_t rdi_2 = (&var_128)[r15]
                var_170[1].d = (*(&var_170 + (r9_3 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2)))[0].d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2)))[0].d
                var_170[1]:4.d = (*(&var_170 + (rdi_1 << 2)))[0].d
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_10 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_3 << 2))
                int32_t rcx_21 = (&var_128)[rsi_3]
                var_140_1 = *(&var_160:8 + (rbx_1 << 2))
                int32_t rax_30 = (&var_128)[rbx_1]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_3 << 2))
                zmm1_1 = zx.o(*(&var_100 + (rsi_3 << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_10
                rdx_11 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_21
                int32_t rcx_22 = (&var_f8)[rsi_3]
                int32_t var_104_1 = rax_30
                int32_t rax_31 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm10_1.d f* zmm10_1.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_1.q
                var_100 = zmm3_1.q
                zmm3_1 = var_318_1.d
                zmm11[0].d = zmm11[0].d f* zmm11[0].d
                var_f4_1:8.d = rdx_11
                zmm3_1[0].d = zmm3_1[0].d f* zmm3_1[0].d
                var_e4_1:4.d = rcx_22
                var_348 = zmm3_1[0].d
                int32_t var_d4_1 = rax_31
                zmm2_1.d = zmm2_1.d f+ zmm3_1[0].d
                zmm2_1.d = zmm2_1.d f+ zmm11[0].d
                result = zx.d(arg9)
                var_34c = zmm2_1.d
                rdi.b = zmm4_1.d f> zmm2_1.d
                bool cond:7_1 = zmm2_1.d f>= zmm6_1[0].d
                zmm6_1 = zmm2_1
                rdx_11.b = cond:7_1
                var_367 = rdx_11.b
                
                if (result.b == 0)
                    goto label_1416361fc
                
                if (rdi.b == 0)
                    goto label_141636201
                
                if (not(zmm8_1.d f!= zmm9[0].d))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    
                    if (not(_mm_cvtps_pd(zmm2_1.q)[0] <= zmm1_1[0])
                            && not(_mm_cvtps_pd(zmm4_1.q)[0] <= zmm1_1[0]) && r13.d s< 4)
                        r15.b = 1
                        rdi.b = 0
                        var_368 = 1
                        goto label_141636207
            
        label_1416361fc:
            
            if (rdi.b != 0)
                rcx_4 = var_328
            else
            label_141636201:
                r15 = zx.q(var_368)
            label_141636207:
                rcx_4 = var_328
                
                if (rdx_11.b == 0)
                    rsi_1 = var_344
                    r14 = arg4
                    continue
        
        zmm13 = 0x80000000
        zmm5_1 = var_338[1].d
        zmm1_1 = 0x7f7fffff
        break

bool cond:2_1 = zmm8_1.d f<= zmm9[0].d
int32_t* rdi_3 = arg6
*rdi_3 = zmm8_1.d

if (not(cond:2_1))
    zmm4_1 = zmm9
    *arg8 = var_2f8
    arg8[1].d = var_2f0
    
    if (r13.d s> 0)
        int128_t* rcx_24 = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_35 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_24
            rcx_24 += 4
            zmm0_1 = zmm2_1
            zmm1_1 = zmm2_1
            zmm0_1[0].d = zmm0_1[0].d f* rax_35[-2]
            zmm1_1[0].d = zmm1_1[0].d f* rax_35[-1]
            zmm2_1.d = zmm2_1.d f* *rax_35
            rax_35 = &rax_35[3]
            zmm9[0].d = zmm9[0].d f+ zmm0_1[0].d
            zmm9[0].d = zmm9[0].d f+ zmm1_1[0].d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm0_1 = zmm8_1
    zmm1_1 = zmm8_1
    zmm0_1[0].d = zmm0_1[0].d f* *arg4
    zmm1_1[0].d = zmm1_1[0].d f* *(arg4 + 4)
    zmm8_1.d = zmm8_1.d f* (*arg4)[1].d
    zmm0_1[0].d = zmm0_1[0].d f+ var_338[0].d
    zmm1_1[0].d = zmm1_1[0].d f+ var_338[0]:4.d
    zmm8_1.d = zmm8_1.d f+ zmm5_1[0].d
    zmm0_1[0].d = zmm0_1[0].d f+ zmm9[0].d
    zmm1_1[0].d = zmm1_1[0].d f+ zmm9[0].d
    zmm8_1.d = zmm8_1.d f+ zmm4_1.d
    uint32_t var_31c_2 = zmm8_1.d
    *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1[0])).q
    arg7[1].d = var_31c_2
else if (result.b != 0)
    double temp0_21[0x2]
    
    if (not(zmm12_1[0].d f<= zmm9[0].d))
        temp0_21 = _mm_cvtps_pd(zmm6_1[0])
    
    if (zmm12_1[0].d f<= zmm9[0].d || temp0_21[0] <= 9.9999999999999995e-07
            || zmm6_1[0].d f>= zmm1_1[0].d)
        var_170[0] = 0
        var_170[1] = 0
        var_338[0] = 0
        var_338[1] = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_338[1]:4.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        int64_t* rcx_34
        uint128_t zmm0_2
        float rax_49
        
        if (var_328 == 0)
            rcx_34 = arg7
            int32_t var_31c_5 = 0x3f800000
            rax_49 = 1f
            *rdi_3 = (zmm12_1 ^ zmm13).d
            zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9[0])
        label_1416367b3:
            *arg8 = zmm0_2.q
            arg8[1].d = rax_49
            zmm0_2.d = zmm12_1.d f* *arg8
            zmm12_1[0].d = zmm12_1[0].d f* arg8[1].d
            zmm12_1[0].d = zmm12_1[0].d f* *(arg8 + 4)
            zmm12_1[0].d = zmm12_1[0].d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm12_1[0].d = zmm12_1[0].d f+ var_130:4.d
            result = zmm12_1[0].d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm12_1[0])
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[1].d)
                    int32_t rax_42 = (rdi_4 + 1).d
                    var_170[1].d = rax_42
                    
                    if (rax_42 s> var_170[1]:4.d)
                        sub_14083a7e0(&var_170)
                    
                    double rcx_30 = var_170[0]
                    int64_t rdx_14 = rdi_4 * 3
                    zmm1_1 = zmm15
                    int32_t rax_43 = *(&var_128 + r12)
                    zmm1_1[0].d = zmm1_1[0].d f+ *(&var_100:4 + r12)
                    *(rcx_30 i+ (rdx_14 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm14.d f+ *(&var_100 + r12)
                    *(rcx_30 i+ (rdx_14 << 2) + 8) = rax_43
                    int64_t rdi_5 = sx.q(var_338[1].d)
                    int32_t var_35c_4 = zmm1_1[0].d
                    var_360 = zmm0_2.d
                    zmm0_2.d = zmm7_1.d f+ *(&var_f8 + r12)
                    int32_t rax_44 = (rdi_5 + 1).d
                    var_338[1].d = rax_44
                    var_358_2 = zmm0_2.d
                    
                    if (rax_44 s> var_338[1]:4.d)
                        sub_14083a7e0(&var_338)
                    
                    double rcx_32 = var_338[0]
                    int64_t rdx_16 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_32 i+ (rdx_16 << 2)) = var_360.q
                    *(rcx_32 i+ (rdx_16 << 2) + 8) = var_358_2
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_238 = &var_1d8
            float (* var_230_1)[0x4] = arg2
            int128_t* var_228_1 = arg3
            int32_t rax_48
            int128_t zmm13_1
            rax_48, zmm12_1, zmm13_1 = sub_1415a2a60(&var_170, &var_338, &var_258, &var_238, 
                &var_344, &var_360, &var_2a8, &var_248)
            rcx_34 = arg7
            rax_49 = var_358_2
            
            if (rax_48 == 2)
                *rdi_3 = (zmm12_1 ^ zmm13_1).d
                zmm0_2 = zx.o(var_360.q)
                goto label_1416367b3
            
            *arg8 = var_360.q
            arg8[1].d = rax_49
            result = result_1
            zmm0_2.d = (var_344 ^ zmm13_1).d f- zmm12_1[0].d
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_2a8)
        *rcx_34 = zmm0_2.q
        rcx_34[1].d = result
        double rcx_35 = var_338[0]
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        double rcx_36 = var_170[0]
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
    else
        zmm3_1 = zmm9
        zmm4_1 = zmm9
        *arg8 = var_2f8
        zmm5_1 = zmm9
        arg8[1].d = var_2f0
        zmm10_1 = zmm9
        zmm11 = zmm9
        zmm13 = zmm9
        
        if (rcx_4 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_39 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_40 = var_f8
            zmm0_1 = zmm2_1
            zmm5_1 = rax_39
            zmm11 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm13 = rax_40
            var_308 = zmm1_1.q
            zmm3_1 = var_308.d
            var_2c8.q = zmm2_1.q
            zmm10_1 = var_2c8
        else if (r13.d s> 0)
            int128_t* rax_38 = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_38
                rax_38 += 4
                zmm0_1 = zmm2_1
                zmm1_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_130 + r12)
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_130:4 + r12)
                zmm3_1[0].d = zmm3_1[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_128 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_1[0].d
                zmm1_1 = zmm2_1
                zmm1_1[0].d = zmm1_1[0].d f* *(&var_100 + r12)
                zmm5_1[0].d = zmm5_1[0].d f+ zmm0_1[0].d
                zmm0_1 = zmm2_1
                zmm0_1[0].d = zmm0_1[0].d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm10_1.d = zmm10_1.d f+ zmm1_1[0].d
                r12 += 0xc
                zmm11[0].d = zmm11[0].d f+ zmm0_1[0].d
                zmm13.d = zmm13.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm15 = var_338[0].d
        zmm7_1.d = var_338[0]:4.d.d f+ zmm11[0].d
        zmm14 = var_338[1].d
        zmm8_1.d = zmm15.d f+ zmm10_1.d
        zmm14[0].d = zmm14[0].d f+ zmm13.d
        zmm7_1.d = zmm7_1.d f- zmm4_1.d
        zmm8_1.d = zmm8_1.d f- zmm3_1[0].d
        zmm14[0].d = zmm14[0].d f- zmm5_1[0].d
        zmm5_1 = 0x3f000000
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm0_1 = zmm8_1
        zmm0_1[0].d = zmm0_1[0].d f* zmm8_1.d
        zmm14[0].d = zmm14[0].d f* zmm14[0].d
        zmm2_1.d = zmm2_1.d f+ zmm0_1[0].d
        zmm2_1.d = zmm2_1.d f+ zmm14[0].d
        zmm3_1 = zmm2_1
        zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0].d)
        zmm3_1[0].d = zmm3_1[0].d f* 0.5f
        zmm0_1 = zmm4_1
        zmm0_1[0].d = zmm0_1[0].d f* zmm4_1.d
        zmm3_1[0].d = zmm3_1[0].d f* zmm0_1[0].d
        zmm0_1 = zmm4_1
        zmm2_1.d = 0.5f f- zmm3_1[0].d
        zmm0_1[0].d = zmm0_1[0].d f* zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_1[0].d
        zmm1_1 = zmm4_1
        zmm0_1 = zmm4_1
        zmm1_1[0].d = zmm1_1[0].d f* zmm4_1.d
        zmm3_1[0].d = zmm3_1[0].d f* zmm1_1[0].d
        zmm5_1[0].d = 0.5f f- zmm3_1[0].d
        zmm0_1[0].d = zmm0_1[0].d f* zmm5_1[0].d
        zmm4_1.d = zmm4_1.d f+ zmm0_1[0].d
        zmm0_1 = zmm4_1
        zmm1_1 = zmm4_1
        zmm0_1[0].d = zmm0_1[0].d f* zmm8_1.d
        zmm1_1[0].d = zmm1_1[0].d f* zmm7_1.d
        zmm4_1.d = zmm4_1.d f* zmm14[0].d
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1[0])
        *arg8 = zmm0_1.q
        zmm0_1 = __sqrtss_xmmss_memss(zmm0_1[0].d, var_34c)
        zmm12_1[0].d = zmm12_1[0].d f- zmm0_1[0].d
        arg8[1].d = zmm4_1.d
        
        if (not(zmm12_1[0].d f< zmm9[0].d))
            zmm9 = __minss_xmmss_memss(zmm12_1[0].d, 0x7f7fffff)
        
        zmm15.d = zmm15.d f+ zmm10_1.d
        zmm1_1 = var_338[0]:4.d
        zmm14[0].d = zmm14[0].d f+ zmm13.d
        zmm1_1[0].d = zmm1_1[0].d f+ zmm11[0].d
        zmm9[0].d = zmm9[0].d f* *arg8
        zmm15.d = zmm15.d f+ zmm9[0].d
        zmm9[0].d = zmm9[0].d f* *(arg8 + 4)
        zmm1_1[0].d = zmm1_1[0].d f+ zmm9[0].d
        zmm0_1 = zmm9
        zmm0_1[0].d = zmm0_1[0].d f* arg8[1].d
        zmm9 ^= data_142d3f780
        zmm14[0].d = zmm14[0].d f+ zmm0_1[0].d
        *arg7 = (_mm_unpacklo_ps(zmm15, zmm1_1[0])).q
        arg7[1].d = zmm14[0].d
        *rdi_3 = zmm9[0].d

result.b = 1
label_141636829:
__security_check_cookie(rax_1 ^ &var_3a8)
return result
