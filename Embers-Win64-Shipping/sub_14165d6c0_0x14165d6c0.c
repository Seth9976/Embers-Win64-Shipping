// 函数: sub_14165d6c0
// 地址: 0x14165d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float var_1e8 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
int96_t var_298 = zmm0[0].12
int64_t var_268 = arg1
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
float var_170[0x4] = data_142d3f7e0
float var_1dc = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_1e4 = temp0_1[0]
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_248)[0x4] = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1e0 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float var_1c8[0x4]
int128_t* var_240 = &var_1c8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_1c8 = temp0_6
zmm0 = *(arg1 + 0x28)
zmm0[0] = zmm0[0] f* *arg10
void* rcx = *(arg1 + 0x10)
float zmm1[0x4] = *(arg1 + 0x30)
zmm1[0] = zmm1[0] f* *(arg10 + 8)
int32_t* var_238 = &var_1e8
float var_320 = zmm0[0]
zmm0 = *(arg1 + 0x2c)
zmm0[0] = zmm0[0] f* *(arg10 + 4)
float var_258[0x4] = temp0_6
float var_318 = zmm1[0]
float var_31c = zmm0[0]
float var_2e8
sub_141758e70(rcx, &var_2e8, &var_320, zx.o(0))
float zmm6[0x4] = var_2e8
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int32_t var_2e4
int64_t zmm7
zmm7.d = var_2e4.d f* *(arg1 + 0x2c)
float var_2e0
float zmm8 = var_2e0 f* *(arg1 + 0x30)
int128_t zmm1_1 = *(arg10 + 4) ^ 0x80000000
int64_t var_130 = (_mm_unpacklo_ps(zmm6, zmm7)).q
var_320 = (*arg10 ^ 0x80000000)[0]
int32_t var_31c_1 = zmm1_1.d
float var_318_1 = (*(arg10 + 8) ^ 0x80000000)[0]
float var_128 = zmm8
int32_t var_2f4
int32_t* rax_4
uint128_t zmm6_1
float zmm7_1
uint128_t zmm8_1
uint128_t zmm10_1
rax_4, zmm6_1, zmm7_1, zmm8_1, zmm10_1 = sub_14170c1c0(&var_248, &var_2f4, &var_320)
uint128_t zmm0_2 = var_298.d
uint128_t zmm9 = zx.o(0)
uint128_t zmm2_1 = var_298:4.d
uint128_t zmm3_1 = var_298:8.d
uint128_t zmm1_2 = zx.o(*rax_4)
uint128_t zmm11 = zmm0_2
int32_t rcx_2 = rax_4[2]
zmm6_1.d = zmm6_1.d f- zmm1_2.d
int32_t var_2c8 = zmm0_2.d
uint128_t zmm12 = zmm2_1
int32_t var_2c4 = zmm2_1.d
uint32_t result = zx.d(arg9)
zmm7_1 = zmm7_1 f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
uint128_t zmm14
zmm14.d = zmm0_2.d f- zmm6_1.d
int64_t var_100 = zmm1_2.q
zmm8_1.d = zmm8_1.d f- rcx_2
uint32_t result_2 = zmm3_1.d
uint128_t zmm13 = zmm3_1
uint128_t zmm5
zmm5.d = zmm2_1.d f- zmm7_1
int32_t var_f8 = rcx_2
int64_t var_2b8 = 0
zmm0_2.d = zmm14.d f* zmm14.d
int32_t var_2b0 = 0x3f800000
zmm6_1.d = zmm3_1.d f- zmm8_1.d
zmm2_1.d = zmm5.d f* zmm5.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm1_2.d = zmm6_1.d f* zmm6_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int64_t rbx

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

int32_t rdi_1 = 0
int32_t var_310 = 0x7f7fffff
char rsi = rbx.b
char var_328 = 0
char var_327 = rbx.b
int32_t var_308
uint64_t var_2d8
int64_t var_280
uint32_t result_1
uint128_t zmm4_1

