// 函数: sub_14166f450
// 地址: 0x14166f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
int32_t* rbx = arg1
uint128_t* rsi = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f8 = zmm3[0]
float var_318[0x4] = zmm0
int32_t* var_2c0 = rbx
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
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1f0 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float (* var_238)[0x4] = arg2
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float var_1d8[0x4]
int128_t* var_230 = &var_1d8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_1d8 = temp0_6
float var_248[0x4] = temp0_6
float* var_228 = &var_1f8
float zmm6[0x4] = *(arg10 + 4)
float zmm5[0x4] = *arg10
zmm6[0] = zmm6[0] f* rbx[1]
zmm5[0] = zmm5[0] f* *rbx
float zmm7[0x4] = *(arg10 + 8)
zmm6[0] = zmm6[0] f* rbx[4]
zmm7[0] = zmm7[0] f* rbx[2]
zmm6[0] = zmm6[0] + zmm5[0]
zmm5[0] = zmm5[0] f* rbx[3]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm5[0]
zmm7[0] = zmm7[0] f* rbx[5]
float zmm4 = zmm6[0] f* rbx[7]
zmm5[0] = zmm5[0] f* rbx[6]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* rbx[8]
zmm4 = zmm4 + zmm5[0] + zmm7[0]
int32_t rax_4

if (not(zmm6[0] < zmm6[0]) && not(zmm6[0] < zmm4))
    zmm0 = zx.o(*rbx)
    rax_4 = rbx[2]
else if (zmm6[0] < zmm6[0] || zmm6[0] < zmm4)
    zmm0 = zx.o(*(rbx + 0x18))
    rax_4 = rbx[8]
else
    zmm0 = zx.o(*(rbx + 0xc))
    rax_4 = rbx[5]

int64_t var_2e0 = zmm0.q
float var_330 = (zmm5 ^ 0x80000000)[0]
float var_32c = (zmm6 ^ 0x80000000)[0]
float var_328 = (zmm7 ^ 0x80000000)[0]
int64_t var_130 = zmm0.q
int32_t var_128 = rax_4
int32_t var_2f0
int32_t* rax_5
uint128_t zmm10_1
rax_5, zmm10_1 = sub_14170c1c0(&var_238, &var_2f0, &var_330)
uint128_t zmm9 = zx.o(0)
uint128_t zmm11 = var_318[0]
uint128_t zmm3_1 = var_318[1]
uint128_t zmm2_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
uint128_t zmm0_1
zmm0_1.d = var_2e0.d.d f- zmm2_1.d
uint128_t zmm4_1 = var_318[2]
uint128_t zmm13 = zmm11
uint32_t result = zx.d(arg9)
uint128_t zmm14 = zmm3_1
uint128_t zmm5_1
zmm5_1.d = zmm11.d f- zmm0_1.d
int64_t var_100 = zmm2_1.q
uint128_t zmm15 = zmm4_1
uint128_t zmm1_1
zmm1_1.d = var_2e0:4.d.d f- _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
int32_t var_2b8 = zmm11.d
zmm0_1.d = rax_4.d f- rcx_1
int32_t var_2b4 = zmm3_1.d
uint32_t result_2 = zmm4_1.d
uint128_t zmm6_1
zmm6_1.d = zmm3_1.d f- zmm1_1.d
int32_t var_f8 = rcx_1
int64_t var_2a8 = 0
uint128_t zmm7_1
zmm7_1.d = zmm4_1.d f- zmm0_1.d
int32_t var_2a0 = 0x3f800000
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
int32_t var_308 = 0x7f7fffff
char r12 = rdi.b
char var_338 = 0
char var_337 = rdi.b
int32_t var_2f4 = 0
int32_t var_304
int64_t var_280
uint32_t result_1

