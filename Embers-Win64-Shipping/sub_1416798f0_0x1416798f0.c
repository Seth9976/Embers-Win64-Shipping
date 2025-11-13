// 函数: sub_1416798f0
// 地址: 0x1416798f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f8 = zmm3[0]
float var_308[0x4] = zmm0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
zmm0 = data_142d3f7e0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float var_170[0x4] = zmm0
float var_1d8[0x4]
int128_t* var_220 = &var_1d8
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_228)[0x4] = arg2
float var_1f4 = temp0_1[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float var_1f0 = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1ec = temp0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
void* var_240 = arg1
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_238[0x4] = temp0_6
var_1d8 = temp0_6
float* var_218 = &var_1f8
int64_t var_2d0
int128_t zmm10 = sub_141758e70(arg1, &var_2d0, arg10, zx.o(0))
int128_t zmm1_1 = *(arg10 + 4) ^ zmm10
int64_t var_130 = var_2d0
int32_t var_31c = zmm1_1.d
float var_320 = (*arg10 ^ zmm10).d
uint128_t zmm0_1 = *(arg10 + 8)
int32_t var_2c8
int32_t var_128 = var_2c8
int32_t var_318 = (zmm0_1 ^ zmm10).d
int32_t var_2e0
int32_t* rax_4
float zmm9_1[0x4]
rax_4, zmm9_1 = sub_14170c1c0(&var_228, &var_2e0, &var_320)
uint128_t zmm8 = zx.o(0)
float zmm15[0x4] = var_308[0]
float zmm3_1[0x4] = var_308[1]
uint128_t zmm2_1 = zx.o(*rax_4)
int32_t rcx_2 = rax_4[2]
uint128_t zmm0_2
zmm0_2.d = var_2d0.d.d f- zmm2_1.d
uint128_t zmm4 = var_308[2]
uint128_t zmm1_2 = var_2d0:4.d
uint128_t zmm11 = zmm15
uint32_t result = zx.d(arg9)
float zmm12[0x4] = zmm3_1
uint128_t zmm5
zmm5.d = zmm15.d f- zmm0_2.d
int64_t var_100 = zmm2_1.q
uint128_t zmm13 = zmm4
zmm1_2.d = zmm1_2.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
float var_2c0 = zmm15[0]
zmm0_2.d = var_2c8.d f- rcx_2
float var_2bc = zmm3_1[0]
uint32_t result_2 = zmm4.d
uint128_t zmm6
zmm6.d = zmm3_1.d f- zmm1_2.d
int32_t var_f8 = rcx_2
int64_t var_2a0 = 0
uint128_t zmm7
zmm7.d = zmm4.d f- zmm0_2.d
float var_298 = 1f
zmm0_2.d = zmm5.d f* zmm5.d
zmm2_1.d = zmm6.d f* zmm6.d
zmm1_2.d = zmm7.d f* zmm7.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int32_t rcx_3 = 0
int64_t rsi
rsi.b = 0
int32_t var_2f8 = 0x7f7fffff
int32_t var_2e4 = 0
char rbx_1 = rdi.b
char var_328 = rbx_1
float var_2f4
int64_t var_278
uint32_t result_1

if (rdi.b != 0)
label_14167a45d:
    bool cond:0_1 = zmm8.d f<= zmm9_1[0]
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm8.d
    
    if (not(cond:0_1))
        zmm4 = zmm9_1
        *arg8 = var_2a0
        arg8[1].d = var_298
        
        if (r12.d s> 0)
            int128_t* rcx_21 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_23 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_21
                rcx_21 += 4
                zmm0_2.d = zmm2_1.d f* rax_23[-2]
                zmm1_2.d = zmm2_1.d f* rax_23[-1]
                zmm2_1.d = zmm2_1.d f* *rax_23
                rax_23 = &rax_23[3]
                zmm9_1[0] = zmm9_1[0] f+ zmm0_2.d
                zmm9_1[0] = zmm9_1[0] f+ zmm1_2.d
                zmm4.d = zmm4.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm8.d f* *arg4
        zmm1_2.d = zmm8.d f* *(arg4 + 4)
        zmm8.d = zmm8.d f* *(arg4 + 8)
        zmm0_2.d = zmm0_2.d f+ zmm15[0]
        zmm1_2.d = zmm1_2.d f+ var_308[1]
        zmm8.d = zmm8.d f+ var_308[2]
        zmm0_2.d = zmm0_2.d f+ zmm9_1[0]
        zmm1_2.d = zmm1_2.d f+ zmm9_1[0]
        zmm8.d = zmm8.d f+ zmm4.d
        *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm1_2.q)).q
        arg7[1].d = zmm8.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_308[0].q = 0
        var_308[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_308[3] s< 8)
            sub_14083ad30(&var_308, 8)
        
        int32_t rax_31
        uint128_t zmm0_4
        
        if (var_2e4 == 0)
            int32_t var_2d8_3 = 0x3f800000
            rax_31 = 0x3f800000
            zmm0_4 = _mm_unpacklo_ps(zmm9_1, zmm9_1[0].q)
        label_14167a708:
            zmm2_1 = var_130:4.d
            zmm1_2 = var_130.d
            *rdi_3 = 0
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_3 = sx.q(var_170[2])
                    int32_t rax_24 = (rbx_3 + 1).d
                    var_170[2] = rax_24
                    
                    if (rax_24 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_25 = var_170[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    int32_t rax_25 = *(&var_128 + rdi_4)
                    zmm1_2.d = zmm12.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_25 + (rdx_13 << 2)) = *(&var_130 + rdi_4)
                    zmm0_4.d = zmm11.d f+ *(&var_100 + rdi_4)
                    *(rcx_25 + (rdx_13 << 2) + 8) = rax_25
                    int64_t rbx_4 = sx.q(var_308[2])
                    int32_t var_31c_2 = zmm1_2.d
                    var_320 = zmm0_4.d
                    zmm0_4.d = zmm13.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_26 = (rbx_4 + 1).d
                    var_308[2] = rax_26
                    var_318 = zmm0_4.d
                    
                    if (rax_26 s> var_308[3])
                        sub_14083a7e0(&var_308)
                    
                    int64_t rcx_27 = var_308[0].q
                    int64_t rdx_15 = rbx_4 * 3
                    rdi_4 += 0xc
                    *(rcx_27 + (rdx_15 << 2)) = var_320.q
                    *(rcx_27 + (rdx_15 << 2) + 8) = var_318
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_228 = &var_1d8
            float (* var_220_1)[0x4] = arg2
            int128_t* var_218_1 = arg3
            int32_t rax_30
            int128_t zmm10_3
            rax_30, zmm10_3 = sub_14156f020(&var_170, &var_308, &var_240, &var_228, &var_2f4, 
                &var_320, &var_278, &var_238)
            zmm0_4 = zx.o(var_320.q)
            rax_31 = var_318
            
            if (rax_30 == 2)
                goto label_14167a708
            
            *arg8 = zmm0_4.q
            arg8[1].d = rax_31
            result = result_1
            *rdi_3 = (var_2f4 ^ zmm10_3).d
            *arg7 = var_278
        int64_t rcx_29 = var_308[0].q
        arg7[1].d = result
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = var_170[0].q
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
    
    result.b = 1
else
    while (true)
        var_2e4 = rcx_3 + 1
        
        if (rcx_3 s>= 0x20)
            result = zx.d(arg9)
        else
            void* rcx_5 = var_240
            zmm3_1 = zx.o(0)
            zmm2_1.d = zmm6.d f* zmm6.d
            zmm0_2.d = zmm5.d f* zmm5.d
            zmm1_2.d = zmm7.d f* zmm7.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm3_1[0] = zmm2_1.d
            float temp0_8[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_2.d = temp0_8.d f* temp0_8[0]
            zmm1_2.d = zmm3_1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_8.d f* zmm2_1.d
            temp0_8[0] = temp0_8[0] f+ zmm0_2.d
            zmm1_2.d = temp0_8.d f* temp0_8[0]
            zmm3_1[0] = zmm3_1[0] f* zmm1_2.d
            zmm4.d = 0.5f - zmm3_1[0]
            zmm0_2.d = temp0_8.d f* zmm4.d
            temp0_8[0] = temp0_8[0] f+ zmm0_2.d
            var_2f4 = temp0_8[0]
            temp0_8[0] = temp0_8[0] f* zmm5.d
            temp0_8[0] = temp0_8[0] f* zmm6.d
            temp0_8[0] = temp0_8[0] f* zmm7.d
            float var_2b0 = temp0_8[0]
            float var_2ac_1 = temp0_8[0]
            float var_2a8_1 = temp0_8[0]
            float var_258
            int512_t zmm6_1
            int512_t zmm7_1
            float zmm10_2[0x4]
            zmm6_1, zmm7_1, zmm10_2 = sub_141758e70(rcx_5, &var_258, &var_2b0, zmm9_1)
            zmm7_1.o = var_258
            int32_t var_254
            zmm6_1.o = var_254
            float var_210 = (temp0_8 ^ 0x80000000)[0]
            float var_20c_1 = (temp0_8 ^ 0x80000000)[0]
            float var_208_1 = (zmm10_2 ^ 0x80000000)[0]
            int32_t var_1bc
            int32_t* rax_6
            float zmm10_1[0x4]
            float zmm14_1[0x4]
            rax_6, zmm6, zmm7, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13, zmm14_1, zmm15 =
                sub_14170c1c0(&var_228, &var_1bc, &var_210)
            zmm3_1 = zmm11
            zmm1_2 = zx.o(*rax_6)
            int32_t rcx_7 = rax_6[2]
            zmm2_1.d = zmm7.d f- zmm1_2.d
            zmm5.d = zmm6.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
            int32_t var_250
            zmm0_2.d = var_250.d f- rcx_7
            zmm3_1[0] = zmm3_1[0] f- zmm2_1.d
            int32_t var_280_1 = zmm2_1.d
            int32_t var_27c_1 = zmm5.d
            var_2f4 = zmm0_2.d
            var_320 = zmm3_1[0]
            zmm4.d = zmm12.d f- zmm5.d
            zmm3_1[0] = zmm3_1[0] * zmm14_1[0]
            zmm2_1.d = zmm13.d f- zmm0_2.d
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            int32_t var_31c_1 = zmm4.d
            zmm4.d = zmm4.d f* zmm15[0]
            uint64_t rcx_8 = r12 * 3
            var_318 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm10_1[0]
            zmm4.d = zmm4.d f+ zmm3_1[0]
            *(&var_130 + (rcx_8 << 2)) = (_mm_unpacklo_ps(zmm7, zmm6.q)).q
            (&var_128)[rcx_8] = var_250
            result = rax_6[2]
            *(&var_100 + (rcx_8 << 2)) = zmm1_2.q
            zmm4.d = zmm4.d f+ zmm2_1.d
            (&var_f8)[rcx_8] = result
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4.d f<= zmm9_1[0])
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_8 << 2)) = var_320.q
                *(&var_160:8 + (rcx_8 << 2)) = var_318
                var_188 = r12.d
            label_14167a076:
                zmm10_1 = var_2f8
                
                if (rbx_1 == 0)
                    zmm14_1 = 0x358637bd
                else
                    zmm14_1 = 0x358637bd
                    
                    if (not(zmm4.d f< zmm9_1[0]))
                        zmm4.d = zmm4.d f* zmm4.d
                        zmm4.d = zmm4.d f+ 9.99999997e-07f
                        rdi.b = zmm4.d f>= zmm10_1[0]
            else
                zmm3_1 = *(arg4 + 4)
                zmm5 = *arg4
                zmm6 = *(arg4 + 8)
                zmm2_1.d = zmm5.d f* zmm14_1[0]
                zmm0_2.d = zmm3_1.d f* zmm15[0]
                zmm1_2.d = zmm6.d f* zmm10_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm9_1[0])
                    result.b = 0
                    break
                
                zmm1_2 = zmm8
                zmm0_2.d = zmm4.d f/ zmm2_1.d
                zmm8.d = zmm8.d f- zmm0_2.d
                
                if (zmm8.d f<= zmm1_2.d)
                    goto label_14167a076
                
                if (zmm8.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_2 = zx.o(var_2c0.q)
                zmm12 = zmm3_1
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                var_278 = zmm1_2.q
                zmm11.d = zmm5.d f* zmm8.d
                r12 = zx.q(r12.d + 1)
                result_1 = result_2
                zmm12[0] = zmm12[0] f* zmm8.d
                var_188 = r12.d
                zmm11.d = zmm11.d f+ var_308[0]
                zmm13.d = zmm6.d f* zmm8.d
                var_328 = 0
                zmm12[0] = zmm12[0] + var_308[1]
                var_298 = zmm10_1[0]
                zmm13.d = zmm13.d f+ var_308[2]
                zmm10_1 = 0x7f7fffff
                zmm3_1 = zmm11
                zmm3_1[0] = zmm3_1[0] f- zmm1_2.d
                var_2c0 = zmm11.d
                zmm4.d = zmm12.d f- zmm0_2.d
                float var_2bc_1 = zmm12[0]
                zmm2_1.d = zmm13.d f- result_1
                zmm0_2.d = var_160.d.d f+ zmm3_1[0]
                result_2 = zmm13.d
                var_2a0.d = zmm14_1[0]
                zmm1_2.d = var_160:4.d.d f+ zmm4.d
                var_2a0:4.d = zmm15[0]
                var_2f8 = 0x7f7fffff
                var_160.d = zmm0_2.d
                zmm0_2.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_2.d
                zmm1_2.d = var_160:0xc.d.d f+ zmm3_1[0]
                var_160:8.d = zmm0_2.d
                var_160:0xc.d = zmm1_2.d
                zmm0_2.d = var_150_1.d.d f+ zmm4.d
                zmm1_2.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_2.d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2.d
                zmm0_2.d = zmm0_2.d f+ zmm3_1[0]
                zmm1_2.d = var_150_1:0xc.d.d f+ zmm4.d
                var_150_1:8.d = zmm0_2.d
                zmm0_2.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm11.d f- var_280_1
                zmm2_1.d = zmm12.d f- var_27c_1
                var_140_1 = zmm0_2.d
                zmm0_2.d = zmm13.d f- var_2f4
                *(&var_160 + (rcx_8 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                *(&var_160:8 + (rcx_8 << 2)) = zmm0_2.d
                zmm14_1 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_20
                rax_20, zmm8, zmm9_1, zmm11, zmm12, zmm13 =
                    sub_1416f4530(&var_238, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                zmm1_2 = zx.o(*rax_20)
                int32_t rax_21 = rax_20[1].d
                zmm6 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm7 = rax_21
                var_2b0.q = zmm1_2.q
                zmm5 = var_2b0
            else
                int32_t rcx_9 = r12.d
                int32_t rax_11
                
                if (rcx_9 == 1)
                    int64_t rax_16 = sx.q(var_184)
                    int64_t rcx_16 = rax_16 * 3
                    var_170[rax_16] = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_16 << 2)))
                    rax_11 = *(&var_160:8 + (rcx_16 << 2))
                else if (rcx_9 == 2)
                    void var_198
                    uint64_t* rax_15
                    rax_15, zmm8, zmm9_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_15)
                    rax_11 = rax_15[1].d
                else if (rcx_9 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_14
                    rax_14, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13, zmm14_1 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_14)
                    rax_11 = rax_14[1].d
                else if (rcx_9 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_13
                    rax_13, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13, zmm14_1 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_13)
                    rax_11 = rax_13[1].d
                else
                    int32_t var_2d8_1 = 0
                    rax_11 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm9_1, zmm9_1[0].q)
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t rbx_2 = rdi_1 * 3
                uint64_t var_2f0_1 = zmm0_2.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_4 * 3
                int32_t rdx_8 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_17 = *(&var_160:8 + (rsi << 2))
                int32_t r8_7 = *(&var_160:8 + (r15_1 << 2))
                zmm5 = var_2f0_1.d
                zmm6 = var_2f0_1:4.d
                int32_t rax_17 = *(&var_160:8 + (rbx_2 << 2))
                zmm7 = rax_11
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_2 << 2))
                zmm0_2 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi << 2))
                zmm1_2 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_2.d
                zmm0_2 = zx.o(*(&var_130 + (rbx_2 << 2)))
                var_170[1] = zmm1_2.d
                zmm1_2 = zx.o(*(&var_130 + (rsi << 2)))
                var_170[3] = zmm3_1[0]
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_8
                int32_t rdx_9 = (&var_128)[r14_1]
                var_140_1 = rcx_17
                int32_t rcx_18 = (&var_128)[rsi]
                var_140_1 = rax_17
                int32_t rax_18 = (&var_128)[rbx_2]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_2.q
                zmm0_2 = zx.o(*(&var_100 + (rbx_2 << 2)))
                var_124_1:0xc.q = zmm1_2.q
                zmm1_2 = zx.o(*(&var_100 + (rsi << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_124_1:8.d = rdx_9
                int32_t rdx_10 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_18
                int32_t rcx_19 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_18
                int32_t rax_19 = (&var_f8)[rbx_2]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm6.d f* zmm6.d
                var_160:8.d = r8_7
                var_f4_1:0xc.q = zmm1_2.q
                zmm0_2.d = zmm5.d f* zmm5.d
                var_f4_1:8.d = rdx_10
                zmm1_2.d = zmm7.d f* zmm7.d
                var_e4_1:4.d = rcx_19
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_19
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                zmm2_1.d f- zmm14_1[0]
                rdi.b = zmm2_1.d f< zmm14_1[0]
                var_2f8 = zmm2_1.d
                rsi.b = zmm2_1.d f>= zmm10_1[0]
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rsi.b == 0)
                rcx_3 = var_2e4
                rbx_1 = var_328
                continue
        
        zmm15 = var_308[0]
        goto label_14167a45d
__security_check_cookie(rax_1 ^ &var_368)
return result
