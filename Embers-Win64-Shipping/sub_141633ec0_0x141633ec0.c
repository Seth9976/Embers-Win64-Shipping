// 函数: sub_141633ec0
// 地址: 0x141633ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int64_t r12 = 0
int32_t var_378 = 0
int64_t r10 = arg2
float zmm8[0x4] = *arg3
int32_t* r14 = arg4
float zmm15[0x4] = *(arg1 + 0x2c)
uint128_t var_368 = arg3[1]
float zmm3[0x4] = zmm8 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int32_t var_190 = 0
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
uint128_t var_178 = data_142d3f7e0
void* var_238 = arg1
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
zmm15[0] = zmm15[0] * zmm15[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r13 = zx.q(var_190)
uint128_t zmm0 = _mm_cvtps_pd(zmm15[0].q)
float var_2d8[0x4]
int128_t* var_1e8 = &var_2d8
int64_t var_1f0 = r10
float var_328
int32_t* var_1e0 = &var_328
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
zmm0.q = zmm0.q f+ 9.9999999999999995e-07
var_328 = zmm8[0]
float var_320 = temp0_1[0]
float var_31c = temp0_3[0]
float var_218[0x4] = zmm8
float var_248[0x4] = temp0_1
int32_t var_2e8 = _mm_cvtpd_ps(zmm0).d
zmm0 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
int32_t var_324 = zmm0.d
uint128_t var_228 = zmm0
temp0[0] = (zmm0 ^ 0x80000000).d
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_6[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_3[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_2d8 = temp0_8
var_2d8 = temp0_8
uint128_t zmm6 = *(arg1 + 0x20)
zmm8 = *(arg1 + 0x1c)
int128_t zmm9 = *(arg1 + 0x24)
float zmm4[0x4] = (*arg10)[1]
zmm3 = *arg10
float zmm7[0x4] = (*arg10)[2]
zmm3[0] = zmm3[0] * zmm8[0]
zmm0.d = zmm4.d f* zmm6.d
zmm7[0] = zmm7[0] f* zmm9.d
zmm3[0] = zmm3[0] f+ zmm0.d
zmm3[0] = zmm3[0] + zmm7[0]
float var_390
uint64_t var_340
float* rdx_1
int32_t rdi

if (zmm3[0] < 0f)
    rdi = 2
    int32_t rax_4 = *(arg1 + 0x18)
    rdx_1 = &var_340
    var_340 = *(arg1 + 0x10)
    int32_t var_338_1 = rax_4
else
    float zmm2[0x4] = *(arg1 + 0x28)
    rdi = 1
    zmm0.d = zmm2.d f* zmm8[0]
    zmm2[0] = zmm2[0] f* zmm6.d
    zmm0.d = zmm0.d f+ *(arg1 + 0x10)
    zmm2[0] = zmm2[0] f* zmm9.d
    zmm2[0] = zmm2[0] f+ *(arg1 + 0x14)
    zmm2[0] = zmm2[0] f+ *(arg1 + 0x18)
    var_390 = zmm0.d
    rdx_1 = &var_390
    float var_38c_1 = zmm2[0]
    float var_388_1 = zmm2[0]

int32_t rax_5 = rdx_1[2]
int32_t rcx_1 = rdi & 0xfffffffd
int64_t var_138 = *rdx_1

if ((rdi.b & 2) == 0)
    rcx_1 = rdi

int32_t rsi_1 = rcx_1 & 0xfffffffe
int32_t rax_8 = rdx_1[2]

if ((rcx_1.b & 1) == 0)
    rsi_1 = rcx_1

var_390 = (zmm3 ^ 0x80000000)[0]
float var_38c_2 = (zmm4 ^ 0x80000000)[0]
float var_388_2 = (zmm7 ^ 0x80000000)[0]
int32_t var_130 = rax_8
float var_350
float* rax_9
uint128_t zmm6_1
uint128_t zmm11
rax_9, zmm6_1, zmm11 = sub_14170bcf0(&var_1f0, &var_350, &var_390)
uint128_t zmm1_1 = var_368.d
uint128_t zmm3_1 = var_368:4.d
float zmm5[0x4] = var_368:8.d
uint128_t zmm8_1 = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_9)
int32_t rcx_3 = rax_9[2]
uint128_t zmm0_1
zmm0_1.d = zmm6_1.d f- zmm2_1.d
int32_t var_2f4 = zmm1_1.d
float zmm14[0x4] = zmm5
int32_t var_2b8 = zmm1_1.d
uint32_t result = zx.d(arg9)
int64_t var_108 = zmm2_1.q
uint128_t zmm12 = zx.o(0)
uint128_t zmm7_1
zmm7_1.d = zmm1_1.d f- zmm0_1.d
var_340 = zmm2_1.q
uint128_t zmm9_1 = zmm3_1
zmm1_1.d = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55).d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
float zmm10[0x4] = zmm5
zmm0_1.d = rax_5.d f- rcx_3
int32_t var_2f0 = zmm3_1.d
int32_t var_2b4 = zmm3_1.d
uint128_t zmm13
zmm13.d = zmm3_1.d f- zmm1_1.d
float var_2ec = zmm5[0]
float result_2 = zmm5[0]
zmm14[0] = zmm14[0] f- zmm0_1.d
int32_t var_100 = rcx_3
uint64_t var_2c8 = zmm6_1.q
zmm0_1.d = zmm7_1.d f* zmm7_1.d
int64_t var_308 = 0
float var_300 = 1f
zmm2_1.d = zmm13.d f* zmm13.d
zmm1_1.d = zmm14.d f* zmm14[0]
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d

if (zmm2_1.d f>= var_2e8 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

zmm1_1 = 0x7f7fffff
int32_t rcx_4 = 0
int32_t var_380 = 0x7f7fffff
zmm6_1 = 0x7f7fffff
int32_t var_358 = 0
uint32_t r8_1 = zx.d(rdi.b)
char var_397 = 0
char var_398 = rdi.b
int64_t var_290
float result_1
uint128_t zmm4_1

if (rdi.b == 0)
    while (true)
        int32_t rax_10 = rcx_4
        rcx_4 += 1
        var_358 = rcx_4
        
        if (rax_10 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            void* rax_11 = var_238
            zmm2_1.d = zmm13.d f* zmm13.d
            zmm1_1.d = zmm14.d f* zmm14[0]
            zmm6_1 = *(rax_11 + 0x24)
            zmm0_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm2_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm1_1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm5[0] = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm4_1.d f* zmm5[0]
            zmm5 = *(rax_11 + 0x1c)
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm13.d = zmm13.d f* zmm4_1.d
            zmm3_1.d = zmm4_1.d f* zmm7_1.d
            zmm14[0] = zmm14[0] f* zmm4_1.d
            var_378 = zmm4_1.d
            zmm4_1 = *(rax_11 + 0x20)
            zmm2_1.d = zmm3_1.d f* zmm5[0]
            zmm0_1.d = zmm13.d f* zmm4_1.d
            zmm1_1.d = zmm14.d f* zmm6_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            int32_t var_280_1 = zmm3_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            int32_t* rax_12
            int32_t rcx_5
            
            if (zmm2_1.d f< zmm11.d)
                rcx_5 = 8
                int32_t var_1f4_1 = *(rax_11 + 0x18)
                uint64_t var_1fc
                rax_12 = &var_1fc
                var_1fc = *(rax_11 + 0x10)
            else
                zmm2_1 = *(rax_11 + 0x28)
                rcx_5 = 4
                zmm0_1.d = zmm2_1.d f* zmm5[0]
                zmm1_1.d = zmm2_1.d f* zmm4_1.d
                zmm0_1.d = zmm0_1.d f+ *(rax_11 + 0x10)
                zmm2_1.d = zmm2_1.d f* zmm6_1.d
                zmm1_1.d = zmm1_1.d f+ *(rax_11 + 0x14)
                zmm2_1.d = zmm2_1.d f+ *(rax_11 + 0x18)
                int32_t var_208 = zmm0_1.d
                rax_12 = &var_208
                int32_t var_204_1 = zmm1_1.d
                int32_t var_200_1 = zmm2_1.d
            
            zmm0_1 = zx.o(*rax_12)
            int32_t rsi_2 = rsi_1 | rcx_5
            zmm9_1 = var_2d8[1]
            zmm7_1 = var_2d8[2]
            zmm1_1 = var_2d8[0]
            var_2c8.d = zmm0_1.d
            uint64_t var_278_1 = zmm0_1.q
            zmm5 = zmm7_1
            zmm0_1 = zmm0_1.q:4.d
            int32_t var_30c_1 = zmm0_1.d
            int32_t rcx_7 = rsi_2 & 0xfffffff7
            var_2c8:4.d = zmm0_1.d
            zmm0_1 = rax_12[2]
            int32_t var_354_1 = zmm0_1.d
            int32_t var_2c0_1 = zmm0_1.d
            
            if ((rsi_2.b & 8) == 0)
                rcx_7 = rsi_2
            
            zmm4_1 = zmm13 ^ 0x80000000
            zmm10 = zmm3_1 ^ 0x80000000
            zmm6_1 = zmm14 ^ 0x80000000
            zmm3_1.d = zmm1_1.d f* zmm4_1.d
            int32_t rdx_4 = rcx_7 & 0xfffffffb
            zmm8_1.d = zmm9_1.d f* zmm6_1.d
            zmm0_1.d = zmm7_1.d f* zmm4_1.d
            
            if ((rcx_7.b & 4) == 0)
                rdx_4 = rcx_7
            
            zmm5[0] = zmm5[0] * zmm10[0]
            var_378 = rdx_4
            zmm8_1.d = zmm8_1.d f- zmm0_1.d
            zmm0_1.d = zmm1_1.d f* zmm6_1.d
            zmm5[0] = zmm5[0] f- zmm0_1.d
            zmm0_1.d = zmm9_1.d f* zmm10[0]
            zmm8_1.d = zmm8_1.d f+ zmm8_1.d
            zmm3_1.d = zmm3_1.d f- zmm0_1.d
            zmm2_1.d = zmm7_1.d f* zmm8_1.d
            zmm5[0] = zmm5[0] + zmm5[0]
            zmm3_1.d = zmm3_1.d f+ zmm3_1.d
            zmm7_1.d = zmm7_1.d f* zmm5[0]
            zmm0_1.d = zmm1_1.d f* zmm3_1.d
            zmm2_1.d = zmm2_1.d f- zmm0_1.d
            int32_t var_37c_1 = zmm2_1.d
            zmm2_1 = var_2d8[3]
            zmm1_1.d = zmm2_1.d f* zmm5[0]
            zmm1_1.d = zmm1_1.d f+ zmm4_1.d
            zmm4_1.d = var_2d8[0].d f* zmm5[0]
            zmm0_1.d = var_37c_1.d f+ zmm1_1.d
            zmm1_1 = zmm2_1
            zmm2_1.d = zmm2_1.d f* zmm8_1.d
            zmm1_1.d = zmm1_1.d f* zmm3_1.d
            int32_t var_37c_2 = zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm10[0]
            zmm0_1 = zmm9_1
            zmm9_1.d = zmm9_1.d f* zmm3_1.d
            zmm0_1.d = zmm0_1.d f* zmm8_1.d
            zmm1_1.d = zmm1_1.d f+ zmm6_1.d
            zmm9_1.d = zmm9_1.d f- zmm7_1.d
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm9_1.d = zmm9_1.d f+ zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            
            if (zmm9_1.d f>= zmm11.d)
                zmm5 = *(r10 + 0x1c)
            else
                zmm5 = *(r10 + 0x10)
            
            if (var_37c_2.d f>= zmm11.d)
                zmm2_1 = *(r10 + 0x20)
            else
                zmm2_1 = *(r10 + 0x14)
            
            int32_t var_37c_3 = zmm2_1.d
            
            if (zmm4_1.d f>= zmm11.d)
                zmm1_1 = *(r10 + 0x24)
            else
                zmm1_1 = *(r10 + 0x18)
            
            zmm3_1 = zmm2_1
            zmm0_1 = zmm2_1
            zmm8_1 = var_218
            zmm2_1 = var_31c
            zmm0_1.d = zmm0_1.d f* var_248[0]
            zmm4_1.d = var_228.d f* zmm1_1.d
            zmm6_1.d = var_248.d f* zmm5[0]
            (&var_18c)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_190)
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1.d = zmm8_1.d f* zmm1_1.d
            zmm3_1.d = zmm3_1.d f* zmm8_1.d
            uint64_t rcx_9 = r13 * 3
            int32_t var_2f8_1 = zmm1_1.d
            zmm4_1.d = zmm4_1.d f+ zmm4_1.d
            zmm6_1.d = zmm6_1.d f- zmm0_1.d
            zmm0_1.d = zmm5.d f* var_228.d
            zmm3_1.d = zmm3_1.d f- zmm0_1.d
            zmm1_1.d = zmm4_1.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f+ zmm6_1.d
            zmm1_1.d = zmm1_1.d f+ zmm5[0]
            zmm5 = zmm4_1
            zmm3_1.d = zmm3_1.d f+ zmm3_1.d
            zmm4_1.d = zmm4_1.d f* var_228.d
            zmm5[0] = zmm5[0] * var_248[0]
            zmm0_1.d = zmm6_1.d f* var_248[0]
            zmm10 = var_2ec
            zmm7_1.d = zmm3_1.d f* var_228.d
            zmm9_1 = var_2f0
            zmm7_1.d = zmm7_1.d f- zmm0_1.d
            zmm0_1 = zmm3_1
            zmm3_1.d = zmm3_1.d f* zmm2_1.d
            zmm0_1.d = zmm0_1.d f* zmm8_1.d
            zmm3_1.d = zmm3_1.d f+ var_2f8_1
            zmm7_1.d = zmm7_1.d f+ zmm1_1.d
            zmm1_1.d = zmm6_1.d f* zmm2_1.d
            zmm5[0] = zmm5[0] f- zmm0_1.d
            zmm1_1.d = zmm1_1.d f+ var_37c_3
            zmm0_1.d = var_278_1.d f- zmm7_1.d
            zmm6_1.d = zmm6_1.d f* zmm8_1.d
            zmm8_1 = var_2f4
            zmm6_1.d = zmm6_1.d f- zmm4_1.d
            zmm4_1.d = zmm8_1.d f- zmm0_1.d
            uint32_t var_278_2 = zmm0_1.d
            zmm5[0] = zmm5[0] f+ zmm1_1.d
            *(&var_138 + (rcx_9 << 2)) = var_2c8
            zmm6_1.d = zmm6_1.d f+ zmm3_1.d
            (&var_130)[rcx_9] = var_2c0_1
            var_390 = zmm4_1.d
            zmm1_1.d = var_30c_1.d f- zmm5[0]
            *(&var_108 + (rcx_9 << 2)) = (_mm_unpacklo_ps(zmm7_1, zmm5[0].q)).q
            zmm2_1.d = var_354_1.d f- zmm6_1.d
            uint32_t var_1c8_1 = zmm6_1.d
            int32_t var_30c_2 = zmm1_1.d
            int32_t var_354_2 = zmm2_1.d
            zmm3_1.d = zmm10.d f- var_354_2
            zmm2_1.d = zmm9_1.d f- zmm1_1.d
            var_388_2 = zmm3_1.d
            int32_t var_38c_3 = zmm2_1.d
            zmm6_1 = var_280_1
            zmm5 = zmm13
            zmm5[0] = zmm5[0] f* zmm2_1.d
            (&var_100)[rcx_9] = var_1c8_1
            zmm0_1.d = zmm6_1.d f* zmm4_1.d
            zmm1_1.d = zmm14.d f* zmm3_1.d
            zmm5[0] = zmm5[0] f+ zmm0_1.d
            zmm5[0] = zmm5[0] f+ zmm1_1.d
            int128_t var_158_1
            int32_t var_148_1
            
            if (zmm5[0] <= zmm15[0])
                r13 = zx.q(r13.d + 1)
                *(&var_168 + (rcx_9 << 2)) = var_390.q
                *(&var_168:8 + (rcx_9 << 2)) = var_388_2
                var_190 = r13.d
            label_1416349c6:
                zmm6_1 = var_380
                
                if (r8_1.b != 0 && not(zmm5[0] f< zmm11.d))
                    zmm5[0] = zmm5[0] * zmm5[0]
                    zmm5[0] = zmm5[0] + 9.99999997e-07f
                    rdi.b = zmm5[0] f>= zmm6_1.d
            else
                zmm3_1 = r14[1]
                zmm4_1 = *r14
                zmm7_1 = r14[2]
                zmm2_1.d = zmm6_1.d f* zmm4_1.d
                zmm0_1.d = zmm13.d f* zmm3_1.d
                zmm1_1.d = zmm14.d f* zmm7_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm11.d)
                    result.b = 0
                    goto label_141635476
                
                zmm1_1 = zmm12
                zmm0_1.d = zmm5.d f- zmm15[0]
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm12.d = zmm12.d f- zmm0_1.d
                
                if (zmm12.d f<= zmm1_1.d)
                    goto label_1416349c6
                
                if (zmm12.d f> arg5)
                    result.b = 0
                    goto label_141635476
                
                zmm1_1 = zx.o(var_2b8.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_290 = zmm1_1.q
                zmm10 = zmm7_1
                zmm8_1.d = zmm4_1.d f* zmm12.d
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                zmm9_1.d = zmm3_1.d f* zmm12.d
                var_190 = r13.d
                zmm8_1.d = zmm8_1.d f+ var_368.d
                zmm10[0] = zmm10[0] f* zmm12.d
                var_398 = 0
                zmm9_1.d = zmm9_1.d f+ var_368:4.d
                var_308.d = zmm6_1.d
                zmm10[0] = zmm10[0] f+ var_368:8.d
                zmm6_1 = 0x7f7fffff
                zmm3_1.d = zmm8_1.d f- zmm1_1.d
                var_2f4 = zmm8_1.d
                zmm4_1.d = zmm9_1.d f- zmm0_1.d
                var_2f0 = zmm9_1.d
                zmm2_1.d = zmm10.d f- result_1
                zmm0_1.d = var_168.d.d f+ zmm3_1.d
                var_2ec = zmm10[0]
                var_2b8 = zmm8_1.d
                zmm1_1.d = var_168:4.d.d f+ zmm4_1.d
                int32_t var_2b4_1 = zmm9_1.d
                result_2 = zmm10[0]
                var_308:4.d = zmm13.d
                var_168.d = zmm0_1.d
                zmm0_1.d = var_168:8.d.d f+ zmm2_1.d
                var_168:4.d = zmm1_1.d
                zmm1_1.d = var_168:0xc.d.d f+ zmm3_1.d
                var_300 = zmm14[0]
                var_380 = 0x7f7fffff
                var_168:8.d = zmm0_1.d
                var_168:0xc.d = zmm1_1.d
                zmm0_1.d = var_158_1.d.d f+ zmm4_1.d
                zmm1_1.d = var_158_1:4.d.d f+ zmm2_1.d
                var_158_1.d = zmm0_1.d
                zmm0_1 = var_158_1:8.d
                var_158_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1.d
                zmm1_1.d = var_158_1:0xc.d.d f+ zmm4_1.d
                var_158_1:8.d = zmm0_1.d
                zmm0_1.d = var_148_1.d f+ zmm2_1.d
                var_158_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm8_1.d f- var_278_2
                zmm2_1.d = zmm9_1.d f- var_30c_2
                var_148_1 = zmm0_1.d
                zmm0_1.d = zmm10.d f- var_354_2
                *(&var_168 + (rcx_9 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_168:8 + (rcx_9 << 2)) = zmm0_1.d
            
            uint32_t rdx_10
            
            if (rdi.b != 0)
                int64_t* rax_28
                rax_28, zmm6_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm15 =
                    sub_1416f4530(&var_1f0, &var_168, &var_190, &var_178, &var_138, &var_108)
                r13 = zx.q(var_190)
                zmm1_1 = zx.o(*rax_28)
                rdx_10 = zx.d(var_397)
                var_228 = var_324
                var_218 = var_328
                zmm14 = rax_28[1].d
                result = zx.d(arg9)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_340 = zmm1_1.q
                zmm13 = zmm0_1
                zmm7_1 = var_340.d
                var_248 = var_320
            else
                int32_t rcx_10 = r13.d
                uint64_t var_318_1
                int32_t rax_22
                
                if (rcx_10 == 1)
                    int64_t rax_24 = sx.q(var_18c)
                    int64_t rcx_17 = rax_24 * 3
                    *(&var_178 + (rax_24 << 2)) = 0x3f800000
                    rax_22 = *(&var_168:8 + (rcx_17 << 2))
                    var_318_1 = *(&var_168 + (rcx_17 << 2))
                else
                    uint64_t* rax_23
                    
                    if (rcx_10 == 2)
                        void var_1a0
                        rax_23, zmm6_1, zmm8_1, zmm9_1 =
                            sub_1416e69d0(&var_1a0, &var_168, &var_18c, &var_190, &var_178)
                    label_141634a50:
                        rax_22 = rax_23[1].d
                        r13 = zx.q(var_190)
                        var_318_1 = *rax_23
                        var_228 = var_324
                        var_218 = var_328
                        var_248 = var_320
                    else
                        if (rcx_10 == 3)
                            uint64_t var_1ac
                            rax_23, zmm6_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm15 =
                                sub_1416fa750(&var_1ac, &var_168, &var_190, &var_178)
                            goto label_141634a50
                        
                        if (rcx_10 == 4)
                            uint64_t var_1b8
                            rax_23, zmm6_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm15 =
                                sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                            goto label_141634a50
                        
                        int32_t var_348_1 = 0
                        rax_22 = 0
                        var_318_1 = (_mm_unpacklo_ps(zmm11, zmm11.q)).q
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                zmm7_1 = var_318_1.d
                int64_t rbx_1 = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_3 = r9_3 * 3
                r8_1 = *(&var_168:8 + (r15_1 << 2))
                zmm13 = var_318_1:4.d
                zmm14 = rax_22
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi_3 << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                int32_t rdi_2 = (&var_130)[r15_1]
                var_178:8.d = (*(&var_178 + (r9_3 << 2))).d
                var_178.d = (*(&var_178 + (r11_1 << 2))).d
                var_178:4.d = (*(&var_178 + (r10_1 << 2))).d
                var_178:0xc.d = (*(&var_178 + (rdi_1 << 2))).d
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_9 = (&var_130)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_3 << 2))
                int32_t rcx_19 = (&var_130)[rsi_3]
                var_148_1 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_26 = (&var_130)[rbx_1]
                var_12c_1.q = *(&var_138 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_108 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&var_138 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_108 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&var_138 + (rsi_3 << 2))
                zmm1_1 = zx.o(*(&var_108 + (rsi_3 << 2)))
                var_138 = *(&var_138 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_108 + (r15_1 << 2)))
                var_130 = rdi_2
                var_12c_1:8.d = rdx_9
                rdx_10 = (&var_100)[r14_1]
                var_11c_1:4.d = rcx_19
                int32_t rcx_20 = (&var_100)[rsi_3]
                int32_t var_10c_1 = rax_26
                int32_t rax_27 = (&var_100)[rbx_1]
                var_fc_1.q = zmm2_1.q
                int128_t var_ec_1
                var_ec_1:8.q = zmm0_1.q
                var_18c.o = data_142e11d00
                var_100 = (&var_100)[r15_1]
                zmm2_1.d = zmm13.d f* zmm13.d
                var_168:8.d = r8_1
                var_fc_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm7_1.d f* zmm7_1.d
                var_fc_1:8.d = rdx_10
                zmm1_1.d = zmm14.d f* zmm14[0]
                var_ec_1:4.d = rcx_20
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_108 = zmm3_1.q
                zmm3_1 = var_2e8
                int32_t var_dc_1 = rax_27
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                rdi.b = zmm3_1.d f> zmm2_1.d
                result = zx.d(arg9)
                bool cond:7_1 = zmm2_1.d f>= zmm6_1.d
                var_380 = zmm2_1.d
                zmm6_1 = zmm2_1
                rdx_10.b = cond:7_1
                var_397 = rdx_10.b
                
                if (result.b == 0)
                    goto label_141634e42
                
                if (rdi.b == 0)
                    goto label_141634e47
                
                if (not(zmm12.d f!= zmm11.d))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (not(zmm0_1.q f<= zmm1_1.q))
                        zmm0_1 = _mm_cvtps_pd(zmm3_1.q)
                        
                        if (not(zmm0_1.q f<= zmm1_1.q) && r13.d s< 4)
                            r8_1.b = 1
                            rdi.b = 0
                            var_398 = 1
                            goto label_141634e4d
            
        label_141634e42:
            
            if (rdi.b != 0)
                rcx_4 = var_358
            else
            label_141634e47:
                r8_1 = zx.d(var_398)
            label_141634e4d:
                rcx_4 = var_358
                
                if (rdx_10.b == 0)
                    r10 = arg2
                    rsi_1 = var_378
                    r14 = arg4
                    continue
        
        zmm5 = var_368:8.d
        zmm1_1 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm12.d

