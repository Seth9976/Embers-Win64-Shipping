// 函数: sub_141636890
// 地址: 0x141636890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t r12 = 0
int32_t var_348 = 0
uint128_t* r14 = arg4
int128_t zmm12 = *(arg1 + 0x2c)
int32_t var_308 = zmm12.d
uint32_t zmm0[0x4] = *(arg2[1][0].q + 0x2c)
uint32_t zmm2[0x4]

if (zmm0[0] f== 0f)
    zmm2 = zx.o(0)
else
    zmm2 = __andps_xmmxud_memxud((*arg2)[0xa], data_142d3f770)
    zmm2[0] = zmm2[0] f* zmm0[0]

uint32_t zmm3[0x4] = *arg3
uint32_t var_338[0x4] = arg3[1]
uint32_t zmm13[0x4] = zmm2
uint32_t var_208 = zmm3[0]
void* var_260 = arg1
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
zmm0 = data_142d3f7e0
zmm13[0] = zmm13[0] f+ zmm12.d
uint32_t var_170[0x4] = zmm0
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
uint32_t (* var_238)[0x4] = arg2
uint32_t var_304 = zmm2[0]
zmm13[0] = zmm13[0] f* zmm13[0]
zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
uint32_t var_1fc = zmm2[0]
double temp0_3[0x2] = _mm_cvtps_pd(zmm13[0].q)
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
temp0_3[0] = temp0_3[0] + 9.9999999999999995e-07
uint64_t r13 = zx.q(var_188)
uint32_t var_1d8[0x4]
int128_t* var_230 = &var_1d8
int32_t* var_228 = &var_208
zmm0 = _mm_cvtpd_ps(temp0_3)
uint32_t zmm10[0x4] = *(arg10 + 4)
uint32_t zmm8[0x4] = *arg10
double zmm11[0x2] = *(arg10 + 8)
double zmm1[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
int32_t var_200 = zmm1[0].d
uint32_t var_2e0 = zmm0[0]
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
uint32_t var_204 = zmm0[0]
zmm3[0] = (zmm0 ^ 0x80000000)[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3[0] = (zmm1 ^ 0x80000000)[0].d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3[0] = zmm2[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
var_1d8 = zmm3
float zmm4 = *(arg1 + 0x20)
float zmm5 = *(arg1 + 0x24)
uint32_t var_248[0x4] = zmm3
zmm3 = *(arg1 + 0x1c)
zmm8[0] = zmm8[0] f* zmm3[0]
zmm10[0] = zmm10[0] f* zmm4
zmm11[0].d = zmm11[0].d f* zmm5
zmm8[0] = zmm8[0] f+ zmm10[0]
zmm8[0] = zmm8[0] f+ zmm11[0].d
uint32_t var_360
uint64_t var_300
uint32_t* rdx
int32_t rdi

if (zmm8[0] f< 0f)
    rdx = &var_300
    int32_t rax_6 = *(arg1 + 0x18)
    rdi = 2
    var_300 = *(arg1 + 0x10)
    int32_t var_2f8_1 = rax_6
else
    zmm0 = *(arg1 + 0x28)
    rdx = &var_360
    zmm3[0] = zmm3[0] f* zmm0[0]
    rdi = 1
    zmm4 = zmm4 f* zmm0[0]
    zmm3[0] = zmm3[0] f+ *(arg1 + 0x10)
    zmm4 = zmm4 f+ *(arg1 + 0x14)
    zmm5 = zmm5 f* zmm0[0] f+ *(arg1 + 0x18)
    var_360 = zmm3[0]
    float var_35c_1 = zmm4
    float var_358_1 = zmm5

int32_t rax_7 = rdx[2]
int32_t rcx_1 = rdi & 0xfffffffd
int64_t var_130 = *rdx

if ((rdi.b & 2) == 0)
    rcx_1 = rdi

int32_t rsi_1 = rcx_1 & 0xfffffffe
int32_t rax_10 = rdx[2]

if ((rcx_1.b & 1) == 0)
    rsi_1 = rcx_1

var_360 = (zmm8 ^ 0x80000000)[0]
uint32_t var_35c_2 = (zmm10 ^ 0x80000000)[0]
int32_t var_358_2 = (zmm11 ^ 0x80000000)[0].d
int32_t var_128 = rax_10
float var_320
float* rax_11
uint128_t zmm6_1
uint128_t zmm9
uint128_t zmm12_1
uint128_t zmm13_1
rax_11, zmm6_1, zmm9, zmm12_1, zmm13_1 = sub_1417119b0(&var_238, &var_320, &var_360)
uint128_t zmm1_1 = var_338[0]
uint128_t zmm5_1 = var_338[2]
uint128_t zmm4_1 = var_338[1]
uint128_t zmm14 = zmm1_1
uint128_t zmm2_1 = zx.o(*rax_11)
int32_t rcx_3 = rax_11[2]
uint128_t zmm0_1
zmm0_1.d = zmm6_1.d f- zmm2_1.d
int32_t var_2c0 = zmm1_1.d
int64_t var_100 = zmm2_1.q
uint32_t result = zx.d(arg9)
uint128_t zmm8_1 = zx.o(0)
uint128_t zmm3_1
zmm3_1.d = zmm1_1.d f- zmm0_1.d
int32_t var_2bc = zmm4_1.d
uint128_t zmm15 = zmm4_1
zmm1_1.d = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55).d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
int32_t var_350 = zmm5_1.d
uint128_t zmm7 = zmm5_1
zmm0_1.d = rax_7.d f- rcx_3
uint32_t result_2 = zmm5_1.d
zmm2_1.d = zmm3_1.d f* zmm3_1.d
int32_t var_f8 = rcx_3
uint128_t zmm10_1
zmm10_1.d = zmm4_1.d f- zmm1_1.d
int32_t var_324 = zmm3_1.d
uint128_t zmm11_1
zmm11_1.d = zmm5_1.d f- zmm0_1.d
int64_t var_2f0 = 0
int32_t var_2e8 = 0x3f800000
zmm0_1.d = zmm10_1.d f* zmm10_1.d
zmm1_1.d = zmm11_1.d f* zmm11_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d

if (zmm2_1.d f>= var_2e0 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
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
int32_t var_2d0
int64_t var_2a0
uint32_t result_1

if (rdi.b == 0)
    while (true)
        int32_t rax_12 = rcx_4
        rcx_4 += 1
        var_328 = rcx_4
        
        if (rax_12 s>= 0x20)
            zmm7 = var_350
            result = zx.d(arg9)
        else
            void* rax_13 = var_260
            zmm2_1.d = zmm3_1.d f* zmm3_1.d
            zmm0_1.d = zmm10_1.d f* zmm10_1.d
            zmm1_1.d = zmm11_1.d f* zmm11_1.d
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
            zmm3_1 = *(rax_13 + 0x1c)
            zmm0_1.d = zmm4_1.d f* zmm5_1.d
            zmm5_1 = *(rax_13 + 0x24)
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm10_1.d = zmm10_1.d f* zmm4_1.d
            zmm12_1.d = zmm4_1.d f* var_324
            zmm11_1.d = zmm11_1.d f* zmm4_1.d
            zmm2_1.d = zmm3_1.d f* zmm12_1.d
            var_348 = zmm4_1.d
            zmm4_1 = *(rax_13 + 0x20)
            zmm1_1.d = zmm5_1.d f* zmm11_1.d
            zmm0_1.d = zmm4_1.d f* zmm10_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            int32_t* rax_14
            int32_t rcx_5
            
            if (zmm2_1.d f< zmm9.d)
                rcx_5 = 8
                int32_t var_1e8_1 = *(rax_13 + 0x18)
                uint64_t var_1f0
                rax_14 = &var_1f0
                var_1f0 = *(rax_13 + 0x10)
            else
                zmm0_1 = *(rax_13 + 0x28)
                rcx_5 = 4
                zmm3_1.d = zmm3_1.d f* zmm0_1.d
                zmm4_1.d = zmm4_1.d f* zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ *(rax_13 + 0x10)
                zmm5_1.d = zmm5_1.d f* zmm0_1.d
                zmm4_1.d = zmm4_1.d f+ *(rax_13 + 0x14)
                zmm5_1.d = zmm5_1.d f+ *(rax_13 + 0x18)
                int32_t var_220 = zmm3_1.d
                rax_14 = &var_220
                int32_t var_21c_1 = zmm4_1.d
                int32_t var_218_1 = zmm5_1.d
            
            zmm7 = zx.o(*rax_14)
            int32_t rax_16 = rax_14[2]
            int32_t rsi_2 = rsi_1 | rcx_5
            var_2d0 = (zmm12_1 ^ 0x80000000).d
            int32_t rcx_7 = rsi_2 & 0xfffffff7
            uint64_t var_270_1 = zmm7.q
            int32_t var_278_1 = rax_16.d
            
            if ((rsi_2.b & 8) == 0)
                rcx_7 = rsi_2
            
            int32_t rdx_3 = rcx_7 & 0xfffffffb
            int32_t var_2cc_1 = (zmm10_1 ^ 0x80000000).d
            
            if ((rcx_7.b & 4) == 0)
                rdx_3 = rcx_7
            
            int32_t var_2c8_1 = (zmm11_1 ^ 0x80000000).d
            var_348 = rdx_3
            float var_1bc
            float* rax_19
            rax_19, zmm6_1, zmm7, zmm8_1, zmm9, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
                sub_1417119b0(&var_238, &var_1bc, &var_2d0)
            zmm1_1 = zx.o(*rax_19)
            int32_t rcx_9 = rax_19[2]
            zmm2_1.d = zmm7.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm0_1.d = rax_16.d f- rcx_9
            zmm4_1.d = zmm14.d f- zmm2_1.d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            int32_t var_2b0_1 = zmm3_1.d
            int32_t var_2ac_1 = zmm0_1.d
            int32_t var_324_1 = zmm2_1.d
            uint64_t rcx_11 = r13 * 3
            var_360 = zmm4_1.d
            zmm2_1.d = zmm15.d f- zmm3_1.d
            zmm3_1.d = var_350.d f- zmm0_1.d
            *(&var_130 + (rcx_11 << 2)) = (_mm_unpacklo_ps(zmm7, zmm6_1.q)).q
            zmm0_1.d = zmm12_1.d f* zmm4_1.d
            (&var_128)[rcx_11] = var_278_1
            result = rax_19[2]
            zmm5_1.d = zmm10_1.d f* zmm2_1.d
            var_358_2 = zmm3_1.d
            zmm3_1.d = zmm3_1.d f* zmm11_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            *(&var_100 + (rcx_11 << 2)) = zmm1_1.q
            int32_t var_35c_3 = zmm2_1.d
            (&var_f8)[rcx_11] = result
            zmm5_1.d = zmm5_1.d f+ zmm3_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5_1.d f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_11 << 2)) = var_360.q
                *(&var_160:8 + (rcx_11 << 2)) = var_358_2
                var_188 = r13.d
            label_14163718f:
                zmm6_1 = var_34c
                zmm7 = var_350
                
                if (r15.b != 0 && not(zmm5_1.d f< zmm9.d))
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm5_1.d = zmm5_1.d f+ 9.99999997e-07f
                    rdi.b = zmm5_1.d f>= zmm6_1.d
            else
                zmm3_1 = *(r14 + 4)
                zmm4_1 = *r14
                zmm7 = *(r14 + 8)
                zmm2_1.d = zmm4_1.d f* zmm12_1.d
                zmm0_1.d = zmm3_1.d f* zmm10_1.d
                zmm1_1.d = zmm7.d f* zmm11_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm9.d)
                    result.b = 0
                    goto label_141637c49
                
                zmm1_1 = zmm8_1
                zmm0_1.d = zmm5_1.d f- zmm13_1.d
                zmm0_1.d = zmm0_1.d f/ zmm2_1.d
                zmm8_1.d = zmm8_1.d f- zmm0_1.d
                
                if (zmm8_1.d f<= zmm1_1.d)
                    goto label_14163718f
                
                if (zmm8_1.d f> arg5)
                    result.b = 0
                    goto label_141637c49
                
                zmm1_1 = zx.o(var_2c0.q)
                zmm6_1 = 0x7f7fffff
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                r13 = zx.q(r13.d + 1)
                var_2a0 = zmm1_1.q
                zmm14.d = zmm4_1.d f* zmm8_1.d
                result_1 = result_2
                zmm15.d = zmm3_1.d f* zmm8_1.d
                var_188 = r13.d
                zmm14.d = zmm14.d f+ var_338[0]
                zmm7.d = zmm7.d f* zmm8_1.d
                var_368 = 0
                zmm15.d = zmm15.d f+ var_338[1]
                var_2f0.d = zmm12_1.d
                zmm7.d = zmm7.d f+ var_338[2]
                var_2c0 = zmm14.d
                zmm3_1.d = zmm14.d f- zmm1_1.d
                var_2f0:4.d = zmm10_1.d
                zmm4_1.d = zmm15.d f- zmm0_1.d
                int32_t var_2bc_1 = zmm15.d
                zmm2_1.d = zmm7.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                var_350 = zmm7.d
                result_2 = zmm7.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_2e8 = zmm11_1.d
                var_34c = 0x7f7fffff
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
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
                zmm1_1.d = zmm14.d f- var_324_1
                zmm2_1.d = zmm15.d f- var_2b0_1
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm7.d f- var_2ac_1
                *(&var_160 + (rcx_11 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_11 << 2)) = zmm0_1.d
            
            uint32_t rdx_11
            
            if (rdi.b != 0)
                int64_t* rax_33
                rax_33, zmm6_1, zmm7, zmm8_1, zmm9, zmm13_1, zmm14, zmm15 =
                    sub_1416f4530(&var_248, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rdx_11 = zx.d(var_367)
                zmm1_1 = zx.o(*rax_33)
                zmm11_1 = rax_33[1].d
                result = zx.d(arg9)
                var_300 = zmm1_1.q
                zmm3_1 = var_300.d
                zmm10_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_324 = zmm3_1.d
            else
                int32_t rcx_12 = r13.d
                int32_t rax_25
                
                if (rcx_12 == 1)
                    int64_t rax_29 = sx.q(var_184)
                    int64_t rcx_19 = rax_29 * 3
                    var_170[rax_29] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_19 << 2)))
                    rax_25 = *(&var_160:8 + (rcx_19 << 2))
                else if (rcx_12 == 2)
                    void var_198
                    uint64_t* rax_28
                    rax_28, zmm6_1, zmm7, zmm8_1, zmm9 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_28)
                    rax_25 = rax_28[1].d
                else if (rcx_12 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_27
                    rax_27, zmm6_1, zmm7, zmm8_1, zmm9, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_27)
                    rax_25 = rax_27[1].d
                else if (rcx_12 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_26
                    rax_26, zmm6_1, zmm7, zmm8_1, zmm9, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_26)
                    rax_25 = rax_26[1].d
                else
                    int32_t var_318_1 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm9, zmm9.q)
                    rax_25 = 0
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                zmm4_1 = var_2e0
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_314_1 = zmm0_1.q
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_3 = r9_3 * 3
                int32_t rdx_9 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_20 = *(&var_160:8 + (rsi_3 << 2))
                int32_t r8_5 = *(&var_160:8 + (r15 << 2))
                zmm10_1 = var_314_1:4.d
                int32_t rax_30 = *(&var_160:8 + (rbx_1 << 2))
                zmm11_1 = rax_25
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_3 << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi_3 << 2)))
                var_170[3] = zmm3_1.d
                var_150_1:4.d = rdx_9
                int32_t rdx_10 = (&var_128)[r14_1]
                var_140_1 = rcx_20
                int32_t rcx_21 = (&var_128)[rsi_3]
                var_140_1 = rax_30
                int32_t rax_31 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi_3 << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_2
                var_124_1:8.d = rdx_10
                rdx_11 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_21
                int32_t rcx_22 = (&var_f8)[rsi_3]
                int32_t var_104_1 = rax_31
                int32_t rax_32 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_5
                zmm2_1.d = zmm10_1.d f* zmm10_1.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_1.q
                var_100 = zmm3_1.q
                zmm3_1 = var_314_1.d
                zmm1_1.d = zmm11_1.d f* zmm11_1.d
                var_f4_1:8.d = rdx_11
                zmm0_1.d = zmm3_1.d f* zmm3_1.d
                var_e4_1:4.d = rcx_22
                var_324 = zmm3_1.d
                int32_t var_d4_1 = rax_32
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                result = zx.d(arg9)
                var_34c = zmm2_1.d
                rdi.b = zmm4_1.d f> zmm2_1.d
                bool cond:8_1 = zmm2_1.d f>= zmm6_1.d
                zmm6_1 = zmm2_1
                rdx_11.b = cond:8_1
                var_367 = rdx_11.b
                
                if (result.b == 0)
                    goto label_1416375e1
                
                if (rdi.b == 0)
                    goto label_1416375e6
                
                if (not(zmm8_1.d f!= zmm9.d))
                    zmm1_1 = 0x3eb0c6f7a0b5ed8d
                    zmm0_1 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (not(zmm0_1.q f<= zmm1_1.q))
                        zmm0_1 = _mm_cvtps_pd(zmm4_1.q)
                        
                        if (not(zmm0_1.q f<= zmm1_1.q) && r13.d s< 4)
                            r15.b = 1
                            rdi.b = 0
                            var_368 = 1
                            goto label_1416375ec
            
        label_1416375e1:
            
            if (rdi.b != 0)
                rcx_4 = var_328
            else
            label_1416375e6:
                r15 = zx.q(var_368)
            label_1416375ec:
                rcx_4 = var_328
                
                if (rdx_11.b == 0)
                    rsi_1 = var_348
                    r14 = arg4
                    continue
        
        zmm12_1 = var_308
        zmm1_1 = 0x7f7fffff
        break

