// 函数: sub_141645230
// 地址: 0x141645230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float var_268 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_308[0x4] = zmm0
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int32_t var_190 = 0
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
void* var_230 = arg1
float var_178[0x4] = data_142d3f7e0
float var_25c = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_264 = temp0_1[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r12 = zx.q(var_190)
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
float var_2b8[0x4]
int128_t* var_200 = &var_2b8
int32_t* var_1f8 = &var_268
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_260 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float zmm1[0x4] = *arg10
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float zmm2[0x4] = (*arg10)[1]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float zmm4 = zmm2[0]
var_2b8 = temp0_6
var_2b8 = temp0_6
zmm3 = (*arg10)[2]
int128_t zmm8 = *(arg1 + 0x28)
float zmm5 = zmm3[0]
int128_t zmm9 = *(arg1 + 0x2c)
int128_t zmm10 = *(arg1 + 0x30)
void* rax_4 = *(arg1 + 0x10)
zmm1[0] = zmm1[0] f* zmm8.d
int64_t var_208 = arg2
float zmm6[0x4]

if (zmm1[0] >= 0f)
    zmm6 = *(rax_4 + 0x1c)
else
    zmm6 = *(rax_4 + 0x10)

int128_t zmm7

if (zmm4 f* zmm9.d >= 0f)
    zmm7 = *(rax_4 + 0x20)
else
    zmm7 = *(rax_4 + 0x14)

int128_t zmm11

if (zmm5 f* zmm10.d >= 0f)
    zmm11 = *(rax_4 + 0x24)
else
    zmm11 = *(rax_4 + 0x18)

zmm6[0] = zmm6[0] f* zmm8.d
zmm7.d = zmm7.d f* zmm9.d
zmm11.d = zmm11.d f* zmm10.d
float var_320 = (zmm1 ^ 0x80000000)[0]
int32_t var_210 = zmm11.d
int64_t var_138 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
float var_31c = (zmm2 ^ 0x80000000)[0]
float var_318 = (zmm3 ^ 0x80000000)[0]
int32_t var_130 = var_210
void var_2d8
int32_t* rax_6
uint128_t zmm6_1
float zmm7_1[0x4]
float zmm11_1[0x4]
float zmm13[0x4]
rax_6, zmm6_1, zmm7_1, zmm11_1, zmm13 = sub_14170d470(&var_208, &var_2d8, &var_320)
uint128_t zmm2_1 = var_308[1]
uint128_t zmm14 = zx.o(0)
uint128_t zmm5_1 = var_308[0]
uint128_t zmm9_1 = zmm2_1
float zmm3_1[0x4] = var_308[2]
uint128_t zmm1_1 = zx.o(*rax_6)
uint128_t zmm8_1 = zmm5_1
int32_t rcx_1 = rax_6[2]
zmm6_1.d = zmm6_1.d f- zmm1_1.d
int32_t var_2c8 = zmm2_1.d
uint32_t result = zx.d(arg9)
float zmm10_1[0x4] = zmm3_1
int32_t var_2a4 = zmm2_1.d
uint128_t zmm15
zmm15.d = zmm5_1.d f- zmm6_1.d
uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
zmm7_1[0] = zmm7_1[0] f- zmm0_1.d
int64_t var_108 = zmm1_1.q
uint64_t var_278 = zmm1_1.q
zmm11_1[0] = zmm11_1[0] f- rcx_1
int32_t var_2cc = zmm5_1.d
zmm6_1.d = zmm2_1.d f- zmm7_1[0]
zmm0_1.d = zmm15.d f* zmm15.d
int32_t var_100 = rcx_1
zmm7_1 = zmm3_1
int32_t var_2a8 = zmm5_1.d
zmm7_1[0] = zmm7_1[0] - zmm11_1[0]
float var_2c4 = zmm3_1[0]
float result_2 = zmm3_1[0]
int64_t var_298 = 0
zmm2_1.d = zmm6_1.d f* zmm6_1.d
int32_t var_290 = 0x3f800000
zmm1_1.d = zmm7_1.d f* zmm7_1[0]
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int32_t rcx_2 = 0
int64_t rsi
rsi.b = 0
int32_t var_2f8 = 0x7f7fffff
int32_t var_2e4 = 0
char rbx = rdi.b
char var_328 = rbx
float var_2f4
int64_t var_250
float result_1
uint128_t zmm4_1

if (rdi.b != 0)
label_14164602f:
    bool cond:1_1 = zmm14.d f<= zmm13[0]
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm14.d
    
    if (not(cond:1_1))
        zmm4_1 = zmm13
        *arg8 = var_298
        arg8[1].d = var_290
        
        if (r12.d s> 0)
            int128_t* rcx_19 = &var_178
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_26 = &var_100
            uint64_t i
            
            do
                zmm2_1 = *rcx_19
                rcx_19 += 4
                zmm0_1.d = zmm2_1.d f* rax_26[-2]
                zmm1_1.d = zmm2_1.d f* rax_26[-1]
                zmm2_1.d = zmm2_1.d f* *rax_26
                rax_26 = &rax_26[3]
                zmm13[0] = zmm13[0] f+ zmm0_1.d
                zmm13[0] = zmm13[0] f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm14.d f* *arg4
        zmm1_1.d = zmm14.d f* (*arg4)[1]
        zmm14.d = zmm14.d f* (*arg4)[2]
        zmm0_1.d = zmm0_1.d f+ zmm5_1.d
        zmm1_1.d = zmm1_1.d f+ var_308[1]
        zmm14.d = zmm14.d f+ var_308[2]
        zmm0_1.d = zmm0_1.d f+ zmm13[0]
        zmm1_1.d = zmm1_1.d f+ zmm13[0]
        zmm14.d = zmm14.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm14.d
    else if (result.b != 0)
        var_178[0].q = 0
        var_178[2].q = 0
        var_308[0].q = 0
        var_308[2].q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_308[3] s< 8)
            sub_14083ad30(&var_308, 8)
        
        float rax_34
        float zmm0_2[0x4]
        
        if (var_2e4 == 0)
            int32_t var_2d0_3 = 0x3f800000
            rax_34 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm13, zmm13[0].q)
        label_1416462e1:
            zmm2_1 = var_138:4.d
            zmm1_1 = var_138.d
            *rdi_3 = 0
            *arg8 = zmm0_2.q
            zmm0_2 = var_130
            arg8[1].d = rax_34
            zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2_1.q)
            result = zmm0_2[0]
            *arg7 = zmm1_1.q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_178[2])
                    int32_t rax_27 = (rbx_2 + 1).d
                    var_178[2] = rax_27
                    
                    if (rax_27 s> var_178[3])
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_23 = var_178[0].q
                    int64_t rdx_10 = rbx_2 * 3
                    int32_t rax_28 = *(&var_130 + rdi_4)
                    zmm1_1.d = zmm9_1.d f+ *(&var_108:4 + rdi_4)
                    *(rcx_23 + (rdx_10 << 2)) = *(&var_138 + rdi_4)
                    zmm0_2 = zmm8_1
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_108 + rdi_4)
                    *(rcx_23 + (rdx_10 << 2) + 8) = rax_28
                    int64_t rbx_3 = sx.q(var_308[2])
                    int32_t var_31c_2 = zmm1_1.d
                    var_320 = zmm0_2[0]
                    zmm10_1[0] = zmm10_1[0] f+ *(&var_100 + rdi_4)
                    int32_t rax_29 = (rbx_3 + 1).d
                    var_308[2] = rax_29
                    var_318 = zmm10_1[0]
                    
                    if (rax_29 s> var_308[3])
                        sub_14083a7e0(&var_308)
                    
                    int64_t rcx_25 = var_308[0].q
                    int64_t rdx_12 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_25 + (rdx_12 << 2)) = var_320.q
                    *(rcx_25 + (rdx_12 << 2) + 8) = var_318
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_190.q = &var_2b8
            int64_t var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_33 = sub_1415a9660(&var_178, &var_308, &var_230, &var_190, &var_2f4, 
                &var_320, &var_250, &var_208)
            zmm0_2 = zx.o(var_320.q)
            rax_34 = var_318
            
            if (rax_33 == 2)
                goto label_1416462e1
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_34
            result = result_1
            *rdi_3 = (var_2f4 ^ data_142d3f780)[0]
            *arg7 = var_250
        int64_t rcx_27 = var_308[0].q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_178[0].q
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    result.b = 1
else
    while (true)
        var_2e4 = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            result = zx.d(arg9)
        else
            void* rax_8 = var_230
            zmm0_1.d = zmm15.d f* zmm15.d
            zmm1_1.d = zmm7_1.d f* zmm7_1[0]
            zmm3_1 = zx.o(0)
            void* rcx_4 = *(rax_8 + 0x10)
            zmm8_1 = *(rax_8 + 0x30)
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1[0] = zmm2_1.d
            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm1_1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm1_1.d
            zmm5_1.d = 0.5f - zmm3_1[0]
            zmm0_1.d = zmm4_1.d f* zmm5_1.d
            zmm5_1 = *(rax_8 + 0x28)
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
            zmm7_1[0] = zmm7_1[0] f* zmm4_1.d
            zmm15.d = zmm15.d f* zmm4_1.d
            var_2f4 = zmm4_1.d
            zmm4_1 = *(rax_8 + 0x2c)
            int32_t var_254_1 = zmm6_1.d
            zmm0_1.d = zmm15.d f* zmm5_1.d
            var_2f4 = zmm7_1[0]
            zmm1_1.d = zmm6_1.d f* zmm4_1.d
            zmm2_1.d = zmm7_1.d f* zmm8_1.d
            
            if (zmm0_1.d f>= zmm13[0])
                zmm3_1 = *(rcx_4 + 0x1c)
            else
                zmm3_1 = *(rcx_4 + 0x10)
            
            if (zmm1_1.d f>= zmm13[0])
                zmm1_1 = *(rcx_4 + 0x20)
            else
                zmm1_1 = *(rcx_4 + 0x14)
            
            if (zmm2_1.d f>= zmm13[0])
                zmm0_1 = *(rcx_4 + 0x24)
            else
                zmm0_1 = *(rcx_4 + 0x18)
            
            zmm9_1 = var_2b8[1]
            zmm2_1 = var_2b8[3]
            zmm0_1.d = zmm0_1.d f* zmm8_1.d
            zmm8_1 = zmm6_1
            zmm6_1 = var_2b8[0]
            zmm4_1.d = zmm4_1.d f* zmm1_1.d
            int32_t var_258_1 = zmm0_1.d
            int32_t var_210_1 = zmm0_1.d
            zmm8_1 ^= 0x80000000
            zmm3_1[0] = zmm3_1[0] f* zmm5_1.d
            zmm5_1 = var_2b8[2]
            float zmm12_1[0x4] = zmm7_1 ^ 0x80000000
            int32_t var_2dc_1 = zmm4_1.d
            float var_2e0_1 = zmm3_1[0]
            zmm7_1 = zmm8_1
            zmm7_1[0] = zmm7_1[0] f* zmm6_1.d
            zmm3_1 = zmm15 ^ 0x80000000
            zmm12_1[0] = zmm12_1[0] f* zmm9_1.d
            zmm0_1.d = zmm8_1.d f* zmm5_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm5_1.d
            zmm12_1[0] = zmm12_1[0] f- zmm0_1.d
            zmm0_1.d = zmm12_1.d f* zmm6_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm0_1.d
            zmm0_1.d = zmm3_1.d f* zmm9_1.d
            zmm12_1[0] = zmm12_1[0] + zmm12_1[0]
            zmm7_1[0] = zmm7_1[0] f- zmm0_1.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm1_1.d = zmm12_1.d f* zmm2_1.d
            zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
            zmm1_1.d = zmm1_1.d f+ zmm3_1[0]
            zmm0_1.d = zmm3_1.d f* zmm5_1.d
            zmm12_1[0] = zmm12_1[0] f* zmm5_1.d
            zmm12_1[0] = zmm12_1[0] f* zmm9_1.d
            zmm4_1.d = zmm7_1.d f* zmm9_1.d
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1.d = zmm7_1.d f* zmm6_1.d
            zmm7_1[0] = zmm7_1[0] f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            zmm12_1[0] = zmm12_1[0] f- zmm0_1.d
            zmm1_1.d = zmm3_1.d f* zmm2_1.d
            zmm3_1[0] = zmm3_1[0] f* zmm6_1.d
            zmm7_1[0] = zmm7_1[0] + zmm12_1[0]
            zmm1_1.d = zmm1_1.d f+ zmm8_1.d
            zmm3_1[0] = zmm3_1[0] - zmm12_1[0]
            zmm12_1[0] = zmm12_1[0] f+ zmm1_1.d
            zmm3_1[0] = zmm3_1[0] + zmm7_1[0]
            uint64_t var_1f0 = (_mm_unpacklo_ps(zmm4_1, zmm12_1[0].q)).q
            float var_1e8_1 = zmm3_1[0]
            float var_228
            sub_141758e70(arg2, &var_228, &var_1f0, zmm13)
            int32_t var_224
            zmm4_1 = var_224
            int32_t var_220
            zmm6_1 = var_220
            zmm12_1 = var_264
            zmm8_1 = var_260
            zmm7_1 = var_228
            zmm0_1.d = zmm4_1.d f* zmm8_1.d
            zmm9_1.d = zmm6_1.d f* zmm12_1[0]
            zmm9_1.d = zmm9_1.d f- zmm0_1.d
            zmm10_1 = var_268
            zmm9_1.d = zmm9_1.d f+ zmm9_1.d
            zmm1_1 = var_25c
            zmm3_1 = zmm4_1
            zmm3_1[0] = zmm3_1[0] * zmm10_1[0]
            zmm5_1.d = zmm7_1.d f* zmm8_1.d
            zmm11_1 = zmm8_1
            zmm0_1.d = zmm6_1.d f* zmm10_1[0]
            (&var_18c)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_190)
            zmm5_1.d = zmm5_1.d f- zmm0_1.d
            zmm11_1[0] = zmm11_1[0] f* zmm9_1.d
            zmm0_1.d = zmm7_1.d f* zmm12_1[0]
            uint64_t rcx_6 = r12 * 3
            zmm5_1.d = zmm5_1.d f+ zmm5_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm0_1.d
            zmm2_1.d = zmm1_1.d f* zmm5_1.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm10_1[0] = zmm10_1[0] f* zmm5_1.d
            zmm2_1.d = zmm2_1.d f+ zmm4_1.d
            zmm8_1.d = zmm8_1.d f* zmm5_1.d
            zmm0_1.d = zmm10_1.d f* zmm3_1[0]
            zmm11_1[0] = zmm11_1[0] f- zmm0_1.d
            zmm0_1.d = zmm12_1.d f* zmm9_1.d
            zmm12_1[0] = zmm12_1[0] * zmm3_1[0]
            zmm10_1[0] = zmm10_1[0] f- zmm0_1.d
            zmm0_1.d = zmm1_1.d f* zmm3_1[0]
            zmm11_1[0] = zmm11_1[0] f+ zmm2_1.d
            zmm1_1.d = zmm1_1.d f* zmm9_1.d
            zmm12_1[0] = zmm12_1[0] f- zmm8_1.d
            zmm8_1 = var_2cc
            zmm0_1.d = zmm0_1.d f+ zmm6_1.d
            zmm9_1 = var_2c8
            zmm6_1 = var_254_1
            zmm1_1.d = zmm1_1.d f+ zmm7_1[0]
            zmm7_1 = var_258_1
            zmm10_1[0] = zmm10_1[0] f+ zmm0_1.d
            zmm0_1 = var_2e0_1
            zmm2_1 = zmm0_1
            zmm12_1[0] = zmm12_1[0] f+ zmm1_1.d
            zmm1_1 = var_2dc_1
            zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm1_1.q)
            zmm3_1 = zmm1_1
            zmm3_1[0] = zmm3_1[0] - zmm11_1[0]
            *(&var_138 + (rcx_6 << 2)) = zmm0_1.q
            zmm7_1[0] = zmm7_1[0] - zmm10_1[0]
            float var_1d0_1 = zmm10_1[0]
            zmm10_1 = var_2c4
            zmm2_1.d = zmm2_1.d f- zmm12_1[0]
            (&var_130)[rcx_6] = var_210_1
            float var_2dc_2 = zmm3_1[0]
            *(&var_108 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm12_1, zmm11_1[0].q)).q
            zmm4_1.d = zmm8_1.d f- zmm2_1.d
            int32_t var_2e0_2 = zmm2_1.d
            (&var_100)[rcx_6] = var_1d0_1
            zmm2_1.d = zmm9_1.d f- zmm3_1[0]
            zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
            var_320 = zmm4_1.d
            zmm4_1.d = zmm4_1.d f* zmm15.d
            zmm5_1.d = zmm6_1.d f* zmm2_1.d
            int32_t var_31c_1 = zmm2_1.d
            var_318 = zmm10_1[0]
            zmm5_1.d = zmm5_1.d f+ zmm4_1.d
            zmm4_1 = var_2f4
            zmm0_1.d = zmm4_1.d f* zmm10_1[0]
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            int128_t var_158_1
            int32_t var_148_1
            
            if (zmm5_1.d f<= zmm13[0])
                r12 = zx.q(r12.d + 1)
                *(&var_168 + (rcx_6 << 2)) = var_320.q
                *(&var_168:8 + (rcx_6 << 2)) = var_318
                var_190 = r12.d
            label_141645c4e:
                zmm11_1 = var_2f8
                
                if (rbx == 0)
                    zmm12_1 = 0x358637bd
                else
                    zmm12_1 = 0x358637bd
                    
                    if (not(zmm5_1.d f< zmm13[0]))
                        zmm5_1.d = zmm5_1.d f* zmm5_1.d
                        zmm5_1.d = zmm5_1.d f+ 9.99999997e-07f
                        rdi.b = zmm5_1.d f>= zmm11_1[0]
            else
                zmm3_1 = (*arg4)[1]
                zmm11_1 = *arg4
                zmm12_1 = (*arg4)[2]
                zmm2_1.d = zmm15.d f* zmm11_1[0]
                zmm0_1.d = zmm6_1.d f* zmm3_1[0]
                zmm1_1.d = zmm4_1.d f* zmm12_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm13[0])
                    result.b = 0
                    break
                
                zmm1_1 = zmm14
                zmm0_1.d = zmm5_1.d f/ zmm2_1.d
                zmm14.d = zmm14.d f- zmm0_1.d
                
                if (zmm14.d f<= zmm1_1.d)
                    goto label_141645c4e
                
                if (zmm14.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_2a8.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm8_1 = zmm11_1
                zmm11_1 = 0x7f7fffff
                zmm10_1 = zmm12_1
                var_250 = zmm1_1.q
                r12 = zx.q(r12.d + 1)
                zmm8_1.d = zmm8_1.d f* zmm14.d
                result_1 = result_2
                zmm9_1.d = zmm3_1.d f* zmm14.d
                var_190 = r12.d
                zmm8_1.d = zmm8_1.d f+ var_308[0]
                zmm10_1[0] = zmm10_1[0] f* zmm14.d
                var_328 = 0
                zmm9_1.d = zmm9_1.d f+ var_308[1]
                var_290 = zmm4_1.d
                zmm10_1[0] = zmm10_1[0] + var_308[2]
                zmm3_1 = zmm8_1
                var_2cc = zmm8_1.d
                zmm3_1[0] = zmm3_1[0] f- zmm1_1.d
                var_2a8 = zmm8_1.d
                zmm4_1.d = zmm9_1.d f- zmm0_1.d
                var_2c8 = zmm9_1.d
                zmm2_1.d = zmm10_1.d f- result_1
                zmm0_1.d = var_168.d.d f+ zmm3_1[0]
                var_2c4 = zmm10_1[0]
                int32_t var_2a4_1 = zmm9_1.d
                zmm1_1.d = var_168:4.d.d f+ zmm4_1.d
                result_2 = zmm10_1[0]
                var_298.d = zmm15.d
                var_298:4.d = zmm6_1.d
                var_168.d = zmm0_1.d
                zmm0_1.d = var_168:8.d.d f+ zmm2_1.d
                var_168:4.d = zmm1_1.d
                zmm1_1.d = var_168:0xc.d.d f+ zmm3_1[0]
                var_2f8 = 0x7f7fffff
                var_168:8.d = zmm0_1.d
                var_168:0xc.d = zmm1_1.d
                zmm0_1.d = var_158_1.d.d f+ zmm4_1.d
                zmm1_1.d = var_158_1:4.d.d f+ zmm2_1.d
                var_158_1.d = zmm0_1.d
                zmm0_1 = var_158_1:8.d
                var_158_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1[0]
                zmm1_1.d = var_158_1:0xc.d.d f+ zmm4_1.d
                var_158_1:8.d = zmm0_1.d
                zmm0_1.d = var_148_1.d f+ zmm2_1.d
                var_158_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm8_1.d f- var_2e0_2
                zmm2_1.d = zmm9_1.d f- var_2dc_2
                var_148_1 = zmm0_1.d
                zmm0_1.d = zmm10_1.d f- zmm7_1[0]
                *(&var_168 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_168:8 + (rcx_6 << 2)) = zmm0_1.d
                zmm12_1 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm8_1, zmm9_1, zmm10_1, zmm13, zmm14 =
                    sub_1416f4530(&var_208, &var_168, &var_190, &var_178, &var_138, &var_108)
                r12 = zx.q(var_190)
                zmm1_1 = zx.o(*rax_23)
                int32_t rax_24 = rax_23[1].d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm7_1 = rax_24
                zmm15 = zmm1_1.d
            else
                int32_t rcx_7 = r12.d
                int32_t rax_14
                
                if (rcx_7 == 1)
                    int64_t rax_19 = sx.q(var_18c)
                    int64_t rcx_14 = rax_19 * 3
                    var_178[rax_19] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_168 + (rcx_14 << 2)))
                    rax_14 = *(&var_168:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    uint64_t var_1b4
                    uint64_t* rax_18
                    rax_18, zmm8_1, zmm9_1 =
                        sub_1416e69d0(&var_1b4, &var_168, &var_18c, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_18)
                    rax_14 = rax_18[1].d
                else if (rcx_7 == 3)
                    uint64_t var_1a8
                    uint64_t* rax_17
                    rax_17, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm14 =
                        sub_1416fa750(&var_1a8, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_17)
                    rax_14 = rax_17[1].d
                else if (rcx_7 == 4)
                    uint64_t var_19c
                    uint64_t* rax_16
                    rax_16, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm14 =
                        sub_1416f9c90(&var_19c, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_16)
                    rax_14 = rax_16[1].d
                else
                    int32_t var_2d0_1 = 0
                    rax_14 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm13, zmm13[0].q)
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_4 = sx.q(var_188:4.d)
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_2f0_1 = zmm0_1.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_4 * 3
                int32_t rdx_5 = *(&var_168:8 + (r14_1 << 2))
                int32_t rcx_15 = *(&var_168:8 + (rsi << 2))
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                zmm15 = var_2f0_1.d
                zmm6_1 = var_2f0_1:4.d
                int32_t rax_20 = *(&var_168:8 + (rbx_1 << 2))
                zmm7_1 = rax_14
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx_1 << 2))
                zmm0_1 = var_178[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                zmm1_1 = var_178[r10_1]
                var_168.q = *(&var_168 + (r15_1 << 2))
                zmm3_1 = var_178[rdi_1]
                int32_t rdi_2 = (&var_130)[r15_1]
                var_178[2] = var_178[r9_4].d
                zmm2_1 = zx.o(*(&var_138 + (r14_1 << 2)))
                var_178[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_138 + (rbx_1 << 2)))
                var_178[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_138 + (rsi << 2)))
                var_178[3] = zmm3_1[0]
                zmm3_1 = zx.o(*(&var_138 + (r15_1 << 2)))
                var_158_1:4.d = rdx_5
                int32_t rdx_6 = (&var_130)[r14_1]
                var_148_1 = rcx_15
                int32_t rcx_16 = (&var_130)[rsi]
                var_148_1 = rax_20
                int32_t rax_21 = (&var_130)[rbx_1]
                var_12c_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_108 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_108 + (rbx_1 << 2)))
                var_12c_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_108 + (rsi << 2)))
                var_130 = rdi_2
                rdi = (&var_100)[r15_1]
                var_138 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_108 + (r15_1 << 2)))
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&var_100)[r14_1]
                var_11c_1:4.d = rcx_16
                int32_t rcx_17 = (&var_100)[rsi]
                int32_t var_10c_1 = rax_21
                int32_t rax_22 = (&var_100)[rbx_1]
                var_fc_1.q = zmm2_1.q
                int128_t var_ec_1
                var_ec_1:8.q = zmm0_1.q
                var_18c.o = data_142e11d00
                var_100 = rdi
                zmm2_1.d = zmm15.d f* zmm15.d
                var_168:8.d = r8_5
                var_fc_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm6_1.d f* zmm6_1.d
                var_fc_1:8.d = rdx_7
                zmm1_1.d = zmm7_1.d f* zmm7_1[0]
                var_ec_1:4.d = rcx_17
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_108 = zmm3_1.q
                int32_t var_dc_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm12_1[0]
                rdi.b = zmm2_1.d f< zmm12_1[0]
                var_2f8 = zmm2_1.d
                rsi.b = zmm2_1.d f>= zmm11_1[0]
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rsi.b == 0)
                rcx_2 = var_2e4
                rbx = var_328
                continue
        
        zmm5_1 = var_308[0]
        goto label_14164602f
__security_check_cookie(rax_1 ^ &var_368)
return result