if (not(zmm12.d f<= zmm11.d))
    zmm3_1 = zmm11
    zmm4_1 = zmm11
    *arg8 = var_308
    arg8[1].d = var_300
    
    if (r13.d s> 0)
        uint128_t* rcx_22 = &var_178
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_31 = &var_100
        uint64_t i
        
        do
            zmm2_1 = *rcx_22
            rcx_22 += 4
            zmm0_1.d = zmm2_1.d f* rax_31[-2]
            zmm1_1.d = zmm2_1.d f* rax_31[-1]
            zmm2_1.d = zmm2_1.d f* *rax_31
            rax_31 = &rax_31[3]
            zmm11.d = zmm11.d f+ zmm0_1.d
            zmm3_1.d = zmm3_1.d f+ zmm1_1.d
            zmm4_1.d = zmm4_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm0_1.d = zmm12.d f* *arg4
    zmm1_1.d = zmm12.d f* arg4[1]
    zmm12.d = zmm12.d f* arg4[2]
    zmm0_1.d = zmm0_1.d f+ var_368.d
    zmm1_1.d = zmm1_1.d f+ var_368:4.d
    zmm12.d = zmm12.d f+ zmm5[0]
    zmm0_1.d = zmm0_1.d f+ zmm11.d
    zmm1_1.d = zmm1_1.d f+ zmm3_1.d
    zmm12.d = zmm12.d f+ zmm4_1.d
    uint32_t var_348_2 = zmm12.d
    *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
    arg7[1].d = var_348_2
