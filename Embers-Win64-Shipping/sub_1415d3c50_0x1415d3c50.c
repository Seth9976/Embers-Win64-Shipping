// 函数: sub_1415d3c50
// 地址: 0x1415d3c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t zmm0 = *(arg2 + 0x44)
float rax_2 = *(arg2 + 0x4c)
int64_t zmm2 = *(arg2 + 0x50)
int64_t var_238 = zmm0
zmm0.d = zmm0.d f- arg4
float rax_3 = *(arg2 + 0x58)
var_238.d = zmm0.d
zmm0 = var_238:4.d
int64_t var_22c = zmm2
zmm0.d = zmm0.d f- arg4
zmm2.d = zmm2.d f+ arg4
var_238:4.d = zmm0.d
float var_230_1 = rax_2 - arg4
zmm0.d = var_22c:4.d.d f+ arg4
var_22c:4.d = zmm0.d
var_22c.d = zmm2.d
float var_224_1 = rax_3 + arg4
float var_220
int64_t var_210
uint128_t zmm10
int512_t zmm11
uint128_t zmm13
uint128_t zmm14
int128_t zmm15
zmm10, zmm11, zmm13, zmm14, zmm15 = sub_14003bce0(arg3, &var_238, &var_22c, &var_210, &var_220)
int64_t zmm0_1 = var_210
float zmm3[0x4] = var_210.d
float zmm1_1 = var_220
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
var_238 = zmm0_1
int32_t var_208
int32_t var_230_2 = var_208
var_22c = var_220.q
temp0[0] = var_210:4.d.d
int32_t var_218
int32_t var_224_2 = var_218
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1_1
uint64_t var_1d8 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
int32_t var_21c
temp0_2[0] = var_21c
int32_t var_1d0 = 0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_1e8[0x4] = temp0_3
var_1e8 = temp0_3
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
zmm6, zmm7, zmm8, zmm9 = sub_14173e270(arg1, &var_1e8, &var_1d8)
uint64_t rcx_2 = var_1d8
int32_t zmm12 = (zx.o(0)).d
uint64_t rbx = rcx_2
zmm11.o = 0x7f7fffff
int64_t rax_7 = rcx_2 + (sx.q(var_1d0) << 3)
var_210 = rax_7

