// 函数: sub_14163e120
// 地址: 0x14163e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
float zmm8[0x4] = *arg3
uint64_t i_3 = 0
float var_308[0x4] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
float var_2e8 = zmm8[0]
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
void* var_228 = arg1
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
float zmm0[0x4] = data_142d3f7e0
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float (* r10)[0x4] = arg4
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
int32_t var_188 = 0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float var_2e0 = temp0[0]
float var_2dc = temp0_1[0]
float var_170[0x4] = zmm0
float var_2b8[0x4]
int128_t* var_1d8 = &var_2b8
float var_1f8[0x4] = zmm8
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float zmm3[0x4] = zmm8 ^ 0x80000000
float var_2e4 = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_208[0x4] = temp0_2
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
float* var_1d0 = &var_2e8
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0 ^ 0x80000000)[0]
float var_218[0x4] = temp0
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
float zmm4[0x4] = (*arg10)[1]
temp0_5[0] = temp0_1[0]
float zmm5[0x4] = (*arg10)[2]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_2b8 = temp0_6
var_2b8 = temp0_6
int128_t zmm10 = *(arg1 + 0x2c)
float zmm6[0x4] = *(arg1 + 0x28)
zmm3 = *arg10
int128_t zmm11 = *(arg1 + 0x30)
zmm4[0] = zmm4[0] f* zmm10.d
int64_t var_1e0 = arg2
void* rax_4 = *(arg1 + 0x10)
zmm3[0] = zmm3[0] * zmm6[0]
zmm5[0] = zmm5[0] f* zmm11.d
int128_t zmm7

if (zmm3[0] >= 0f)
    zmm7 = *(rax_4 + 0x1c)
else
    zmm7 = *(rax_4 + 0x10)

if (zmm4[0] >= 0f)
    zmm0 = *(rax_4 + 0x20)
else
    zmm0 = *(rax_4 + 0x14)

int128_t zmm9

if (zmm5[0] >= 0f)
    zmm9 = *(rax_4 + 0x24)
else
    zmm9 = *(rax_4 + 0x18)

