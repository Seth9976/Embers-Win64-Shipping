// 函数: sub_14165c3f0
// 地址: 0x14165c3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
float zmm3[0x4] = *arg3
float zmm13[0x4] = (*arg2)[0xb]
int64_t r12 = 0
double var_328[0x2] = arg3[1]
float var_1f8 = zmm3[0]
uint128_t* r14 = arg4
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int64_t var_268 = arg1
double var_170[0x2] = data_142d3f7e0
int32_t var_188 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_1ec = temp0[0]
zmm13[0] = zmm13[0] * zmm13[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
double temp0_1[0x2] = _mm_cvtps_pd(zmm13[0].q)
float var_1d8[0x4]
int128_t* var_238 = &var_1d8
float (* var_240)[0x4] = arg2
int32_t* var_230 = &var_1f8
temp0_1[0] = temp0_1[0] + 9.9999999999999995e-07
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1f0 = temp0_2[0]
int32_t var_2d0 = _mm_cvtpd_ps(temp0_1)[0].d
double zmm0[0x2] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3 ^= 0x80000000
int32_t var_1f4 = zmm0[0].d
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_5[0] = (zmm0 ^ 0x80000000)[0].d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
var_1d8 = temp0_8
zmm0 = *(arg1 + 0x28)
zmm0[0].d = zmm0[0].d f* *arg10
float zmm1[0x4] = *(arg1 + 0x30)
float var_258[0x4] = temp0_8
float var_340 = zmm0[0].d
zmm0 = *(arg1 + 0x2c)
zmm0[0].d = zmm0[0].d f* *(arg10 + 4)
int32_t var_33c = zmm0[0].d
zmm1[0] = zmm1[0] f* *(arg10 + 8)
float var_338 = zmm1[0]
float var_2f0
int128_t zmm10 = sub_141758e70(*(arg1 + 0x10), &var_2f0, &var_340, zx.o(0))
float zmm6[0x4] = var_2f0
int128_t zmm1_1 = *(arg10 + 4)
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int32_t var_2ec
int64_t zmm7
zmm7.d = var_2ec.d f* *(arg1 + 0x2c)
float var_2e8
float zmm8 = var_2e8 f* *(arg1 + 0x30)
int64_t var_130 = (_mm_unpacklo_ps(zmm6, zmm7)).q
var_340 = (*arg10 ^ zmm10)[0]
int32_t var_33c_1 = (zmm1_1 ^ zmm10).d
float var_338_1 = (*(arg10 + 8) ^ zmm10)[0]
float var_128 = zmm8
void var_310
int32_t* rax_5
uint128_t zmm6_1
uint128_t zmm7_1
uint128_t zmm8_1
uint128_t zmm9_1
uint128_t zmm13_1
rax_5, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm13_1 = sub_1417105f0(&var_240, &var_310, &var_340)
uint128_t zmm2_1 = var_328[0]:4.d
uint128_t zmm10_1 = zx.o(0)
float zmm5[0x4] = var_328[0].d
uint128_t zmm12 = zmm2_1
uint128_t zmm3_1 = var_328[1].d
uint128_t zmm1_2 = zx.o(*rax_5)
float zmm11[0x4] = zmm5
int32_t rcx_2 = rax_5[2]
zmm6_1.d = zmm6_1.d f- zmm1_2.d
int32_t var_2bc = zmm2_1.d
uint32_t result = zx.d(arg9)
zmm7_1.d = zmm7_1.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
int64_t var_100 = zmm1_2.q
uint128_t zmm14 = zmm3_1
uint128_t zmm15
zmm15.d = zmm5.d f- zmm6_1.d
zmm8_1.d = zmm8_1.d f- rcx_2
float var_2c0 = zmm5[0]
zmm2_1.d = zmm2_1.d f- zmm7_1.d
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_2
int64_t var_2e0 = 0
zmm6_1.d = zmm3_1.d f- zmm8_1.d
uint128_t zmm0_2
zmm0_2.d = zmm15.d f* zmm15.d
float var_2d8 = 1f
int32_t var_314 = zmm2_1.d
zmm8_1 = zmm2_1
zmm2_1.d = zmm2_1.d f* zmm8_1.d
zmm1_2.d = zmm6_1.d f* zmm6_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int64_t rbx

if (zmm2_1.d f>= var_2d0 || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

zmm1_2 = 0x7f7fffff
uint64_t r15 = zx.q(rbx.b)
int32_t var_330 = 0x7f7fffff
zmm7_1 = 0x7f7fffff
char var_347 = 0
int32_t rdi_1 = 0
char var_348 = rbx.b
float var_318
int64_t var_280
uint32_t result_1
float zmm4_1[0x4]

if (rbx.b != 0)
label_14165d05c:
    int32_t* rbx_1 = arg6
    *rbx_1 = zmm10_1.d
    
    if (not(zmm10_1.d f<= zmm9_1.d))
        zmm4_1 = zmm9_1
        zmm3_1 = zmm9_1
        *arg8 = var_2e0
        *(arg8 + 8) = var_2d8
        
        if (r13.d s> 0)
            int128_t* rcx_20 = &var_170
            uint64_t i_4 = zx.q(r13.d)
            int32_t* rax_24 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_20
                rcx_20 += 4
                zmm0_2.d = zmm2_1.d f* rax_24[-2]
                zmm1_2.d = zmm2_1.d f* rax_24[-1]
                zmm2_1.d = zmm2_1.d f* *rax_24
                rax_24 = &rax_24[3]
                zmm9_1.d = zmm9_1.d f+ zmm0_2.d
                zmm4_1[0] = zmm4_1[0] f+ zmm1_2.d
                zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm13_1.d f* *arg8
        zmm1_2.d = zmm10_1.d f* *arg4
        zmm9_1.d = zmm9_1.d f- zmm0_2.d
        zmm0_2.d = zmm13_1.d f* *(arg8 + 4)
        zmm13_1.d = zmm13_1.d f* *(arg8 + 8)
        zmm1_2.d = zmm1_2.d f+ zmm5[0]
        zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
        zmm3_1.d = zmm3_1.d f- zmm13_1.d
        zmm9_1.d = zmm9_1.d f+ zmm1_2.d
        zmm1_2.d = zmm10_1.d f* *(arg4 + 4)
        zmm10_1.d = zmm10_1.d f* *(arg4 + 8)
        zmm1_2.d = zmm1_2.d f+ var_328[0]:4.d
        zmm10_1.d = zmm10_1.d f+ var_328[1].d
        zmm4_1[0] = zmm4_1[0] f+ zmm1_2.d
        zmm3_1.d = zmm3_1.d f+ zmm10_1.d
        *arg7 = (_mm_unpacklo_ps(zmm9_1, zmm4_1[0].q)).q
        arg7[1].d = zmm3_1.d
    else if (result.b != 0)
        if (not(zmm13_1.d f<= zmm9_1.d))
            zmm0_2 = _mm_cvtps_pd(zmm7_1.q)
        
        if (zmm13_1.d f<= zmm9_1.d || zmm0_2.q f<= 9.9999999999999995e-07 || zmm7_1.d f>= zmm1_2.d)
            var_170[0] = 0
            var_170[1] = 0
            var_328[0] = 0
            var_328[1] = 0
            sub_14083ad30(&var_170, 8)
            
            if (var_328[1]:4.d s< 8)
                sub_14083ad30(&var_328, 8)
            
            uint64_t* rcx_30
            float rax_38
            uint128_t zmm0_4
            
            if (rdi_1 == 0)
                rcx_30 = arg7
                int32_t var_308_5 = 0x3f800000
                rax_38 = 1f
                zmm0_4 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
            label_14165d600:
                zmm2_1 = var_130:4.d
                zmm1_2 = var_130.d
                *rbx_1 = (zmm13_1 ^ data_142d3f780).d
                *arg8 = zmm0_4.q
                zmm0_4 = var_128
                *(arg8 + 8) = rax_38
                result = zmm0_4.d
                *rcx_30 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
            else
                if (r13.d s> 0)
                    uint64_t i_5 = zx.q(r13.d)
                    uint64_t i_1
                    
                    do
                        int64_t rdi_6 = sx.q(var_170[1].d)
                        int32_t rax_31 = (rdi_6 + 1).d
                        var_170[1].d = rax_31
                        
                        if (rax_31 s> var_170[1]:4.d)
                            sub_14083a7e0(&var_170)
                        
                        double rcx_26 = var_170[0]
                        int64_t rdx_13 = rdi_6 * 3
                        int32_t rax_32 = *(&var_128 + r12)
                        zmm1_2.d = zmm12.d f+ *(&var_100:4 + r12)
                        *(rcx_26 i+ (rdx_13 << 2)) = *(&var_130 + r12)
                        zmm0_4.d = zmm11.d f+ *(&var_100 + r12)
                        *(rcx_26 i+ (rdx_13 << 2) + 8) = rax_32
                        int64_t rdi_7 = sx.q(var_328[1].d)
                        int32_t var_33c_3 = zmm1_2.d
                        var_340 = zmm0_4.d
                        zmm0_4.d = zmm14.d f+ *(&var_f8 + r12)
                        int32_t rax_33 = (rdi_7 + 1).d
                        var_328[1].d = rax_33
                        var_338_1 = zmm0_4.d
                        
                        if (rax_33 s> var_328[1]:4.d)
                            sub_14083a7e0(&var_328)
                        
                        double rcx_28 = var_328[0]
                        int64_t rdx_15 = rdi_7 * 3
                        r12 += 0xc
                        *(rcx_28 i+ (rdx_15 << 2)) = var_340.q
                        *(rcx_28 i+ (rdx_15 << 2) + 8) = var_338_1
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    rbx_1 = arg6
                
                var_240 = &var_1d8
                float (* var_238_1)[0x4] = arg2
                int128_t* var_230_1 = arg3
                int32_t rax_37
                rax_37, zmm13_1 = sub_1415746a0(&var_170, &var_328, &var_268, &var_240, &var_318, 
                    &var_340, &var_280, &var_258)
                zmm0_4 = zx.o(var_340.q)
                rax_38 = var_338_1
                rcx_30 = arg7
                
                if (rax_37 == 2)
                    goto label_14165d600
                
                *arg8 = zmm0_4.q
                zmm0_4 = var_318 ^ data_142d3f780
                *(arg8 + 8) = rax_38
                zmm0_4.d = zmm0_4.d f- zmm13_1.d
                result = result_1
                *rbx_1 = zmm0_4.d
                *rcx_30 = var_280
            rcx_30[1].d = result
            double rcx_31 = var_328[0]
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            double rcx_32 = var_170[0]
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
        else
            zmm3_1 = zmm9_1
            zmm4_1 = zmm9_1
            *arg8 = var_2e0
            zmm5 = zmm9_1
            *(arg8 + 8) = var_2d8
            zmm11 = zmm9_1
            zmm12 = zmm9_1
            zmm10_1 = zmm9_1
            
            if (rdi_1 == 0)
                zmm1_2 = zx.o(var_130)
                zmm2_1 = zx.o(var_100)
                float rax_28 = var_128
                zmm4_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                int32_t rax_29 = var_f8
                zmm5 = rax_28
                zmm12 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                zmm10_1 = rax_29
                zmm3_1 = zmm1_2.d
                zmm11 = zmm2_1.d
            else if (r13.d s> 0)
                int128_t* rax_27 = &var_170
                uint64_t i_3 = zx.q(r13.d)
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_27
                    rax_27 += 4
                    zmm0_2.d = zmm2_1.d f* *(&var_130 + r12)
                    zmm1_2.d = zmm2_1.d f* *(&var_130:4 + r12)
                    zmm3_1.d = zmm3_1.d f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_128 + r12)
                    zmm4_1[0] = zmm4_1[0] f+ zmm1_2.d
                    zmm1_2.d = zmm2_1.d f* *(&var_100 + r12)
                    zmm5[0] = zmm5[0] f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_100:4 + r12)
                    zmm2_1.d = zmm2_1.d f* *(&var_f8 + r12)
                    zmm11[0] = zmm11[0] f+ zmm1_2.d
                    r12 += 0xc
                    zmm12.d = zmm12.d f+ zmm0_2.d
                    zmm10_1.d = zmm10_1.d f+ zmm2_1.d
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            zmm14 = var_328[0].d
            zmm6_1.d = var_328[1].d.d f+ zmm10_1.d
            zmm15 = var_328[0]:4.d
            zmm8_1.d = zmm14.d f+ zmm11[0]
            zmm7_1.d = zmm15.d f+ zmm12.d
            zmm6_1.d = zmm6_1.d f- zmm5[0]
            zmm5 = 0x3f000000
            zmm8_1.d = zmm8_1.d f- zmm3_1.d
            zmm7_1.d = zmm7_1.d f- zmm4_1[0]
            zmm1_2.d = zmm6_1.d f* zmm6_1.d
            zmm0_2.d = zmm8_1.d f* zmm8_1.d
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            float temp0_24[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_2.d = temp0_24.d f* temp0_24[0]
            zmm1_2.d = zmm3_1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_24.d f* zmm2_1.d
            temp0_24[0] = temp0_24[0] f+ zmm0_2.d
            zmm1_2.d = temp0_24.d f* temp0_24[0]
            zmm3_1.d = zmm3_1.d f* zmm1_2.d
            zmm5[0] = 0.5f f- zmm3_1.d
            zmm0_2.d = temp0_24.d f* zmm5[0]
            temp0_24[0] = temp0_24[0] f+ zmm0_2.d
            zmm1_2.d = temp0_24.d f* zmm7_1.d
            zmm0_2.d = temp0_24.d f* zmm8_1.d
            temp0_24[0] = temp0_24[0] f* zmm6_1.d
            zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1_2.q)
            *arg8 = zmm0_2.q
            zmm1_2.d = zmm13_1.d f- __sqrtss_xmmss_memss(zmm0_2.d, var_330).d
            *(arg8 + 8) = temp0_24[0]
            
            if (not(zmm1_2.d f< zmm9_1.d))
                zmm9_1 = __minss_xmmss_memss(zmm1_2.d, 0x7f7fffff)
            
            zmm1_2 = *arg8
            zmm2_1 = *(arg8 + 4)
            zmm3_1 = *(arg8 + 8)
            zmm0_2.d = zmm1_2.d f* zmm13_1.d
            zmm11[0] = zmm11[0] f- zmm0_2.d
            zmm0_2.d = zmm9_1.d f* zmm1_2.d
            zmm1_2.d = zmm2_1.d f* zmm13_1.d
            zmm11[0] = zmm11[0] f+ zmm14.d
            zmm12.d = zmm12.d f- zmm1_2.d
            zmm1_2.d = zmm3_1.d f* zmm13_1.d
            zmm11[0] = zmm11[0] f+ zmm0_2.d
            zmm0_2.d = zmm9_1.d f* zmm2_1.d
            zmm10_1.d = zmm10_1.d f- zmm1_2.d
            zmm12.d = zmm12.d f+ zmm15.d
            zmm10_1.d = zmm10_1.d f+ var_328[1].d
            zmm12.d = zmm12.d f+ zmm0_2.d
            zmm0_2 = zmm9_1
            zmm9_1 ^= data_142d3f780
            zmm0_2.d = zmm0_2.d f* zmm3_1.d
            zmm10_1.d = zmm10_1.d f+ zmm0_2.d
            *arg7 = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
            arg7[1].d = zmm10_1.d
            *rbx_1 = zmm9_1.d
    
    result.b = 1