else if (result.b != 0)
    if (not(zmm15[0] f<= zmm11.d))
        zmm0_1 = _mm_cvtps_pd(zmm6_1.q)
    
    if (zmm15[0] f<= zmm11.d || zmm0_1.q f<= 9.9999999999999995e-07 || zmm6_1.d f>= zmm1_1.d)
        var_178.q = 0
        var_178:8.q = 0
        var_368.q = 0
        var_368:8.q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_368:0xc.d s< 8)
            sub_14083ad30(&var_368, 8)
        
        uint128_t zmm0_2
        float rax_45
        
        if (var_358 == 0)
            int32_t var_348_5 = 0x3f800000
            rax_45 = 1f
            *rdi_3 = (zmm15 ^ data_142d3f780).d
            zmm0_2 = _mm_unpacklo_ps(zmm11, zmm11.q)
        label_1416353fe:
            *arg8 = zmm0_2.q
            arg8[1].d = rax_45
            zmm0_2.d = zmm15.d f* *arg8
            zmm15[0] = zmm15[0] f* arg8[1].d
            zmm1_1.d = zmm15.d f* *(arg8 + 4)
            zmm15[0] = zmm15[0] f+ var_130
            zmm0_2.d = zmm0_2.d f+ var_138.d
            zmm1_1.d = zmm1_1.d f+ var_138:4.d
            result = zmm15[0]
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_178:8.d)
                    int32_t rax_38 = (rdi_4 + 1).d
                    var_178:8.d = rax_38
                    
                    if (rax_38 s> var_178:0xc.d)
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_26 = var_178.q
                    int64_t rdx_13 = rdi_4 * 3
                    int32_t rax_39 = *(&var_130 + r12)
                    zmm1_1.d = zmm9_1.d f+ *(&var_108:4 + r12)
                    *(rcx_26 + (rdx_13 << 2)) = *(&var_138 + r12)
                    zmm0_2.d = zmm8_1.d f+ *(&var_108 + r12)
                    *(rcx_26 + (rdx_13 << 2) + 8) = rax_39
                    int64_t rdi_5 = sx.q(var_368:8.d)
                    int32_t var_38c_4 = zmm1_1.d
                    var_390 = zmm0_2.d
                    zmm0_2.d = zmm10.d f+ *(&var_100 + r12)
                    int32_t rax_40 = (rdi_5 + 1).d
                    var_368:8.d = rax_40
                    var_388_2 = zmm0_2.d
                    
                    if (rax_40 s> var_368:0xc.d)
                        sub_14083a7e0(&var_368)
                    
                    int64_t rcx_28 = var_368.q
                    int64_t rdx_15 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_28 + (rdx_15 << 2)) = var_390.q
                    *(rcx_28 + (rdx_15 << 2) + 8) = var_388_2
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_190.q = &var_2d8
            int64_t var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_44
            rax_44, zmm15 = sub_141566860(&var_178, &var_368, &var_238, &var_190, zmm14, zmm15, 
                &var_378, &var_390, &var_290, &var_1f0)
            rax_45 = var_388_2
            
            if (rax_44 == 2)
                *rdi_3 = (zmm15 ^ data_142d3f780).d
                zmm0_2 = zx.o(var_390.q)
                goto label_1416353fe
            
            *arg8 = var_390.q
            zmm0_2.d = (var_378 ^ data_142d3f780).d f- zmm15[0]
            arg8[1].d = rax_45
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_290)
        int64_t rcx_30 = var_368.q
        *arg7 = zmm0_2.q
        arg7[1].d = result
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = var_178.q
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
    else
        zmm3_1 = zmm11
        zmm4_1 = zmm11
        *arg8 = var_308
        zmm5 = zmm11
        arg8[1].d = var_300
        zmm9_1 = zmm11
        zmm10 = zmm11
        zmm12 = zmm11
        
        if (rcx_4 == 0)
            zmm1_1 = zx.o(var_138)
            zmm2_1 = zx.o(var_108)
            int32_t rax_35 = var_130
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_36 = var_100
            zmm5 = rax_35
            zmm10 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm12 = rax_36
            var_340 = zmm1_1.q
            zmm3_1 = var_340.d
            zmm9_1 = zmm2_1.d
        else if (r13.d s> 0)
            uint128_t* rax_34 = &var_178
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_34
                rax_34 += 4
                zmm0_1.d = zmm2_1.d f* *(&var_138 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_138:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_108 + r12)
                zmm5[0] = zmm5[0] f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_108:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm9_1.d = zmm9_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm10[0] = zmm10[0] f+ zmm0_1.d
                zmm12.d = zmm12.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_368.d
        zmm7_1.d = var_368:4.d.d f+ zmm10[0]
        zmm13 = var_368:8.d
        zmm8_1.d = zmm14.d f+ zmm9_1.d
        zmm6_1.d = zmm13.d f+ zmm12.d
        zmm7_1.d = zmm7_1.d f- zmm4_1.d
        zmm8_1.d = zmm8_1.d f- zmm3_1.d
        zmm6_1.d = zmm6_1.d f- zmm5[0]
        zmm5 = 0x3f000000
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm0_1.d = zmm8_1.d f* zmm8_1.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
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
        zmm5[0] = 0.5f f- zmm3_1.d
        zmm0_1.d = zmm4_1.d f* zmm5[0]
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm0_1.d = zmm4_1.d f* zmm8_1.d
        zmm1_1.d = zmm4_1.d f* zmm7_1.d
        zmm4_1.d = zmm4_1.d f* zmm6_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1.q)
        *arg8 = zmm0_1.q
        zmm0_1 = __sqrtss_xmmss_memss(zmm0_1.d, var_380)
        int32_t var_348_3 = zmm4_1.d
        zmm15[0] = zmm15[0] f- zmm0_1.d
        arg8[1].d = var_348_3
        
        if (not(zmm15[0] f< zmm11.d))
            zmm11 = __minss_xmmss_memss(zmm15.d, 0x7f7fffff)
        
        zmm1_1 = var_368:4.d
        zmm14[0] = zmm14[0] f+ zmm9_1.d
        zmm1_1.d = zmm1_1.d f+ zmm10[0]
        zmm0_1.d = zmm11.d f* *arg8
        zmm13.d = zmm13.d f+ zmm12.d
        zmm14[0] = zmm14[0] f+ zmm0_1.d
        zmm0_1.d = zmm11.d f* *(arg8 + 4)
        zmm1_1.d = zmm1_1.d f+ zmm0_1.d
        zmm0_1.d = zmm11.d f* arg8[1].d
        zmm11 ^= data_142d3f780
        zmm13.d = zmm13.d f+ zmm0_1.d
        *arg7 = (_mm_unpacklo_ps(zmm14, zmm1_1.q)).q
        arg7[1].d = zmm13.d
        *rdi_3 = zmm11.d

result.b = 1
label_141635476:
__security_check_cookie(rax_1 ^ &var_3d8)
return result
