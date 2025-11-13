// 函数: sub_142818870
// 地址: 0x142818870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg5
*arg4 = *rbx
char rdi = *(rbx + 0x8c) & 1
int64_t rsi

if (rdi == 0 || rbx[7].d.d f> *(rbx + 0x74))
    rsi.b = 0
else
    rsi.b = 1

int128_t* r14 = arg6
int128_t zmm9 = rbx[2].d
int128_t zmm6 = *(rbx + 0x24)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm8 = *(rbx + 0x28)
zmm6.d = zmm6.d f+ zmm6.d
int128_t zmm5 = *(r14 + 0xc)
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm2 = *(r14 + 4)
int128_t zmm4 = *(r14 + 8)
int128_t zmm13 = *r14
int128_t zmm0
zmm0.d = zmm2.d f* zmm6.d
int128_t zmm7
zmm7.d = zmm5.d f* zmm5.d
int128_t zmm15
zmm15.d = zmm2.d f* zmm8.d
zmm7.d = zmm7.d f- 0.5f
int128_t zmm10
zmm10.d = zmm4.d f* zmm9.d
float zmm3 = zmm13.d f* zmm9.d f+ zmm0.d
zmm0.d = zmm4.d f* zmm6.d
zmm15.d = zmm15.d f- zmm0.d
zmm3 = zmm3 + zmm4.d f* zmm8.d
zmm0.d = zmm7.d f* zmm9.d
zmm15.d = zmm15.d f* zmm5.d
float zmm1 = zmm13.d * zmm3
zmm15.d = zmm15.d f+ zmm0.d
zmm4.d = zmm4.d f* zmm3
zmm0 = zmm13
zmm13.d = zmm13.d f* zmm6.d
zmm0.d = zmm0.d f* zmm8.d
zmm15.d = zmm15.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm9.d
zmm10.d = zmm10.d f- zmm0.d
zmm13.d = zmm13.d f- zmm2.d
zmm0 = zmm7
zmm7.d = zmm7.d f* zmm8.d
zmm15.d = zmm15.d f+ r14[1].d
zmm10.d = zmm10.d f* zmm5.d
zmm13.d = zmm13.d f* zmm5.d
zmm0.d = zmm0.d f* zmm6.d
zmm13.d = zmm13.d f+ zmm7.d
float arg_10 = zmm15.d
zmm10.d = zmm10.d f+ zmm0.d
zmm13.d = zmm13.d f+ zmm4.d
zmm10.d = zmm10.d f+ zmm1 * zmm3
zmm13.d = zmm13.d f+ *(r14 + 0x18)
zmm10.d = zmm10.d f+ *(r14 + 0x14)
float arg_20 = zmm13.d
float arg_8 = zmm10.d
float var_164
float* rax = sub_1417c7990(r14, &var_164, &rbx[1])
float zmm9_1 = *(rbx + 0x3c)
float zmm6_1 = rbx[4].d
zmm9_1 = zmm9_1 + zmm9_1
zmm6_1 = zmm6_1 + zmm6_1
int32_t zmm11 = rax[1]
int128_t zmm12 = rax[2]
int128_t zmm14 = rax[3]
float var_100 = *rax
int32_t var_fc = zmm11
int32_t var_f8 = zmm12.d
int32_t var_f4 = zmm14.d
int32_t var_f0 = zmm15.d
float var_ec = arg_8
int32_t var_e8 = zmm13.d
int128_t* r13 = arg7
float zmm8_1 = *(rbx + 0x44)
zmm8_1 = zmm8_1 + zmm8_1
float zmm4_1 = *(r13 + 0xc)
int128_t zmm2_1 = *(r13 + 4)
float zmm5_1 = *(r13 + 8)
zmm13 = *r13
zmm15.d = zmm2_1.d f* zmm8_1
float zmm7_1 = zmm4_1 * zmm4_1 - 0.5f
float zmm3_1 = zmm13.d * zmm9_1 + zmm2_1.d * zmm6_1 + zmm5_1 * zmm8_1
zmm15.d = zmm15.d f- zmm5_1 * zmm6_1
float zmm1_1 = zmm13.d * zmm3_1
zmm15.d = zmm15.d f* zmm4_1
zmm15.d = zmm15.d f+ zmm7_1 * zmm9_1
float zmm0_1 = zmm13.d * zmm8_1
zmm13.d = zmm13.d f* zmm6_1
zmm15.d = zmm15.d f+ zmm1_1
zmm15.d = zmm15.d f+ r13[1].d
arg6.d = zmm15.d
arg5.d = (zmm5_1 * zmm9_1 - zmm0_1) * zmm4_1 + zmm7_1 * zmm6_1
zmm2_1.d = zmm2_1.d f* zmm9_1
zmm13.d = zmm13.d f- zmm2_1.d
zmm13.d = zmm13.d f* zmm4_1
*(r13 + 0x14)
zmm13.d = zmm13.d f+ zmm7_1 * zmm8_1
zmm13.d = zmm13.d f+ zmm5_1 * zmm3_1
zmm13.d = zmm13.d f+ *(r13 + 0x18)
float* rax_1
int128_t zmm9_2
float zmm10_2
int128_t zmm11_1
rax_1, zmm9_2, zmm10_2, zmm11_1 = sub_1417c7990(r13, &var_164, rbx + 0x2c)
float zmm5_2 = arg6.d
float var_140 = zmm5_2
int32_t var_13c = zmm9_2.d
int128_t zmm3_2 = rax_1[1]
int128_t zmm4_2 = rax_1[2]
zmm15 = *rax_1
int128_t zmm7_2 = rax_1[3]
int32_t var_150 = zmm15.d
int32_t var_168 = zmm3_2.d
int32_t var_14c = zmm3_2.d
arg7.d = zmm4_2.d
int32_t var_148 = zmm4_2.d
int32_t var_144 = zmm7_2.d
int32_t var_138 = zmm13.d

