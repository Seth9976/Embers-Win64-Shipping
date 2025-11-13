// 函数: sub_141745860
// 地址: 0x141745860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint128_t zmm3 = zx.o(*arg2)
int32_t rax_2 = arg2[1].d
uint64_t var_1b8 = zmm3.q
uint128_t zmm10
uint128_t var_78 = zmm10
uint128_t zmm11
uint128_t var_88 = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
uint128_t zmm13
uint128_t var_a8 = zmm13
uint128_t zmm14 = arg3
arg3 = zmm3
int32_t var_1b0 = rax_2
zmm3.d = zmm3.d f- zmm14.d
float zmm1 = arg3.q:4.d
float zmm0 = var_1b8:4.d f- zmm14.d
arg3.d = arg3.d f+ zmm14.d
uint128_t zmm15
uint128_t var_c8 = zmm15
int32_t var_1c0 = 0
int32_t var_1a4 = rax_2
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm0
var_1b8 = 0
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = arg3.d
var_1b0.q = 0
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm1 f+ zmm14.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
uint128_t var_178 = zmm3
var_178 = zmm3
sub_14173e270(arg1, &var_178, &var_1b8)
uint64_t rsi = var_1b8
int64_t r15 = rsi + (sx.q(var_1b0) << 3)
char rbx

if (rsi == r15)
label_141745f31:
    rbx = 0