zmm10.d = zmm10.d f* zmm0[0]
zmm6[0] = zmm6[0] f* zmm7.d
zmm9.d = zmm9.d f* zmm11.d
float var_318 = (zmm3 ^ 0x80000000)[0]
float var_314 = (zmm4 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_unpacklo_ps(zmm6, zmm10.q)
int32_t var_2a0 = zmm9.d
int64_t var_2a8 = temp0_7.q
int64_t var_130 = temp0_7.q
float var_310 = (zmm5 ^ 0x80000000)[0]
int32_t var_128 = var_2a0
float var_2c8
float* rax_6
float zmm6_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
uint128_t zmm12
rax_6, zmm6_1, zmm9_1, zmm10_1, zmm12 = sub_14170bcf0(&var_1e0, &var_2c8, &var_318)
uint128_t zmm2_1 = var_308[1]
uint128_t zmm13 = zx.o(0)
float zmm5_1[0x4] = var_308[0]
float zmm3_1[0x4] = var_308[2]
uint128_t zmm11_1 = zmm2_1
uint128_t zmm1_1 = zx.o(*rax_6)
int32_t rcx_1 = rax_6[2]
zmm6_1[0] = zmm6_1[0] f- zmm1_1.d
int32_t var_2bc = zmm2_1.d
int32_t var_284 = zmm2_1.d
uint32_t result = zx.d(arg9)
float zmm7_1[0x4] = zmm5_1
uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
float zmm8_1[0x4] = zmm3_1
zmm10_1[0] = zmm10_1[0] f- zmm0_1.d
int64_t var_100 = zmm1_1.q
uint128_t zmm14
zmm14.d = zmm5_1.d f- zmm6_1[0]
uint64_t var_260 = zmm1_1.q
zmm6_1 = zmm3_1
zmm9_1[0] = zmm9_1[0] f- rcx_1
float var_324 = zmm5_1[0]
uint128_t zmm15
zmm15.d = zmm2_1.d f- zmm10_1[0]
float var_288 = zmm5_1[0]
zmm0_1.d = zmm14.d f* zmm14.d
int32_t var_f8 = rcx_1
zmm6_1[0] = zmm6_1[0] - zmm9_1[0]
float var_320 = zmm3_1[0]
float result_2 = zmm3_1[0]
zmm2_1.d = zmm15.d f* zmm15.d
int64_t var_298 = 0
int32_t var_290 = 0x3f800000
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm1_1.d = zmm6_1.d f* zmm6_1[0]
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int64_t rbx
rbx.b = 0
int32_t var_2f8 = 0x7f7fffff
char rdx_2 = rdi.b
char var_328 = rdx_2
int32_t rcx_2 = 0
int32_t var_2cc = 0
float var_2f4
int64_t var_240
float result_1
uint128_t zmm4_1

if (rdi.b != 0)
label_14163ef85:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm13.d
    
    if (not(zmm13.d f<= zmm12.d))
        zmm3_1 = zmm12
        zmm4_1 = zmm12
        *arg8 = var_298
        arg8[1].d = var_290
        
        if (r12.d s> 0)
            float (* rcx_18)[0x4] = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_23 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_18
                rcx_18 = &(*rcx_18)[1]
                zmm0_1.d = zmm2_1.d f* rax_23[-2]
                zmm1_1.d = zmm2_1.d f* rax_23[-1]
                zmm2_1.d = zmm2_1.d f* *rax_23
                rax_23 = &rax_23[3]
                zmm12.d = zmm12.d f+ zmm0_1.d
                zmm3_1[0] = zmm3_1[0] f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm13.d f* *r10
        zmm1_1.d = zmm13.d f* (*r10)[1]
        zmm13.d = zmm13.d f* (*r10)[2]
        zmm0_1.d = zmm0_1.d f+ zmm5_1[0]
        zmm1_1.d = zmm1_1.d f+ var_308[1]
        zmm13.d = zmm13.d f+ var_308[2]
        zmm0_1.d = zmm0_1.d f+ zmm12.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1[0]
        zmm13.d = zmm13.d f+ zmm4_1.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm13.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_308[0].q = 0
        var_308[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_308[3] s< 8)
            sub_14083ad30(&var_308, 8)
        
        float rax_30
        uint128_t zmm0_2
        
        if (var_2cc == 0)
            int32_t var_2c0_3 = 0x3f800000
            rax_30 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm12, zmm12.q)
        label_14163f23d:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = i_3.d
            *arg8 = zmm0_2.q
            arg8[1].d = rax_30
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_1 = sx.q(var_170[2])
                    int32_t rax_24 = (rbx_1 + 1).d
                    var_170[2] = rax_24
                    
                    if (rax_24 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_22 = var_170[0].q
                    int64_t rdx_11 = rbx_1 * 3
                    int32_t rax_25 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm11_1.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_22 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2.d = zmm7_1.d f+ *(&var_100 + rdi_4)
                    *(rcx_22 + (rdx_11 << 2) + 8) = rax_25
                    int64_t rbx_2 = sx.q(var_308[2])
                    int32_t var_314_2 = zmm1_1.d
                    var_318 = zmm0_2.d
                    zmm0_2.d = zmm8_1.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_26 = (rbx_2 + 1).d
                    var_308[2] = rax_26
                    var_310 = zmm0_2.d
                    
                    if (rax_26 s> var_308[3])
                        sub_14083a7e0(&var_308)
                    
                    int64_t rcx_24 = var_308[0].q
                    int64_t rdx_13 = rbx_2 * 3
                    rdi_4 += 0xc
                    *(rcx_24 + (rdx_13 << 2)) = var_318.q
                    *(rcx_24 + (rdx_13 << 2) + 8) = var_310
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            int64_t var_180_1 = arg2
            var_188.q = &var_2b8
            int128_t* var_178_1 = arg3
            int32_t rax_29 = sub_141586e90(&var_170, &var_308, &var_228, &var_188, &var_2f4, 
                &var_318, &var_240, &var_1e0)
            zmm0_2 = zx.o(var_318.q)
            rax_30 = var_310
            
            if (rax_29 == 2)
                goto label_14163f23d
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_30
            result = result_1
            *rdi_3 = (var_2f4 ^ data_142d3f780).d
            *arg7 = var_240
        int64_t rcx_26 = var_308[0].q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_170[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    
    result.b = 1
else
    while (true)
        var_2cc = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            zmm7_1 = var_324
            result = zx.d(arg9)
        else
            zmm5_1 = 0x3f000000
            zmm3_1 = zx.o(0)
            void* rax_8 = var_228
            zmm2_1.d = zmm15.d f* zmm15.d
            zmm0_1.d = zmm14.d f* zmm14.d
            void* rcx_4 = *(rax_8 + 0x10)
            zmm7_1 = *(rax_8 + 0x30)
            zmm1_1.d = zmm6_1.d f* zmm6_1[0]
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
            zmm5_1[0] = 0.5f - zmm3_1[0]
            zmm0_1.d = zmm4_1.d f* zmm5_1[0]
            zmm5_1 = *(rax_8 + 0x2c)
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm6_1[0] = zmm6_1[0] f* zmm4_1.d
            zmm14.d = zmm14.d f* zmm4_1.d
            var_2f4 = zmm4_1.d
            zmm15.d = zmm15.d f* zmm4_1.d
            zmm4_1 = *(rax_8 + 0x28)
            zmm0_1.d = zmm14.d f* zmm4_1.d
            var_2f4 = zmm6_1[0]
            zmm1_1.d = zmm15.d f* zmm5_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
            
            if (zmm0_1.d f>= zmm12.d)
                zmm2_1 = *(rcx_4 + 0x1c)
            else
                zmm2_1 = *(rcx_4 + 0x10)
            
            if (zmm1_1.d f>= zmm12.d)
                zmm1_1 = *(rcx_4 + 0x20)
            else
                zmm1_1 = *(rcx_4 + 0x14)
            
            if (zmm6_1[0] f>= zmm12.d)
                zmm0_1 = *(rcx_4 + 0x24)
            else
                zmm0_1 = *(rcx_4 + 0x18)
            
            zmm9_1 = var_2b8[1]
            zmm8_1 = var_2b8[2]
            zmm3_1 = var_2b8[0]
            zmm1_1.d = zmm1_1.d f* zmm5_1[0]
            zmm0_1.d = zmm0_1.d f* zmm7_1[0]
            zmm2_1.d = zmm2_1.d f* zmm4_1.d
            int32_t var_248_1 = zmm0_1.d
            int32_t var_2a0_1 = zmm0_1.d
            zmm4_1 = zmm15 ^ 0x80000000
            int32_t var_24c_1 = zmm1_1.d
            zmm7_1 = zmm6_1 ^ 0x80000000
            var_2a8:4.d = zmm1_1.d
            zmm11_1 = zmm14 ^ 0x80000000
            int32_t var_250_1 = zmm2_1.d
            zmm6_1 = zmm4_1
            var_2a8.d = zmm2_1.d
            zmm2_1 = var_2b8[3]
            zmm0_1.d = zmm4_1.d f* zmm8_1[0]
            zmm6_1[0] = zmm6_1[0] * zmm3_1[0]
            zmm5_1 = zmm11_1
            zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm8_1[0]
            zmm7_1[0] = zmm7_1[0] f- zmm0_1.d
            zmm0_1.d = zmm7_1.d f* zmm3_1[0]
            zmm5_1[0] = zmm5_1[0] f- zmm0_1.d
            zmm0_1.d = zmm11_1.d f* zmm9_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
            zmm6_1[0] = zmm6_1[0] f- zmm0_1.d
            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
            zmm1_1.d = zmm7_1.d f* zmm8_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
            zmm0_1.d = zmm6_1.d f* zmm3_1[0]
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm0_1.d = zmm7_1.d f* zmm9_1[0]
            zmm7_1[0] = zmm7_1[0] f* zmm2_1.d
            int32_t var_31c_1 = zmm1_1.d
            zmm1_1.d = zmm5_1.d f* zmm2_1.d
            zmm7_1[0] = zmm7_1[0] f+ zmm11_1.d
            zmm1_1.d = zmm1_1.d f+ zmm4_1.d
            zmm4_1.d = var_31c_1.d f+ zmm1_1.d
            zmm1_1.d = zmm5_1.d f* zmm3_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm8_1[0]
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            int32_t var_31c_2 = zmm1_1.d
            zmm6_1[0] = zmm6_1[0] * zmm9_1[0]
            zmm1_1.d = zmm6_1.d f* zmm2_1.d
            zmm6_1[0] = zmm6_1[0] - zmm5_1[0]
            zmm1_1.d = zmm1_1.d f+ zmm7_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
            zmm0_1.d = var_31c_2.d f+ zmm1_1.d
            
            if (zmm6_1[0] f>= zmm12.d)
                zmm5_1 = *(arg2 + 0x1c)
            else
                zmm5_1 = *(arg2 + 0x10)
            
            if (zmm4_1.d f>= zmm12.d)
                zmm1_1 = *(arg2 + 0x20)
            else
                zmm1_1 = *(arg2 + 0x14)
            
            int32_t var_31c_3 = zmm1_1.d
            
            if (zmm0_1.d f>= zmm12.d)
                zmm11_1 = *(arg2 + 0x24)
            else
                zmm11_1 = *(arg2 + 0x18)
            
            zmm2_1 = var_2dc
            zmm0_1.d = var_218.d f* zmm1_1.d
            var_218[0] = var_218[0] * zmm5_1[0]
            var_1f8[0] = var_1f8[0] f* zmm1_1.d
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            zmm4_1.d = zmm11_1.d f* var_208[0]
            uint64_t rcx_5 = r12 * 3
            zmm4_1.d = zmm4_1.d f- zmm0_1.d
            zmm0_1.d = zmm11_1.d f* var_1f8[0]
            var_218[0] = var_218[0] f- zmm0_1.d
            zmm0_1.d = var_208.d f* zmm5_1[0]
            zmm4_1.d = zmm4_1.d f+ zmm4_1.d
            var_1f8[0] = var_1f8[0] f- zmm0_1.d
            var_218[0] = var_218[0] + var_218[0]
            zmm1_1.d = zmm4_1.d f* zmm2_1.d
            var_1f8[0] = var_1f8[0] + var_1f8[0]
            zmm1_1.d = zmm1_1.d f+ zmm5_1[0]
            zmm0_1.d = var_218.d f* var_218[0]
            zmm5_1 = zmm4_1
            zmm5_1[0] = zmm5_1[0] * var_218[0]
            zmm10_1 = var_250_1
            var_1f8[0] = var_1f8[0] * var_208[0]
            zmm4_1.d = zmm4_1.d f* var_208[0]
            zmm9_1 = var_24c_1
            var_1f8[0] = var_1f8[0] f- zmm0_1.d
            var_1f8[0] = var_1f8[0] f* zmm2_1.d
            zmm0_1.d = var_1f8.d f* var_1f8[0]
            var_1f8[0] = var_1f8[0] f+ zmm1_1.d
            var_218[0] = var_218[0] * var_1f8[0]
            var_1f8[0] = var_1f8[0] f+ zmm11_1.d
            zmm11_1 = var_2bc
            zmm5_1[0] = zmm5_1[0] f- zmm0_1.d
            zmm8_1 = var_248_1
            var_218[0] = var_218[0] f- zmm4_1.d
            zmm10_1[0] = zmm10_1[0] - var_1f8[0]
            *(&var_130 + (rcx_5 << 2)) = var_2a8
            zmm1_1.d = var_218.d f* zmm2_1.d
            (&var_128)[rcx_5] = var_2a0_1
            var_218[0] = var_218[0] + var_1f8[0]
            zmm3_1 = var_320
            zmm4_1.d = var_324.d f- zmm10_1[0]
            zmm1_1.d = zmm1_1.d f+ var_31c_3
            zmm8_1[0] = zmm8_1[0] - var_218[0]
            result = var_218[0]
            zmm5_1[0] = zmm5_1[0] f+ zmm1_1.d
            var_318 = zmm4_1.d
            zmm3_1[0] = zmm3_1[0] - zmm8_1[0]
            zmm0_1 = _mm_unpacklo_ps(var_1f8, zmm5_1[0].q)
            zmm9_1[0] = zmm9_1[0] - zmm5_1[0]
            *(&var_100 + (rcx_5 << 2)) = zmm0_1.q
            zmm5_1 = zmm15
            (&var_f8)[rcx_5] = result
            zmm0_1.d = zmm14.d f* zmm4_1.d
            zmm2_1.d = zmm11_1.d f- zmm9_1[0]
            var_310 = zmm3_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm2_1.d
            int32_t var_314_1 = zmm2_1.d
            zmm5_1[0] = zmm5_1[0] f+ zmm0_1.d
            zmm4_1 = var_2f4
            zmm1_1.d = zmm4_1.d f* zmm3_1[0]
            zmm5_1[0] = zmm5_1[0] f+ zmm1_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5_1[0] f<= zmm12.d)
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_5 << 2)) = var_318.q
                *(&var_160:8 + (rcx_5 << 2)) = var_310
                var_188 = r12.d
            label_14163eb5c:
                zmm9_1 = var_2f8
                zmm7_1 = var_324
                
                if (rdx_2 == 0)
                    zmm10_1 = 0x358637bd
                else
                    zmm10_1 = 0x358637bd
                    
                    if (not(zmm5_1[0] f< zmm12.d))
                        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                        zmm5_1[0] = zmm5_1[0] + 9.99999997e-07f
                        rdi.b = zmm5_1[0] >= zmm9_1[0]
            else
                zmm3_1 = (*r10)[1]
                zmm7_1 = *r10
                zmm6_1 = (*r10)[2]
                zmm2_1.d = zmm14.d f* zmm7_1[0]
                zmm0_1.d = zmm15.d f* zmm3_1[0]
                zmm1_1.d = zmm4_1.d f* zmm6_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm12.d)
                    result.b = 0
                    break
                
                zmm1_1 = zmm13
                zmm0_1.d = zmm5_1.d f/ zmm2_1.d
                zmm13.d = zmm13.d f- zmm0_1.d
                
                if (zmm13.d f<= zmm1_1.d)
                    goto label_14163eb5c
                
                if (zmm13.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_288.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_240 = zmm1_1.q
                r12 = zx.q(r12.d + 1)
                zmm7_1[0] = zmm7_1[0] f* zmm13.d
                result_1 = result_2
                zmm11_1.d = zmm3_1.d f* zmm13.d
                var_188 = r12.d
                zmm7_1[0] = zmm7_1[0] + var_308[0]
                zmm6_1[0] = zmm6_1[0] f* zmm13.d
                var_328 = 0
                zmm11_1.d = zmm11_1.d f+ var_308[1]
                var_290 = zmm4_1.d
                zmm6_1[0] = zmm6_1[0] + var_308[2]
                var_324 = zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] f- zmm1_1.d
                var_288 = zmm7_1[0]
                zmm4_1.d = zmm11_1.d f- zmm0_1.d
                var_2bc = zmm11_1.d
                zmm2_1.d = zmm6_1.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm7_1[0]
                var_320 = zmm6_1[0]
                int32_t var_284_1 = zmm11_1.d
                zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
                result_2 = zmm6_1[0]
                var_298.d = zmm14.d
                var_298:4.d = zmm15.d
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm7_1[0]
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1.d = var_150_1.d.d f+ zmm4_1.d
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm7_1[0]
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm4_1.d
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm2_1.d = zmm11_1.d f- zmm9_1[0]
                zmm9_1 = 0x7f7fffff
                zmm1_1.d = zmm7_1.d f- zmm10_1[0]
                var_2f8 = 0x7f7fffff
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm6_1.d f- zmm8_1[0]
                *(&var_160 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_5 << 2)) = zmm0_1.d
                zmm10_1 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_20
                rax_20, zmm7_1, zmm11_1, zmm12, zmm13 =
                    sub_1416f4530(&var_1e0, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_20)
                int32_t rax_21 = rax_20[1].d
                var_208 = var_2e4
                var_1f8 = var_2e8
                zmm15 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm6_1 = rax_21
                zmm14 = zmm1_1.d
                var_218 = var_2e0
            else
                int32_t rcx_6 = r12.d
                uint64_t var_2d8_1
                int32_t rax_13
                
                if (rcx_6 == 1)
                    int64_t rax_16 = sx.q(var_184)
                    int64_t rcx_13 = rax_16 * 3
                    var_170[rax_16] = 0x3f800000
                    rax_13 = *(&var_160:8 + (rcx_13 << 2))
                    var_2d8_1 = *(&var_160 + (rcx_13 << 2))
                else
                    uint64_t* rax_15
                    
                    if (rcx_6 == 2)
                        void var_198
                        rax_15, zmm7_1, zmm9_1 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    label_14163ebc4:
                        rax_13 = rax_15[1].d
                        r12 = zx.q(var_188)
                        var_2d8_1 = *rax_15
                        var_208 = var_2e4
                        var_1f8 = var_2e8
                        var_218 = var_2e0
                    else
                        if (rcx_6 == 3)
                            uint64_t var_1a4
                            rax_15, zmm7_1, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13 =
                                sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                            goto label_14163ebc4
                        
                        if (rcx_6 == 4)
                            uint64_t var_1b0
                            rax_15, zmm7_1, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13 =
                                sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                            goto label_14163ebc4
                        
                        int32_t var_2c0_1 = 0
                        rax_13 = 0
                        var_2d8_1 = (_mm_unpacklo_ps(zmm12, zmm12.q)).q
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                zmm14 = var_2d8_1.d
                rbx = rdi_1 * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi = r9_3 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_14 = *(&var_160:8 + (rsi << 2))
                int32_t r8_4 = *(&var_160:8 + (r15_1 << 2))
                zmm15 = var_2d8_1:4.d
                int32_t rax_17 = *(&var_160:8 + (rbx << 2))
                zmm6_1 = rax_13
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
                var_170[3] = zmm3_1[0]
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_14
                int32_t rcx_15 = (&var_128)[rsi]
                var_140_1 = rax_17
                int32_t rax_18 = (&var_128)[rbx]
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
                var_114_1:4.d = rcx_15
                int32_t rcx_16 = (&var_f8)[rsi]
                int32_t var_104_1 = rax_18
                int32_t rax_19 = (&var_f8)[rbx]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm15.d f* zmm15.d
                var_160:8.d = r8_4
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm14.d f* zmm14.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm6_1.d f* zmm6_1[0]
                var_e4_1:4.d = rcx_16
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_19
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm10_1[0]
                rdi.b = zmm2_1.d f< zmm10_1[0]
                var_2f8 = zmm2_1.d
                rbx.b = zmm2_1.d f>= zmm9_1[0]
            
            result = zx.d(arg9)
            r10 = arg4
            
            if (rdi.b == 0 && rbx.b == 0)
                rcx_2 = var_2cc
                rdx_2 = var_328
                continue
        
        i_3 = 0
        zmm5_1 = var_308[0]
        zmm8_1 = var_320
        goto label_14163ef85
__security_check_cookie(rax_1 ^ &var_368)
return result