if (not(zmm15.d * zmm10_2 + zmm3_2.d f* zmm11_1.d + zmm4_2.d f* zmm12.d + zmm7_2.d f* zmm14.d
        >= 0f))
    zmm3_2 ^= 0x80000000
    zmm4_2 ^= 0x80000000
    var_168 = zmm3_2.d
    arg7.d = zmm4_2.d
    var_150 = (zmm15 ^ 0x80000000).d
    int32_t var_14c_1 = zmm3_2.d
    int32_t var_148_1 = zmm4_2.d
    int32_t var_144_1 = (zmm7_2 ^ 0x80000000).d

int64_t* var_130 = arg1
float zmm0_2 = zmm13.d f- *(r14 + 0x18)
zmm3_2 = zmm13
zmm13.d = zmm13.d f- arg_20
float zmm1_2 = zmm9_2.d f- *(r14 + 0x14)
float zmm2_2 = zmm5_2 f- r14[1].d
arg2[2] = zmm0_2
zmm4_2 = zmm9_2
zmm9_2.d = zmm9_2.d f- arg_8
arg2[1] = zmm1_2
*arg2 = zmm2_2
zmm3_2.d = zmm3_2.d f- *(r13 + 0x18)
zmm4_2.d = zmm4_2.d f- *(r13 + 0x14)
float var_118 = arg_20 f- *(r14 + 0x18)
float var_11c = arg_8 f- *(r14 + 0x14)
int32_t var_10c = zmm3_2.d
zmm3_2.d = arg6.d.d f- arg_10
float var_120 = arg_10 f- r14[1].d
int32_t var_110 = zmm4_2.d
arg5.d = zmm9_2.d
zmm0_2 = arg5.d * 2f
zmm3_2.d = zmm3_2.d f* 2f
zmm4_2.d = zmm11_1.d f* zmm0_2
arg5.d = zmm0_2
zmm13.d = zmm13.d f* 2f
zmm4_2.d = zmm4_2.d f+ zmm10_2 f* zmm3_2.d
arg6.d = zmm3_2.d
float var_114 = zmm5_2 f- r13[1].d
arg_8 = zmm13.d
zmm13.d = zmm14.d f* zmm14.d
zmm4_2.d = zmm4_2.d f+ zmm12.d * arg_8
zmm13.d = zmm13.d f- 0.5f
zmm2_2 = zmm13.d f* zmm3_2.d
zmm3_2.d = zmm13.d f* arg5.d
var_164 = zmm2_2 - (zmm11_1.d * arg_8 - zmm12.d f* arg5.d) f* zmm14.d + zmm10_2 f* zmm4_2.d
zmm3_2.d = zmm3_2.d f- (zmm12.d f* arg6.d - zmm10_2 * arg_8) f* zmm14.d
zmm3_2.d = zmm3_2.d f+ zmm11_1.d f* zmm4_2.d
int32_t var_160 = zmm3_2.d
int32_t rax_2
rax_2.b = rsi.b != 0
float var_15c =
    zmm13.d * arg_8 - (zmm10_2 f* arg5.d - zmm11_1.d f* arg6.d) f* zmm14.d + zmm12.d f* zmm4_2.d