if (rcx_2 != rax_7)
    uint128_t zmm4_1 = 0x3f800000
    int32_t var_1f8
    int32_t rsi_1 = var_1f8
    int32_t r14_1 = var_1f8
    uint128_t var_b8_1 = zmm13
    uint128_t var_c8_1 = zmm14
    int128_t var_d8_1 = zmm15
    uint128_t var_48_1 = zmm6
    uint128_t var_58_1 = zmm7
    uint128_t var_68_1 = zmm8
    uint128_t var_78_1 = zmm9
    uint128_t var_88_1 = zmm10
    
    do
        uint32_t rax_8 = zx.d(*(arg1 + 0x46))
        int32_t r9_3 = rax_8 * *(rbx + 4) + *rbx
        int32_t rax_10 = (rax_8 - 1) * *(rbx + 4)
        int32_t rax_11 = rax_10 + *rbx
        
        if (rax_10 + *rbx s< 0 || rax_11 s>= *(arg1 + 0x28)
                || *(sx.q(rax_11) + *(arg1 + 0x20)) != 0xff)
            int32_t zmm2_2 = *(arg1 + 0x3c)
            uint32_t r8_2 = zx.d(*(arg1 + 0x46))
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r9_3)
            int64_t zmm1_2 = *(arg1 + 0x4c)
            int64_t rcx_4 = sx.q(r9_3)
            uint128_t zmm3_1 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp4_1:temp5_1, r8_2)))
            int64_t rdx_4 = *(arg1 + 0x10)
            zmm9 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp4_1:temp5_1, r8_2)))
            zmm10.d = zmm9.d f+ zmm4_1.d
            uint128_t zmm0_2
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_4 << 1)))).d f* zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm2_2
            int32_t var_148_1 = zmm0_2.d
            zmm7 = (_mm_unpacklo_ps(zmm9, zmm3_1.q)).q:4.d
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_4 << 1) + 2))).d f* zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm2_2
            int32_t var_13c_1 = zmm0_2.d
            zmm0_2 = _mm_unpacklo_ps(zmm10, zmm3_1.q)
            zmm3_1.d = zmm3_1.d f+ zmm4_1.d
            zmm4_1 = *(arg1 + 0x30)
            int64_t zmm5_1 = zmm0_2.q:4.d
            int64_t rcx_5 = sx.q(r9_3 + r8_2)
            zmm8.d = zmm4_1.d f* zmm9.d
            zmm6.d = zmm4_1.d f* zmm10.d
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_5 << 1)))).d f* zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm2_2
            int32_t var_130_1 = zmm0_2.d
            uint64_t var_f8_1 = (_mm_unpacklo_ps(zmm9, zmm3_1.q)).q
            zmm9.d = zmm9.d f* zmm4_1.d
            var_f8_1.d = zmm9.d
            zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_5 << 1) + 2))).d f* zmm1_2.d
            zmm0_2.d = zmm0_2.d f+ zmm2_2
            zmm2_2 = *(arg1 + 0x34)
            zmm7.d = zmm7.d f* zmm2_2
            zmm5_1.d = zmm5_1.d f* zmm2_2
            int32_t var_124_1 = zmm0_2.d
            zmm0_2 = _mm_unpacklo_ps(zmm10, zmm3_1.q)
            zmm3_1 = *(arg1 + 0x38)
            uint64_t var_ec_1 = zmm0_2.q
            zmm0_2.d = var_148_1.d f* zmm3_1.d
            int32_t var_108_2 = zmm0_2.d
            zmm0_2.d = var_13c_1.d f* zmm3_1.d
            int32_t var_fc_2 = zmm0_2.d
            zmm0_2.d = var_f8_1:4.d.d f* zmm2_2
            int32_t var_1c0_1 = var_108_2
            int32_t var_1b4_1 = var_fc_2
            var_f8_1:4.d = zmm0_2.d
            zmm0_2.d = var_124_1.d f* zmm3_1.d
            int32_t* var_248_1 = nullptr
            zmm1_2.d = var_130_1.d f* zmm3_1.d
            var_220.q = 0x3f800000
            int32_t var_e4_2 = zmm0_2.d
            int32_t var_1a8_1 = var_e4_2
            uint64_t var_1c8 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            float* var_258_1 = &var_220
            int32_t var_f0_2 = zmm1_2.d
            uint64_t var_170
            int32_t* var_268_1 = &var_170
            uint64_t var_1bc_1 = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
            uint64_t var_180
            uint64_t* var_270_1 = &var_180
            zmm10.d = zmm10.d f* zmm4_1.d
            int32_t var_218_1 = 0
            zmm1_2.d = var_ec_1:4.d.d f* zmm2_2
            int64_t var_120[0x2]
            int64_t* var_278_1 = &var_120
            uint64_t var_1b0_1 = (_mm_unpacklo_ps(zmm10, zmm1_2)).q
            float var_1f0
            char rax_28
            int64_t zmm6_1
            uint64_t zmm7_1
            int128_t zmm11_1
            int32_t zmm12_1
            uint64_t zmm13_1
            uint64_t zmm14_1
            int128_t zmm15_1
            rax_28, zmm6_1, zmm7_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1416271b0(
                &var_1c8, arg2, arg3, &var_1f0, var_278_1, var_270_1, var_268_1, zmm12, var_258_1, 
                zmm12, var_248_1)
            
            if (rax_28 != 0)
                zmm13_1 = var_180
                zmm11_1 = var_1f0 ^ zmm15_1
                int32_t var_178
                rsi_1 = var_178
                zmm14_1 = var_170
                int32_t var_168
                r14_1 = var_168
            label_1415d413c:
                
                if (not(zmm11_1.d f>= *arg7))
                    *arg7 = zmm11_1.d
                    *arg5 = zmm13_1
                    arg5[1].d = rsi_1
                    *arg6 = zmm14_1
                    arg6[1].d = r14_1
            else if (not(zmm11_1.d f>= zmm12_1))
                goto label_1415d413c
            
            int32_t var_1c0_2 = var_108_2
            int32_t var_1b4_2 = var_e4_2
            int32_t* var_248_2 = nullptr
            int32_t var_1a8_2 = var_f0_2
            int64_t var_190
            float (* var_258_2)[0x4] = &var_190
            int64_t var_200
            int32_t* var_268_2 = &var_200
            uint64_t var_160
            uint64_t* var_270_2 = &var_160
            int64_t* var_278_2 = &var_1e8
            var_1c8 = zmm7_1
            int64_t var_1bc_2 = zmm6_1
            uint64_t var_1b0_2 = var_f8_1
            var_190 = 0x3f800000
            int32_t var_188_1 = 0
            float var_1ec
            bool rax_32
            int128_t zmm11_2
            rax_32, zmm11_2, zmm12, zmm13, zmm14, zmm15 = sub_1416271b0(&var_1c8, arg2, arg3, 
                &var_1ec, var_278_2, var_270_2, var_268_2, zmm12_1, var_258_2, zmm12_1, var_248_2)
            
            if (rax_32 == 0)
                zmm11_2.d f- zmm12
                
                if (zmm11_2.d f< zmm12 != 0)
                    goto label_1415d421d
                
                zmm4_1 = 0x3f800000
            else
                zmm13 = zx.o(var_160)
                zmm11_2 = var_1ec ^ zmm15
                int32_t var_158
                rsi_1 = var_158
                zmm14 = zx.o(var_200)
                r14_1 = var_1f8
            label_1415d421d:
                zmm4_1 = 0x3f800000
                
                if (not(zmm11_2.d f>= *arg7))
                    *arg7 = zmm11_2.d
                    *arg5 = zmm13.q
                    arg5[1].d = rsi_1
                    *arg6 = zmm14.q
                    arg6[1].d = r14_1
        
        rbx += 8
    while (rbx != var_210)
    
    rcx_2 = var_1d8

rbx.b = zmm12 f> *arg7

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

__security_check_cookie(rax_1 ^ &var_298)
return zx.q(rbx.b)