int32_t* rdi_3 = arg6
*rdi_3 = zmm8_1.d

if (not(zmm8_1.d f<= zmm9.d))
    zmm4_1 = zmm9
    zmm3_1 = zmm9
    *arg8 = var_2f0
    *(arg8 + 8) = var_2e8
    
    if (r13.d s> 0)
        uint32_t (* rcx_24)[0x4] = &var_170
        uint64_t i_4 = zx.q(r13.d)
        int32_t* rax_36 = &var_f8
        uint64_t i
        
        do
            zmm2_1 = *rcx_24
            rcx_24 = &(*rcx_24)[1]
            zmm0_1.d = zmm2_1.d f* rax_36[-2]
            zmm1_1.d = zmm2_1.d f* rax_36[-1]
            zmm2_1.d = zmm2_1.d f* *rax_36
            rax_36 = &rax_36[3]
            zmm9.d = zmm9.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm2_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    zmm5_1 = var_304
    zmm0_1.d = zmm5_1.d f* *arg8
    zmm1_1.d = zmm8_1.d f* *arg4
    zmm9.d = zmm9.d f- zmm0_1.d
    zmm0_1.d = zmm5_1.d f* *(arg8 + 4)
    zmm1_1.d = zmm1_1.d f+ var_338[0]
    zmm5_1.d = zmm5_1.d f* *(arg8 + 8)
    zmm4_1.d = zmm4_1.d f- zmm0_1.d
    zmm9.d = zmm9.d f+ zmm1_1.d
    zmm1_1.d = zmm8_1.d f* *(arg4 + 4)
    zmm3_1.d = zmm3_1.d f- zmm5_1.d
    zmm8_1.d = zmm8_1.d f* *(arg4 + 8)
    zmm1_1.d = zmm1_1.d f+ var_338[1]
    zmm8_1.d = zmm8_1.d f+ var_338[2]
    zmm4_1.d = zmm4_1.d f+ zmm1_1.d
    zmm3_1.d = zmm3_1.d f+ zmm8_1.d
    *arg7 = (_mm_unpacklo_ps(zmm9, zmm4_1.q)).q
    arg7[1].d = zmm3_1.d
