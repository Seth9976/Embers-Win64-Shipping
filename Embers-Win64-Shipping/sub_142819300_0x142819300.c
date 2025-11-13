// 函数: sub_142819300
// 地址: 0x142819300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg6
int128_t* rdi = arg5
*arg4 = *rdi
float zmm5[0x4] = *(rsi + 0xc)
float zmm2[0x4] = *(rsi + 4)
float zmm3 = *(rsi + 8)
int128_t zmm9 = rdi[2].d
zmm9.d = zmm9.d f+ zmm9.d
float zmm6[0x4] = *(rdi + 0x24)
float zmm10[0x4] = *rsi
zmm6[0] = zmm6[0] + zmm6[0]
int128_t zmm8 = *(rdi + 0x28)
float zmm4 = zmm10[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm8.d = zmm8.d f+ zmm8.d
zmm5[0] = zmm5[0] - 0.5f
zmm2[0] = zmm2[0] * zmm6[0]
zmm4 = zmm4 f* zmm9.d + zmm2[0]
int128_t zmm11
zmm11.d = zmm9.d f* zmm3
zmm2[0] = zmm2[0] f* zmm8.d
zmm6[0] = zmm6[0] * zmm3
zmm4 = zmm4 + zmm8.d * zmm3
float zmm1 = zmm10[0]
zmm2[0] = zmm2[0] - zmm6[0]
zmm5[0] = zmm5[0] f* zmm9.d
zmm2[0] = zmm2[0] * zmm5[0]
zmm2[0] = zmm2[0] + zmm5[0]
zmm10[0] = zmm10[0] * zmm6[0]
zmm10[0] = zmm10[0] f* zmm8.d
zmm2[0] = zmm2[0] + zmm1 * zmm4
zmm1 = zmm2[0] * zmm4
zmm11.d = zmm11.d f- zmm10[0]
zmm2[0] = zmm2[0] f* zmm9.d
zmm2[0] = zmm2[0] f+ rsi[1].d
zmm10[0] = zmm10[0] - zmm2[0]
zmm11.d = zmm11.d f* zmm5[0]
zmm5[0] = zmm5[0] * zmm6[0]
zmm5[0] = zmm5[0] f* zmm8.d
zmm10[0] = zmm10[0] * zmm5[0]
zmm11.d = zmm11.d f+ zmm5[0]
float var_168 = zmm2[0]
zmm10[0] = zmm10[0] + zmm5[0]
zmm11.d = zmm11.d f+ zmm1
zmm10[0] = zmm10[0] + zmm4 * zmm3
zmm11.d = zmm11.d f+ *(rsi + 0x14)
zmm10[0] = zmm10[0] f+ *(rsi + 0x18)
arg6.d = zmm11.d
float var_164 = zmm10[0]
float var_160[0x4]
float* rax
float zmm10_1
rax, zmm10_1 = sub_1417c7990(rsi, &var_160, &rdi[1])
float zmm13[0x4] = *rax
float var_e8 = zmm13[0]
int128_t* r14 = arg7
float zmm8_1[0x4] = *(rdi + 0x44)
float zmm9_1 = *(rdi + 0x3c)
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm9_1 = zmm9_1 + zmm9_1
float zmm3_1 = *(r14 + 4)
float zmm2_1 = *r14
float zmm6_1 = *(r14 + 0xc)
float zmm4_1 = *(r14 + 8)
int32_t zmm11_1 = rax[1]
float zmm12[0x4] = rax[2]
float zmm14[0x4] = rax[3]
float var_d4 = arg6.d
float zmm1_1 = zmm8_1[0] * zmm4_1
float var_d0 = zmm10_1
zmm10_1 = rdi[4].d
zmm10_1 = zmm10_1 + zmm10_1
float var_d8 = zmm2[0]
zmm8_1[0] = zmm8_1[0] * zmm3_1
float zmm7_1 = zmm6_1 * zmm6_1 - 0.5f
int32_t var_e4 = zmm11_1
float arg_10 = zmm12[0]
float var_e0 = zmm12[0]
float zmm5_1 = zmm9_1 * zmm2_1 + zmm10_1 * zmm3_1 + zmm1_1
float var_dc = zmm14[0]
zmm8_1[0] = zmm8_1[0] - zmm10_1 * zmm4_1
zmm8_1[0] = zmm8_1[0] * zmm6_1
zmm8_1[0] = zmm8_1[0] + zmm7_1 * zmm9_1
float zmm0_1 = zmm8_1[0] * zmm2_1
zmm8_1[0] = zmm8_1[0] + zmm5_1 * zmm2_1
zmm8_1[0] = zmm8_1[0] f+ r14[1].d
float arg_20 = zmm8_1[0]
arg5.d = (zmm9_1 * zmm4_1 - zmm0_1) * zmm6_1 + zmm7_1 * zmm10_1
arg5.d = arg5.d + zmm5_1 * zmm3_1 f+ *(r14 + 0x14)
arg7.d = (zmm10_1 * zmm2_1 - zmm9_1 * zmm3_1) * zmm6_1 + zmm7_1 * zmm8_1[0]
    + zmm5_1 * zmm4_1 f+ *(r14 + 0x18)
float* rax_1
float zmm10_2[0x4]
float zmm11_2[0x4]
rax_1, zmm10_2, zmm11_2 = sub_1417c7990(r14, &var_160, rdi + 0x2c)
float zmm6_2[0x4] = *rax_1
float zmm8_2[0x4] = rax_1[1]
float var_148 = zmm6_2[0]
float zmm15[0x4] = rax_1[2]
float zmm9_2[0x4] = rax_1[3]
float zmm5_2[0x4] = arg_20
float zmm1_2 = zmm15[0]
float zmm4_2[0x4] = arg5.d
zmm6_2[0] = zmm6_2[0] * zmm13[0]
zmm8_2[0] = zmm8_2[0] * zmm11_2[0]
zmm1_2 = zmm1_2 * zmm12[0]
zmm6_2[0] = zmm6_2[0] + zmm8_2[0]
float var_144 = zmm8_2[0]
float var_140 = zmm15[0]
zmm9_2[0] = zmm9_2[0] * zmm14[0]
float var_13c = zmm9_2[0]
zmm6_2[0] = zmm6_2[0] + zmm1_2
float var_138 = zmm5_2[0]
float var_134 = zmm4_2[0]
float var_130 = zmm10_2[0]
zmm6_2[0] = zmm6_2[0] + zmm9_2[0]

if (not(zmm6_2[0] >= 0f))
    zmm6_2 ^= 0x80000000
    zmm8_2 ^= 0x80000000
    zmm15 ^= 0x80000000
    var_148 = zmm6_2[0]
    zmm9_2 ^= 0x80000000
    float var_144_1 = zmm8_2[0]
    float var_140_1 = zmm15[0]
    float var_13c_1 = zmm9_2[0]

int64_t* var_118 = arg1
zmm5_2[0] = zmm5_2[0] f- rsi[1].d
void* var_110 = arg1
zmm1_2 = zmm4_2[0] f- *(rsi + 0x14)
zmm10_2[0] = zmm10_2[0] f- *(rsi + 0x18)
*arg2 = zmm5_2[0]
float zmm2_2[0x4] = var_168
arg2[1] = zmm1_2
arg2[2] = zmm10_2[0]
float zmm0_2[0x4] = var_164
zmm0_2[0] = zmm0_2[0] f- *(rsi + 0x18)
zmm2_2[0] = zmm2_2[0] f- rsi[1].d
zmm1_2 = arg6.d f- *(rsi + 0x14)
zmm5_2[0] = zmm5_2[0] f- r14[1].d
zmm4_2[0] = zmm4_2[0] f- *(r14 + 0x14)
zmm10_2[0] = zmm10_2[0] f- *(r14 + 0x18)
float var_100 = zmm0_2[0]
zmm0_2 = 0x40000000
float var_108 = zmm2_2[0]
float var_104 = zmm1_2
float var_fc = zmm5_2[0]
float var_f8 = zmm4_2[0]
float var_f4 = zmm10_2[0]
float var_178
float zmm7_2[0x4]

if ((*(rdi + 0x7c) & 2) != 0)
    float zmm3_2[0x4] = zmm11_2 ^ 0x80000000
    zmm2_2 = zmm13 ^ 0x80000000
    zmm4_2 = zmm12 ^ 0x80000000
    zmm1_2 = zmm3_2[0]
    zmm10_2 = zmm2_2
    zmm10_2[0] = zmm10_2[0] * zmm9_2[0]
    zmm6_2[0] = zmm6_2[0] * zmm14[0]
    zmm3_2[0] = zmm3_2[0] * zmm9_2[0]
    zmm10_2[0] = zmm10_2[0] + zmm6_2[0]
    zmm1_2 = zmm1_2 * zmm15[0]
    zmm4_2[0] = zmm4_2[0] * zmm9_2[0]
    zmm4_2[0] = zmm4_2[0] * zmm8_2[0]
    zmm10_2[0] = zmm10_2[0] + zmm1_2
    zmm9_2[0] = zmm9_2[0] * zmm14[0]
    zmm1_2 = zmm4_2[0]
    zmm4_2[0] = zmm4_2[0] * zmm15[0]
    zmm1_2 = zmm1_2 * zmm6_2[0]
    zmm10_2[0] = zmm10_2[0] - zmm4_2[0]
    zmm8_2[0] = zmm8_2[0] * zmm14[0]
    zmm3_2[0] = zmm3_2[0] + zmm8_2[0]
    zmm2_2[0] = zmm2_2[0] * zmm15[0]
    zmm3_2[0] = zmm3_2[0] + zmm1_2
    zmm1_2 = zmm2_2[0]
    zmm2_2[0] = zmm2_2[0] * zmm6_2[0]
    zmm1_2 = zmm1_2 * zmm8_2[0]
    zmm3_2[0] = zmm3_2[0] - zmm2_2[0]
    zmm15[0] = zmm15[0] * zmm14[0]
    zmm9_2[0] = zmm9_2[0] - zmm2_2[0]
    bool cond:1_1 = zmm10_2[0] == 0f
    zmm4_2[0] = zmm4_2[0] + zmm15[0]
    zmm3_2[0] = zmm3_2[0] * zmm8_2[0]
    zmm3_2[0] = zmm3_2[0] * zmm6_2[0]
    zmm9_2[0] = zmm9_2[0] - zmm3_2[0]
    zmm4_2[0] = zmm4_2[0] + zmm1_2
    zmm9_2[0] = zmm9_2[0] - zmm4_2[0]
    zmm4_2[0] = zmm4_2[0] - zmm3_2[0]
    float var_174
    float var_170
    int32_t* rax_2
    
    if (cond:1_1)
        rax_2 = &var_160
        var_160 = data_142d3f660
    else
        zmm2_2 = 0x3f800000
        rax_2 = &var_178
        zmm1_2 = zmm9_2[0]
        zmm10_2[0] = zmm10_2[0] * zmm10_2[0]
        float temp0_1[0x4] = _mm_sqrt_ss(0, zmm1_2 * zmm9_2[0] + zmm10_2[0])
        zmm1_2 = zmm10_2[0]
        zmm2_2[0] = 1f / temp0_1[0]
        zmm1_2 = zmm1_2 * zmm2_2[0]
        zmm2_2[0] = zmm2_2[0] * 0f
        var_178 = zmm1_2
        var_174 = zmm2_2[0]
        var_170 = zmm2_2[0]
        zmm9_2[0] = zmm9_2[0] * zmm2_2[0]
        float var_16c_1 = zmm9_2[0]
    
    zmm5_2 = *rax_2 ^ 0x80000000
    zmm6_2 = rax_2[1] ^ 0x80000000
    zmm8_2 = rax_2[2] ^ 0x80000000
    zmm7_2 = rax_2[3]
    zmm1_2 = zmm3_2[0] * zmm8_2[0]
    zmm7_2[0] = zmm7_2[0] * zmm10_2[0]
    zmm7_2[0] = zmm7_2[0] * zmm3_2[0]
    zmm7_2[0] = zmm7_2[0] * zmm4_2[0]
    zmm9_2[0] = zmm9_2[0] * zmm5_2[0]
    zmm7_2[0] = zmm7_2[0] * zmm9_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm9_2[0]
    zmm4_2[0] = zmm4_2[0] * zmm6_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm1_2
    zmm1_2 = zmm4_2[0] * zmm5_2[0]
    zmm4_2[0] = zmm4_2[0] * zmm8_2[0]
    zmm7_2[0] = zmm7_2[0] - zmm4_2[0]
    zmm9_2[0] = zmm9_2[0] * zmm6_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm9_2[0]
    var_160[0] = zmm7_2[0]
    zmm10_2[0] = zmm10_2[0] * zmm8_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm1_2
    zmm1_2 = zmm10_2[0] * zmm6_2[0]
    zmm10_2[0] = zmm10_2[0] * zmm5_2[0]
    zmm7_2[0] = zmm7_2[0] - zmm10_2[0]
    zmm9_2[0] = zmm9_2[0] * zmm8_2[0]
    zmm7_2[0] = zmm7_2[0] - zmm10_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm9_2[0]
    var_160[1] = zmm7_2[0]
    zmm3_2[0] = zmm3_2[0] * zmm6_2[0]
    zmm3_2[0] = zmm3_2[0] * zmm5_2[0]
    zmm7_2[0] = zmm7_2[0] + zmm1_2
    zmm1_2 = *(rdi + 0x6c)
    zmm7_2[0] = zmm7_2[0] - zmm3_2[0]
    float var_124_1 = zmm1_2
    zmm7_2[0] = zmm7_2[0] - zmm3_2[0]
    float var_128 = rdi[7].d[0]
    zmm7_2[0] = zmm7_2[0] - zmm4_2[0]
    float var_120_1 = (*(rdi + 0x74))[0]
    var_160[2] = zmm7_2[0]
    var_160[3] = zmm7_2[0]
    float var_150
    char rax_3
    float zmm15_1
    rax_3, zmm13, zmm14, zmm15_1 = sub_14280fe80(&var_128, &var_160, &var_178, &var_150)
    zmm0_2 = 0x40000000
    zmm11_2 = zmm11_1
    zmm12 = arg_10
    
    if (rax_3 != 0)
        zmm7_2 = var_178
        zmm4_2 = var_174
        float zmm8_3 = var_170 * 2f
        float zmm9_3 = zmm11_2[0]
        *(arg1 + 0x4e) = 0
        zmm4_2[0] = zmm4_2[0] * 2f
        zmm1_2 = zmm12[0]
        *arg1 = 0
        zmm7_2[0] = zmm7_2[0] * 2f
        arg1[1].d = 0
        zmm14[0] = zmm14[0] * zmm14[0]
        var_110 = &arg1[0xa]
        zmm14[0] = zmm14[0] - 0.5f
        zmm13[0] = zmm13[0] * zmm7_2[0]
        zmm12[0] = zmm12[0] * zmm7_2[0]
        zmm13[0] = zmm13[0] * zmm4_2[0]
        zmm11_2[0] = zmm11_2[0] * zmm4_2[0]
        zmm11_2[0] = zmm11_2[0] + zmm13[0]
        zmm12[0] = zmm12[0] * zmm4_2[0]
        zmm9_3 = zmm9_3 * zmm8_3 - zmm12[0]
        zmm14[0] = zmm14[0] * zmm7_2[0]
        zmm11_2[0] = zmm11_2[0] + zmm1_2 * zmm8_3
        zmm1_2 = zmm13[0] * zmm11_2[0]
        zmm9_3 = zmm9_3 * zmm14[0] + zmm14[0]
        zmm13[0] = zmm13[0] * zmm8_3
        zmm12[0] = zmm12[0] - zmm13[0]
        zmm14[0] = zmm14[0] * zmm4_2[0]
        zmm9_3 = zmm9_3 + zmm1_2
        zmm14[0] = zmm14[0] * zmm8_3
        zmm1_2 = zmm11_2[0]
        zmm12[0] = zmm12[0] * zmm14[0]
        arg1[2].d = zmm9_3
        zmm1_2 = zmm1_2 * zmm11_2[0]
        zmm12[0] = zmm12[0] + zmm14[0]
        zmm11_2[0] = zmm11_2[0] * zmm7_2[0]
        zmm13[0] = zmm13[0] - zmm11_2[0]
        zmm12[0] = zmm12[0] * zmm11_2[0]
        zmm12[0] = zmm12[0] + zmm1_2
        zmm13[0] = zmm13[0] * zmm14[0]
        *(arg1 + 0x14) = zmm12[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm0_2 = var_150
        arg1[3].d = zmm13[0]
        arg1[4] = 0
        arg1[5].d = 0
        arg1[6].d = zmm9_3
        *(arg1 + 0x34) = zmm12[0]
        arg1[7].d = zmm13[0]
        int16_t rcx_3 = *(arg1 + 0x4c) | 0x10
        *(arg1 + 0xc) = zmm0_2[0]
        
        if (zmm15_1 f< *(rdi + 0x5c) || zmm15_1 f< *(rdi + 0x58))
            rcx_3 |= 1
            arg1[8].d = *(rdi + 0x58)
            *(arg1 + 0x44) = *(rdi + 0x5c)
        else
            bool cond:2_1 = zmm0_2[0] <= zmm15_1
            *(arg1 + 0x4e) = 0x401
            arg1[8].d = rdi[5].d
            *(arg1 + 0x44) = *(rdi + 0x54)
            
            if (not(cond:2_1))
                rcx_3 |= 8
            
            if (not(zmm15_1 f>= rdi[5].d))
                rcx_3 |= 4
        
        zmm0_2 = 0x40000000
        *(arg1 + 0x4c) = rcx_3
        *(arg1 + 0x2c) = 0
    
    zmm10_2 = arg7.d

zmm6_2 = arg_20
zmm7_2 = arg5.d
zmm6_2[0] = zmm6_2[0] - var_168
zmm7_2[0] = zmm7_2[0] f- arg6.d
zmm10_2[0] = zmm10_2[0] - var_164
zmm1_2 = zmm12[0]
zmm6_2[0] = zmm6_2[0] * zmm0_2[0]
zmm7_2[0] = zmm7_2[0] * zmm0_2[0]
zmm10_2[0] = zmm10_2[0] * zmm0_2[0]
zmm13[0] = zmm13[0] * zmm6_2[0]
zmm1_2 = zmm1_2 * zmm10_2[0]
zmm14[0] = zmm14[0] * zmm14[0]
zmm11_2[0] = zmm11_2[0] * zmm7_2[0]
zmm14[0] = zmm14[0] - 0.5f
zmm11_2[0] = zmm11_2[0] + zmm13[0]
zmm12[0] = zmm12[0] * zmm7_2[0]
zmm14[0] = zmm14[0] * zmm6_2[0]
zmm11_2[0] = zmm11_2[0] + zmm1_2
zmm14[0] = zmm14[0] * zmm7_2[0]
zmm1_2 = zmm11_2[0]
zmm14[0] = zmm14[0] * zmm10_2[0]
zmm1_2 = zmm1_2 * zmm10_2[0] - zmm12[0]
zmm13[0] = zmm13[0] * zmm11_2[0]
zmm14[0] = zmm14[0] - zmm1_2 * zmm14[0]
zmm1_2 = zmm12[0] * zmm6_2[0]
zmm12[0] = zmm12[0] * zmm11_2[0]
zmm14[0] = zmm14[0] + zmm13[0]
zmm13[0] = zmm13[0] * zmm10_2[0]
zmm13[0] = zmm13[0] * zmm7_2[0]
zmm1_2 = zmm1_2 - zmm13[0]
var_178 = zmm14[0]
zmm11_2[0] = zmm11_2[0] * zmm6_2[0]
zmm11_2[0] = zmm11_2[0] * zmm11_2[0]
zmm1_2 = zmm1_2 * zmm14[0]
zmm13[0] = zmm13[0] - zmm11_2[0]
zmm14[0] = zmm14[0] - zmm1_2
zmm13[0] = zmm13[0] * zmm14[0]
zmm14[0] = zmm14[0] - zmm13[0]
zmm14[0] = zmm14[0] + zmm11_2[0]
zmm14[0] = zmm14[0] + zmm12[0]
float var_174_1 = zmm14[0]
float var_170_1 = zmm14[0]
sub_142810290(&var_118, &var_e8, &var_148, &var_178, 7, 0)
return (var_110 - var_118) s/ 0x50
