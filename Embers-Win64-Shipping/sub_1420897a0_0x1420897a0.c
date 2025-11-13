// 函数: sub_1420897a0
// 地址: 0x1420897a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg1
int128_t var_50
__builtin_memset(&var_50, 0, 0x18)
float var_68
float zmm6_1 = sub_141fdef20(arg2, &var_68, zmm2, &var_50)

for (int32_t i = 0; i s< 6; i += 1)
    void* r10_1
    
    if (i == 0)
        r10_1 = arg1 + 4
    else if (i == 1)
        r10_1 = &arg1[1]
    else if (i == 2)
        r10_1 = arg1 + 8
    else if (i == 3)
        r10_1 = arg1 + 0x14
    else if (i == 4)
        r10_1 = arg1 + 0xc
    else
        r10_1 = arg1 + 0x18
    
    float var_64
    float var_60
    float var_5c
    float var_58
    float var_54
    int32_t* r9_1
    
    if (i == 0)
        r9_1 = &var_68
    else if (i == 1)
        r9_1 = &var_5c
    else if (i == 2)
        r9_1 = &var_64
    else if (i == 3)
        r9_1 = &var_58
    else if (i == 4)
        r9_1 = &var_60
    else
        r9_1 = &var_54
    
    void* r8
    
    if (i == 0)
        r8 = arg1 + 4
    else if (i == 1)
        r8 = &arg1[1]
    else if (i == 2)
        r8 = arg1 + 8
    else if (i == 3)
        r8 = arg1 + 0x14
    else if (i == 4)
        r8 = arg1 + 0xc
    else
        r8 = arg1 + 0x18
    
    float zmm0_1
    
    if (i == 0)
        zmm0_1 = var_68
    else if (i == 1)
        zmm0_1 = var_5c
    else if (i == 2)
        zmm0_1 = var_64
    else if (i == 3)
        zmm0_1 = var_58
    else if (i == 4)
        zmm0_1 = var_60
    else
        zmm0_1 = var_54
    
    float zmm1_1 = (*r8 - zmm0_1) * (*r10_1 f- *r9_1)
    float* r8_1
    
    if (i == 0)
        r8_1 = arg3
    else if (i == 1)
        r8_1 = arg3 + 0xc
    else if (i == 2)
        r8_1 = arg3 + 4
    else if (i == 3)
        r8_1 = arg3 + 0x10
    else if (i == 4)
        r8_1 = arg3 + 8
    else
        r8_1 = arg3 + 0x14
    
    void* rax_1
    
    if (i == 0)
        rax_1 = arg3
    else if (i == 1)
        rax_1 = arg3 + 0xc
    else if (i == 2)
        rax_1 = arg3 + 4
    else if (i == 3)
        rax_1 = arg3 + 0x10
    else if (i == 4)
        rax_1 = arg3 + 8
    else
        rax_1 = arg3 + 0x14
    
    if (not(zmm1_1 <= *rax_1 * *r8_1))
        zmm6_1 = zmm6_1 + zmm1_1

return _mm_sqrt_ss(0, zmm6_1)