else if (result.b != 0)
    if (not(zmm13_1.d f<= zmm9.d))
        zmm0_1 = _mm_cvtps_pd(zmm6_1.q)
    
    if (zmm13_1.d f<= zmm9.d || zmm0_1.q f<= 9.9999999999999995e-07 || zmm6_1.d f>= zmm1_1.d)
        var_170[0].q = 0
        var_170[2].q = 0
        var_338[0].q = 0
        var_338[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_338[3] s< 8)
            sub_14083ad30(&var_338, 8)
        
        uint64_t* rcx_34
        uint128_t zmm0_2
        int32_t rax_50
        
        if (var_328 == 0)
            rcx_34 = arg7
            int32_t var_318_5 = 0x3f800000
            rax_50 = 0x3f800000
            zmm0_2 = _mm_unpacklo_ps(zmm9, zmm9.q)
        label_141637bce:
            zmm1_1 = zmm12_1
            *rdi_3 = (zmm13_1 ^ data_142d3f780).d
            *arg8 = zmm0_2.q
            *(arg8 + 8) = rax_50
            zmm0_2.d = zmm12_1.d f* *arg8
            zmm12_1.d = zmm12_1.d f* *(arg8 + 8)
            zmm1_1.d = zmm1_1.d f* *(arg8 + 4)
            zmm12_1.d = zmm12_1.d f+ var_128
            zmm0_2.d = zmm0_2.d f+ var_130.d
            zmm1_1.d = zmm1_1.d f+ var_130:4.d
            result = zmm12_1.d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_1.q)
        else
            if (r13.d s> 0)
                uint64_t i_5 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rdi_4 = sx.q(var_170[2])
                    int32_t rax_43 = (rdi_4 + 1).d
                    var_170[2] = rax_43
                    
                    if (rax_43 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_30 = var_170[0].q
                    int64_t rdx_14 = rdi_4 * 3
                    int32_t rax_44 = *(&var_128 + r12)
                    zmm1_1.d = zmm15.d f+ *(&var_100:4 + r12)
                    *(rcx_30 + (rdx_14 << 2)) = *(&var_130 + r12)
                    zmm0_2.d = zmm14.d f+ *(&var_100 + r12)
                    *(rcx_30 + (rdx_14 << 2) + 8) = rax_44
                    int64_t rdi_5 = sx.q(var_338[2])
                    int32_t var_35c_4 = zmm1_1.d
                    var_360 = zmm0_2.d
                    zmm0_2.d = zmm7.d f+ *(&var_f8 + r12)
                    int32_t rax_45 = (rdi_5 + 1).d
                    var_338[2] = rax_45
                    var_358_2 = zmm0_2.d
                    
                    if (rax_45 s> var_338[3])
                        sub_14083a7e0(&var_338)
                    
                    int64_t rcx_32 = var_338[0].q
                    int64_t rdx_16 = rdi_5 * 3
                    r12 += 0xc
                    *(rcx_32 + (rdx_16 << 2)) = var_360.q
                    *(rcx_32 + (rdx_16 << 2) + 8) = var_358_2
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_238 = &var_1d8
            uint32_t (* var_230_1)[0x4] = arg2
            int128_t* var_228_1 = arg3
            int32_t rax_49
            rax_49, zmm12_1, zmm13_1 = sub_1415a7da0(&var_170, &var_338, &var_260, &var_238, 
                &var_348, &var_360, &var_2a0, &var_248)
            zmm0_2 = zx.o(var_360.q)
            rax_50 = var_358_2
            rcx_34 = arg7
            
            if (rax_49 == 2)
                goto label_141637bce
            
            *arg8 = zmm0_2.q
            zmm0_2.d = (var_348 ^ data_142d3f780).d f- zmm13_1.d
            *(arg8 + 8) = rax_50
            result = result_1
            *rdi_3 = zmm0_2.d
            zmm0_2 = zx.o(var_2a0)
        *rcx_34 = zmm0_2.q
        rcx_34[1].d = result
        int64_t rcx_35 = var_338[0].q
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        int64_t rcx_36 = var_170[0].q
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
    else
        zmm3_1 = zmm9
        zmm4_1 = zmm9
        *arg8 = var_2f0
        zmm5_1 = zmm9
        *(arg8 + 8) = var_2e8
        zmm11_1 = zmm9
        zmm12_1 = zmm9
        zmm10_1 = zmm9
        
        if (rcx_4 == 0)
            zmm1_1 = zx.o(var_130)
            zmm2_1 = zx.o(var_100)
            int32_t rax_40 = var_128
            zmm4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            int32_t rax_41 = var_f8
            zmm5_1 = rax_40
            zmm12_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            zmm10_1 = rax_41
            var_300 = zmm1_1.q
            zmm3_1 = var_300.d
            var_2d0.q = zmm2_1.q
            zmm11_1 = var_2d0
        else if (r13.d s> 0)
            uint32_t (* rax_39)[0x4] = &var_170
            uint64_t i_3 = zx.q(r13.d)
            uint64_t i_2
            
            do
                zmm2_1 = *rax_39
                rax_39 = &(*rax_39)[1]
                zmm0_1.d = zmm2_1.d f* *(&var_130 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_130:4 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_128 + r12)
                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_100 + r12)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm0_1.d = zmm2_1.d f* *(&var_100:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                zmm11_1.d = zmm11_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm12_1.d = zmm12_1.d f+ zmm0_1.d
                zmm10_1.d = zmm10_1.d f+ zmm2_1.d
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        zmm14 = var_338[0]
        zmm6_1.d = var_338[2].d f+ zmm10_1.d
        zmm15 = var_338[1]
        zmm8_1.d = zmm14.d f+ zmm11_1.d
        zmm7.d = zmm15.d f+ zmm12_1.d
        zmm6_1.d = zmm6_1.d f- zmm5_1.d
        zmm8_1.d = zmm8_1.d f- zmm3_1.d
        zmm7.d = zmm7.d f- zmm4_1.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm0_1.d = zmm8_1.d f* zmm8_1.d
        zmm2_1.d = zmm7.d f* zmm7.d
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
        zmm8_1.d = zmm8_1.d f* zmm4_1.d
        zmm7.d = zmm7.d f* zmm4_1.d
        zmm6_1.d = zmm6_1.d f* zmm4_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm8_1, zmm7.q)
        *arg8 = zmm0_1.q
        int32_t var_318_3 = zmm6_1.d
        zmm13_1.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_1.d, var_34c).d
        *(arg8 + 8) = var_318_3
        
        if (not(zmm13_1.d f< zmm9.d))
            zmm9 = __minss_xmmss_memss(zmm13_1.d, 0x7f7fffff)
        
        zmm1_1 = *arg8
        zmm2_1 = *(arg8 + 4)
        zmm3_1 = *(arg8 + 8)
        zmm5_1 = var_304
        zmm0_1.d = zmm1_1.d f* zmm5_1.d
        zmm11_1.d = zmm11_1.d f- zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm1_1.d
        zmm1_1.d = zmm2_1.d f* zmm5_1.d
        zmm11_1.d = zmm11_1.d f+ zmm14.d
        zmm12_1.d = zmm12_1.d f- zmm1_1.d
        zmm1_1.d = zmm3_1.d f* zmm5_1.d
        zmm11_1.d = zmm11_1.d f+ zmm0_1.d
        zmm0_1.d = zmm9.d f* zmm2_1.d
        zmm10_1.d = zmm10_1.d f- zmm1_1.d
        zmm12_1.d = zmm12_1.d f+ zmm15.d
        zmm10_1.d = zmm10_1.d f+ var_338[2]
        zmm12_1.d = zmm12_1.d f+ zmm0_1.d
        zmm0_1 = zmm9
        zmm9 ^= data_142d3f780
        zmm0_1.d = zmm0_1.d f* zmm3_1.d
        zmm10_1.d = zmm10_1.d f+ zmm0_1.d
        *arg7 = (_mm_unpacklo_ps(zmm11_1, zmm12_1.q)).q
        arg7[1].d = zmm10_1.d
        *rdi_3 = zmm9.d

result.b = 1
label_141637c49:
__security_check_cookie(rax_1 ^ &var_3a8)
return result
