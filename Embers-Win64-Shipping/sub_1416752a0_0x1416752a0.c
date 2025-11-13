// 函数: sub_1416752a0
// 地址: 0x1416752a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
uint128_t zmm0 = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_268 = zmm3[0]
uint128_t var_318 = zmm0
int64_t* var_228 = arg1
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
int32_t var_190 = 0
float var_25c = temp0[0]
uint128_t var_178 = data_142d3f7e0
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
int32_t var_264 = zmm0.d
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
int64_t var_1f0 = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (zmm0 ^ 0x80000000).d
float var_260 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_2b8[0x4] = temp0_6
var_2b8 = temp0_6
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r12 = zx.q(var_190)
float (* var_1e8)[0x4] = &var_2b8
float* var_1e0 = &var_268
float zmm6[0x4] = *(arg10 + 4)
uint128_t zmm5 = *arg10
zmm6[0] = zmm6[0] f* arg1[1]
zmm0.d = zmm5.d f* *arg1
float zmm7[0x4] = *(arg10 + 8)
zmm6[0] = zmm6[0] f* arg1[4]
zmm7[0] = zmm7[0] f* arg1[2]
zmm6[0] = zmm6[0] f+ zmm0.d
zmm0.d = zmm5.d f* arg1[3]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] f+ zmm0.d
float zmm4 = zmm6[0]
zmm7[0] = zmm7[0] f* arg1[5]
zmm4 = zmm4 f* arg1[7]
zmm0.d = zmm5.d f* arg1[6]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* arg1[8]
zmm4 = zmm4 f+ zmm0.d + zmm7[0]
int32_t rax_4

if (not(zmm6[0] < zmm6[0]) && not(zmm6[0] < zmm4))
    zmm0 = zx.o(*arg1)
    rax_4 = arg1[2]
else if (zmm6[0] < zmm6[0] || zmm6[0] < zmm4)
    zmm0 = zx.o(*(arg1 + 0x18))
    rax_4 = arg1[8]
else
    zmm0 = zx.o(*(arg1 + 0xc))
    rax_4 = arg1[5]

uint64_t var_2f0 = zmm0.q
float var_330 = (zmm5 ^ 0x80000000).d
float var_32c = (zmm6 ^ 0x80000000)[0]
float var_328 = (zmm7 ^ 0x80000000)[0]
int64_t var_138 = zmm0.q
int32_t var_130 = rax_4
void var_2e0
int32_t* rax_5
float zmm8_1[0x4]
rax_5, zmm8_1 = sub_14170d470(&var_1f0, &var_2e0, &var_330)
uint128_t zmm5_1 = var_318.d
uint128_t zmm15 = zx.o(0)
float zmm3_1[0x4] = var_318:4.d
uint128_t zmm4_1 = var_318:8.d
float zmm6_1[0x4] = zmm3_1
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
uint128_t zmm9 = zmm5_1
uint128_t zmm0_1
zmm0_1.d = var_2f0.d.d f- zmm2_1.d
float zmm14[0x4] = 0x358637bd
float zmm10[0x4] = zmm3_1
uint32_t result = zx.d(arg9)
uint128_t zmm11 = zmm4_1
int64_t var_108 = zmm2_1.q
uint64_t var_278 = zmm2_1.q
uint128_t zmm12
zmm12.d = zmm5_1.d f- zmm0_1.d
int32_t var_2c8 = zmm5_1.d
uint128_t zmm1_1
zmm1_1.d = var_2f0:4.d.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
int32_t var_298 = zmm5_1.d
zmm0_1.d = rax_4.d f- rcx_1
float var_2c4 = zmm3_1[0]
float var_294 = zmm3_1[0]
zmm6_1[0] = zmm6_1[0] f- zmm1_1.d
int32_t var_334 = zmm4_1.d
uint32_t result_2 = zmm4_1.d
uint128_t zmm7_1
zmm7_1.d = zmm4_1.d f- zmm0_1.d
int32_t var_100 = rcx_1
int64_t var_2a8 = 0
zmm0_1.d = zmm12.d f* zmm12.d
float var_2a0 = 1f
zmm2_1.d = zmm6_1.d f* zmm6_1[0]
zmm1_1.d = zmm7_1.d f* zmm7_1.d
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
int32_t var_308 = 0x7f7fffff
int32_t var_2f4 = 0
char rbx = rdi.b
char var_338 = rbx
int32_t var_304
int64_t var_250
uint32_t result_1