else
    while (true)
        int32_t rax_6 = rdi_1
        rdi_1 += 1
        
        if (rax_6 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm5 = 0x3f000000
            int64_t rdi_2 = var_268
            zmm0_2.d = zmm8_1.d f* zmm8_1.d
            void* rcx_3 = *(rdi_2 + 0x10)
            zmm1_2.d = zmm6_1.d f* zmm6_1.d
            zmm2_1.d = zmm15.d f* zmm15.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            float temp0_11[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_2.d = temp0_11.d f* temp0_11[0]
            zmm1_2.d = zmm3_1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_11.d f* zmm2_1.d
            temp0_11[0] = temp0_11[0] f+ zmm0_2.d
            zmm1_2.d = temp0_11.d f* temp0_11[0]
            zmm3_1.d = zmm3_1.d f* zmm1_2.d
            zmm5[0] = 0.5f f- zmm3_1.d
            zmm0_2.d = temp0_11.d f* zmm5[0]
            temp0_11[0] = temp0_11[0] f+ zmm0_2.d
            zmm6_1.d = zmm6_1.d f* temp0_11[0]
            zmm15.d = zmm15.d f* temp0_11[0]
            zmm8_1.d = zmm8_1.d f* temp0_11[0]
            int32_t var_314_1 = zmm6_1.d
            zmm0_2.d = zmm15.d f* *(rdi_2 + 0x28)
            var_318 = temp0_11[0]
            zmm1_2.d = zmm8_1.d f* *(rdi_2 + 0x2c)
            int32_t var_210 = zmm0_2.d
            zmm0_2.d = zmm6_1.d f* *(rdi_2 + 0x30)
            int32_t var_20c_1 = zmm1_2.d
            int32_t var_208_1 = zmm0_2.d
            float var_228
            int128_t zmm8_2 = sub_141758e70(rcx_3, &var_228, &var_210, zmm9_1)
            int32_t var_220
            uint128_t zmm0_3
            zmm0_3.d = var_220.d f* *(rdi_2 + 0x30)
            *(rdi_2 + 0x28)
            *(rdi_2 + 0x2c)
            int32_t var_2f8_1 = zmm0_3.d
            int32_t var_298_1 = zmm0_3.d
            int32_t var_218_1 = (zmm8_2 ^ 0x80000000).d
            int32_t var_21c = (zmm15 ^ 0x80000000).d
            int32_t var_214_1 = (var_314_1 ^ 0x80000000).d
            void var_1bc
            int32_t* rax_7
            rax_7, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14, zmm15 =
                sub_1417105f0(&var_240, &var_1bc, &var_21c)
            zmm1_2 = zx.o(*rax_7)
            int32_t rcx_5 = rax_7[2]
            zmm2_1.d = zmm7_1.d f- zmm1_2.d
            int32_t var_290_1 = zmm2_1.d
            zmm5 = var_314_1
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
            zmm0_2.d = var_2f8_1.d f- rcx_5
            zmm11[0] = zmm11[0] f- zmm2_1.d
            zmm2_1.d = zmm12.d f- zmm3_1.d
            var_318 = zmm3_1.d
            zmm3_1.d = zmm14.d f- zmm0_2.d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            var_340 = zmm11[0]
            zmm11[0] = zmm11[0] f* zmm15.d
            uint64_t rcx_7 = r13 * 3
            int32_t var_2f8_2 = zmm0_2.d
            int32_t var_33c_2 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm8_1.d
            var_338_1 = zmm3_1.d
            zmm3_1.d = zmm3_1.d f* zmm5[0]
            zmm11[0] = zmm11[0] f+ zmm2_1.d
            *(&var_130 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm7_1, zmm6_1.q)).q
            (&var_128)[rcx_7] = var_298_1
            result = rax_7[2]
            *(&var_100 + (rcx_7 << 2)) = zmm1_2.q
            zmm11[0] = zmm11[0] f+ zmm3_1.d
            (&var_f8)[rcx_7] = result
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm11[0] f<= zmm13_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_340.q
                *(&var_160:8 + (rcx_7 << 2)) = var_338_1
                var_188 = r13.d
            label_14165cbe0:
                zmm7_1 = var_330
                
                if (r15.b != 0 && not(zmm11[0] f< zmm9_1.d))
                    zmm11[0] = zmm11[0] * zmm11[0]
                    zmm11[0] = zmm11[0] + 9.99999997e-07f
                    rbx.b = zmm11[0] f>= zmm7_1.d
            else
                zmm3_1 = *(r14 + 4)
                zmm6_1 = *r14
                zmm7_1 = *(r14 + 8)
                zmm2_1.d = zmm6_1.d f* zmm15.d
                zmm0_2.d = zmm3_1.d f* zmm8_1.d
                zmm1_2.d = zmm7_1.d f* zmm5[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm9_1.d)
                    result.b = 0
                    break
                
                zmm1_2 = zmm10_1
                zmm0_2.d = zmm11.d f- zmm13_1.d
                zmm0_2.d = zmm0_2.d f/ zmm2_1.d
                zmm10_1.d = zmm10_1.d f- zmm0_2.d
                
                if (zmm10_1.d f<= zmm1_2.d)
                    goto label_14165cbe0
                
                if (zmm10_1.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_2 = zx.o(var_2c0.q)
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm14 = zmm7_1
                zmm7_1 = 0x7f7fffff
                zmm11 = zmm6_1
                var_280 = zmm1_2.q
                r13 = zx.q(r13.d + 1)
                zmm11[0] = zmm11[0] f* zmm10_1.d
                result_1 = result_2
                zmm12.d = zmm3_1.d f* zmm10_1.d
                var_188 = r13.d
                zmm11[0] = zmm11[0] f+ var_328[0].d
                zmm14.d = zmm14.d f* zmm10_1.d
                var_348 = 0
                zmm12.d = zmm12.d f+ var_328[0]:4.d
                var_2e0.d = zmm15.d
                zmm14.d = zmm14.d f+ var_328[1].d
                var_2c0 = zmm11[0]
                zmm3_1.d = zmm11.d f- zmm1_2.d
                var_2e0:4.d = zmm8_1.d
                zmm1_2 = var_160:4.d
                zmm4_1 = zmm12
                zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
                int32_t var_2bc_1 = zmm12.d
                zmm2_1.d = zmm14.d f- result_1
                zmm0_2.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm14.d
                var_2d8 = zmm5[0]
                zmm1_2.d = zmm1_2.d f+ zmm4_1[0]
                var_330 = 0x7f7fffff
                var_160.d = zmm0_2.d
                zmm0_2.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_2.d
                zmm1_2.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_2.d
                var_160:0xc.d = zmm1_2.d
                zmm0_2.d = var_150_1.d.d f+ zmm4_1[0]
                zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_2.d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2.d
                zmm0_2.d = zmm0_2.d f+ zmm3_1.d
                zmm1_2.d = var_150_1:0xc.d.d f+ zmm4_1[0]
                var_150_1:8.d = zmm0_2.d
                zmm0_2.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm11.d f- var_290_1
                zmm2_1.d = zmm12.d f- var_318
                var_140_1 = zmm0_2.d
                zmm0_2.d = zmm14.d f- var_2f8_2
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_2.d
            
            uint32_t rcx_18
            
            if (rbx.b != 0)
                int64_t* rax_21
                rax_21, zmm7_1, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14 =
                    sub_1416f4530(&var_258, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rcx_18 = zx.d(var_347)
                zmm1_2 = zx.o(*rax_21)
                zmm6_1 = rax_21[1].d
                result = zx.d(arg9)
                uint32_t var_2b0_1 = zmm1_2.d
                zmm8_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm15 = var_2b0_1
            else
                int32_t rcx_8 = r13.d
                int32_t rax_13
                
                if (rcx_8 == 1)
                    int64_t rax_17 = sx.q(var_184)
                    int64_t rcx_15 = rax_17 * 3
                    *(&var_170 + (rax_17 << 2)) = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_15 << 2)))
                    rax_13 = *(&var_160:8 + (rcx_15 << 2))
                else if (rcx_8 == 2)
                    void var_198
                    uint64_t* rax_16
                    rax_16, zmm7_1, zmm9_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_16)
                    rax_13 = rax_16[1].d
                else if (rcx_8 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_15
                    rax_15, zmm7_1, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_15)
                    rax_13 = rax_15[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_14
                    rax_14, zmm7_1, zmm9_1, zmm10_1, zmm11, zmm12, zmm13_1, zmm14 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_14)
                    rax_13 = rax_14[1].d
                else
                    int32_t var_308_1 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1.q)
                    rax_13 = 0
                
                int32_t var_178
                int64_t rdi_3 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                uint64_t var_304_1 = zmm0_2.q
                rbx = rdi_3 * 3
                r15 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t r8_7 = *(&var_160:8 + (r15 << 2))
                zmm15 = var_304_1.d
                zmm8_1 = var_304_1:4.d
                zmm6_1 = rax_13
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx << 2))
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                var_160.q = *(&var_160 + (r15 << 2))
                float rdi_4 = (&var_128)[r15]
                var_170[1].d = (*(&var_170 + (r9_3 << 2))).d
                var_170[0].d = (*(&var_170 + (r11_1 << 2))).d
                var_170[0]:4.d = (*(&var_170 + (r10_1 << 2))).d
                var_170[1]:4.d = (*(&var_170 + (rdi_3 << 2))).d
                var_150_1:4.d = *(&var_160:8 + (r14_1 << 2))
                int32_t rdx_9 = (&var_128)[r14_1]
                var_140_1 = *(&var_160:8 + (rsi_1 << 2))
                int32_t rcx_17 = (&var_128)[rsi_1]
                var_140_1 = *(&var_160:8 + (rbx << 2))
                int32_t rax_19 = (&var_128)[rbx]
                var_124_1.q = *(&var_130 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = *(&var_130 + (rbx << 2))
                zmm0_2 = zx.o(*(&var_100 + (rbx << 2)))
                var_124_1:0xc.q = *(&var_130 + (rsi_1 << 2))
                zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_130 = *(&var_130 + (r15 << 2))
                zmm3_1 = zx.o(*(&var_100 + (r15 << 2)))
                var_128 = rdi_4
                var_124_1:8.d = rdx_9
                int32_t rdx_10 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_17
                rcx_18 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_19
                int32_t rax_20 = (&var_f8)[rbx]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_160:8.d = r8_7
                zmm2_1.d = zmm8_1.d f* zmm8_1.d
                var_f8 = (&var_f8)[r15]
                var_f4_1:0xc.q = zmm1_2.q
                zmm0_2.d = zmm15.d f* zmm15.d
                var_f4_1:8.d = rdx_10
                zmm1_2.d = zmm6_1.d f* zmm6_1.d
                var_e4_1:4.d = rcx_18
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                var_100 = zmm3_1.q
                zmm3_1 = var_2d0
                int32_t var_d4_1 = rax_20
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                result = zx.d(arg9)
                rbx.b = zmm3_1.d f> zmm2_1.d
                bool cond:3_1 = zmm2_1.d f>= zmm7_1.d
                var_330 = zmm2_1.d
                zmm7_1 = zmm2_1
                rcx_18.b = cond:3_1
                var_347 = rcx_18.b
                
                if (result.b == 0)
                    goto label_14165d019
                
                if (rbx.b == 0)
                    goto label_14165d01d
                
                if (not(zmm10_1.d f!= zmm9_1.d))
                    zmm1_2 = 0x3eb0c6f7a0b5ed8d
                    zmm0_2 = _mm_cvtps_pd(zmm2_1.q)
                    
                    if (not(zmm0_2.q f<= zmm1_2.q))
                        zmm0_2 = _mm_cvtps_pd(zmm3_1.q)
                        
                        if (not(zmm0_2.q f<= zmm1_2.q) && r13.d s< 4)
                            r15.b = 1
                            rbx.b = 0
                            var_348 = 1
                            goto label_14165d026
            
        label_14165d019:
            
            if (rbx.b == 0)
            label_14165d01d:
                r15 = zx.q(var_348)
            label_14165d026:
                
                if (rcx_18.b == 0)
                    r14 = arg4
                    continue
        
        zmm1_2 = 0x7f7fffff
        zmm5 = var_328[0].d
        goto label_14165d05c
__security_check_cookie(rax_1 ^ &var_388)
return result