float zmm6_2[0x4]
float zmm7_3[0x4]
int128_t zmm8_2
float zmm9_3[0x4]
float zmm10_3[0x4]
float zmm11_2[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm14_1
float zmm15_1[0x4]
zmm6_2, zmm7_3, zmm8_2, zmm9_3, zmm10_3, zmm11_2, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
    sub_142810290(&var_130, &var_100, &var_150, &var_164, 7, rax_2 + 6)
int64_t rdx_3
int64_t rax_4

if (rsi.b == 0)
    bool cond:0_1 = (*(rbx + 0x8c) & 2) == 0
    int64_t* rdx_4 = arg1
    zmm12_1[0] = zmm12_1[0] * zmm6_2[0]
    float zmm4_3[0x4] = zmm11_2
    zmm4_3[0] = zmm4_3[0] * zmm6_2[0]
    zmm10_3[0] = zmm10_3[0] * zmm9_3[0]
    float zmm5_3[0x4] = zmm10_3
    zmm5_3[0] = zmm5_3[0] * zmm6_2[0]
    zmm10_3[0] = zmm10_3[0] + zmm4_3[0]
    zmm4_3[0] = zmm4_3[0] - zmm12_1[0]
    zmm10_3[0] = zmm10_3[0] + zmm12_1[0]
    zmm13_1[0] = zmm13_1[0] * zmm9_3[0]
    zmm9_3 = zmm12_1
    zmm9_3[0] = zmm9_3[0] * 2f
    zmm10_3[0] = zmm10_3[0] * zmm10_3[0]
    zmm9_3[0] = zmm9_3[0] - zmm5_3[0]
    zmm4_3[0] = zmm4_3[0] f* zmm14_1
    zmm13_1[0] = zmm13_1[0] * zmm6_2[0]
    zmm4_3[0] = zmm4_3[0] + zmm13_1[0]
    zmm11_2[0] = zmm11_2[0] * zmm10_3[0]
    zmm9_3[0] = zmm9_3[0] f* zmm14_1
    zmm4_3[0] = zmm4_3[0] + zmm10_3[0]
    zmm11_2[0] = zmm11_2[0] * 2f
    zmm9_3[0] = zmm9_3[0] + zmm13_1[0]
    zmm5_3[0] = zmm5_3[0] - zmm11_2[0]
    zmm9_3[0] = zmm9_3[0] + zmm11_2[0]
    zmm12_1[0] = zmm12_1[0] * zmm10_3[0]
    zmm5_3[0] = zmm5_3[0] f* zmm14_1
    zmm5_3[0] = zmm5_3[0] + zmm13_1[0]
    zmm5_3[0] = zmm5_3[0] + zmm12_1[0]
    float zmm0_3[0x4]
    float zmm1_3[0x4]
    float zmm2_3[0x4]
    float zmm3_3[0x4]
    
    if (not(cond:0_1))
        int64_t* rcx_5 = rdx_4
        zmm3_3 = zmm4_3 ^ zmm8_2
        zmm2_3 = zmm9_3 ^ zmm8_2
        zmm1_3 = zmm5_3 ^ zmm8_2
        rdx_4 = &rdx_4[0xa]
        *(rcx_5 + 0x4e) = 0
        *rcx_5 = 0
        rcx_5[1].d = 0
        rcx_5[2].d = zmm3_3[0]
        *(rcx_5 + 0x14) = zmm2_3[0]
        rcx_5[3].d = zmm1_3[0]
        rcx_5[4] = 0
        rcx_5[5].d = 0
        zmm0_3 = *(rbx + 0x58)
        zmm3_3[0] = zmm3_3[0] * zmm0_3[0]
        zmm2_3[0] = zmm2_3[0] * zmm0_3[0]
        rcx_5[6].d = zmm3_3[0]
        zmm1_3[0] = zmm1_3[0] * zmm0_3[0]
        *(rcx_5 + 0x34) = zmm2_3[0]
        rcx_5[7].d = zmm1_3[0]
        *(rcx_5 + 0x1c) = rbx[5].d
        *(rcx_5 + 0x2c) = (*(rbx + 0x54) ^ zmm8_2)[0]
        *(rcx_5 + 0x3c) = *(rbx + 0x54)
        
        if ((*(rbx + 0x8c) & 4) != 0)
            float temp0_1 = rbx[5].d
            zmm6_2[0] - temp0_1
            bool cond:1_1 = zmm6_2[0] <= temp0_1
            
            if (not(zmm6_2[0] >= temp0_1))
                *(rcx_5 + 0x2c) = 0
                cond:1_1 = zmm6_2[0] f<= rbx[5].d
            
            if (not(cond:1_1))
                *(rcx_5 + 0x3c) = 0
        
        *(rcx_5 + 0x4c) |= 0x20
    
    if (rdi != 0)
        zmm10_3 ^= zmm8_2
        zmm15_1[0] = zmm15_1[0] f* zmm14_1
        zmm3_3 = zmm10_3
        zmm3_3[0] = zmm3_3[0] * zmm7_3[0]
        zmm11_2 ^= zmm8_2
        zmm7_3[0] = zmm7_3[0] f* zmm14_1
        zmm11_2[0] = zmm11_2[0] f* arg7.d
        zmm3_3[0] = zmm3_3[0] + zmm15_1[0]
        zmm11_2[0] = zmm11_2[0] f* var_168
        zmm12_1 ^= zmm8_2
        zmm10_3[0] = zmm10_3[0] * zmm15_1[0]
        zmm12_1[0] = zmm12_1[0] f* var_168
        zmm3_3[0] = zmm3_3[0] + zmm11_2[0]
        zmm12_1[0] = zmm12_1[0] f* arg7.d
        zmm7_3[0] = zmm7_3[0] - zmm10_3[0]
        zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
        zmm7_3[0] = zmm7_3[0] - zmm11_2[0]
        zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
        zmm7_3[0] = zmm7_3[0] - zmm12_1[0]
        zmm7_3[0] = zmm7_3[0] * zmm7_3[0]
        zmm7_3[0] = zmm7_3[0] + zmm3_3[0]
        float temp0_2[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm7_3[0])
        
        if (not(temp0_2[0] == zmm6_2[0]))
            zmm0_3 = 0x3f800000
            zmm0_3[0] = 1f / temp0_2[0]
            zmm3_3[0] = zmm3_3[0] * zmm0_3[0]
            zmm7_3[0] = zmm7_3[0] * zmm0_3[0]
        
        temp0_2[0] = temp0_2[0] - 9.99999997e-07f
        
        if (temp0_2[0] < zmm6_2[0])
            zmm3_3 = zmm6_2
        else
            zmm7_3[0] = zmm7_3[0] + 1f
            zmm3_3[0] = zmm3_3[0] / zmm7_3[0]
        
        zmm11_2 = rbx[8].d
        zmm7_3 = *(rbx + 0x78)
        zmm10_3 = *(rbx + 0x7c)
        
        if (zmm6_2[0] f< *(rbx + 0x68) || not(zmm6_2[0] f>= *(rbx + 0x64)))
            zmm11_2 = zmm6_2
        
        zmm10_3[0] = zmm10_3[0] + zmm11_2[0]
        
        if (not(zmm3_3[0] >= zmm10_3[0]))
            int64_t* rcx_6 = rdx_4
            zmm10_3[0] = zmm10_3[0] - zmm3_3[0]
            zmm2_3 = zmm4_3 ^ zmm8_2
            zmm1_3 = zmm9_3 ^ zmm8_2
            rdx_4 = &rdx_4[0xa]
            *(rcx_6 + 0x4e) = 0
            zmm0_3 = zmm5_3 ^ zmm8_2
            zmm10_3[0] = zmm10_3[0] * -4f
            *rcx_6 = 0
            rcx_6[1].d = 0
            rcx_6[2].d = zmm2_3[0]
            *(rcx_6 + 0x14) = zmm1_3[0]
            rcx_6[3].d = zmm0_3[0]
            rcx_6[4] = 0
            rcx_6[5].d = 0
            rcx_6[6].d = zmm2_3[0]
            *(rcx_6 + 0x34) = zmm1_3[0]
            rcx_6[7].d = zmm0_3[0]
            int16_t r8_3 = *(rcx_6 + 0x4c) | 0x10
            *(rcx_6 + 0xc) = zmm10_3[0]
            
            if (zmm6_2[0] f< *(rbx + 0x68) || zmm6_2[0] f< *(rbx + 0x64))
                r8_3 |= 1
                rcx_6[8].d = *(rbx + 0x64)
                *(rcx_6 + 0x44) = *(rbx + 0x68)
            else
                bool cond:3_1 = zmm10_3[0] <= zmm6_2[0]
                *(rcx_6 + 0x4e) = 0x401
                rcx_6[8].d = *(rbx + 0x5c)
                *(rcx_6 + 0x44) = rbx[6].d
                
                if (not(cond:3_1))
                    r8_3 |= 8
                
                if (not(zmm6_2[0] f>= *(rbx + 0x5c)))
                    r8_3 |= 4
            
            *(rcx_6 + 0x4c) = r8_3
            *(rcx_6 + 0x2c) = 0
        
        zmm7_3[0] = zmm7_3[0] - zmm11_2[0]
        
        if (not(zmm3_3[0] <= zmm7_3[0]))
            int64_t* rcx_7 = rdx_4
            zmm7_3[0] = zmm7_3[0] - zmm3_3[0]
            rdx_4 = &rdx_4[0xa]
            *(rcx_7 + 0x4e) = 0
            zmm7_3[0] = zmm7_3[0] * 4f
            *rcx_7 = 0
            rcx_7[1].d = 0
            rcx_7[2].d = zmm4_3[0]
            *(rcx_7 + 0x14) = zmm9_3[0]
            rcx_7[3].d = zmm5_3[0]
            rcx_7[4] = 0
            rcx_7[5].d = 0
            rcx_7[6].d = zmm4_3[0]
            *(rcx_7 + 0x34) = zmm9_3[0]
            rcx_7[7].d = zmm5_3[0]
            int16_t r8_4 = *(rcx_7 + 0x4c) | 0x10
            *(rcx_7 + 0xc) = zmm7_3[0]
            
            if (zmm6_2[0] f< *(rbx + 0x68) || zmm6_2[0] f< *(rbx + 0x64))
                r8_4 |= 1
                rcx_7[8].d = *(rbx + 0x64)
                *(rcx_7 + 0x44) = *(rbx + 0x68)
            else
                bool cond:4_1 = zmm7_3[0] <= zmm6_2[0]
                *(rcx_7 + 0x4e) = 0x401
                rcx_7[8].d = *(rbx + 0x5c)
                *(rcx_7 + 0x44) = rbx[6].d
                
                if (not(cond:4_1))
                    r8_4 |= 8
                
                if (not(zmm6_2[0] f>= *(rbx + 0x5c)))
                    r8_4 |= 4
            
            *(rcx_7 + 0x4c) = r8_4
            *(rcx_7 + 0x2c) = 0
    
    int64_t rax_15
    rdx_3:rax_15 = muls.dp.q(0x6666666666666667, rdx_4 - var_130)
else
    rdx_3:rax_4 = muls.dp.q(0x6666666666666667, arg1 - var_130)
int64_t rdx_6 = rdx_3 s>> 5
return (rdx_6 u>> 0x3f) + rdx_6
