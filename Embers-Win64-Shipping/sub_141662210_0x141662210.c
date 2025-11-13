// 函数: sub_141662210
// 地址: 0x141662210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float var_278 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
int96_t var_298 = zmm0[0].12
int64_t var_248 = arg1
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
int32_t var_190 = 0
float var_178[0x4] = data_142d3f7e0
float var_26c = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_274 = temp0_1[0]
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
int64_t var_200 = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_270 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r12 = zx.q(var_190)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float var_2c8[0x4]
int128_t* var_1f8 = &var_2c8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_2c8 = temp0_6
var_2c8 = temp0_6
zmm0 = *(arg1 + 0x28)
zmm0[0] = zmm0[0] f* *arg10
void* rcx = *(arg1 + 0x10)
float zmm1[0x4] = *(arg1 + 0x30)
zmm1[0] = zmm1[0] f* arg10[2]
int32_t* var_1f0 = &var_278
float var_340 = zmm0[0]
zmm0 = *(arg1 + 0x2c)
zmm0[0] = zmm0[0] f* arg10[1]
float var_338 = zmm1[0]
float var_33c = zmm0[0]
float var_300
int128_t zmm9 = sub_141758e70(rcx, &var_300, &var_340, zx.o(0))
float zmm6[0x4] = var_300
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int32_t var_2fc
int64_t zmm7
zmm7.d = var_2fc.d f* *(arg1 + 0x2c)
float var_2f8
float zmm8 = var_2f8 f* *(arg1 + 0x30)
int128_t zmm1_1 = arg10[1] ^ zmm9
int64_t var_138 = (_mm_unpacklo_ps(zmm6, zmm7)).q
var_340 = (*arg10 ^ zmm9)[0]
int32_t var_33c_1 = zmm1_1.d
float var_338_1 = (arg10[2] ^ zmm9)[0]
float var_130 = zmm8
void var_2f0
int32_t* rax_4
uint128_t zmm6_1
uint128_t zmm7_1
float zmm8_1
int128_t zmm12_1
rax_4, zmm6_1, zmm7_1, zmm8_1, zmm12_1 = sub_14170d470(&var_200, &var_2f0, &var_340)
uint128_t zmm0_2 = var_298.d
uint128_t zmm15 = zx.o(0)
uint128_t zmm2_1 = var_298:4.d
uint128_t zmm3_1 = var_298:8.d
uint128_t zmm9_1 = zmm0_2
uint128_t zmm1_2 = zx.o(*rax_4)
uint128_t zmm10 = zmm2_1
float rcx_2 = rax_4[2]
zmm6_1.d = zmm6_1.d f- zmm1_2.d
int32_t var_2e0 = zmm0_2.d
uint32_t result = zx.d(arg9)
uint128_t zmm11 = zmm3_1
int32_t var_2b8 = zmm0_2.d
uint128_t zmm5
zmm5.d = zmm0_2.d f- zmm6_1.d
int32_t var_330 = zmm2_1.d
int32_t var_2b4 = zmm2_1.d
zmm7_1.d = zmm7_1.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
int64_t var_108 = zmm1_2.q
uint64_t var_288 = zmm1_2.q
int32_t var_32c = zmm3_1.d
zmm6_1.d = zmm2_1.d f- zmm7_1.d
uint32_t result_2 = zmm3_1.d
float var_100 = rcx_2
var_300.q = 0
uint128_t zmm13
zmm13.d = zmm3_1.d f- (zmm8_1 - rcx_2)
int32_t var_2f8_1 = 0x3f800000
zmm7_1 = zmm6_1
int32_t var_310 = zmm6_1.d
zmm2_1 = zmm6_1
zmm6_1 = zmm5
zmm2_1.d = zmm2_1.d f* zmm7_1.d
zmm0_2.d = zmm5.d f* zmm6_1.d
zmm1_2.d = zmm13.d f* zmm13.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int64_t rbx

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

int32_t rdi_1 = 0
int32_t var_328 = 0x7f7fffff
char rsi = rbx.b
char var_348 = 0
char var_347 = rbx.b
int32_t var_320
uint64_t var_2d8
int64_t var_268
uint32_t result_1
uint128_t zmm4_1