else
    uint32_t rax_4 = zx.d(*(arg1 + 0x46))
    uint32_t r9_1 = zx.d(*(arg1 + 0x46))
    uint128_t zmm3_1 = *(arg1 + 0x4c)
    uint128_t zmm4_1 = *(arg1 + 0x3c)
    uint128_t zmm5_1 = *(arg1 + 0x30)
    zmm10 = *(arg1 + 0x34)
    zmm12 = *(arg1 + 0x38)
    int64_t r13_1 = *(arg1 + 0x10)
    int32_t var_198_1 = zmm3_1.d
    int32_t var_194_1 = zmm4_1.d
    int32_t var_190_1 = zmm5_1.d
    int32_t var_18c_1 = zmm10.d
    int32_t var_188_1 = zmm12.d
    uint32_t var_1c0_1 = rax_4
    uint32_t var_184_1 = r9_1
    
    while (true)
        int32_t r8_3 = *(rsi + 4) * rax_4 + *rsi
        int64_t rcx = sx.q(r8_3)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r8_3)
        uint32_t rax_8 = zx.d(*(r13_1 + (rcx << 1)))
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp2_1:temp3_1, r9_1)))
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* zmm3_1.d
        zmm15 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp2_1:temp3_1, r9_1)))
        zmm0_1.d = zmm0_1.d f+ zmm4_1.d
        uint128_t zmm9_1
        zmm9_1.d = zmm15.d f+ 1f
        zmm11.d = zmm15.d f* zmm5_1.d
        int32_t var_120_1 = zmm0_1.d
        uint64_t var_100 = (_mm_unpacklo_ps(zmm15, zmm1_1.q)).q
        uint128_t zmm7_1
        zmm7_1.d = zmm10.d f* var_100:4.d
        uint128_t zmm6_1
        zmm6_1.d = zmm12.d f* var_120_1
        var_100.d = zmm11.d
        int32_t var_1c8_1 = zmm7_1.d
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(r13_1 + (rcx << 1) + 2))).d f* zmm3_1.d
        var_100:4.d = zmm7_1.d
        int32_t var_1c4_1 = zmm6_1.d
        zmm0_1.d = zmm0_1.d f+ zmm4_1.d
        int32_t var_f8_2 = zmm6_1.d
        int32_t var_114_1 = zmm0_1.d
        zmm0_1 = _mm_unpacklo_ps(zmm9_1, zmm1_1.q)
        zmm1_1.d = zmm1_1.d f+ 1f
        uint64_t var_f4 = zmm0_1.q
        int64_t rcx_1 = sx.q(r9_1 + r8_3)
        float zmm2 = var_f4:4.d f* zmm10.d
        var_f4:4.d = zmm2
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(r13_1 + (rcx_1 << 1)))).d f* zmm3_1.d
        zmm0_1.d = zmm0_1.d f+ zmm4_1.d
        int32_t var_108_1 = zmm0_1.d
        uint64_t var_e8 = (_mm_unpacklo_ps(zmm15, zmm1_1.q)).q
        zmm15.d = zmm15.d f* zmm5_1.d
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(r13_1 + (rcx_1 << 1) + 2))).d f* zmm3_1.d
        zmm3_1.d = zmm9_1.d f* zmm5_1.d
        zmm0_1.d = zmm0_1.d f+ zmm4_1.d
        var_f4.d = zmm3_1.d
        var_178:8.d = zmm0_1.d
        int32_t rax_16 = var_178:8.d
        uint64_t var_dc = (_mm_unpacklo_ps(zmm9_1, zmm1_1.q)).q
        zmm9_1.d = zmm9_1.d f* zmm5_1.d
        zmm4_1.d = var_114_1.d f* zmm12.d
        zmm3_1.d = zmm3_1.d f- zmm11.d
        var_e8.d = zmm15.d
        zmm0_1.d = zmm12.d f* var_108_1
        zmm2 = zmm2 f- zmm7_1.d
        int32_t var_ec_2 = zmm4_1.d
        zmm13.d = zmm10.d f* var_dc:4.d
        zmm4_1.d = zmm4_1.d f- zmm6_1.d
        int32_t var_19c_1 = zmm0_1.d
        uint128_t zmm8_1
        zmm8_1.d = zmm10.d f* var_e8:4.d
        zmm10.d = zmm12.d f* rax_16
        zmm5_1.d = zmm13.d f- zmm7_1.d
        int32_t var_e0_2 = zmm0_1.d
        int32_t var_1a0_1 = zmm8_1.d
        var_e8:4.d = zmm8_1.d
        zmm1_1.d = zmm10.d f- zmm6_1.d
        var_dc.d = zmm9_1.d
        var_dc:4.d = zmm13.d
        zmm0_1 = zmm5_1
        int32_t var_d4_2 = zmm10.d
        zmm5_1.d = zmm5_1.d f* zmm3_1.d
        zmm12 = zmm1_1
        zmm0_1.d = zmm0_1.d f* zmm4_1.d
        zmm1_1.d = zmm1_1.d f* zmm3_1.d
        zmm4_1.d = zmm4_1.d f* zmm3_1.d
        zmm12.d = zmm12.d f* zmm2
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm12.d = zmm12.d f- zmm0_1.d
        zmm5_1.d = zmm5_1.d f- zmm2 f* zmm3_1.d
        zmm3_1.d = zmm4_1.d f* zmm4_1.d
        zmm0_1.d = zmm12.d f* zmm12.d
        zmm1_1.d = zmm5_1.d f* zmm5_1.d
        zmm3_1.d = zmm3_1.d f+ zmm0_1.d
        zmm3_1.d = zmm3_1.d f+ zmm1_1.d
        
        if (not(zmm3_1.d f>= 9.99999975e-05f))
            goto label_141745d3f
        
        zmm1_1 = _mm_sqrt_ss(0, zmm3_1.d)
        zmm0_1.d = 1f f/ zmm1_1.d
        zmm12.d = zmm12.d f* zmm0_1.d
        zmm4_1.d = zmm4_1.d f* zmm0_1.d
        zmm5_1.d = zmm5_1.d f* zmm0_1.d
        
        if (zmm1_1.d f<= 9.99999975e-05f)
            goto label_141745d3f
        
        zmm6_1 = *arg2
        zmm7_1 = *(arg2 + 4)
        zmm8_1 = arg2[1].d
        zmm0_1.d = zmm7_1.d f- var_1c8_1
        int128_t* var_1d8_1 = &var_dc
        zmm1_1.d = zmm8_1.d f- var_1c4_1
        zmm0_1.d = zmm0_1.d f* zmm4_1.d
        zmm1_1.d = zmm1_1.d f* zmm5_1.d
        zmm2 = (zmm6_1.d f- zmm11.d) f* zmm12.d f+ zmm0_1.d f+ zmm1_1.d
        zmm12.d = zmm12.d f* zmm2
        zmm4_1.d = zmm4_1.d f* zmm2
        zmm0_1.d = zmm6_1.d f- zmm12.d
        zmm5_1.d = zmm5_1.d f* zmm2
        int32_t var_168 = zmm0_1.d
        zmm0_1.d = zmm7_1.d f- zmm4_1.d
        int32_t var_164_1 = zmm0_1.d
        zmm0_1.d = zmm8_1.d f- zmm5_1.d
        int32_t var_160_1 = zmm0_1.d
        int32_t var_158
        uint128_t zmm14_1
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm13, zmm14_1 =
            sub_1415c64e0(&var_158, &var_168, &var_100, &var_f4, var_1d8_1, arg2)
        int32_t var_150
        zmm0_1.d = var_150.d f- zmm8_1.d
        zmm1_1.d = var_158.d f- zmm6_1.d
        float var_154
        zmm2 = var_154 f- zmm7_1.d
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        zmm2 = zmm2 * zmm2 f+ zmm1_1.d f+ zmm0_1.d
        zmm0_1.d = zmm14_1.d f* zmm14_1.d
        
        if (not(zmm2 f<= zmm0_1.d))
            zmm6_1 = var_1c4_1
            zmm7_1 = var_1c8_1
            zmm8_1 = var_1a0_1
        label_141745d3f:
            zmm10.d = zmm10.d f- zmm6_1.d
            zmm1_1.d = var_19c_1.d f- zmm6_1.d
            zmm9_1.d = zmm9_1.d f- zmm11.d
            zmm13.d = zmm13.d f- zmm7_1.d
            zmm8_1.d = zmm8_1.d f- zmm7_1.d
            zmm15.d = zmm15.d f- zmm11.d
            zmm3_1.d = zmm13.d f* zmm1_1.d
            zmm0_1.d = zmm10.d f* zmm8_1.d
            zmm10.d = zmm10.d f* zmm15.d
            zmm3_1.d = zmm3_1.d f- zmm0_1.d
            zmm13.d = zmm13.d f* zmm15.d
            zmm0_1 = zmm9_1
            zmm9_1.d = zmm9_1.d f* zmm8_1.d
            zmm0_1.d = zmm0_1.d f* zmm1_1.d
            zmm9_1.d = zmm9_1.d f- zmm13.d
            zmm10.d = zmm10.d f- zmm0_1.d
            zmm0_1.d = zmm3_1.d f* zmm3_1.d
            zmm1_1.d = zmm9_1.d f* zmm9_1.d
            zmm2 = zmm10.d f* zmm10.d f+ zmm0_1.d f+ zmm1_1.d
            
            if (zmm2 >= 9.99999975e-05f)
                zmm0_1 = _mm_sqrt_ss(0, zmm2)
                zmm4_1.d = 1f f/ zmm0_1.d
                zmm2 = zmm4_1.d f* zmm3_1.d
                zmm5_1.d = zmm4_1.d f* zmm10.d
                zmm4_1.d = zmm4_1.d f* zmm9_1.d
                
                if (zmm0_1.d f<= 9.99999975e-05f)
                    goto label_141745ef6
                
                zmm6_1 = *arg2
                zmm7_1 = *(arg2 + 4)
                zmm8_1 = arg2[1].d
                zmm3_1.d = zmm7_1.d f- var_1c8_1
                int128_t* var_1d8_2 = &var_e8
                zmm0_1.d = zmm6_1.d f- zmm11.d
                zmm1_1.d = zmm8_1.d f- var_1c4_1
                zmm3_1.d = zmm3_1.d f* zmm5_1.d
                zmm0_1.d = zmm0_1.d f* zmm2
                zmm1_1.d = zmm1_1.d f* zmm4_1.d
                zmm3_1.d = zmm3_1.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm1_1.d = zmm3_1.d f* zmm2
                zmm2 = zmm3_1.d f* zmm5_1.d
                zmm0_1.d = zmm6_1.d f- zmm1_1.d
                zmm3_1.d = zmm3_1.d f* zmm4_1.d
                int32_t var_148 = zmm0_1.d
                zmm0_1.d = zmm7_1.d f- zmm2
                int32_t var_144_1 = zmm0_1.d
                zmm0_1.d = zmm8_1.d f- zmm3_1.d
                int32_t var_140_1 = zmm0_1.d
                int32_t var_138
                uint128_t zmm14_2
                zmm6_1, zmm7_1, zmm8_1, zmm14_2 =
                    sub_1415c64e0(&var_138, &var_148, &var_100, &var_dc, var_1d8_2, arg2)
                int32_t var_130
                zmm0_1.d = var_130.d f- zmm8_1.d
                zmm1_1.d = var_138.d f- zmm6_1.d
                float var_134
                zmm2 = var_134 f- zmm7_1.d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                zmm2 = zmm2 * zmm2 f+ zmm1_1.d f+ zmm0_1.d
                zmm0_1.d = zmm14_2.d f* zmm14_2.d
                
                if (not(zmm2 f<= zmm0_1.d))
                    goto label_141745ef6
            else
            label_141745ef6:
                rsi += 8
                
                if (rsi == r15)
                    goto label_141745f31
                
                zmm3_1 = var_198_1
                zmm4_1 = var_194_1
                zmm5_1 = var_190_1
                zmm10 = var_18c_1
                zmm12 = var_188_1
                r9_1 = var_184_1
                rax_4 = var_1c0_1
                continue
        
        rbx = 1
        break

if (var_1b8 != 0)
    sub_140a74f90(var_1b8)

__security_check_cookie(rax_1 ^ &var_1f8)
return zx.q(rbx)
