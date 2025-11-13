// 函数: sub_141672db0
// 地址: 0x141672db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f8 = zmm3[0]
float var_308[0x4] = zmm0
int32_t* var_250 = arg1
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
float var_1ec = temp0[0]
float var_170[0x4] = data_142d3f7e0
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_1f4 = temp0_1[0]
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float (* var_238)[0x4] = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1f0 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_1d8[0x4] = temp0_6
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float var_248[0x4] = temp0_6
float (* var_230)[0x4] = &var_1d8
float* var_228 = &var_1f8
float zmm6[0x4] = *(arg10 + 4)
float zmm5[0x4] = *arg10
zmm6[0] = zmm6[0] f* arg1[1]
zmm5[0] = zmm5[0] f* *arg1
float zmm7[0x4] = *(arg10 + 8)
zmm6[0] = zmm6[0] f* arg1[4]
zmm7[0] = zmm7[0] f* arg1[2]
zmm6[0] = zmm6[0] + zmm5[0]
zmm5[0] = zmm5[0] f* arg1[3]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm5[0]
float zmm4 = zmm6[0]
zmm7[0] = zmm7[0] f* arg1[5]
zmm4 = zmm4 f* arg1[7]
zmm5[0] = zmm5[0] f* arg1[6]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* arg1[8]
zmm4 = zmm4 + zmm5[0] + zmm7[0]
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

int64_t var_2d0 = zmm0.q
float var_320 = (zmm5 ^ 0x80000000)[0]
float var_31c = (zmm6 ^ 0x80000000)[0]
float var_318 = (zmm7 ^ 0x80000000)[0]
int64_t var_130 = zmm0.q
int32_t var_128 = rax_4
float var_2e0
float* rax_5
uint128_t zmm10_1
rax_5, zmm10_1 = sub_14170eae0(&var_238, &var_2e0, &var_320)
uint128_t zmm9 = zx.o(0)
uint128_t zmm11 = var_308[0]
uint128_t zmm3_1 = var_308[1]
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
uint128_t zmm0_1
zmm0_1.d = var_2d0.d.d f- zmm2_1.d
uint128_t zmm4_1 = var_308[2]
uint128_t zmm13 = zmm11
uint32_t result = zx.d(arg9)
uint128_t zmm14 = zmm3_1
uint128_t zmm5_1
zmm5_1.d = zmm11.d f- zmm0_1.d
int64_t var_100 = zmm2_1.q
uint128_t zmm15 = zmm4_1
uint128_t zmm1_1
zmm1_1.d = var_2d0:4.d.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
int32_t var_2b0 = zmm11.d
zmm0_1.d = rax_4.d f- rcx_1
int32_t var_2ac = zmm3_1.d
uint32_t result_2 = zmm4_1.d
uint128_t zmm6_1
zmm6_1.d = zmm3_1.d f- zmm1_1.d
int32_t var_f8 = rcx_1
int64_t var_2a0 = 0
uint128_t zmm7_1
zmm7_1.d = zmm4_1.d f- zmm0_1.d
int32_t var_298 = 0x3f800000
zmm0_1.d = zmm5_1.d f* zmm5_1.d
zmm2_1.d = zmm6_1.d f* zmm6_1.d
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
int32_t var_2f8 = 0x7f7fffff
int32_t var_2e4 = 0
char rbx = rdi.b
char var_328 = rbx
int32_t var_2f4
int64_t var_278
uint32_t result_1