if (rdi.b != 0)
label_1416700f1:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm9.d
    
    if (not(zmm9.d f<= zmm10_1.d))
        zmm3_1 = zmm10_1
        zmm4_1 = zmm10_1
        *arg8 = var_2a8
        arg8[1].d = var_2a0
        
        if (r13.d s> 0)
            int128_t* rcx_20 = &var_170
            uint64_t i_2 = zx.q(r13.d)
            void* rax_25 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_20
                rcx_20 += 4
                zmm0_1.d = zmm2_1.d f* *(rax_25 - 8)
                zmm1_1.d = zmm2_1.d f* *(rax_25 - 4)
                zmm2_1.d = zmm2_1.d f* *rax_25
                rax_25 += 0xc
                zmm10_1.d = zmm10_1.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t* rax_26 = arg4
        zmm0_1.d = zmm9.d f* *rax_26
        zmm1_1.d = zmm9.d f* rax_26[1]
        zmm9.d = zmm9.d f* rax_26[2]
        zmm0_1.d = zmm0_1.d f+ zmm11.d
        zmm1_1.d = zmm1_1.d f+ var_318[1]
        zmm9.d = zmm9.d f+ var_318[2]
        zmm0_1.d = zmm0_1.d f+ zmm10_1.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1.d
        zmm9.d = zmm9.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm9.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_318[0].q = 0
        var_318[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_318[3] s< 8)
            sub_14083ad30(&var_318, 8)
        
        float rax_34
        uint128_t zmm0_2
        
        if (var_2f4 == 0)
            int32_t var_2e8_3 = 0x3f800000
            rax_34 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
        label_141670398:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = 0
            *arg8 = zmm0_2.q
            arg8[1].d = rax_34
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r13.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rbx_1 = sx.q(var_170[2])
                    int32_t rax_27 = (rbx_1 + 1).d
                    var_170[2] = rax_27
                    
                    if (rax_27 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_11 = rbx_1 * 3
                    int32_t rax_28 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm14.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_24 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2.d = zmm13.d f+ *(&var_100 + rdi_4)
                    *(rcx_24 + (rdx_11 << 2) + 8) = rax_28
                    int64_t rbx_2 = sx.q(var_318[2])
                    int32_t var_32c_2 = zmm1_1.d
                    var_330 = zmm0_2.d
                    zmm0_2.d = zmm15.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_29 = (rbx_2 + 1).d
                    var_318[2] = rax_29
                    var_328 = zmm0_2.d
                    
                    if (rax_29 s> var_318[3])
                        sub_14083a7e0(&var_318)
                    
                    int64_t rcx_26 = var_318[0].q
                    int64_t rdx_13 = rbx_2 * 3
                    rdi_4 += 0xc
                    *(rcx_26 + (rdx_13 << 2)) = var_330.q
                    *(rcx_26 + (rdx_13 << 2) + 8) = var_328
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_238 = &var_1d8
            float (* var_230_1)[0x4] = arg2
            int128_t* var_228_1 = arg3
            int32_t rax_33
            int128_t zmm8_2
            rax_33, zmm8_2 = sub_1415927f0(&var_170, &var_318, &var_2c0, &var_238, &var_304, 
                &var_330, &var_280, &var_248)
            zmm0_2 = zx.o(var_330.q)
            rax_34 = var_328
            
            if (rax_33 == 2)
                goto label_141670398
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_34
            result = result_1
            *rdi_3 = (var_304 ^ zmm8_2).d
            *arg7 = var_280
        int64_t rcx_28 = var_318[0].q
        arg7[1].d = result
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t rcx_29 = var_170[0].q
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
    
    result.b = 1
else
    while (true)
        var_2f4 = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            result = zx.d(arg9)
        else
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm1_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
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
            var_304 = zmm8_1.d
            zmm11.d = zmm8_1.d f* zmm5_1.d
            uint128_t zmm12_1
            zmm12_1.d = zmm8_1.d f* zmm6_1.d
            zmm8_1.d = zmm8_1.d f* zmm7_1.d
            zmm0_1.d = zmm11.d f* *rbx
            zmm2_1.d = zmm12_1.d f* rbx[1]
            zmm3_1.d = zmm12_1.d f* rbx[4]
            zmm1_1.d = zmm8_1.d f* rbx[2]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm0_1.d = zmm11.d f* rbx[3]
            zmm4_1.d = zmm12_1.d f* rbx[7]
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm3_1.d = zmm3_1.d f+ zmm0_1.d
            zmm1_1.d = zmm8_1.d f* rbx[5]
            zmm0_1.d = zmm11.d f* rbx[6]
            zmm3_1.d = zmm3_1.d f+ zmm1_1.d
            zmm1_1.d = zmm8_1.d f* rbx[8]
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int32_t rax_7
            
            if (not(zmm2_1.d f< zmm3_1.d) && not(zmm2_1.d f< zmm4_1.d))
                zmm0_1 = zx.o(*rbx)
                rax_7 = rbx[2]
            else if (zmm3_1.d f< zmm2_1.d || zmm3_1.d f< zmm4_1.d)
                zmm0_1 = zx.o(*(rbx + 0x18))
                rax_7 = rbx[8]
            else
                zmm0_1 = zx.o(*(rbx + 0xc))
                rax_7 = rbx[5]
            
            uint64_t var_2d0_1 = zmm0_1.q
            int32_t var_2d8_1 = rax_7.d
            int32_t var_20c_1 = (zmm12_1 ^ 0x80000000).d
            int32_t var_210 = (zmm11 ^ 0x80000000).d
            int32_t var_208_1 = (zmm8_1 ^ 0x80000000).d
            int32_t var_1bc
            int32_t* rax_8
            rax_8, zmm6_1, zmm7_1, zmm8_1, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                sub_14170c1c0(&var_238, &var_1bc, &var_210)
            zmm1_1 = zx.o(*rax_8)
            int32_t rcx_5 = rax_8[2]
            zmm2_1.d = zmm7_1.d f- zmm1_1.d
            zmm3_1.d = zmm6_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm5_1.d = rax_7.d f- rcx_5
            zmm4_1.d = zmm13.d f- zmm2_1.d
            (&var_184)[sx.q(r13.d)] = r13.d
            r13 = sx.q(var_188)
            zmm0_1 = _mm_unpacklo_ps(zmm7_1, zmm6_1.q)
            int32_t var_288_1 = zmm2_1.d
            zmm2_1.d = zmm14.d f- zmm3_1.d
            var_330 = zmm4_1.d
            var_304 = zmm3_1.d
            uint64_t rcx_7 = r13 * 3
            zmm4_1.d = zmm4_1.d f* zmm11.d
            zmm3_1.d = zmm15.d f- zmm5_1.d
            int32_t var_32c_1 = zmm2_1.d
            *(&var_130 + (rcx_7 << 2)) = zmm0_1.q
            *(&var_100 + (rcx_7 << 2)) = zmm1_1.q
            zmm0_1.d = zmm12_1.d f* zmm2_1.d
            (&var_128)[rcx_7] = var_2d8_1
            zmm1_1.d = zmm8_1.d f* zmm3_1.d
            (&var_f8)[rcx_7] = rax_8[2]
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            var_328 = zmm3_1.d
            zmm4_1.d = zmm4_1.d f+ zmm1_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4_1.d f<= zmm10_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_7 << 2)) = var_330.q
                *(&var_160:8 + (rcx_7 << 2)) = var_328
                var_188 = r13.d
            label_14166fce3:
                zmm11 = var_308
                
                if (r12 == 0)
                    zmm12_1 = 0x358637bd
                else
                    zmm12_1 = 0x358637bd
                    
                    if (not(zmm4_1.d f< zmm10_1.d))
                        zmm4_1.d = zmm4_1.d f* zmm4_1.d
                        zmm4_1.d = zmm4_1.d f+ 9.99999997e-07f
                        rdi.b = zmm4_1.d f>= zmm11.d
            else
                zmm6_1 = *rsi
                zmm3_1 = *(rsi + 4)
                zmm7_1 = *(rsi + 8)
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
                    goto label_14166fce3
                
                if (zmm9.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_2b8.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_280 = zmm1_1.q
                zmm13.d = zmm6_1.d f* zmm9.d
                r13 = zx.q(r13.d + 1)
                result_1 = result_2
                zmm14.d = zmm3_1.d f* zmm9.d
                var_188 = r13.d
                zmm13.d = zmm13.d f+ var_318[0]
                zmm15.d = zmm7_1.d f* zmm9.d
                var_337 = 0
                zmm14.d = zmm14.d f+ var_318[1]
                var_2a8.d = zmm11.d
                zmm15.d = zmm15.d f+ var_318[2]
                zmm11 = 0x7f7fffff
                zmm3_1.d = zmm13.d f- zmm1_1.d
                var_2b8 = zmm13.d
                zmm4_1.d = zmm14.d f- zmm0_1.d
                int32_t var_2b4_1 = zmm14.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm15.d
                var_2a8:4.d = zmm12_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                var_2a0 = zmm8_1.d
                var_308 = 0x7f7fffff
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
                zmm1_1.d = zmm13.d f- var_288_1
                zmm2_1.d = zmm14.d f- var_304
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm15.d f- zmm5_1.d
                *(&var_160 + (rcx_7 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_7 << 2)) = zmm0_1.d
                zmm12_1 = 0x358637bd
            
            uint32_t rdx_8
            
            if (rdi.b != 0)
                int64_t* rax_22
                rax_22, zmm9, zmm10_1, zmm13, zmm14, zmm15 =
                    sub_1416f4530(&var_248, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                rbx = var_2c0
                rdx_8 = zx.d(var_338)
                zmm1_1 = zx.o(*rax_22)
                int32_t rax_23 = rax_22[1].d
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm7_1 = rax_23
                zmm5_1 = zmm1_1.d
            else
                int32_t rcx_8 = r13.d
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
                    r13 = zx.q(var_188)
                    rbx = var_2c0
                    zmm0_1 = zx.o(*rax_17)
                    rax_13 = rax_17[1].d
                else if (rcx_8 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_16
                    rax_16, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    rbx = var_2c0
                    zmm0_1 = zx.o(*rax_16)
                    rax_13 = rax_16[1].d
                else if (rcx_8 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_15
                    rax_15, zmm9, zmm10_1, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r13 = zx.q(var_188)
                    rbx = var_2c0
                    zmm0_1 = zx.o(*rax_15)
                    rax_13 = rax_15[1].d
                else
                    int32_t var_2e8_1 = 0
                    rax_13 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm10_1, zmm10_1.q)
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_3 = sx.q(var_17c)
                int64_t rsi_1 = rdi_1 * 3
                uint64_t var_300_1 = zmm0_1.q
                int64_t r12_1 = r11_1 * 3
                int64_t r15_1 = r10_1 * 3
                int64_t r14_1 = r9_3 * 3
                int32_t rdx_6 = *(&var_160:8 + (r15_1 << 2))
                int32_t rcx_16 = *(&var_160:8 + (r14_1 << 2))
                int32_t r8_5 = *(&var_160:8 + (r12_1 << 2))
                zmm5_1 = var_300_1.d
                zmm6_1 = var_300_1:4.d
                int32_t rax_19 = *(&var_160:8 + (rsi_1 << 2))
                zmm7_1 = rax_13
                var_160:0xc.q = *(&var_160 + (r15_1 << 2))
                var_140_1:4.q = *(&var_160 + (rsi_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (r14_1 << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r12_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r12_1]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[3] = zmm3_1.d
                zmm3_1 = zx.o(*(&var_130 + (r12_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r15_1]
                var_140_1 = rcx_16
                int32_t rcx_17 = (&var_128)[r14_1]
                var_140_1 = rax_19
                int32_t rax_20 = (&var_128)[rsi_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r12_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r12_1 << 2)))
                var_124_1:8.d = rdx_7
                rdx_8 = (&var_f8)[r15_1]
                var_114_1:4.d = rcx_17
                int32_t rcx_18 = (&var_f8)[r14_1]
                int32_t var_104_1 = rax_20
                int32_t rax_21 = (&var_f8)[rsi_1]
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
                var_308 = zmm2_1.d
                rdx_8.b = zmm2_1.d f>= zmm11.d
                var_338 = rdx_8.b
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rdx_8.b == 0)
                rsi = arg4
                rcx_2 = var_2f4
                r12 = var_337
                continue
        
        zmm11 = var_318[0]
        goto label_1416700f1
__security_check_cookie(rax_1 ^ &var_378)
return result
