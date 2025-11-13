// 函数: sub_141629c70
// 地址: 0x141629c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm8[0x4] = *arg3
float zmm0[0x4] = arg3[1]
uint64_t i_3 = 0
float zmm3[0x4] = zmm8 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_318[0x4] = zmm0
int32_t var_188 = 0
uint128_t* r10 = arg4
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
zmm0 = data_142d3f7e0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float var_170[0x4] = zmm0
float var_298[0x4]
int128_t* var_1d8 = &var_298
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_2e8
int32_t* var_1d0 = &var_2e8
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float var_2e4 = temp0_2[0]
float var_208[0x4] = temp0_2
temp0[0] = (temp0_2 ^ 0x80000000)[0]
var_2e8 = zmm8[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float var_2e0 = temp0_1[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float var_2dc = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_298 = temp0_6
var_298 = temp0_6
zmm3 = *arg10
bool cond:0 = zmm3[0] >= 0f
void* var_228 = arg1
int64_t var_1e0 = arg2
uint128_t var_1f8 = zmm8
float var_218[0x4] = temp0_1
int128_t zmm9

if (cond:0)
    zmm9 = *(arg1 + 0x1c)
else
    zmm9 = *(arg1 + 0x10)

float zmm2[0x4] = (*arg10)[1]

if (zmm2[0] >= 0f)
    zmm8 = *(arg1 + 0x20)
else
    zmm8 = *(arg1 + 0x14)

float zmm1[0x4] = (*arg10)[2]
float var_2b4 = zmm8[0]
uint128_t zmm14

if (zmm1[0] >= 0f)
    zmm14 = *(arg1 + 0x24)
else
    zmm14 = *(arg1 + 0x18)

int32_t var_2b0 = zmm14.d
float var_330 = (zmm3 ^ 0x80000000)[0]
float var_32c = (zmm2 ^ 0x80000000)[0]
float var_328 = (zmm1 ^ 0x80000000)[0]
int64_t var_130 = zmm9.d.q
int32_t var_128 = var_2b0
float var_2c8
float* rax_5
uint128_t zmm8_1
float zmm9_1[0x4]
uint128_t zmm11
rax_5, zmm8_1, zmm9_1, zmm11 = sub_14170bcf0(&var_1e0, &var_2c8, &var_330)
uint128_t zmm2_1 = var_318[1]
uint128_t zmm12 = zx.o(0)
uint128_t zmm5 = var_318[0]
uint128_t zmm3_1 = var_318[2]
uint128_t zmm10 = zmm2_1
uint128_t zmm1_1 = zx.o(*rax_5)
int32_t rcx_1 = rax_5[2]
zmm9_1[0] = zmm9_1[0] f- zmm1_1.d
int32_t var_2a4 = zmm2_1.d
int32_t var_274 = zmm2_1.d
uint32_t result = zx.d(arg9)
uint128_t zmm7 = zmm5
uint128_t zmm15 = zmm3_1
zmm8_1.d = zmm8_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
int64_t var_100 = zmm1_1.q
uint128_t zmm6
zmm6.d = zmm5.d f- zmm9_1[0]
uint64_t var_250 = zmm1_1.q
zmm14.d = zmm14.d f- rcx_1
uint128_t zmm13
zmm13.d = zmm2_1.d f- zmm8_1.d
int32_t var_334 = zmm5.d
int32_t var_278 = zmm5.d
uint128_t zmm0_1
zmm0_1.d = zmm6.d f* zmm6.d
int32_t var_f8 = rcx_1
zmm14.d = zmm3_1.d f- zmm14.d
int32_t var_2a0 = zmm3_1.d
zmm2_1.d = zmm13.d f* zmm13.d
int64_t var_288 = 0
uint32_t result_2 = zmm3_1.d
int32_t var_280 = 0x3f800000
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm1_1.d = zmm14.d f* zmm14.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int64_t rbx
rbx.b = 0
int32_t var_308 = 0x7f7fffff
char rdx_2 = rdi.b
char var_338 = rdx_2
int32_t rcx_2 = 0
int32_t var_2cc = 0
int32_t var_2f8
int64_t var_240
uint32_t result_1
uint128_t zmm4_1

if (rdi.b != 0)
label_14162aa79:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm12.d
    
    if (not(zmm12.d f<= zmm11.d))
        zmm3_1 = zmm11
        zmm4_1 = zmm11
        *arg8 = var_288
        arg8[1].d = var_280
        
        if (r12.d s> 0)
            int128_t* rcx_17 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_22 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_17
                rcx_17 += 4
                zmm0_1.d = zmm2_1.d f* rax_22[-2]
                zmm1_1.d = zmm2_1.d f* rax_22[-1]
                zmm2_1.d = zmm2_1.d f* *rax_22
                rax_22 = &rax_22[3]
                zmm11.d = zmm11.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm12.d f* *r10
        zmm1_1.d = zmm12.d f* *(r10 + 4)
        zmm12.d = zmm12.d f* *(r10 + 8)
        zmm0_1.d = zmm0_1.d f+ zmm5.d
        zmm1_1.d = zmm1_1.d f+ var_318[1]
        zmm12.d = zmm12.d f+ var_318[2]
        zmm0_1.d = zmm0_1.d f+ zmm11.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1.d
        zmm12.d = zmm12.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm12.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_318[0].q = 0
        var_318[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_318[3] s< 8)
            sub_14083ad30(&var_318, 8)
        
        float rax_29
        uint128_t zmm0_2
        
        if (var_2cc == 0)
            int32_t var_2c0_3 = 0x3f800000
            rax_29 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm11, zmm11.q)
        label_14162ad2b:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = i_3.d
            *arg8 = zmm0_2.q
            arg8[1].d = rax_29
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_1 = sx.q(var_170[2])
                    int32_t rax_23 = (rbx_1 + 1).d
                    var_170[2] = rax_23
                    
                    if (rax_23 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_21 = var_170[0].q
                    int64_t rdx_11 = rbx_1 * 3
                    int32_t rax_24 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm10.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_21 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2.d = zmm7.d f+ *(&var_100 + rdi_4)
                    *(rcx_21 + (rdx_11 << 2) + 8) = rax_24
                    int64_t rbx_2 = sx.q(var_318[2])
                    int32_t var_32c_2 = zmm1_1.d
                    var_330 = zmm0_2.d
                    zmm0_2.d = zmm15.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_25 = (rbx_2 + 1).d
                    var_318[2] = rax_25
                    var_328 = zmm0_2.d
                    
                    if (rax_25 s> var_318[3])
                        sub_14083a7e0(&var_318)
                    
                    int64_t rcx_23 = var_318[0].q
                    int64_t rdx_13 = rbx_2 * 3
                    rdi_4 += 0xc
                    *(rcx_23 + (rdx_13 << 2)) = var_330.q
                    *(rcx_23 + (rdx_13 << 2) + 8) = var_328
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            int64_t var_180_1 = arg2
            var_188.q = &var_298
            int128_t* var_178_1 = arg3
            int32_t rax_28 = sub_14159eca0(&var_170, &var_318, &var_228, &var_188, &var_2f8, 
                &var_330, &var_240, &var_1e0)
            zmm0_2 = zx.o(var_330.q)
            rax_29 = var_328
            
            if (rax_28 == 2)
                goto label_14162ad2b
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_29
            result = result_1
            *rdi_3 = (var_2f8 ^ data_142d3f780).d
            *arg7 = var_240
        int64_t rcx_25 = var_318[0].q
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int64_t rcx_26 = var_170[0].q
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    
    result.b = 1
else
    while (true)
        var_2cc = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            zmm7 = var_334
            result = zx.d(arg9)
        else
            void* rax_7 = var_228
            zmm0_1.d = zmm13.d f* zmm13.d
            zmm2_1.d = zmm6.d f* zmm6.d
            zmm1_1.d = zmm14.d f* zmm14.d
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
            zmm5.d = 0.5f f- zmm3_1.d
            zmm0_1.d = zmm4_1.d f* zmm5.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            var_2f8 = zmm4_1.d
            zmm0_1.d = zmm4_1.d f* zmm6.d
            zmm13.d = zmm13.d f* zmm4_1.d
            var_2f8 = zmm0_1.d
            zmm14.d = zmm14.d f* zmm4_1.d
            
            if (zmm0_1.d f>= zmm11.d)
                zmm3_1 = *(rax_7 + 0x1c)
            else
                zmm3_1 = *(rax_7 + 0x10)
            
            int32_t var_304_1 = zmm3_1.d
            
            if (zmm13.d f>= zmm11.d)
                zmm2_1 = *(rax_7 + 0x20)
            else
                zmm2_1 = *(rax_7 + 0x14)
            
            int32_t var_2a8_1 = zmm2_1.d
            
            if (zmm14.d f>= zmm11.d)
                zmm1_1 = *(rax_7 + 0x24)
            else
                zmm1_1 = *(rax_7 + 0x18)
            
            zmm9_1 = var_298[1]
            zmm7 = var_298[2]
            zmm10 = zmm0_1 ^ 0x80000000
            zmm15 = var_298[0]
            zmm4_1 = zmm13 ^ 0x80000000
            int32_t var_2fc_1 = zmm1_1.d
            int32_t var_2b0_1 = zmm1_1.d
            int32_t var_2b8_1 = zmm3_1.d
            zmm5.d = zmm7.d f* zmm10.d
            zmm3_1.d = zmm15.d f* zmm4_1.d
            zmm6 = zmm14 ^ 0x80000000
            int32_t var_2b4_1 = zmm2_1.d
            zmm2_1 = var_298[3]
            zmm0_1.d = zmm7.d f* zmm4_1.d
            zmm8_1.d = zmm9_1.d f* zmm6.d
            zmm8_1.d = zmm8_1.d f- zmm0_1.d
            zmm0_1.d = zmm15.d f* zmm6.d
            zmm5.d = zmm5.d f- zmm0_1.d
            zmm0_1.d = zmm9_1.d f* zmm10.d
            zmm8_1.d = zmm8_1.d f+ zmm8_1.d
            zmm3_1.d = zmm3_1.d f- zmm0_1.d
            zmm0_1 = zmm15
            zmm1_1.d = zmm7.d f* zmm8_1.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm3_1.d = zmm3_1.d f+ zmm3_1.d
            zmm15.d = zmm15.d f* zmm5.d
            zmm7.d = zmm7.d f* zmm5.d
            zmm0_1.d = zmm0_1.d f* zmm3_1.d
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm9_1[0] = zmm9_1[0] f* zmm3_1.d
            zmm0_1.d = zmm9_1.d f* zmm8_1.d
            int32_t var_300_1 = zmm1_1.d
            zmm9_1[0] = zmm9_1[0] f- zmm7.d
            zmm1_1.d = zmm2_1.d f* zmm5.d
            zmm15.d = zmm15.d f- zmm0_1.d
            zmm1_1.d = zmm1_1.d f+ zmm4_1.d
            zmm4_1.d = var_300_1.d f+ zmm1_1.d
            zmm1_1 = zmm2_1
            zmm2_1.d = zmm2_1.d f* zmm8_1.d
            zmm1_1.d = zmm1_1.d f* zmm3_1.d
            zmm2_1.d = zmm2_1.d f+ zmm10.d
            zmm1_1.d = zmm1_1.d f+ zmm6.d
            zmm9_1[0] = zmm9_1[0] f+ zmm2_1.d
            zmm15.d = zmm15.d f+ zmm1_1.d
            
            if (zmm9_1[0] f>= zmm11.d)
                zmm6 = *(arg2 + 0x1c)
            else
                zmm6 = *(arg2 + 0x10)
            
            if (zmm4_1.d f>= zmm11.d)
                zmm1_1 = *(arg2 + 0x20)
            else
                zmm1_1 = *(arg2 + 0x14)
            
            int32_t var_300_2 = zmm1_1.d
            
            if (zmm15.d f>= zmm11.d)
                zmm15 = *(arg2 + 0x24)
            else
                zmm15 = *(arg2 + 0x18)
            
            zmm10 = var_218
            zmm2_1 = var_2dc
            zmm0_1.d = zmm10.d f* zmm1_1.d
            zmm3_1.d = var_1f8.d f* zmm1_1.d
            zmm4_1.d = zmm6.d f* zmm10.d
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            zmm5.d = var_208.d f* zmm15.d
            uint64_t rcx_4 = r12 * 3
            zmm5.d = zmm5.d f- zmm0_1.d
            zmm0_1.d = var_1f8.d f* zmm15.d
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1.d = var_208.d f* zmm6.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm3_1.d = zmm3_1.d f- zmm0_1.d
            zmm0_1 = zmm10
            zmm1_1.d = zmm2_1.d f* zmm5.d
            zmm4_1.d = zmm4_1.d f+ zmm4_1.d
            zmm1_1.d = zmm1_1.d f+ zmm6.d
            zmm6 = zmm10
            zmm10 = var_2a4
            zmm3_1.d = zmm3_1.d f+ zmm3_1.d
            zmm0_1.d = zmm0_1.d f* zmm4_1.d
            zmm6.d = zmm6.d f* zmm5.d
            zmm7.d = var_208.d f* zmm3_1.d
            zmm7.d = zmm7.d f- zmm0_1.d
            zmm0_1.d = var_1f8.d f* zmm3_1.d
            zmm7.d = zmm7.d f+ zmm1_1.d
            zmm6.d = zmm6.d f- zmm0_1.d
            zmm1_1.d = zmm2_1.d f* zmm4_1.d
            zmm2_1.d = zmm2_1.d f* zmm3_1.d
            zmm1_1.d = zmm1_1.d f+ var_300_2
            zmm9_1 = var_2a8_1
            zmm0_1.d = var_208.d f* zmm5.d
            zmm2_1.d = zmm2_1.d f+ zmm15.d
            zmm15 = var_2a0
            zmm6.d = zmm6.d f+ zmm1_1.d
            zmm1_1.d = var_1f8.d f* zmm4_1.d
            zmm9_1[0] = zmm9_1[0] f- zmm6.d
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm0_1.d = var_304_1.d f- zmm7.d
            zmm1_1.d = zmm1_1.d f+ zmm2_1.d
            zmm4_1.d = var_334.d f- zmm0_1.d
            int32_t var_304_2 = zmm0_1.d
            zmm2_1.d = zmm10.d f- zmm9_1[0]
            *(&var_130 + (rcx_4 << 2)) = var_2b8_1.q
            zmm0_1 = _mm_unpacklo_ps(zmm7, zmm6.q)
            zmm8_1.d = var_2fc_1.d f- zmm1_1.d
            uint32_t var_1c0_1 = zmm1_1.d
            (&var_128)[rcx_4] = var_2b0_1
            *(&var_100 + (rcx_4 << 2)) = zmm0_1.q
            var_330 = zmm4_1.d
            zmm3_1.d = zmm15.d f- zmm8_1.d
            int32_t var_32c_1 = zmm2_1.d
            (&var_f8)[rcx_4] = var_1c0_1
            var_328 = zmm3_1.d
            zmm6 = var_2f8
            zmm5.d = zmm13.d f* zmm2_1.d
            zmm0_1.d = zmm6.d f* zmm4_1.d
            zmm1_1.d = zmm14.d f* zmm3_1.d
            zmm5.d = zmm5.d f+ zmm0_1.d
            zmm5.d = zmm5.d f+ zmm1_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5.d f<= zmm11.d)
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_4 << 2)) = var_330.q
                *(&var_160:8 + (rcx_4 << 2)) = var_328
                var_188 = r12.d
            label_14162a651:
                zmm8_1 = var_308
                zmm7 = var_334
                
                if (rdx_2 == 0)
                    zmm9_1 = 0x358637bd
                else
                    zmm9_1 = 0x358637bd
                    
                    if (not(zmm5.d f< zmm11.d))
                        zmm5.d = zmm5.d f* zmm5.d
                        zmm5.d = zmm5.d f+ 9.99999997e-07f
                        rdi.b = zmm5.d f>= zmm8_1.d
            else
                zmm3_1 = *(r10 + 4)
                zmm7 = *r10
                zmm4_1 = *(r10 + 8)
                zmm2_1.d = zmm6.d f* zmm7.d
                zmm0_1.d = zmm13.d f* zmm3_1.d
                zmm1_1.d = zmm14.d f* zmm4_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm11.d)
                    result.b = 0
                    break
                
                zmm1_1 = zmm12
                zmm0_1.d = zmm5.d f/ zmm2_1.d
                zmm12.d = zmm12.d f- zmm0_1.d
                
                if (zmm12.d f<= zmm1_1.d)
                    goto label_14162a651
                
                if (zmm12.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_278.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_240 = zmm1_1.q
                r12 = zx.q(r12.d + 1)
                zmm7.d = zmm7.d f* zmm12.d
                result_1 = result_2
                zmm10.d = zmm3_1.d f* zmm12.d
                var_188 = r12.d
                zmm7.d = zmm7.d f+ var_318[0]
                zmm15.d = zmm4_1.d f* zmm12.d
                var_338 = 0
                zmm10.d = zmm10.d f+ var_318[1]
                var_288.d = zmm6.d
                zmm15.d = zmm15.d f+ var_318[2]
                var_334 = zmm7.d
                zmm3_1.d = zmm7.d f- zmm1_1.d
                var_278 = zmm7.d
                zmm4_1.d = zmm10.d f- zmm0_1.d
                var_2a4 = zmm10.d
                zmm2_1.d = zmm15.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                var_2a0 = zmm15.d
                int32_t var_274_1 = zmm10.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                result_2 = zmm15.d
                var_288:4.d = zmm13.d
                var_280 = zmm14.d
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
                zmm1_1.d = zmm7.d f- var_304_2
                zmm2_1.d = zmm10.d f- zmm9_1[0]
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm15.d f- zmm8_1.d
                zmm8_1 = 0x7f7fffff
                var_308 = 0x7f7fffff
                *(&var_160 + (rcx_4 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_4 << 2)) = zmm0_1.d
                zmm9_1 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_19
                rax_19, zmm7, zmm10, zmm11, zmm12, zmm15 =
                    sub_1416f4530(&var_1e0, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_19)
                int32_t rax_20 = rax_19[1].d
                var_208 = var_2e4
                var_1f8 = var_2e8
                zmm13 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm14 = rax_20
                zmm6 = zmm1_1.d
                var_218 = var_2e0
            else
                int32_t rcx_5 = r12.d
                uint64_t var_2d8_1
                int32_t rax_12
                
                if (rcx_5 == 1)
                    int64_t rax_15 = sx.q(var_184)
                    int64_t rcx_12 = rax_15 * 3
                    var_170[rax_15] = 0x3f800000
                    rax_12 = *(&var_160:8 + (rcx_12 << 2))
                    var_2d8_1 = *(&var_160 + (rcx_12 << 2))
                else
                    uint64_t* rax_14
                    
                    if (rcx_5 == 2)
                        void var_198
                        rax_14, zmm7, zmm8_1, zmm9_1 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    label_14162a6b9:
                        rax_12 = rax_14[1].d
                        r12 = zx.q(var_188)
                        var_2d8_1 = *rax_14
                        var_208 = var_2e4
                        var_1f8 = var_2e8
                        var_218 = var_2e0
                    else
                        if (rcx_5 == 3)
                            uint64_t var_1a4
                            rax_14, zmm7, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm15 =
                                sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                            goto label_14162a6b9
                        
                        if (rcx_5 == 4)
                            uint64_t var_1b0
                            rax_14, zmm7, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, zmm15 =
                                sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                            goto label_14162a6b9
                        
                        int32_t var_2c0_1 = 0
                        rax_12 = 0
                        var_2d8_1 = (_mm_unpacklo_ps(zmm11, zmm11.q)).q
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                zmm6 = var_2d8_1.d
                rbx = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi = r9_3 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_13 = *(&var_160:8 + (rsi << 2))
                int32_t r8_4 = *(&var_160:8 + (r15_1 << 2))
                zmm13 = var_2d8_1:4.d
                int32_t rax_16 = *(&var_160:8 + (rbx << 2))
                zmm14 = rax_12
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi << 2)))
                var_170[3] = zmm3_1.d
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_13
                int32_t rcx_14 = (&var_128)[rsi]
                var_140_1 = rax_16
                int32_t rax_17 = (&var_128)[rbx]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_124_1:8.d = rdx_7
                int32_t rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_14
                int32_t rcx_15 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_17
                int32_t rax_18 = (&var_f8)[rbx]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm13.d f* zmm13.d
                var_160:8.d = r8_4
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm6.d f* zmm6.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm14.d f* zmm14.d
                var_e4_1:4.d = rcx_15
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_18
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm9_1[0]
                rdi.b = zmm2_1.d f< zmm9_1[0]
                var_308 = zmm2_1.d
                rbx.b = zmm2_1.d f>= zmm8_1.d
            
            result = zx.d(arg9)
            r10 = arg4
            
            if (rdi.b == 0 && rbx.b == 0)
                rcx_2 = var_2cc
                rdx_2 = var_338
                continue
        
        i_3 = 0
        zmm5 = var_318[0]
        goto label_14162aa79
__security_check_cookie(rax_1 ^ &var_378)
return result