if (rbx.b != 0)
label_14165e2ad:
    int32_t* rbx_1 = arg6
    *rbx_1 = zmm9.d
    
    if (not(zmm9.d f<= zmm10_1.d))
        zmm3_1 = zmm10_1
        zmm4_1 = zmm10_1
        *arg8 = var_2b8
        arg8[1].d = var_2b0
        
        if (r12.d s> 0)
            int128_t* rcx_19 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_23 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_19
                rcx_19 += 4
                zmm0_2.d = zmm2_1.d f* rax_23[-2]
                zmm1_2.d = zmm2_1.d f* rax_23[-1]
                zmm2_1.d = zmm2_1.d f* *rax_23
                rax_23 = &rax_23[3]
                zmm10_1.d = zmm10_1.d f+ zmm0_2.d
                zmm3_1.d = zmm3_1.d f+ zmm1_2.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm9.d f* *arg4
        zmm1_2.d = zmm9.d f* *(arg4 + 4)
        zmm9.d = zmm9.d f* *(arg4 + 8)
        zmm0_2.d = zmm0_2.d f+ var_298.d
        zmm1_2.d = zmm1_2.d f+ var_298:4.d
        zmm9.d = zmm9.d f+ var_298:8.d
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        zmm1_2.d = zmm1_2.d f+ zmm3_1.d
        zmm9.d = zmm9.d f+ zmm4_1.d
        uint32_t var_2ec_2 = zmm9.d
        *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm1_2.q)).q
        arg7[1].d = var_2ec_2
    else if (result.b != 0)
        uint64_t i_3 = 0
        var_2d8 = 0
        int64_t var_2d0_1 = 0
        var_170[0].q = 0
        var_170[2].q = 0
        sub_14083ad30(&var_2d8, 8)
        
        if (var_170[3] s< 8)
            sub_14083ad30(&var_170, 8)
        
        float rax_31
        uint128_t zmm0_4
        
        if (rdi_1 == 0)
            int32_t var_2ec_3 = 0x3f800000
            rax_31 = 1f
            zmm0_4 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
        label_14165e552:
            zmm2_1 = var_130:4.d
            zmm1_2 = var_130.d
            *rbx_1 = i_3.d
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_6 = 0
                i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_2d0_1.d)
                    int32_t rax_24 = (rbx_2 + 1).d
                    var_2d0_1.d = rax_24
                    
                    if (rax_24 s> var_2d0_1:4.d)
                        sub_14083a7e0(&var_2d8)
                    
                    uint64_t rcx_23 = var_2d8
                    int64_t rdx_13 = rbx_2 * 3
                    int32_t rax_25 = *(&var_128 + rdi_6)
                    zmm1_2.d = zmm12.d f+ *(&var_100:4 + rdi_6)
                    *(rcx_23 + (rdx_13 << 2)) = *(&var_130 + rdi_6)
                    zmm0_4.d = zmm11.d f+ *(&var_100 + rdi_6)
                    *(rcx_23 + (rdx_13 << 2) + 8) = rax_25
                    int64_t rbx_3 = sx.q(var_170[2])
                    int32_t var_31c_3 = zmm1_2.d
                    var_320 = zmm0_4.d
                    zmm0_4.d = zmm13.d f+ *(&var_f8 + rdi_6)
                    int32_t rax_26 = (rbx_3 + 1).d
                    var_170[2] = rax_26
                    var_318_1 = zmm0_4.d
                    
                    if (rax_26 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_25 = var_170[0].q
                    int64_t rdx_15 = rbx_3 * 3
                    rdi_6 += 0xc
                    *(rcx_25 + (rdx_15 << 2)) = var_320.q
                    *(rcx_25 + (rdx_15 << 2) + 8) = var_318_1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rbx_1 = arg6
            
            var_248 = &var_1c8
            float (* var_240_1)[0x4] = arg2
            int128_t* var_238_1 = arg3
            int32_t rax_30
            int128_t zmm15_2
            rax_30, zmm15_2 = sub_141589390(&var_2d8, &var_170, &var_268, &var_248, &var_308, 
                &var_320, &var_280, &var_258)
            zmm0_4 = zx.o(var_320.q)
            rax_31 = var_318_1
            
            if (rax_30 == 2)
                goto label_14165e552
            
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = result_1
            *rbx_1 = (var_308 ^ zmm15_2).d
            *arg7 = var_280
        int64_t rcx_27 = var_170[0].q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_2d8
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    result.b = 1
else
    while (true)
        int32_t rax_5 = rdi_1
        rdi_1 += 1
        
        if (rax_5 s>= 0x20)
            result = zx.d(arg9)
            goto label_14165e2ad
        
        int64_t rdi_2 = var_268
        zmm0_2.d = zmm5.d f* zmm5.d
        void* rcx_3 = *(rdi_2 + 0x10)
        zmm2_1.d = zmm14.d f* zmm14.d
        zmm1_2.d = zmm6_1.d f* zmm6_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2.d
        zmm2_1.d = zmm2_1.d f+ zmm1_2.d
        zmm8_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
        zmm3_1.d = zmm2_1.d f* 0.5f
        zmm0_2.d = zmm8_1.d f* zmm8_1.d
        zmm1_2.d = zmm3_1.d f* zmm0_2.d
        zmm2_1.d = 0.5f f- zmm1_2.d
        zmm0_2.d = zmm8_1.d f* zmm2_1.d
        zmm8_1.d = zmm8_1.d f+ zmm0_2.d
        zmm1_2.d = zmm8_1.d f* zmm8_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_2.d
        zmm4_1.d = 0.5f f- zmm3_1.d
        zmm0_2.d = zmm8_1.d f* zmm4_1.d
        zmm8_1.d = zmm8_1.d f+ zmm0_2.d
        zmm14.d = zmm14.d f* zmm8_1.d
        uint128_t zmm15_1
        zmm15_1.d = zmm8_1.d f* zmm5.d
        var_308 = zmm8_1.d
        zmm0_2.d = zmm14.d f* *(rdi_2 + 0x28)
        zmm8_1.d = zmm8_1.d f* zmm6_1.d
        zmm1_2.d = zmm15_1.d f* *(rdi_2 + 0x2c)
        int32_t var_220 = zmm0_2.d
        zmm0_2.d = zmm8_1.d f* *(rdi_2 + 0x30)
        int32_t var_21c_1 = zmm1_2.d
        int32_t var_218_1 = zmm0_2.d
        float var_214
        uint128_t zmm8_2 = sub_141758e70(rcx_3, &var_214, &var_220, zmm10_1)
        int32_t var_20c
        uint128_t zmm0_3
        zmm0_3.d = var_20c.d f* *(rdi_2 + 0x30)
        *(rdi_2 + 0x28)
        *(rdi_2 + 0x2c)
        int32_t var_2f8_1 = zmm0_3.d
        int32_t var_1f0_1 = zmm0_3.d
        int32_t var_204_1 = (zmm15_1 ^ 0x80000000).d
        int32_t var_208 = (zmm14 ^ 0x80000000).d
        int32_t var_200_1 = (zmm8_2 ^ 0x80000000).d
        int32_t var_194
        int32_t* rax_6
        uint128_t zmm7_3
        rax_6, zmm6_1, zmm7_3, zmm8_1, zmm9, zmm10_1, zmm11, zmm12, zmm13, zmm14, zmm15_1 =
            sub_14170c1c0(&var_248, &var_194, &var_208)
        zmm1_2 = zx.o(*rax_6)
        int32_t rcx_5 = rax_6[2]
        zmm2_1.d = zmm7_3.d f- zmm1_2.d
        int32_t var_288_1 = zmm2_1.d
        zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
        zmm0_2.d = var_2f8_1.d f- rcx_5
        zmm4_1.d = zmm11.d f- zmm2_1.d
        (&var_184)[sx.q(r12.d)] = r12.d
        zmm2_1.d = zmm12.d f- zmm3_1.d
        r12 = sx.q(var_188)
        var_308 = zmm3_1.d
        zmm3_1.d = zmm13.d f- zmm0_2.d
        var_320 = zmm4_1.d
        zmm4_1.d = zmm4_1.d f* zmm14.d
        uint64_t rcx_6 = r12 * 3
        int32_t var_2f8_2 = zmm0_2.d
        int32_t var_31c_2 = zmm2_1.d
        zmm2_1.d = zmm2_1.d f* zmm15_1.d
        var_318_1 = zmm3_1.d
        zmm3_1.d = zmm3_1.d f* zmm8_1.d
        zmm4_1.d = zmm4_1.d f+ zmm2_1.d
        *(&var_130 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm7_3, zmm6_1.q)).q
        (&var_128)[rcx_6] = var_1f0_1
        result = rax_6[2]
        *(&var_100 + (rcx_6 << 2)) = zmm1_2.q
        zmm4_1.d = zmm4_1.d f+ zmm3_1.d
        (&var_f8)[rcx_6] = result
        int128_t var_150_1
        int32_t var_140_1
        
        if (zmm4_1.d f<= zmm10_1.d)
            r12 = zx.q(r12.d + 1)
            *(&var_160 + (rcx_6 << 2)) = var_320.q
            *(&var_160:8 + (rcx_6 << 2)) = var_318_1
            var_188 = r12.d
        label_14165dec3:
            zmm7_3 = var_310
            
            if (rsi == 0)
                zmm8_1 = 0x358637bd
            else
                zmm8_1 = 0x358637bd
                
                if (not(zmm4_1.d f< zmm10_1.d))
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                    rbx.b = zmm4_1.d f>= zmm7_3.d
        else
            zmm3_1 = *(arg4 + 4)
            zmm5 = *arg4
            zmm6_1 = *(arg4 + 8)
            zmm2_1.d = zmm5.d f* zmm14.d
            zmm0_2.d = zmm3_1.d f* zmm15_1.d
            zmm1_2.d = zmm6_1.d f* zmm8_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            
            if (zmm2_1.d f>= zmm10_1.d)
                result.b = 0
                break
            
            zmm1_2 = zmm9
            zmm0_2.d = zmm4_1.d f/ zmm2_1.d
            zmm9.d = zmm9.d f- zmm0_2.d
            
            if (zmm9.d f<= zmm1_2.d)
                goto label_14165dec3
            
            if (zmm9.d f> arg5)
                result.b = 0
                break
            
            zmm1_2 = zx.o(var_2c8.q)
            zmm7_3 = 0x7f7fffff
            zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            var_280 = zmm1_2.q
            r12 = zx.q(r12.d + 1)
            zmm11.d = zmm5.d f* zmm9.d
            result_1 = result_2
            zmm12.d = zmm3_1.d f* zmm9.d
            var_188 = r12.d
            zmm11.d = zmm11.d f+ var_298.d
            zmm13.d = zmm6_1.d f* zmm9.d
            var_327 = 0
            zmm12.d = zmm12.d f+ var_298:4.d
            var_2b8.d = zmm14.d
            zmm13.d = zmm13.d f+ var_298:8.d
            var_2c8 = zmm11.d
            zmm3_1.d = zmm11.d f- zmm1_2.d
            var_2b8:4.d = zmm15_1.d
            zmm4_1.d = zmm12.d f- zmm0_2.d
            int32_t var_2c4_1 = zmm12.d
            zmm2_1.d = zmm13.d f- result_1
            zmm0_2.d = var_160.d.d f+ zmm3_1.d
            result_2 = zmm13.d
            var_2b0 = zmm8_1.d
            zmm1_2.d = var_160:4.d.d f+ zmm4_1.d
            var_310 = 0x7f7fffff
            var_160.d = zmm0_2.d
            zmm0_2.d = var_160:8.d.d f+ zmm2_1.d
            var_160:4.d = zmm1_2.d
            zmm1_2.d = var_160:0xc.d.d f+ zmm3_1.d
            var_160:8.d = zmm0_2.d
            var_160:0xc.d = zmm1_2.d
            zmm0_2.d = var_150_1.d.d f+ zmm4_1.d
            zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
            var_150_1.d = zmm0_2.d
            zmm0_2 = var_150_1:8.d
            var_150_1:4.d = zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm3_1.d
            zmm1_2.d = var_150_1:0xc.d.d f+ zmm4_1.d
            var_150_1:8.d = zmm0_2.d
            zmm0_2.d = var_140_1.d f+ zmm2_1.d
            var_150_1:0xc.d = zmm1_2.d
            zmm1_2.d = zmm11.d f- var_288_1
            zmm2_1.d = zmm12.d f- var_308
            var_140_1 = zmm0_2.d
            zmm0_2.d = zmm13.d f- var_2f8_2
            *(&var_160 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
            *(&var_160:8 + (rcx_6 << 2)) = zmm0_2.d
            zmm8_1 = 0x358637bd
        
        uint32_t rcx_17
        
        if (rbx.b != 0)
            int64_t* rax_20
            rax_20, zmm9, zmm10_1, zmm11, zmm12, zmm13 =
                sub_1416f4530(&var_258, &var_160, &var_188, &var_170, &var_130, &var_100)
            r12 = zx.q(var_188)
            rcx_17 = zx.d(var_328)
            zmm1_2 = zx.o(*rax_20)
            int32_t rax_21 = rax_20[1].d
            zmm5 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            zmm6_1 = rax_21
            zmm14 = zmm1_2.d
        else
            int32_t rcx_7 = r12.d
            int32_t rax_11
            
            if (rcx_7 == 1)
                int64_t rax_16 = sx.q(var_184)
                int64_t rcx_14 = rax_16 * 3
                var_170[rax_16] = 0x3f800000
                zmm0_2 = zx.o(*(&var_160 + (rcx_14 << 2)))
                rax_11 = *(&var_160:8 + (rcx_14 << 2))
            else if (rcx_7 == 2)
                uint64_t* rax_15
                rax_15, zmm7_3, zmm8_1, zmm9 =
                    sub_1416e69d0(&var_2d8, &var_160, &var_184, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_2 = zx.o(*rax_15)
                rax_11 = rax_15[1].d
            else if (rcx_7 == 3)
                uint64_t var_1a0
                uint64_t* rax_14
                rax_14, zmm7_3, zmm8_1, zmm9, zmm10_1, zmm11, zmm12, zmm13 =
                    sub_1416fa750(&var_1a0, &var_160, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_2 = zx.o(*rax_14)
                rax_11 = rax_14[1].d
            else if (rcx_7 == 4)
                uint64_t var_1ac
                uint64_t* rax_13
                rax_13, zmm7_3, zmm8_1, zmm9, zmm10_1, zmm11, zmm12, zmm13 =
                    sub_1416f9c90(&var_1ac, &var_160, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_2 = zx.o(*rax_13)
                rax_11 = rax_13[1].d
            else
                int32_t var_2ec_1 = 0
                rax_11 = 0
                zmm0_2 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
            
            int32_t var_178
            int64_t rdi_3 = sx.q(var_178)
            int64_t r11_1 = sx.q(var_184)
            int32_t var_180
            int64_t r10_1 = sx.q(var_180)
            int32_t var_17c
            int64_t r9_3 = sx.q(var_17c)
            rbx = rdi_3 * 3
            uint64_t var_304_1 = zmm0_2.q
            int64_t r15_1 = r11_1 * 3
            int64_t r14_1 = r10_1 * 3
            int64_t rsi_1 = r9_3 * 3
            int32_t rdx_8 = *(&var_160:8 + (r14_1 << 2))
            int32_t rcx_15 = *(&var_160:8 + (rsi_1 << 2))
            int32_t r8_7 = *(&var_160:8 + (r15_1 << 2))
            zmm14 = var_304_1.d
            zmm5 = var_304_1:4.d
            int32_t rax_17 = *(&var_160:8 + (rbx << 2))
            zmm6_1 = rax_11
            var_160:0xc.q = *(&var_160 + (r14_1 << 2))
            var_140_1:4.q = *(&var_160 + (rbx << 2))
            zmm0_2 = var_170[r11_1]
            var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
            zmm1_2 = var_170[r10_1]
            var_160.q = *(&var_160 + (r15_1 << 2))
            zmm3_1 = var_170[rdi_3]
            float rdi_4 = (&var_128)[r15_1]
            var_170[2] = var_170[r9_3].d
            zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
            var_170[0] = zmm0_2.d
            zmm0_2 = zx.o(*(&var_130 + (rbx << 2)))
            var_170[1] = zmm1_2.d
            zmm1_2 = zx.o(*(&var_130 + (rsi_1 << 2)))
            var_170[3] = zmm3_1.d
            var_150_1:4.d = rdx_8
            int32_t rdx_9 = (&var_128)[r14_1]
            var_140_1 = rcx_15
            int32_t rcx_16 = (&var_128)[rsi_1]
            var_140_1 = rax_17
            int32_t rax_18 = (&var_128)[rbx]
            var_124_1.q = zmm2_1.q
            zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
            int128_t var_114_1
            var_114_1:8.q = zmm0_2.q
            zmm0_2 = zx.o(*(&var_100 + (rbx << 2)))
            var_124_1:0xc.q = zmm1_2.q
            zmm1_2 = zx.o(*(&var_100 + (rsi_1 << 2)))
            var_130 = *(&var_130 + (r15_1 << 2))
            zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
            var_128 = rdi_4
            var_124_1:8.d = rdx_9
            int32_t rdx_10 = (&var_f8)[r14_1]
            var_114_1:4.d = rcx_16
            rcx_17 = (&var_f8)[rsi_1]
            int32_t var_104_1 = rax_18
            int32_t rax_19 = (&var_f8)[rbx]
            var_f4_1.q = zmm2_1.q
            int128_t var_e4_1
            var_e4_1:8.q = zmm0_2.q
            var_184.o = data_142e11d00
            var_160:8.d = r8_7
            zmm2_1.d = zmm5.d f* zmm5.d
            var_f8 = (&var_f8)[r15_1]
            var_f4_1:0xc.q = zmm1_2.q
            zmm0_2.d = zmm14.d f* zmm14.d
            var_f4_1:8.d = rdx_10
            zmm1_2.d = zmm6_1.d f* zmm6_1.d
            var_e4_1:4.d = rcx_17
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            var_100 = zmm3_1.q
            int32_t var_d4_1 = rax_19
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm2_1.d f- zmm8_1.d
            rbx.b = zmm2_1.d f< zmm8_1.d
            var_310 = zmm2_1.d
            rcx_17.b = zmm2_1.d f>= zmm7_3.d
            var_328 = rcx_17.b
        
        result = zx.d(arg9)
        
        if (rbx.b != 0)
            goto label_14165e2ad
        
        if (rcx_17.b != 0)
            goto label_14165e2ad
        
        rsi = var_327
__security_check_cookie(rax_1 ^ &var_368)
return result