if (rdi.b != 0)
label_141673a2d:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm9.d
    
    if (not(zmm9.d f<= zmm10_1.d))
        zmm3_1 = zmm10_1
        zmm4_1 = zmm10_1
        *arg8 = var_2a0
        arg8[1].d = var_298
        
        if (r12.d s> 0)
            int128_t* rcx_20 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_25 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_20
                rcx_20 += 4
                zmm0_1.d = zmm2_1.d f* rax_25[-2]
                zmm1_1.d = zmm2_1.d f* rax_25[-1]
                zmm2_1.d = zmm2_1.d f* *rax_25
                rax_25 = &rax_25[3]
                zmm10_1.d = zmm10_1.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm9.d f* *arg4
        zmm1_1.d = zmm9.d f* *(arg4 + 4)
        zmm9.d = zmm9.d f* *(arg4 + 8)
        zmm0_1.d = zmm0_1.d f+ zmm11.d
        zmm1_1.d = zmm1_1.d f+ var_308[1]
        zmm9.d = zmm9.d f+ var_308[2]
        zmm0_1.d = zmm0_1.d f+ zmm10_1.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1.d
        zmm9.d = zmm9.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm9.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_308[0].q = 0
        var_308[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_308[3] s< 8)
            sub_14083ad30(&var_308, 8)
        
        float rax_33
        uint128_t zmm0_2
        
        if (var_2e4 == 0)
            int32_t var_2d8_3 = 0x3f800000
            rax_33 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
        label_141673cd8:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = 0
            *arg8 = zmm0_2.q
            arg8[1].d = rax_33
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_170[2])
                    int32_t rax_26 = (rbx_2 + 1).d
                    var_170[2] = rax_26
                    
                    if (rax_26 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_11 = rbx_2 * 3
                    int32_t rax_27 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm14.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_24 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2.d = zmm13.d f+ *(&var_100 + rdi_4)
                    *(rcx_24 + (rdx_11 << 2) + 8) = rax_27
                    int64_t rbx_3 = sx.q(var_308[2])
                    int32_t var_31c_2 = zmm1_1.d
                    var_320 = zmm0_2.d
                    zmm0_2.d = zmm15.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_28 = (rbx_3 + 1).d
                    var_308[2] = rax_28
                    var_318 = zmm0_2.d
                    
                    if (rax_28 s> var_308[3])
                        sub_14083a7e0(&var_308)
                    
                    int64_t rcx_26 = var_308[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_26 + (rdx_13 << 2)) = var_320.q
                    *(rcx_26 + (rdx_13 << 2) + 8) = var_318
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_238 = &var_1d8
            float (* var_230_1)[0x4] = arg2
            int128_t* var_228_1 = arg3
            int32_t rax_32
            int128_t zmm8_2
            rax_32, zmm8_2 = sub_141581780(&var_170, &var_308, &var_250, &var_238, zmm14, &var_2f4, 
                &var_320, &var_278, &var_248)
            zmm0_2 = zx.o(var_320.q)
            rax_33 = var_318
            
            if (rax_32 == 2)
                goto label_141673cd8
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_33
            result = result_1
            *rdi_3 = (var_2f4 ^ zmm8_2).d
            *arg7 = var_278
        int64_t rcx_28 = var_308[0].q
        arg7[1].d = result
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t rcx_29 = var_170[0].q
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
    
    result.b = 1
else
    while (true)
        var_2e4 = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            result = zx.d(arg9)
        else
            int32_t* rax_7 = var_250
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm1_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm2_1.d
            uint128_t zmm8_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
            zmm3_1.d = zmm3_1.d f* 0.5f
            zmm0_1.d = zmm8_1.d f* zmm8_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = zmm8_1.d f* zmm2_1.d
            zmm8_1.d = zmm8_1.d f+ zmm0_1.d
            zmm1_1.d = zmm8_1.d f* zmm8_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4_1.d = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm8_1.d f* zmm4_1.d
            zmm8_1.d = zmm8_1.d f+ zmm0_1.d
            var_2f4 = zmm8_1.d
            zmm11.d = zmm8_1.d f* zmm5_1.d
            uint128_t zmm12_1
            zmm12_1.d = zmm8_1.d f* zmm6_1.d
            zmm8_1.d = zmm8_1.d f* zmm7_1.d
            zmm0_1.d = zmm11.d f* *rax_7
            zmm2_1.d = zmm12_1.d f* rax_7[1]
            zmm3_1.d = zmm12_1.d f* rax_7[4]
            zmm1_1.d = zmm8_1.d f* rax_7[2]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm0_1.d = zmm11.d f* rax_7[3]
            zmm4_1.d = zmm12_1.d f* rax_7[7]
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm0_1.d
            zmm1_1.d = zmm8_1.d f* rax_7[5]
            zmm0_1.d = zmm11.d f* rax_7[6]
            zmm3_1.d = zmm3_1.d f+ zmm1_1.d
            zmm1_1.d = zmm8_1.d f* rax_7[8]
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int32_t rcx_4
            
            if (not(zmm2_1.d f< zmm3_1.d) && not(zmm2_1.d f< zmm4_1.d))
                zmm0_1 = zx.o(*rax_7)
                rcx_4 = rax_7[2]
            else if (zmm3_1.d f< zmm2_1.d || zmm3_1.d f< zmm4_1.d)
                zmm0_1 = zx.o(*(rax_7 + 0x18))
                rcx_4 = rax_7[8]
            else
                zmm0_1 = zx.o(*(rax_7 + 0xc))
                rcx_4 = rax_7[5]
            
            uint64_t var_2c0_1 = zmm0_1.q
            int32_t var_2c8_1 = rcx_4.d
            int32_t var_20c_1 = (zmm12_1 ^ 0x80000000).d
            int32_t var_210 = (zmm11 ^ 0x80000000).d
            int32_t var_208_1 = (zmm8_1 ^ 0x80000000).d
            float var_1bc
            float* rax_8
            rax_8, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10_1, zmm11, zmm12_1, zmm13 =
                sub_14170eae0(&var_238, &var_1bc, &var_210)
            zmm1_1 = zx.o(*rax_8)
            int32_t rcx_6 = rax_8[2]
            zmm2_1.d = zmm7_1.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm5_1.d = rcx_4.d f- rcx_6
            zmm4_1.d = zmm13.d f- zmm2_1.d
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1.q)
            int32_t var_280_1 = zmm2_1.d
            zmm2_1.d = zmm14.d f- zmm3_1.d
            var_320 = zmm4_1.d
            uint64_t rcx_7 = r12 * 3
            var_2f4 = zmm3_1.d
            *(&var_130 + (rcx_7 << 2)) = zmm0_1.q
            *(&var_100 + (rcx_7 << 2)) = zmm1_1.q
            zmm3_1.d = zmm15.d f- zmm5_1.d
            zmm4_1.d = zmm4_1.d f* zmm11.d
            (&var_128)[rcx_7] = var_2c8_1
            zmm0_1.d = zmm12_1.d f* zmm2_1.d
            zmm1_1.d = zmm8_1.d f* zmm3_1.d
            (&var_f8)[rcx_7] = rax_8[2]
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            int32_t var_31c_1 = zmm2_1.d
            var_318 = zmm3_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1.d f<= zmm10_1.d)
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_320.q
                *(&var_160:8 + (rcx_7 << 2)) = var_318
                var_188 = r12.d
            label_141673642:
                zmm11 = var_2f8
                
                if (rbx == 0)
                    zmm12_1 = 0x358637bd
                else
                    zmm12_1 = 0x358637bd
                    
                    if (not(zmm4_1.d f< zmm10_1.d))
                        zmm4_1.d = zmm4_1.d f* zmm4_1.d
                        zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                        rdi.b = zmm4_1.d f>= zmm11.d
            else
                zmm6_1 = *arg4
                zmm3_1 = *(arg4 + 4)
                zmm7_1 = *(arg4 + 8)
                zmm2_1.d = zmm6_1.d f* zmm11.d
                zmm0_1.d = zmm12_1.d f* zmm3_1.d
                zmm1_1.d = zmm8_1.d f* zmm7_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm10_1.d)
                    result.b = 0
                    break
                
                zmm1_1 = zmm9
                zmm0_1.d = zmm4_1.d f/ zmm2_1.d
                zmm9.d = zmm9.d f- zmm0_1.d
                
                if (zmm9.d f<= zmm1_1.d)
                    goto label_141673642
                
                if (zmm9.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_2b0.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_278 = zmm1_1.q
                zmm13.d = zmm6_1.d f* zmm9.d
                r12 = zx.q(r12.d + 1)
                result_1 = result_2
                zmm14.d = zmm3_1.d f* zmm9.d
                var_188 = r12.d
                zmm13.d = zmm13.d f+ var_308[0]
                zmm15.d = zmm7_1.d f* zmm9.d
                var_328 = 0
                zmm14.d = zmm14.d f+ var_308[1]
                var_2a0.d = zmm11.d
                zmm15.d = zmm15.d f+ var_308[2]
                zmm11 = 0x7f7fffff
                zmm3_1.d = zmm13.d f- zmm1_1.d
                var_2b0 = zmm13.d
                zmm4_1.d = zmm14.d f- zmm0_1.d
                int32_t var_2ac_1 = zmm14.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm15.d
                var_2a0:4.d = zmm12_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_298 = zmm8_1.d
                var_2f8 = 0x7f7fffff
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
                zmm1_1.d = zmm13.d f- var_280_1
                zmm2_1.d = zmm14.d f- var_2f4
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm15.d f- zmm5_1.d
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_1.d
                zmm12_1 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_22
                rax_22, zmm9, zmm10_1, zmm13, zmm14, zmm15 =
                    sub_1416f4530(&var_248, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_22)
                int32_t rax_23 = rax_22[1].d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm7_1 = rax_23
                zmm5_1 = zmm1_1.d
            else
                int32_t rcx_8 = r12.d
                int32_t rax_13
                
                if (rcx_8 == 1)
                    int64_t rax_18 = sx.q(var_184)
                    int64_t rcx_15 = rax_18 * 3
                    var_170[rax_18] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_15 << 2)))
                    rax_13 = *(&var_160:8 + (rcx_15 << 2))
                else if (rcx_8 == 2)
                    void var_198
                    uint64_t* rax_17
                    rax_17, zmm9 = sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_13 = rax_17[1].d
                else if (rcx_8 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_16
                    rax_16, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_13 = rax_16[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_15
                    rax_15, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_15)
                    rax_13 = rax_15[1].d
                else
                    int32_t var_2d8_1 = 0
                    rax_13 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_2f0_1 = zmm0_1.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                rsi = r9_3 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_16 = *(&var_160:8 + (rsi << 2))
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm5_1 = var_2f0_1.d
                zmm6_1 = var_2f0_1:4.d
                int32_t rax_19 = *(&var_160:8 + (rbx_1 << 2))
                zmm7_1 = rax_13
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi << 2)))
                var_170[3] = zmm3_1.d
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_16
                int32_t rcx_17 = (&var_128)[rsi]
                var_140_1 = rax_19
                int32_t rax_20 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_124_1:8.d = rdx_7
                int32_t rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_17
                int32_t rcx_18 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_20
                int32_t rax_21 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                var_160:8.d = r8_5
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm7_1.d f* zmm7_1.d
                var_e4_1:4.d = rcx_18
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_21
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm12_1.d
                rdi.b = zmm2_1.d f< zmm12_1.d
                var_2f8 = zmm2_1.d
                rsi.b = zmm2_1.d f>= zmm11.d
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rsi.b == 0)
                rcx_2 = var_2e4
                rbx = var_328
                continue
        
        zmm11 = var_308[0]
        goto label_141673a2d
__security_check_cookie(rax_1 ^ &var_368)
return result