if (rbx.b != 0)
label_14166301e:
    int32_t* rbx_1 = arg6
    *rbx_1 = zmm15.d
    
    if (not(zmm15.d f<= zmm12_1.d))
        zmm3_1 = zx.o(0)
        zmm4_1 = zx.o(0)
        *arg8 = var_300.q
        arg8[1].d = var_2f8_1
        
        if (r12.d s> 0)
            int128_t* rcx_18 = &var_178
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_23 = &var_100
            uint64_t i
            
            do
                zmm2_1 = *rcx_18
                rcx_18 += 4
                zmm0_2.d = zmm2_1.d f* rax_23[-2]
                zmm1_2.d = zmm2_1.d f* rax_23[-1]
                zmm2_1.d = zmm2_1.d f* *rax_23
                rax_23 = &rax_23[3]
                zmm12_1.d = zmm12_1.d f+ zmm0_2.d
                zmm3_1.d = zmm3_1.d f+ zmm1_2.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm15.d f* *arg4
        zmm1_2.d = zmm15.d f* *(arg4 + 4)
        zmm15.d = zmm15.d f* *(arg4 + 8)
        zmm0_2.d = zmm0_2.d f+ var_298.d
        zmm1_2.d = zmm1_2.d f+ var_298:4.d
        zmm15.d = zmm15.d f+ var_298:8.d
        zmm0_2.d = zmm0_2.d f+ zmm12_1.d
        zmm1_2.d = zmm1_2.d f+ zmm3_1.d
        zmm15.d = zmm15.d f+ zmm4_1.d
        uint32_t var_2e8_2 = zmm15.d
        *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm1_2.q)).q
        arg7[1].d = var_2e8_2
    else if (result.b != 0)
        uint64_t i_3 = 0
        var_2d8 = 0
        int64_t var_2d0_1 = 0
        var_178[0].q = 0
        var_178[2].q = 0
        sub_14083ad30(&var_2d8, 8)
        
        if (var_178[3] s< 8)
            sub_14083ad30(&var_178, 8)
        
        float rax_31
        uint128_t zmm0_4
        
        if (rdi_1 == 0)
            int32_t var_2e8_3 = 0x3f800000
            rax_31 = 1f
            zmm0_4 = _mm_unpacklo_ps(zx.o(0), zmm12_1.q)
        label_1416632bb:
            zmm2_1 = var_138:4.d
            zmm1_2 = var_138.d
            *rbx_1 = i_3.d
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = var_130.d
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
                    
                    uint64_t rcx_22 = var_2d8
                    int64_t rdx_12 = rbx_2 * 3
                    int32_t rax_25 = *(&var_130 + rdi_6)
                    zmm1_2.d = zmm10.d f+ *(&var_108:4 + rdi_6)
                    *(rcx_22 + (rdx_12 << 2)) = *(&var_138 + rdi_6)
                    zmm0_4.d = zmm9_1.d f+ *(&var_108 + rdi_6)
                    *(rcx_22 + (rdx_12 << 2) + 8) = rax_25
                    int64_t rbx_3 = sx.q(var_178[2])
                    int32_t var_33c_3 = zmm1_2.d
                    var_340 = zmm0_4.d
                    zmm0_4.d = zmm11.d f+ *(&var_100 + rdi_6)
                    int32_t rax_26 = (rbx_3 + 1).d
                    var_178[2] = rax_26
                    var_338_1 = zmm0_4.d
                    
                    if (rax_26 s> var_178[3])
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_24 = var_178[0].q
                    int64_t rdx_14 = rbx_3 * 3
                    rdi_6 += 0xc
                    *(rcx_24 + (rdx_14 << 2)) = var_340.q
                    *(rcx_24 + (rdx_14 << 2) + 8) = var_338_1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rbx_1 = arg6
            
            var_190.q = &var_2c8
            int64_t var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_30 = sub_1415af6c0(&var_2d8, &var_178, &var_248, &var_190, &var_320, 
                &var_340, &var_268, &var_200)
            zmm0_4 = zx.o(var_340.q)
            rax_31 = var_338_1
            
            if (rax_30 == 2)
                goto label_1416632bb
            
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = result_1
            *rbx_1 = (var_320 ^ data_142d3f780).d
            *arg7 = var_268
        int64_t rcx_26 = var_178[0].q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        uint64_t rcx_27 = var_2d8
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    
    result.b = 1
