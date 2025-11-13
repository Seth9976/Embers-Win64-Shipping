// 函数: sub_141677590
// 地址: 0x141677590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
uint128_t* rbx = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_228 = zmm3[0]
float var_2e8[0x4] = zmm0
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
float var_288[0x4]
int128_t* var_1d8 = &var_288
int64_t var_1e0 = arg2
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
int32_t* var_1f0 = rbx
float var_224 = temp0_1[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float var_220 = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_21c = temp0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
void* var_200 = arg1
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_288 = temp0_6
var_288 = temp0_6
float* var_1d0 = &var_228
int64_t var_2b8
int128_t zmm9 = sub_141758e70(arg1, &var_2b8, arg10, zx.o(0))
int128_t zmm1_1 = *(arg10 + 4) ^ zmm9
int64_t var_130 = var_2b8
int32_t var_2fc = zmm1_1.d
float var_300 = (*arg10 ^ zmm9).d
int32_t var_2b0
int32_t var_128 = var_2b0
int32_t var_2f8 = (*(arg10 + 8) ^ zmm9).d
float var_2a8
float* rax_4
float zmm11_1[0x4]
rax_4, zmm11_1 = sub_14170bcf0(&var_1e0, &var_2a8, &var_300)
float zmm3_1[0x4] = var_2e8[1]
float zmm12[0x4] = zx.o(0)
uint128_t zmm4 = var_2e8[2]
float zmm14[0x4] = zmm4
uint128_t zmm2_1 = zx.o(*rax_4)
uint128_t zmm6 = zmm3_1
int32_t rcx_2 = rax_4[2]
uint128_t zmm0_2
zmm0_2.d = var_2b8.d.d f- zmm2_1.d
uint128_t zmm5 = var_2e8[0]
float zmm1_2[0x4] = var_2b8:4.d
float zmm15[0x4] = zmm5
uint32_t result = zx.d(arg9)
uint128_t zmm7 = zmm4
uint128_t zmm8
zmm8.d = zmm5.d f- zmm0_2.d
int64_t var_100 = zmm2_1.q
uint64_t var_238 = zmm2_1.q
zmm0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
zmm1_2[0] = zmm1_2[0] f- zmm0_2.d
zmm0_2.d = var_2b0.d f- rcx_2
float var_278 = zmm5.d
float var_298 = zmm3_1[0]
uint128_t zmm13
zmm13.d = zmm3_1.d f- zmm1_2[0]
float var_274 = zmm3_1[0]
int32_t var_294 = zmm4.d
zmm14[0] = zmm14[0] f- zmm0_2.d
uint32_t result_2 = zmm4.d
int32_t var_f8 = rcx_2
zmm0_2.d = zmm8.d f* zmm8.d
int64_t var_258 = 0
float var_250 = 1f
zmm2_1.d = zmm13.d f* zmm13.d
zmm14[0] = zmm14[0] * zmm14[0]
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm14[0]
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int32_t rcx_3 = 0
int32_t var_2d8 = 0x7f7fffff
char rsi_1 = rdi.b
char var_308 = 0
char var_307 = rdi.b
int32_t var_2bc = 0
int32_t var_2d4
int64_t var_210
uint32_t result_1

if (rdi.b != 0)
label_1416782f9:
    bool cond:0_1 = zmm12[0] <= zmm11_1[0]
    float* rdi_3 = arg6
    *rdi_3 = zmm12[0]
    
    if (not(cond:0_1))
        zmm4 = zmm11_1
        *arg8 = var_258
        arg8[1].d = var_250
        
        if (r12.d s> 0)
            int128_t* rcx_19 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_22 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_19
                rcx_19 += 4
                zmm1_2 = zmm2_1
                zmm0_2.d = zmm2_1.d f* rax_22[-2]
                zmm1_2[0] = zmm1_2[0] f* rax_22[-1]
                zmm2_1.d = zmm2_1.d f* *rax_22
                rax_22 = &rax_22[3]
                zmm11_1[0] = zmm11_1[0] f+ zmm0_2.d
                zmm11_1[0] = zmm11_1[0] + zmm1_2[0]
                zmm4.d = zmm4.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm12.d f* *var_1f0
        zmm12[0] = zmm12[0] f* var_1f0[1]
        zmm12[0] = zmm12[0] f* var_1f0[2]
        zmm0_2.d = zmm0_2.d f+ zmm5.d
        zmm12[0] = zmm12[0] + var_2e8[1]
        zmm12[0] = zmm12[0] + var_2e8[2]
        zmm0_2.d = zmm0_2.d f+ zmm11_1[0]
        zmm12[0] = zmm12[0] + zmm11_1[0]
        zmm12[0] = zmm12[0] f+ zmm4.d
        *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm12[0].q)).q
        arg7[1].d = zmm12[0]
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_2e8[0].q = 0
        var_2e8[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_2e8[3] s< 8)
            sub_14083ad30(&var_2e8, 8)
        
        int32_t rax_30
        uint128_t zmm0_3
        
        if (var_2bc == 0)
            int32_t var_2a0_3 = 0x3f800000
            rax_30 = 0x3f800000
            zmm0_3 = _mm_unpacklo_ps(zmm11_1, zmm11_1[0].q)
        label_1416785a5:
            zmm2_1 = var_130:4.d
            zmm1_2 = var_130.d
            *rdi_3 = 0f
            *arg8 = zmm0_3.q
            arg8[1].d = rax_30
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_170[2])
                    int32_t rax_24 = (rbx_2 + 1).d
                    var_170[2] = rax_24
                    
                    if (rax_24 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_23 = var_170[0].q
                    int64_t rdx_11 = rbx_2 * 3
                    zmm0_3 = zx.o(*(&var_130 + rdi_4))
                    zmm1_2 = zmm6
                    int32_t rax_25 = *(&var_128 + rdi_4)
                    zmm1_2[0] = zmm1_2[0] f+ *(&var_100:4 + rdi_4)
                    *(rcx_23 + (rdx_11 << 2)) = zmm0_3.q
                    zmm0_3.d = zmm15.d f+ *(&var_100 + rdi_4)
                    *(rcx_23 + (rdx_11 << 2) + 8) = rax_25
                    int64_t rbx_3 = sx.q(var_2e8[2])
                    float var_2fc_2 = zmm1_2[0]
                    var_300 = zmm0_3.d
                    zmm0_3.d = zmm7.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_26 = (rbx_3 + 1).d
                    var_2e8[2] = rax_26
                    var_2f8 = zmm0_3.d
                    
                    if (rax_26 s> var_2e8[3])
                        sub_14083a7e0(&var_2e8)
                    
                    int64_t rcx_25 = var_2e8[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_25 + (rdx_13 << 2)) = var_300.q
                    *(rcx_25 + (rdx_13 << 2) + 8) = var_2f8
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            int64_t var_180_1 = arg2
            var_188.q = &var_288
            int128_t* var_178_1 = arg3
            int32_t rax_29
            int128_t zmm9_2
            rax_29, zmm9_2 = sub_1415a1dd0(&var_170, &var_2e8, &var_200, &var_188, zmm14, zmm15, 
                &var_2d4, &var_300, &var_210, &var_1e0)
            zmm0_3 = zx.o(var_300.q)
            rax_30 = var_2f8
            
            if (rax_29 == 2)
                goto label_1416785a5
            
            *arg8 = zmm0_3.q
            arg8[1].d = rax_30
            result = result_1
            *rdi_3 = (var_2d4 ^ zmm9_2).d
            *arg7 = var_210
        int64_t rcx_27 = var_2e8[0].q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_170[0].q
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    result.b = 1
else
    while (true)
        var_2bc = rcx_3 + 1
        
        if (rcx_3 s>= 0x20)
            result = zx.d(arg9)
        else
            void* rcx_5 = var_200
            zmm0_2.d = zmm13.d f* zmm13.d
            zmm2_1.d = zmm8.d f* zmm8.d
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm14[0]
            zmm3_1 = zmm2_1
            zmm4 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_2.d = zmm4.d f* zmm4.d
            zmm3_1[0] = zmm3_1[0] f* zmm0_2.d
            zmm2_1.d = 0.5f - zmm3_1[0]
            zmm0_2.d = zmm4.d f* zmm2_1.d
            zmm4.d = zmm4.d f+ zmm0_2.d
            zmm1_2 = zmm4
            zmm1_2[0] = zmm1_2[0] f* zmm4.d
            zmm3_1[0] = zmm3_1[0] * zmm1_2[0]
            zmm5.d = 0.5f - zmm3_1[0]
            zmm0_2.d = zmm4.d f* zmm5.d
            zmm4.d = zmm4.d f+ zmm0_2.d
            zmm13.d = zmm13.d f* zmm4.d
            zmm6.d = zmm4.d f* zmm8.d
            zmm14[0] = zmm14[0] f* zmm4.d
            var_2d4 = zmm4.d
            var_2d4 = zmm6.d
            int32_t var_268 = zmm6.d
            int32_t var_264_1 = zmm13.d
            float var_260_1 = zmm14[0]
            uint128_t zmm9_1
            zmm6, zmm9_1, zmm11_1 = sub_141758e70(rcx_5, &var_238, &var_268, zmm11_1)
            zmm0_2 = var_238.d
            zmm7 = var_288[2]
            uint128_t zmm10_1 = zmm6 ^ zmm9_1
            zmm3_1 = var_238:4.d
            zmm1_2 = var_288[0]
            zmm4 = zmm13 ^ zmm9_1
            int32_t var_218_1 = zmm0_2.d
            var_2b8.d = zmm0_2.d
            zmm6 = zmm14 ^ zmm9_1
            zmm0_2 = rcx_2
            zmm9_1 = var_288[1]
            int32_t var_2c0_1 = zmm0_2.d
            int32_t var_2b0_1 = zmm0_2.d
            zmm0_2.d = zmm7.d f* zmm4.d
            float var_2c4_1 = zmm3_1[0]
            var_2b8:4.d = zmm3_1[0]
            zmm3_1 = zmm1_2
            zmm8.d = zmm9_1.d f* zmm6.d
            zmm5.d = zmm7.d f* zmm10_1.d
            zmm8.d = zmm8.d f- zmm0_2.d
            zmm3_1[0] = zmm3_1[0] f* zmm4.d
            zmm0_2.d = zmm1_2.d f* zmm6.d
            zmm8.d = zmm8.d f+ zmm8.d
            zmm5.d = zmm5.d f- zmm0_2.d
            zmm0_2.d = zmm9_1.d f* zmm10_1.d
            zmm2_1.d = zmm7.d f* zmm8.d
            zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm7.d = zmm7.d f* zmm5.d
            zmm0_2.d = zmm1_2.d f* zmm3_1[0]
            zmm2_1.d = zmm2_1.d f- zmm0_2.d
            int32_t var_304_1 = zmm2_1.d
            zmm2_1 = var_288[3]
            zmm1_2 = zmm2_1
            zmm1_2[0] = zmm1_2[0] f* zmm5.d
            zmm1_2[0] = zmm1_2[0] f+ zmm4.d
            zmm4.d = var_288[0].d f* zmm5.d
            zmm0_2.d = var_304_1.d f+ zmm1_2[0]
            zmm1_2 = zmm2_1
            zmm2_1.d = zmm2_1.d f* zmm8.d
            zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
            int32_t var_304_2 = zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm10_1.d
            zmm0_2 = zmm9_1
            zmm9_1.d = zmm9_1.d f* zmm3_1[0]
            zmm0_2.d = zmm0_2.d f* zmm8.d
            zmm1_2[0] = zmm1_2[0] f+ zmm6.d
            zmm9_1.d = zmm9_1.d f- zmm7.d
            zmm4.d = zmm4.d f- zmm0_2.d
            zmm9_1.d = zmm9_1.d f+ zmm2_1.d
            zmm4.d = zmm4.d f+ zmm1_2[0]
            
            if (zmm9_1.d f>= zmm11_1[0])
                zmm2_1 = *(arg2 + 0x1c)
            else
                zmm2_1 = *(arg2 + 0x10)
            
            int32_t var_29c_1 = zmm2_1.d
            
            if (var_304_2.d f>= zmm11_1[0])
                zmm1_2 = *(arg2 + 0x20)
            else
                zmm1_2 = *(arg2 + 0x14)
            
            float var_304_3 = zmm1_2[0]
            
            if (zmm4.d f>= zmm11_1[0])
                zmm10_1 = *(arg2 + 0x24)
            else
                zmm10_1 = *(arg2 + 0x18)
            
            zmm6 = var_224
            zmm9_1 = var_220
            zmm7 = var_228
            zmm0_2.d = zmm9_1.d f* zmm1_2[0]
            zmm3_1 = zmm7
            zmm3_1[0] = zmm3_1[0] * zmm1_2[0]
            zmm8 = zmm6
            zmm4.d = zmm2_1.d f* zmm9_1.d
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            zmm5.d = zmm6.d f* zmm10_1.d
            uint64_t rcx_6 = r12 * 3
            zmm5.d = zmm5.d f- zmm0_2.d
            zmm0_2.d = zmm7.d f* zmm10_1.d
            zmm4.d = zmm4.d f- zmm0_2.d
            zmm0_2.d = zmm6.d f* zmm2_1.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm2_1 = var_21c
            zmm1_2 = zmm2_1
            zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
            zmm0_2 = zmm9_1
            zmm4.d = zmm4.d f+ zmm4.d
            zmm1_2[0] = zmm1_2[0] f* zmm5.d
            zmm9_1.d = zmm9_1.d f* zmm5.d
            zmm1_2[0] = zmm1_2[0] f+ var_29c_1
            zmm0_2.d = zmm0_2.d f* zmm4.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm6.d = zmm6.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm3_1[0]
            zmm8.d = zmm8.d f- zmm0_2.d
            zmm0_2.d = zmm7.d f* zmm3_1[0]
            zmm7.d = zmm7.d f* zmm4.d
            zmm8.d = zmm8.d f+ zmm1_2[0]
            zmm1_2 = zmm2_1
            zmm9_1.d = zmm9_1.d f- zmm0_2.d
            zmm1_2[0] = zmm1_2[0] f* zmm4.d
            zmm7.d = zmm7.d f- zmm6.d
            zmm6 = var_298
            zmm1_2[0] = zmm1_2[0] + var_304_3
            zmm2_1.d = zmm2_1.d f* zmm3_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm10_1.d
            zmm9_1.d = zmm9_1.d f+ zmm1_2[0]
            zmm1_2 = var_2c0_1
            zmm10_1.d = var_218_1.d f- zmm8.d
            zmm7.d = zmm7.d f+ zmm2_1.d
            zmm0_2.d = var_2c4_1.d f- zmm9_1.d
            zmm15[0] = zmm15[0] f- zmm10_1.d
            zmm1_2[0] = zmm1_2[0] f- zmm7.d
            uint32_t var_1c0_1 = zmm7.d
            zmm7 = var_294
            zmm4.d = zmm6.d f- zmm0_2.d
            int32_t var_2c4_2 = zmm0_2.d
            *(&var_130 + (rcx_6 << 2)) = var_2b8
            zmm0_2 = _mm_unpacklo_ps(zmm8, zmm9_1.q)
            zmm2_1.d = zmm7.d f- zmm1_2[0]
            zmm9_1 = var_2d4
            (&var_128)[rcx_6] = var_2b0_1
            *(&var_100 + (rcx_6 << 2)) = zmm0_2.q
            var_300 = zmm15[0]
            int32_t var_2fc_1 = zmm4.d
            (&var_f8)[rcx_6] = var_1c0_1
            zmm15[0] = zmm15[0] f* zmm9_1.d
            float var_2c0_2 = zmm1_2[0]
            var_2f8 = zmm2_1.d
            zmm4.d = zmm4.d f* zmm13.d
            zmm4.d = zmm4.d f+ zmm15[0]
            zmm2_1.d = zmm2_1.d f* zmm14[0]
            zmm4.d = zmm4.d f+ zmm2_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm4.d f<= zmm11_1[0])
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_6 << 2)) = var_300.q
                *(&var_160:8 + (rcx_6 << 2)) = var_2f8
                var_188 = r12.d
            label_141677efb:
                zmm9_1 = var_2d8
                
                if (rsi_1 == 0)
                    zmm10_1 = 0x358637bd
                else
                    zmm10_1 = 0x358637bd
                    
                    if (not(zmm4.d f< zmm11_1[0]))
                        zmm4.d = zmm4.d f* zmm4.d
                        zmm4.d = zmm4.d f+ 9.99999997e-07f
                        rdi.b = zmm4.d f>= zmm9_1.d
            else
                zmm3_1 = *(rbx + 4)
                zmm5 = *rbx
                zmm8 = *(rbx + 8)
                zmm2_1.d = zmm5.d f* zmm9_1.d
                zmm1_2 = zmm8
                zmm0_2.d = zmm3_1.d f* zmm13.d
                zmm1_2[0] = zmm1_2[0] * zmm14[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_2[0]
                
                if (zmm2_1.d f>= zmm11_1[0])
                    result.b = 0
                    break
                
                zmm0_2.d = zmm4.d f/ zmm2_1.d
                zmm12[0] = zmm12[0] f- zmm0_2.d
                
                if (zmm12[0] <= zmm12[0])
                    goto label_141677efb
                
                if (zmm12[0] f> arg5)
                    result.b = 0
                    break
                
                zmm1_2 = zx.o(var_278.q)
                zmm0_2 = zmm1_2
                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                zmm15 = zmm5
                var_210 = zmm1_2.q
                zmm15[0] = zmm15[0] * zmm12[0]
                r12 = zx.q(r12.d + 1)
                result_1 = result_2
                zmm6.d = zmm3_1.d f* zmm12[0]
                var_188 = r12.d
                zmm15[0] = zmm15[0] + var_2e8[0]
                zmm7.d = zmm8.d f* zmm12[0]
                var_307 = 0
                zmm6.d = zmm6.d f+ var_2e8[1]
                var_258.d = zmm9_1.d
                zmm7.d = zmm7.d f+ var_2e8[2]
                zmm9_1 = 0x7f7fffff
                zmm15[0] = zmm15[0] - zmm1_2[0]
                var_278 = zmm15[0]
                zmm1_2 = var_160:4.d
                zmm4.d = zmm6.d f- zmm0_2.d
                var_298 = zmm6.d
                zmm2_1.d = zmm7.d f- result_1
                zmm0_2.d = var_160.d.d f+ zmm15[0]
                var_294 = zmm7.d
                int32_t var_274_1 = zmm6.d
                zmm1_2[0] = zmm1_2[0] f+ zmm4.d
                result_2 = zmm7.d
                var_258:4.d = zmm13.d
                var_250 = zmm14[0]
                var_160.d = zmm0_2.d
                zmm0_2.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_2[0]
                zmm1_2 = var_160:0xc.d
                zmm1_2[0] = zmm1_2[0] + zmm15[0]
                var_2d8 = 0x7f7fffff
                var_160:8.d = zmm0_2.d
                var_160:0xc.d = zmm1_2[0]
                zmm0_2.d = var_150_1.d.d f+ zmm4.d
                zmm1_2 = var_150_1:4.d
                zmm1_2[0] = zmm1_2[0] f+ zmm2_1.d
                var_150_1.d = zmm0_2.d
                zmm0_2 = var_150_1:8.d
                var_150_1:4.d = zmm1_2[0]
                zmm0_2.d = zmm0_2.d f+ zmm15[0]
                zmm1_2 = var_150_1:0xc.d
                zmm1_2[0] = zmm1_2[0] f+ zmm4.d
                var_150_1:8.d = zmm0_2.d
                zmm0_2.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_2[0]
                zmm2_1.d = zmm6.d f- var_2c4_2
                zmm15[0] = zmm15[0] f- zmm10_1.d
                var_140_1 = zmm0_2.d
                zmm0_2.d = zmm7.d f- var_2c0_2
                *(&var_160 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm15, zmm2_1.q)).q
                *(&var_160:8 + (rcx_6 << 2)) = zmm0_2.d
                zmm10_1 = 0x358637bd
            
            uint32_t rdx_8
            
            if (rdi.b != 0)
                int64_t* rax_19
                rax_19, zmm6, zmm7, zmm11_1, zmm12, zmm15 =
                    sub_1416f4530(&var_1e0, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                rdx_8 = zx.d(var_308)
                zmm1_2 = zx.o(*rax_19)
                int32_t rax_20 = rax_19[1].d
                zmm0_2 = zmm1_2
                zmm13 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                zmm14 = rax_20
                var_268.q = zmm1_2.q
                zmm8 = var_268
            else
                int32_t rcx_7 = r12.d
                int32_t rax_10
                
                if (rcx_7 == 1)
                    int64_t rax_15 = sx.q(var_184)
                    int64_t rcx_14 = rax_15 * 3
                    var_170[rax_15] = 0x3f800000
                    zmm0_2 = zx.o(*(&var_160 + (rcx_14 << 2)))
                    rax_10 = *(&var_160:8 + (rcx_14 << 2))
                else if (rcx_7 == 2)
                    void var_198
                    uint64_t* rax_14
                    rax_14, zmm6, zmm7, zmm9_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_14)
                    rax_10 = rax_14[1].d
                else if (rcx_7 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_13
                    rax_13, zmm6, zmm7, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_13)
                    rax_10 = rax_13[1].d
                else if (rcx_7 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_12
                    rax_12, zmm6, zmm7, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_2 = zx.o(*rax_12)
                    rax_10 = rax_12[1].d
                else
                    int32_t var_2a0_1 = 0
                    rax_10 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm11_1, zmm11_1[0].q)
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int64_t var_180
                int64_t r10_1 = sx.q(var_180.d)
                int64_t r9_4 = sx.q(var_180:4.d)
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_2d0_1 = zmm0_2.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_2 = r9_4 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_15 = *(&var_160:8 + (rsi_2 << 2))
                int32_t r8_6 = *(&var_160:8 + (r15_1 << 2))
                zmm8 = var_2d0_1.d
                zmm13 = var_2d0_1:4.d
                int32_t rax_16 = *(&var_160:8 + (rbx_1 << 2))
                zmm14 = rax_10
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_2 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_2 << 2))
                zmm1_2 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_2.d
                zmm0_2 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_2[0]
                zmm1_2 = zx.o(*(&var_130 + (rsi_2 << 2)))
                var_170[3] = zmm3_1[0]
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_15
                int32_t rcx_16 = (&var_128)[rsi_2]
                var_140_1 = rax_16
                int32_t rax_17 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_2.q
                zmm0_2 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_2.q
                zmm1_2 = zx.o(*(&var_100 + (rsi_2 << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_124_1:8.d = rdx_7
                rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_16
                int32_t rcx_17 = (&var_f8)[rsi_2]
                int32_t var_104_1 = rax_17
                int32_t rax_18 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_2.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm13.d f* zmm13.d
                var_160:8.d = r8_6
                var_f4_1:0xc.q = zmm1_2.q
                zmm0_2.d = zmm8.d f* zmm8.d
                var_f4_1:8.d = rdx_8
                zmm14[0] = zmm14[0] * zmm14[0]
                var_e4_1:4.d = rcx_17
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_18
                zmm2_1.d = zmm2_1.d f+ zmm14[0]
                zmm2_1.d f- zmm10_1.d
                rdi.b = zmm2_1.d f< zmm10_1.d
                var_2d8 = zmm2_1.d
                rdx_8.b = zmm2_1.d f>= zmm9_1.d
                var_308 = rdx_8.b
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rdx_8.b == 0)
                rbx = var_1f0
                rcx_3 = var_2bc
                rsi_1 = var_307
                continue
        
        zmm5 = var_2e8[0]
        goto label_1416782f9
__security_check_cookie(rax_1 ^ &var_348)
return result