if (rdi.b != 0)
label_141676115:
    bool cond:1_1 = zmm15.d f<= zmm8_1[0]
    float* rdi_3 = arg6
    *rdi_3 = zmm15.d
    
    if (not(cond:1_1))
        zmm3_1 = zx.o(0)
        zmm4_1 = zx.o(0)
        *arg8 = var_2a8
        arg8[1].d = var_2a0
        
        if (r12.d s> 0)
            uint128_t* rcx_19 = &var_178
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_25 = &var_100
            uint64_t i
            
            do
                zmm2_1 = *rcx_19
                rcx_19 += 4
                zmm0_1.d = zmm2_1.d f* rax_25[-2]
                zmm1_1.d = zmm2_1.d f* rax_25[-1]
                zmm2_1.d = zmm2_1.d f* *rax_25
                rax_25 = &rax_25[3]
                zmm8_1[0] = zmm8_1[0] f+ zmm0_1.d
                zmm3_1[0] = zmm3_1[0] f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm15.d f* *arg4
        zmm1_1.d = zmm15.d f* *(arg4 + 4)
        zmm15.d = zmm15.d f* *(arg4 + 8)
        zmm0_1.d = zmm0_1.d f+ zmm5_1.d
        zmm1_1.d = zmm1_1.d f+ var_318:4.d
        zmm15.d = zmm15.d f+ var_318:8.d
        zmm0_1.d = zmm0_1.d f+ zmm8_1[0]
        zmm1_1.d = zmm1_1.d f+ zmm3_1[0]
        zmm15.d = zmm15.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm15.d
    else if (result.b != 0)
        var_178.q = 0
        var_178:8.q = 0
        var_318.q = 0
        var_318:8.q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_318:0xc.d s< 8)
            sub_14083ad30(&var_318, 8)
        
        float rax_33
        float zmm0_2[0x4]
        
        if (var_2f4 == 0)
            int32_t var_2d8_3 = 0x3f800000
            rax_33 = 1f
            zmm0_2 = _mm_unpacklo_ps(zx.o(0), zmm8_1[0].q)
        label_1416763d0:
            zmm2_1 = var_138:4.d
            zmm1_1 = var_138.d
            *rdi_3 = 0f
            *arg8 = zmm0_2.q
            zmm0_2 = var_130
            arg8[1].d = rax_33
            zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2_1.q)
            result = zmm0_2[0]
            *arg7 = zmm1_1.q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_178:8.d)
                    int32_t rax_26 = (rbx_2 + 1).d
                    var_178:8.d = rax_26
                    
                    if (rax_26 s> var_178:0xc.d)
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_23 = var_178.q
                    int64_t rdx_10 = rbx_2 * 3
                    int32_t rax_27 = *(&var_130 + rdi_4)
                    zmm1_1.d = zmm10.d f+ *(&var_108:4 + rdi_4)
                    *(rcx_23 + (rdx_10 << 2)) = *(&var_138 + rdi_4)
                    zmm0_2 = zmm9
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_108 + rdi_4)
                    *(rcx_23 + (rdx_10 << 2) + 8) = rax_27
                    int64_t rbx_3 = sx.q(var_318:8.d)
                    int32_t var_32c_2 = zmm1_1.d
                    var_330 = zmm0_2[0]
                    zmm0_2 = zmm11
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_100 + rdi_4)
                    int32_t rax_28 = (rbx_3 + 1).d
                    var_318:8.d = rax_28
                    var_328 = zmm0_2[0]
                    
                    if (rax_28 s> var_318:0xc.d)
                        sub_14083a7e0(&var_318)
                    
                    int64_t rcx_25 = var_318.q
                    int64_t rdx_12 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_25 + (rdx_12 << 2)) = var_330.q
                    *(rcx_25 + (rdx_12 << 2) + 8) = var_328
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_190.q = &var_2b8
            int64_t var_188_1 = arg2
            int128_t* var_180_1 = arg3
            int32_t rax_32
            int128_t zmm13_2
            rax_32, zmm13_2 = sub_1415b9480(&var_178, &var_318, &var_228, &var_190, zmm14, 
                &var_304, &var_330, &var_250, &var_1f0)
            zmm0_2 = zx.o(var_330.q)
            rax_33 = var_328
            
            if (rax_32 == 2)
                goto label_1416763d0
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_33
            result = result_1
            *rdi_3 = (var_304 ^ zmm13_2)[0]
            *arg7 = var_250
        int64_t rcx_27 = var_318.q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_178.q
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    result.b = 1
else
    while (true)
        var_2f4 = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            zmm11 = var_334
            result = zx.d(arg9)
        else
            int64_t* rax_7 = var_228
            zmm0_1.d = zmm6_1.d f* zmm6_1[0]
            zmm1_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm12.d f* zmm12.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1 = zmm2_1
            zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0])
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
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm7_1.d = zmm7_1.d f* zmm4_1.d
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm5_1.d = zmm4_1.d f* zmm12.d
            zmm1_1.d = zmm7_1.d f* rax_7[1].d
            zmm2_1.d = zmm6_1.d f* *(rax_7 + 4)
            zmm6_1[0] = zmm6_1[0] f* rax_7[2].d
            zmm0_1.d = zmm5_1.d f* *rax_7
            var_304 = zmm4_1.d
            zmm4_1.d = zmm6_1.d f* *(rax_7 + 0x1c)
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            int32_t var_240_1 = zmm5_1.d
            float var_23c_1 = zmm6_1[0]
            zmm0_1.d = zmm5_1.d f* *(rax_7 + 0xc)
            int32_t var_238_1 = zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm1_1.d = zmm7_1.d f* *(rax_7 + 0x14)
            zmm6_1[0] = zmm6_1[0] f+ zmm0_1.d
            zmm0_1.d = zmm5_1.d f* rax_7[3].d
            zmm6_1[0] = zmm6_1[0] f+ zmm1_1.d
            zmm1_1.d = zmm7_1.d f* rax_7[4].d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int32_t rcx_4
            
            if (not(zmm2_1.d f< zmm6_1[0]) && not(zmm2_1.d f< zmm4_1.d))
                zmm0_1 = zx.o(*rax_7)
                rcx_4 = rax_7[1].d
            else if (zmm6_1[0] f< zmm2_1.d || zmm6_1[0] f< zmm4_1.d)
                zmm0_1 = zx.o(rax_7[3])
                rcx_4 = rax_7[4].d
            else
                zmm0_1 = zx.o(*(rax_7 + 0xc))
                rcx_4 = *(rax_7 + 0x14)
            
            zmm10 = var_2b8[1]
            zmm11 = var_2b8[2]
            zmm2_1 = var_2b8[3]
            uint64_t var_2d4_1 = zmm0_1.q
            zmm12 = zmm7_1
            zmm7_1 = var_2b8[0]
            zmm5_1 ^= 0x80000000
            zmm14 = var_2d4_1.d
            zmm8_1 = zmm6_1 ^ 0x80000000
            float zmm13_1[0x4] = var_2d4_1:4.d
            zmm12 ^= 0x80000000
            zmm6_1 = zmm11
            zmm0_1.d = zmm11.d f* zmm8_1[0]
            float var_2e8_1 = rcx_4[0]
            zmm6_1[0] = zmm6_1[0] f* zmm5_1.d
            zmm4_1.d = zmm7_1.d f* zmm8_1[0]
            zmm9.d = zmm10.d f* zmm12.d
            zmm9.d = zmm9.d f- zmm0_1.d
            zmm0_1.d = zmm7_1.d f* zmm12.d
            zmm6_1[0] = zmm6_1[0] f- zmm0_1.d
            zmm0_1.d = zmm10.d f* zmm5_1.d
            zmm9.d = zmm9.d f+ zmm9.d
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1 = zmm11
            zmm1_1.d = zmm2_1.d f* zmm9.d
            zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
            zmm11.d = zmm11.d f* zmm9.d
            zmm1_1.d = zmm1_1.d f+ zmm5_1.d
            zmm10[0] = zmm10[0] f* zmm9.d
            zmm0_1.d = zmm0_1.d f* zmm6_1[0]
            zmm4_1.d = zmm4_1.d f+ zmm4_1.d
            zmm10[0] = zmm10[0] f* zmm4_1.d
            zmm10[0] = zmm10[0] f- zmm0_1.d
            zmm0_1.d = zmm7_1.d f* zmm4_1.d
            zmm7_1.d = zmm7_1.d f* zmm6_1[0]
            zmm10[0] = zmm10[0] f+ zmm1_1.d
            zmm11.d = zmm11.d f- zmm0_1.d
            zmm1_1.d = zmm2_1.d f* zmm6_1[0]
            zmm2_1.d = zmm2_1.d f* zmm4_1.d
            zmm7_1.d = zmm7_1.d f- zmm10[0]
            zmm1_1.d = zmm1_1.d f+ zmm8_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm12.d
            zmm11.d = zmm11.d f+ zmm1_1.d
            zmm7_1.d = zmm7_1.d f+ zmm2_1.d
            uint64_t var_208 = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
            int32_t var_200_1 = zmm7_1.d
            float var_218
            sub_141758e70(arg2, &var_218, &var_208, zx.o(0))
            int32_t var_210
            zmm10 = var_210
            zmm12 = var_260
            int32_t var_214
            zmm6_1 = var_214
            zmm8_1 = var_264
            zmm3_1 = var_218
            zmm0_1.d = zmm6_1.d f* zmm12.d
            zmm7_1.d = zmm10.d f* zmm8_1[0]
            zmm5_1.d = zmm3_1.d f* zmm12.d
            zmm7_1.d = zmm7_1.d f- zmm0_1.d
            zmm9 = var_268
            zmm7_1.d = zmm7_1.d f+ zmm7_1.d
            zmm2_1 = var_25c
            zmm0_1.d = zmm10.d f* zmm9.d
            zmm4_1.d = zmm6_1.d f* zmm9.d
            zmm5_1.d = zmm5_1.d f- zmm0_1.d
            zmm1_1.d = zmm2_1.d f* zmm7_1.d
            (&var_18c)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_190)
            zmm0_1.d = zmm3_1.d f* zmm8_1[0]
            zmm1_1.d = zmm1_1.d f+ zmm3_1[0]
            zmm5_1.d = zmm5_1.d f+ zmm5_1.d
            zmm8_1[0] = zmm8_1[0] f* zmm7_1.d
            uint64_t rcx_6 = r12 * 3
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1 = zmm12
            zmm12.d = zmm12.d f* zmm7_1.d
            zmm7_1 = var_240_1
            zmm0_1.d = zmm0_1.d f* zmm5_1.d
            zmm4_1.d = zmm4_1.d f+ zmm4_1.d
            zmm11.d = zmm8_1.d f* zmm4_1.d
            zmm11.d = zmm11.d f- zmm0_1.d
            zmm0_1.d = zmm9.d f* zmm4_1.d
            zmm9.d = zmm9.d f* zmm5_1.d
            zmm12.d = zmm12.d f- zmm0_1.d
            zmm11.d = zmm11.d f+ zmm1_1.d
            zmm1_1.d = zmm2_1.d f* zmm5_1.d
            zmm9.d = zmm9.d f- zmm8_1[0]
            zmm2_1.d = zmm2_1.d f* zmm4_1.d
            zmm1_1.d = zmm1_1.d f+ zmm6_1[0]
            zmm6_1 = var_238_1
            zmm2_1.d = zmm2_1.d f+ zmm10[0]
            zmm10 = var_2c4
            zmm12.d = zmm12.d f+ zmm1_1.d
            zmm1_1.d = zmm14.d f- zmm11.d
            zmm9.d = zmm9.d f+ zmm2_1.d
            zmm13_1[0] = zmm13_1[0] f- zmm12.d
            int32_t var_258_1 = zmm1_1.d
            zmm0_1.d = rcx_4.d f- zmm9.d
            uint32_t var_1c4_1 = zmm9.d
            zmm9 = var_2c8
            zmm4_1.d = zmm9.d f- zmm1_1.d
            float var_254_1 = zmm13_1[0]
            zmm2_1.d = zmm10.d f- zmm13_1[0]
            zmm3_1 = var_334
            zmm3_1[0] = zmm3_1[0] f- zmm0_1.d
            var_304 = zmm0_1.d
            *(&var_138 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm14, zmm13_1[0].q)).q
            zmm0_1 = _mm_unpacklo_ps(zmm11, zmm12.q)
            zmm5_1.d = zmm7_1.d f* zmm4_1.d
            (&var_130)[rcx_6] = var_2e8_1
            *(&var_108 + (rcx_6 << 2)) = zmm0_1.q
            var_330 = zmm4_1.d
            zmm4_1 = var_23c_1
            zmm1_1.d = zmm6_1.d f* zmm3_1[0]
            (&var_100)[rcx_6] = var_1c4_1
            zmm0_1.d = zmm4_1.d f* zmm2_1.d
            int32_t var_32c_1 = zmm2_1.d
            var_328 = zmm3_1[0]
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm5_1.d = zmm5_1.d f+ zmm1_1.d
            zmm8_1 = zx.o(0)
            int128_t var_158_1
            int32_t var_148_1
            
            if (zmm5_1.d f<= 0f)
                r12 = zx.q(r12.d + 1)
                *(&var_168 + (rcx_6 << 2)) = var_330.q
                *(&var_168:8 + (rcx_6 << 2)) = var_328
                var_190 = r12.d
            label_141675d16:
                zmm13_1 = var_308
                zmm11 = var_334
                
                if (rbx == 0)
                    zmm14 = 0x358637bd
                else
                    zmm14 = 0x358637bd
                    
                    if (not(zmm5_1.d f< 0f))
                        zmm5_1.d = zmm5_1.d f* zmm5_1.d
                        zmm5_1.d = zmm5_1.d f+ 9.99999997e-07f
                        rdi.b = zmm5_1.d f>= zmm13_1[0]
            else
                zmm3_1 = *(arg4 + 4)
                zmm11 = *arg4
                zmm12 = *(arg4 + 8)
                zmm2_1.d = zmm7_1.d f* zmm11.d
                zmm0_1.d = zmm4_1.d f* zmm3_1[0]
                zmm1_1.d = zmm6_1.d f* zmm12.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= 0f)
                    result.b = 0
                    break
                
                zmm1_1 = zmm15
                zmm0_1.d = zmm5_1.d f/ zmm2_1.d
                zmm15.d = zmm15.d f- zmm0_1.d
                
                if (zmm15.d f<= zmm1_1.d)
                    goto label_141675d16
                
                if (zmm15.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_298.q)
                zmm13_1 = 0x7f7fffff
                zmm10 = zmm3_1
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_250 = zmm1_1.q
                r12 = zx.q(r12.d + 1)
                zmm9.d = zmm11.d f* zmm15.d
                result_1 = result_2
                zmm10[0] = zmm10[0] f* zmm15.d
                var_190 = r12.d
                zmm9.d = zmm9.d f+ var_318.d
                zmm11.d = zmm12.d f* zmm15.d
                var_338 = 0
                zmm10[0] = zmm10[0] f+ var_318:4.d
                var_2a8:4.d = zmm4_1.d
                zmm11.d = zmm11.d f+ var_318:8.d
                zmm3_1 = zmm9
                var_2c8 = zmm9.d
                zmm3_1[0] = zmm3_1[0] f- zmm1_1.d
                var_298 = zmm9.d
                zmm4_1.d = zmm10.d f- zmm0_1.d
                var_2c4 = zmm10[0]
                zmm2_1.d = zmm11.d f- result_1
                zmm0_1.d = var_168.d.d f+ zmm3_1[0]
                var_334 = zmm11.d
                float var_294_1 = zmm10[0]
                zmm1_1.d = var_168:4.d.d f+ zmm4_1.d
                result_2 = zmm11.d
                var_2a8.d = zmm7_1.d
                var_2a0 = zmm6_1[0]
                var_168.d = zmm0_1.d
                zmm0_1.d = var_168:8.d.d f+ zmm2_1.d
                var_168:4.d = zmm1_1.d
                zmm1_1.d = var_168:0xc.d.d f+ zmm3_1[0]
                var_308 = 0x7f7fffff
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
                zmm1_1.d = zmm9.d f- var_258_1
                zmm2_1.d = zmm10.d f- var_254_1
                var_148_1 = zmm0_1.d
                zmm0_1.d = zmm11.d f- var_304
                *(&var_168 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_168:8 + (rcx_6 << 2)) = zmm0_1.d
                zmm14 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_22
                rax_22, zmm8_1, zmm9, zmm10, zmm11, zmm14, zmm15 =
                    sub_1416f4530(&var_1f0, &var_168, &var_190, &var_178, &var_138, &var_108)
                r12 = zx.q(var_190)
                zmm1_1 = zx.o(*rax_22)
                int32_t rax_23 = rax_22[1].d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm7_1 = rax_23
                zmm12 = zmm1_1.d
            else
                int32_t rcx_7 = r12.d
                int32_t rax_13
                
                if (rcx_7 == 1)
                    int64_t rax_18 = sx.q(var_18c)
                    int64_t rcx_14 = rax_18 * 3
                    *(&var_178 + (rax_18 << 2)) = 0x3f800000
                    zmm0_1 = zx.o(*(&var_168 + (rcx_14 << 2)))
                    rax_13 = *(&var_168:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    uint64_t var_1a8
                    uint64_t* rax_17
                    rax_17, zmm8_1, zmm9 =
                        sub_1416e69d0(&var_1a8, &var_168, &var_18c, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_17)
                    rax_13 = rax_17[1].d
                else if (rcx_7 == 3)
                    uint64_t var_19c
                    uint64_t* rax_16
                    rax_16, zmm8_1, zmm9, zmm10, zmm11, zmm13_1, zmm14, zmm15 =
                        sub_1416fa750(&var_19c, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_16)
                    rax_13 = rax_16[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b4
                    uint64_t* rax_15
                    rax_15, zmm8_1, zmm9, zmm10, zmm11, zmm13_1, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b4, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_1 = zx.o(*rax_15)
                    rax_13 = rax_15[1].d
                else
                    int32_t var_2d8_1 = 0
                    rax_13 = 0
                    zmm0_1 = _mm_unpacklo_ps(zx.o(0), 0)
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_300_1 = zmm0_1.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_3 * 3
                int32_t r8_5 = *(&var_168:8 + (r15_1 << 2))
                zmm12 = var_300_1.d
                zmm6_1 = var_300_1:4.d
                zmm7_1 = rax_13
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx_1 << 2))
                var_158_1:8.q = *(&var_168 + (rsi << 2))
                var_168.q = *(&var_168 + (r15_1 << 2))
                var_178:8.d = (*(&var_178 + (r9_3 << 2))).d
                var_178.d = (*(&var_178 + (r11_1 << 2))).d
                var_178:4.d = (*(&var_178 + (r10_1 << 2))).d
                var_178:0xc.d = (*(&var_178 + (rdi_1 << 2)))[0]
                zmm3_1 = zx.o(*(&var_138 + (r15_1 << 2)))
                var_158_1:4.d = *(&var_168:8 + (r14_1 << 2))
                int32_t rdx_6 = (&var_130)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi << 2))
                int32_t rcx_16 = (&var_130)[rsi]
                var_148_1 = *(&var_168:8 + (rbx_1 << 2))
                int32_t rax_20 = (&var_130)[rbx_1]
                var_12c_1.q = *(&var_138 + (r14_1 << 2))
                zmm2_1 = zx.o(*(&var_108 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&var_138 + (rbx_1 << 2))
                zmm0_1 = zx.o(*(&var_108 + (rbx_1 << 2)))
                var_12c_1:0xc.q = *(&var_138 + (rsi << 2))
                zmm1_1 = zx.o(*(&var_108 + (rsi << 2)))
                var_130 = (&var_130)[r15_1]
                rdi = (&var_100)[r15_1]
                var_138 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_108 + (r15_1 << 2)))
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&var_100)[r14_1]
                var_11c_1:4.d = rcx_16
                int32_t rcx_17 = (&var_100)[rsi]
                int32_t var_10c_1 = rax_20
                int32_t rax_21 = (&var_100)[rbx_1]
                var_fc_1.q = zmm2_1.q
                int128_t var_ec_1
                var_ec_1:8.q = zmm0_1.q
                var_18c.o = data_142e11d00
                var_100 = rdi
                zmm2_1.d = zmm6_1.d f* zmm6_1[0]
                var_168:8.d = r8_5
                var_fc_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm12.d f* zmm12.d
                var_fc_1:8.d = rdx_7
                zmm1_1.d = zmm7_1.d f* zmm7_1.d
                var_ec_1:4.d = rcx_17
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_108 = zmm3_1.q
                int32_t var_dc_1 = rax_21
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm14[0]
                rdi.b = zmm2_1.d f< zmm14[0]
                var_308 = zmm2_1.d
                rsi.b = zmm2_1.d f>= zmm13_1[0]
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rsi.b == 0)
                rcx_2 = var_2f4
                rbx = var_338
                continue
        
        zmm5_1 = var_318.d
        goto label_141676115
__security_check_cookie(rax_1 ^ &var_378)
return result