else
    while (true)
        int32_t rax_5 = rdi_1
        rdi_1 += 1
        
        if (rax_5 s>= 0x20)
            zmm10 = var_330
            zmm11 = var_32c
            result = zx.d(arg9)
            goto label_14166301e
        
        int64_t rdi_2 = var_248
        zmm2_1.d = zmm7_1.d f* zmm7_1.d
        zmm0_2.d = zmm6_1.d f* zmm6_1.d
        void* rcx_3 = *(rdi_2 + 0x10)
        zmm1_2.d = zmm13.d f* zmm13.d
        zmm2_1.d = zmm2_1.d f+ zmm0_2.d
        zmm2_1.d = zmm2_1.d f+ zmm1_2.d
        zmm3_1.d = zmm2_1.d
        zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
        zmm3_1.d = zmm3_1.d f* 0.5f
        zmm0_2.d = zmm4_1.d f* zmm4_1.d
        zmm1_2.d = zmm3_1.d f* zmm0_2.d
        zmm2_1.d = 0.5f f- zmm1_2.d
        zmm0_2.d = zmm4_1.d f* zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0_2.d
        zmm1_2.d = zmm4_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_2.d
        zmm5.d = 0.5f f- zmm3_1.d
        zmm0_2.d = zmm4_1.d f* zmm5.d
        zmm4_1.d = zmm4_1.d f+ zmm0_2.d
        zmm6_1.d = zmm6_1.d f* zmm4_1.d
        zmm7_1.d = zmm7_1.d f* zmm4_1.d
        zmm13.d = zmm13.d f* zmm4_1.d
        zmm0_2.d = zmm6_1.d f* *(rdi_2 + 0x28)
        zmm1_2.d = zmm7_1.d f* *(rdi_2 + 0x2c)
        int32_t var_238 = zmm0_2.d
        zmm0_2.d = zmm13.d f* *(rdi_2 + 0x30)
        int32_t var_30c_1 = zmm6_1.d
        int32_t var_310_1 = zmm7_1.d
        int32_t var_230_1 = zmm0_2.d
        int32_t var_2e4_1 = zmm13.d
        int32_t var_234_1 = zmm1_2.d
        var_320 = zmm4_1.d
        float var_22c
        float zmm6_2[0x4]
        float zmm7_2[0x4]
        zmm6_2, zmm7_2 = sub_141758e70(rcx_3, &var_22c, &var_238, zx.o(0))
        int32_t var_224
        float zmm0_3[0x4] = var_224
        zmm0_3[0] = zmm0_3[0] f* *(rdi_2 + 0x30)
        float zmm8_2[0x4] = zmm7_2
        float zmm11_1[0x4] = var_2c8[2]
        zmm7_2 = var_2c8[0]
        float zmm4_2 = zmm7_2[0]
        float zmm10_1[0x4] = var_2c8[1]
        uint128_t zmm14
        zmm14.d = var_22c.d f* *(rdi_2 + 0x28)
        int32_t var_228
        zmm13.d = var_228.d f* *(rdi_2 + 0x2c)
        float var_308_1 = zmm0_3[0]
        float var_208_1 = zmm0_3[0]
        float zmm5_1[0x4] = zmm6_2 ^ 0x80000000
        zmm12_1 = var_2e4_1 ^ 0x80000000
        zmm8_2 ^= 0x80000000
        float zmm9_2 = zmm10_1[0] f* zmm12_1.d
        zmm11_1[0] = zmm11_1[0] * zmm5_1[0]
        zmm11_1[0] = zmm11_1[0] * zmm8_2[0]
        zmm9_2 = zmm9_2 - zmm11_1[0]
        zmm7_2[0] = zmm7_2[0] f* zmm12_1.d
        zmm11_1[0] = zmm11_1[0] - zmm7_2[0]
        float zmm2_2 = var_2c8[3]
        zmm9_2 = zmm9_2 + zmm9_2
        zmm11_1[0] = zmm11_1[0] + zmm11_1[0]
        zmm4_2 = zmm4_2 * zmm8_2[0]
        zmm10_1[0] = zmm10_1[0] * zmm5_1[0]
        float zmm1_3 = zmm2_2 * zmm9_2 + zmm5_1[0]
        zmm10_1[0] = zmm10_1[0] * zmm9_2
        zmm4_2 = zmm4_2 - zmm10_1[0]
        zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
        zmm11_1[0] = zmm11_1[0] * zmm9_2
        zmm4_2 = zmm4_2 + zmm4_2
        zmm10_1[0] = zmm10_1[0] * zmm4_2
        zmm10_1[0] = zmm10_1[0] - zmm11_1[0]
        zmm7_2[0] = zmm7_2[0] * zmm4_2
        zmm7_2[0] = zmm7_2[0] * zmm11_1[0]
        zmm10_1[0] = zmm10_1[0] + zmm1_3
        zmm11_1[0] = zmm11_1[0] - zmm7_2[0]
        zmm1_3 = zmm2_2 * zmm11_1[0]
        zmm7_2[0] = zmm7_2[0] - zmm10_1[0]
        zmm2_2 = zmm2_2 * zmm4_2 f+ zmm12_1.d
        zmm12_1 = zx.o(0)
        zmm11_1[0] = zmm11_1[0] + zmm1_3 + zmm8_2[0]
        zmm7_2[0] = zmm7_2[0] + zmm2_2
        int64_t var_1e0 = (_mm_unpacklo_ps(zmm10_1, zmm11_1[0].q)).q
        float var_1d8_1 = zmm7_2[0]
        float var_220
        sub_141758e70(arg2, &var_220, &var_1e0, zx.o(0))
        zmm1_2 = var_274
        zmm11 = var_270
        zmm10 = zmm1_2
        uint128_t zmm8_3 = var_278
        int32_t var_218
        zmm9_1 = var_218
        int32_t var_21c
        zmm7_1 = var_21c
        zmm6_1 = var_220
        zmm2_1 = var_26c
        zmm0_2.d = zmm7_1.d f* zmm11.d
        zmm4_1.d = zmm6_1.d f* zmm11.d
        zmm3_1.d = zmm7_1.d f* zmm8_3.d
        zmm5.d = zmm9_1.d f* zmm1_2.d
        zmm5.d = zmm5.d f- zmm0_2.d
        zmm0_2.d = zmm9_1.d f* zmm8_3.d
        zmm4_1.d = zmm4_1.d f- zmm0_2.d
        zmm0_2.d = zmm6_1.d f* zmm1_2.d
        zmm5.d = zmm5.d f+ zmm5.d
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm0_2 = zmm11
        zmm4_1.d = zmm4_1.d f+ zmm4_1.d
        zmm11.d = zmm11.d f* zmm5.d
        zmm1_2.d = zmm1_2.d f* zmm5.d
        zmm3_1.d = zmm3_1.d f+ zmm3_1.d
        zmm0_2.d = zmm0_2.d f* zmm4_1.d
        zmm10.d = zmm10.d f* zmm3_1.d
        zmm10.d = zmm10.d f- zmm0_2.d
        zmm0_2.d = zmm8_3.d f* zmm3_1.d
        zmm8_3.d = zmm8_3.d f* zmm4_1.d
        zmm11.d = zmm11.d f- zmm0_2.d
        zmm8_3.d = zmm8_3.d f- zmm1_2.d
        zmm1_2 = zmm2_1
        zmm0_2.d = zmm2_1.d f* zmm5.d
        zmm5 = var_30c_1
        zmm2_1.d = zmm2_1.d f* zmm3_1.d
        zmm1_2.d = zmm1_2.d f* zmm4_1.d
        zmm6_1.d = zmm6_1.d f+ zmm0_2.d
        (&var_18c)[sx.q(r12.d)] = r12.d
        zmm9_1.d = zmm9_1.d f+ zmm2_1.d
        zmm7_1.d = zmm7_1.d f+ zmm1_2.d
        r12 = sx.q(var_190)
        zmm10.d = zmm10.d f+ zmm6_1.d
        zmm6_1 = var_310_1
        zmm8_3.d = zmm8_3.d f+ zmm9_1.d
        zmm9_1 = var_2e0
        uint64_t rcx_5 = r12 * 3
        zmm11.d = zmm11.d f+ zmm7_1.d
        zmm1_2.d = zmm14.d f- zmm10.d
        zmm0_2.d = var_308_1.d f- zmm8_3.d
        uint32_t var_1b0_1 = zmm8_3.d
        zmm2_1.d = zmm13.d f- zmm11.d
        zmm3_1.d = zmm9_1.d f- zmm1_2.d
        int32_t var_258_1 = zmm1_2.d
        int32_t var_308_2 = zmm0_2.d
        zmm4_1.d = var_330.d f- zmm2_1.d
        var_320 = zmm2_1.d
        zmm2_1.d = var_32c.d f- zmm0_2.d
        var_340 = zmm3_1.d
        zmm3_1.d = zmm3_1.d f* zmm5.d
        int32_t var_33c_2 = zmm4_1.d
        *(&var_138 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm14, zmm13.q)).q
        zmm4_1.d = zmm4_1.d f* zmm6_1.d
        (&var_130)[rcx_5] = var_208_1
        var_338_1 = zmm2_1.d
        zmm4_1.d = zmm4_1.d f+ zmm3_1.d
        zmm3_1 = var_2e4_1
        zmm2_1.d = zmm2_1.d f* zmm3_1.d
        *(&var_108 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
        (&var_100)[rcx_5] = var_1b0_1
        zmm4_1.d = zmm4_1.d f+ zmm2_1.d
        int128_t var_158_1
        int32_t var_148_1
        
        if (zmm4_1.d f<= 0f)
            r12 = zx.q(r12.d + 1)
            *(&var_168 + (rcx_5 << 2)) = var_340.q
            *(&var_168:8 + (rcx_5 << 2)) = var_338_1
            var_190 = r12.d
        label_141662c17:
            zmm8_3 = var_328
            zmm10 = var_330
            zmm11 = var_32c
            
            if (rsi == 0)
                zmm14 = 0x358637bd
            else
                zmm14 = 0x358637bd
                
                if (not(zmm4_1.d f< 0f))
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                    rbx.b = zmm4_1.d f>= zmm8_3.d
        else
            zmm10 = *(arg4 + 4)
            zmm7_1 = *arg4
            zmm11 = *(arg4 + 8)
            zmm2_1.d = zmm7_1.d f* zmm5.d
            zmm0_2.d = zmm10.d f* zmm6_1.d
            zmm1_2.d = zmm11.d f* zmm3_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            
            if (zmm2_1.d f>= 0f)
                result.b = 0
                break
            
            zmm1_2 = zmm15
            zmm0_2.d = zmm4_1.d f/ zmm2_1.d
            zmm15.d = zmm15.d f- zmm0_2.d
            
            if (zmm15.d f<= zmm1_2.d)
                goto label_141662c17
            
            if (zmm15.d f> arg5)
                result.b = 0
                break
            
            zmm1_2 = zx.o(var_2b8.q)
            zmm8_3 = 0x7f7fffff
            r12 = zx.q(r12.d + 1)
            zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            var_268 = zmm1_2.q
            zmm9_1.d = zmm7_1.d f* zmm15.d
            result_1 = result_2
            zmm10.d = zmm10.d f* zmm15.d
            var_190 = r12.d
            zmm9_1.d = zmm9_1.d f+ var_298.d
            zmm11.d = zmm11.d f* zmm15.d
            var_347 = 0
            zmm10.d = zmm10.d f+ var_298:4.d
            var_2f8_1 = zmm3_1.d
            zmm11.d = zmm11.d f+ var_298:8.d
            var_2e0 = zmm9_1.d
            zmm3_1.d = zmm9_1.d f- zmm1_2.d
            var_2b8 = zmm9_1.d
            zmm4_1.d = zmm10.d f- zmm0_2.d
            var_330 = zmm10.d
            zmm2_1.d = zmm11.d f- result_1
            zmm0_2.d = var_168.d.d f+ zmm3_1.d
            var_32c = zmm11.d
            int32_t var_2b4_1 = zmm10.d
            zmm1_2.d = var_168:4.d.d f+ zmm4_1.d
            result_2 = zmm11.d
            var_300 = zmm5.d
            int32_t var_2fc_1 = zmm6_1.d
            var_168.d = zmm0_2.d
            zmm0_2.d = var_168:8.d.d f+ zmm2_1.d
            var_168:4.d = zmm1_2.d
            zmm1_2.d = var_168:0xc.d.d f+ zmm3_1.d
            var_328 = 0x7f7fffff
            var_168:8.d = zmm0_2.d
            var_168:0xc.d = zmm1_2.d
            zmm0_2.d = var_158_1.d.d f+ zmm4_1.d
            zmm1_2.d = var_158_1:4.d.d f+ zmm2_1.d
            var_158_1.d = zmm0_2.d
            zmm0_2 = var_158_1:8.d
            var_158_1:4.d = zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm3_1.d
            zmm1_2.d = var_158_1:0xc.d.d f+ zmm4_1.d
            var_158_1:8.d = zmm0_2.d
            zmm0_2.d = var_148_1.d f+ zmm2_1.d
            var_158_1:0xc.d = zmm1_2.d
            zmm1_2.d = zmm9_1.d f- var_258_1
            zmm2_1.d = zmm10.d f- var_320
            var_148_1 = zmm0_2.d
            zmm0_2.d = zmm11.d f- var_308_2
            *(&var_168 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
            *(&var_168:8 + (rcx_5 << 2)) = zmm0_2.d
            zmm14 = 0x358637bd
        
        uint32_t rcx_16
        
        if (rbx.b != 0)
            int64_t* rax_20
            rax_20, zmm9_1, zmm10, zmm11, zmm12_1, zmm15 =
                sub_1416f4530(&var_200, &var_168, &var_190, &var_178, &var_138, &var_108)
            r12 = zx.q(var_190)
            rcx_16 = zx.d(var_348)
            zmm1_2 = zx.o(*rax_20)
            int32_t rax_21 = rax_20[1].d
            zmm7_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            zmm13 = rax_21
            zmm6_1 = zmm1_2.d
        else
            int32_t rcx_6 = r12.d
            int32_t rax_11
            
            if (rcx_6 == 1)
                int64_t rax_16 = sx.q(var_18c)
                int64_t rcx_13 = rax_16 * 3
                var_178[rax_16] = 0x3f800000
                zmm0_2 = zx.o(*(&var_168 + (rcx_13 << 2)))
                rax_11 = *(&var_168:8 + (rcx_13 << 2))
            else if (rcx_6 == 2)
                uint64_t* rax_15
                rax_15, zmm8_3, zmm9_1 =
                    sub_1416e69d0(&var_2d8, &var_168, &var_18c, &var_190, &var_178)
                r12 = zx.q(var_190)
                zmm0_2 = zx.o(*rax_15)
                rax_11 = rax_15[1].d
            else if (rcx_6 == 3)
                void var_1a0
                uint64_t* rax_14
                rax_14, zmm8_3, zmm9_1, zmm10, zmm11, zmm12_1, zmm14, zmm15 =
                    sub_1416fa750(&var_1a0, &var_168, &var_190, &var_178)
                r12 = zx.q(var_190)
                zmm0_2 = zx.o(*rax_14)
                rax_11 = rax_14[1].d
            else if (rcx_6 == 4)
                uint64_t var_1ac
                uint64_t* rax_13
                rax_13, zmm8_3, zmm9_1, zmm10, zmm11, zmm12_1, zmm14, zmm15 =
                    sub_1416f9c90(&var_1ac, &var_168, &var_190, &var_178)
                r12 = zx.q(var_190)
                zmm0_2 = zx.o(*rax_13)
                rax_11 = rax_13[1].d
            else
                int32_t var_2e8_1 = 0
                rax_11 = 0
                zmm0_2 = _mm_unpacklo_ps(zx.o(0), 0)
            
            int32_t var_180
            int64_t rdi_3 = sx.q(var_180)
            int64_t r11_1 = sx.q(var_18c)
            int64_t var_188
            int64_t r10_1 = sx.q(var_188.d)
            int64_t r9_3 = sx.q(var_188:4.d)
            rbx = rdi_3 * 3
            uint64_t var_31c_1 = zmm0_2.q
            int64_t r15_1 = r11_1 * 3
            int64_t r14_1 = r10_1 * 3
            int64_t rsi_1 = r9_3 * 3
            int32_t rdx_7 = *(&var_168:8 + (r14_1 << 2))
            int32_t rcx_14 = *(&var_168:8 + (rsi_1 << 2))
            int32_t r8_7 = *(&var_168:8 + (r15_1 << 2))
            zmm6_1 = var_31c_1.d
            zmm7_1 = var_31c_1:4.d
            int32_t rax_17 = *(&var_168:8 + (rbx << 2))
            zmm13 = rax_11
            var_168:0xc.q = *(&var_168 + (r14_1 << 2))
            var_148_1:4.q = *(&var_168 + (rbx << 2))
            zmm0_2 = var_178[r11_1]
            var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
            zmm1_2 = var_178[r10_1]
            var_168.q = *(&var_168 + (r15_1 << 2))
            zmm3_1 = var_178[rdi_3]
            float rdi_4 = (&var_130)[r15_1]
            var_178[2] = var_178[r9_3].d
            zmm2_1 = zx.o(*(&var_138 + (r14_1 << 2)))
            var_178[0] = zmm0_2.d
            zmm0_2 = zx.o(*(&var_138 + (rbx << 2)))
            var_178[1] = zmm1_2.d
            zmm1_2 = zx.o(*(&var_138 + (rsi_1 << 2)))
            var_178[3] = zmm3_1.d
            var_158_1:4.d = rdx_7
            int32_t rdx_8 = (&var_130)[r14_1]
            var_148_1 = rcx_14
            int32_t rcx_15 = (&var_130)[rsi_1]
            var_148_1 = rax_17
            int32_t rax_18 = (&var_130)[rbx]
            var_12c_1.q = zmm2_1.q
            zmm2_1 = zx.o(*(&var_108 + (r14_1 << 2)))
            int128_t var_11c_1
            var_11c_1:8.q = zmm0_2.q
            zmm0_2 = zx.o(*(&var_108 + (rbx << 2)))
            var_12c_1:0xc.q = zmm1_2.q
            zmm1_2 = zx.o(*(&var_108 + (rsi_1 << 2)))
            var_138 = *(&var_138 + (r15_1 << 2))
            zmm3_1 = zx.o(*(&var_108 + (r15_1 << 2)))
            var_130 = rdi_4
            var_12c_1:8.d = rdx_8
            int32_t rdx_9 = (&var_100)[r14_1]
            var_11c_1:4.d = rcx_15
            rcx_16 = (&var_100)[rsi_1]
            int32_t var_10c_1 = rax_18
            int32_t rax_19 = (&var_100)[rbx]
            var_fc_1.q = zmm2_1.q
            int128_t var_ec_1
            var_ec_1:8.q = zmm0_2.q
            var_18c.o = data_142e11d00
            var_168:8.d = r8_7
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            var_100 = (&var_100)[r15_1]
            var_fc_1:0xc.q = zmm1_2.q
            zmm0_2.d = zmm6_1.d f* zmm6_1.d
            var_fc_1:8.d = rdx_9
            zmm1_2.d = zmm13.d f* zmm13.d
            var_ec_1:4.d = rcx_16
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            var_108 = zmm3_1.q
            int32_t var_dc_1 = rax_19
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm2_1.d f- zmm14.d
            rbx.b = zmm2_1.d f< zmm14.d
            var_328 = zmm2_1.d
            rcx_16.b = zmm2_1.d f>= zmm8_3.d
            var_348 = rcx_16.b
        
        result = zx.d(arg9)
        
        if (rbx.b != 0)
            goto label_14166301e
        
        if (rcx_16.b != 0)
            goto label_14166301e
        
        rsi = var_347
__security_check_cookie(rax_1 ^ &var_388)
return result
