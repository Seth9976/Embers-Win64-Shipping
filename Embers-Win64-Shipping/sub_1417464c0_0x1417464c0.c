// 函数: sub_1417464c0
// 地址: 0x1417464c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x14)
uint64_t* rbx = arg3
float zmm1[0x4] = *(arg1 + 0x18)
float zmm6[0x4] = *(arg2 + 8)
zmm1[0] = zmm1[0] - zmm6[0]
float zmm7[0x4] = *(arg1 + 0x10)
float zmm3[0x4] = zmm6
zmm3[0] = zmm3[0] f- *(arg1 + 0x24)
float zmm8[0x4] = *(arg2 + 4)
zmm2[0] = zmm2[0] - zmm8[0]
float zmm9[0x4] = *arg2
float zmm4[0x4] = zmm8
bool cond:0 = zmm9[0] f> *(arg1 + 0x1c)
zmm7[0] = zmm7[0] - zmm9[0]
float zmm10[0x4] = *(arg1 + 0x20)
float zmm5[0x4] = zmm9
zmm5[0] = zmm5[0] f- *(arg1 + 0x1c)
zmm4[0] = zmm4[0] - zmm10[0]
float var_60 = zmm3[0]
float var_74 = zmm2[0]
float var_78 = zmm7[0]
float var_70 = zmm1[0]
float var_68 = zmm5[0]
float var_64 = zmm4[0]

if (not(cond:0) && not(zmm8[0] > zmm10[0]) && not(zmm6[0] f> *(arg1 + 0x24))
        && not(zmm9[0] f< *(arg1 + 0x10)) && not(zmm8[0] f< *(arg1 + 0x14))
        && not(zmm6[0] f< *(arg1 + 0x18)))
    float temp0_1[0x4] = _mm_max_ss(zmm2[0], zmm4[0])
    zmm7 = _mm_max_ss(zmm7[0], zmm5[0])
    float temp0_3[0x4] = _mm_max_ss(zmm1[0], zmm3[0])
    int32_t rdx
    
    if (zmm7[0] <= temp0_1[0])
        if (temp0_1[0] <= temp0_3[0])
            zmm7 = temp0_3
            rdx = 2
        else
            rdx = 1
            zmm7 = temp0_1
    else if (zmm7[0] <= temp0_3[0])
        zmm7 = temp0_3
        rdx = 2
    else
        rdx = 0
    
    uint64_t rax_1 = zx.q(rdx)
    int64_t* rax_2
    
    if ((&var_78)[rax_1] >= (&var_68)[rax_1])
        int64_t* rax_3 = sub_141730f40(&var_78, rdx)
        var_68 = (*rax_3 ^ 0x80000000)[0]
        int32_t var_64_1 = (*(rax_3 + 4) ^ 0x80000000).d
        rax_2 = &var_68
        float var_60_1 = (rax_3[1].d ^ 0x80000000)[0]
    else
        rax_2 = sub_141730f40(&var_68, rdx)
    
    *rbx = *rax_2
    rbx[1].d = rax_2[1].d
    return zmm7

if (not(zmm5[0] > 0f))
    if (zmm7[0] <= 0f)
        zmm5 = zx.o(0)
    else
        zmm5 = zmm7 ^ 0x80000000

bool cond:1_1 = zmm4[0] > 0f
*arg3 = zmm5[0]

if (not(cond:1_1))
    if (zmm2[0] <= 0f)
        zmm4 = zx.o(0)
    else
        zmm4 = zmm2 ^ 0x80000000

bool cond:2_1 = zmm3[0] > 0f
arg3[1] = zmm4[0]

if (not(cond:2_1))
    if (zmm1[0] <= 0f)
        zmm3 = zx.o(0)
    else
        zmm3 = zmm1 ^ 0x80000000

arg3[2] = zmm3[0]
zmm10 = sub_141750780(rbx)

if (not(zmm10[0] >= 9.99999975e-05f))
    zmm7 = *rbx
    zmm7[0] - 0f
    zmm9 = 0x3f800000
    
    if (not(zmm7[0] <= 0f))
        *rbx = 0x3f800000
        zmm7 = 0x3f800000
    else if (not(zmm7[0] >= 0f))
        *rbx = 0xbf800000
        zmm7 = 0xbf800000
    
    zmm8 = *(rbx + 4)
    zmm8[0] - 0f
    
    if (not(zmm8[0] <= 0f))
        *(rbx + 4) = 0x3f800000
        zmm8 = 0x3f800000
    else if (not(zmm8[0] >= 0f))
        *(rbx + 4) = 0xbf800000
        zmm8 = 0xbf800000
    
    float zmm1_2[0x4] = rbx[1].d
    zmm1_2[0] - 0f
    
    if (zmm1_2[0] <= 0f)
        zmm9 = zmm1_2
        
        if (not(zmm1_2[0] >= 0f))
            rbx[1].d = 0xbf800000
            zmm9 = 0xbf800000
    else
        rbx[1].d = 0x3f800000
    
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm7[0] = zmm7[0] + zmm8[0]
    zmm7[0] = zmm7[0] + zmm9[0]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        float zmm2_1[0x4] = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        zmm2_1[0] = 0.5f - zmm7[0]
        temp0_4[0] = temp0_4[0] * zmm2_1[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] * (0.5f - zmm7[0])
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * zmm7[0]
        temp0_4[0] = temp0_4[0] * zmm8[0]
        temp0_4[0] = temp0_4[0] * zmm9[0]
        *rbx = temp0_4[0]
        *(rbx + 4) = temp0_4[0]
        rbx[1].d = temp0_4[0]

return zmm10
