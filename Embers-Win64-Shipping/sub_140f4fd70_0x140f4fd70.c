// 函数: sub_140f4fd70
// 地址: 0x140f4fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg3 + 0x28)
float zmm4 = *(arg3 + 0x24)
int128_t zmm6 = *(arg3 + 0x1c)
uint128_t zmm7 = arg3[2].d
int128_t zmm8 = *(arg4 + 0x18)
uint128_t zmm0
zmm0.d = zmm7.d f* zmm4
uint128_t zmm9 = *(arg4 + 0x1c)
int128_t zmm10
zmm10.d = zmm8.d f- *(arg3 + 0x2c)
zmm8.d = zmm8.d f- *(arg3 + 0x2c)
float zmm1 = zmm6.d * zmm2 f- zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f- arg3[3].d
zmm0.d = zmm0.d f- arg3[3].d
float zmm5 = 1f / zmm1
zmm6.d = zmm6.d f* zmm5
zmm7.d = zmm7.d f* zmm5
zmm10.d = zmm10.d f* zmm2 * zmm5
zmm0.d = zmm0.d f* zmm4 * zmm5
zmm9.d = zmm9.d f* zmm6.d
zmm8.d = zmm8.d f* zmm7.d
zmm10.d = zmm10.d f- zmm0.d
zmm9.d = zmm9.d f- zmm8.d
void* var_e8
int32_t zmm9_1
int32_t zmm10_1
zmm9_1, zmm10_1 = sub_140f2bf70(arg1, &var_e8, arg3, zmm0)
int32_t r8 = *(arg1 + 0x2d8)
int32_t rbx_1 = 1
float zmm2_1 = *(arg1 + 0x308) * 0.5f
int32_t rax = 1
void* rsi = var_e8
float zmm3 = *(arg1 + 0x304) * 0.5f
int32_t var_e0
float zmm0_1
int128_t zmm1_1

if (r8 == 0)
    if (var_e0 s<= 1)
        goto label_140f4feda
    
    zmm1_1 = *(rsi + 4)
    void* rcx = rsi + 4
    
    while (true)
        zmm0_1 = *(rcx + 8) f* *(rcx - 4) f+ zmm1_1.d
        
        if (not(zmm1_1.d f<= zmm0_1))
            zmm0_1 = zmm1_1.d
        
        zmm1_1 = *(rcx + 0x14)
        rcx += 0x14
        
        if (not(zmm10_1 f<= zmm0_1 - zmm2_1 + zmm3) && zmm10_1 f< zmm1_1.d + zmm2_1 - zmm3)
            break
        
        rax += 1
        
        if (rax s>= var_e0)
            goto label_140f4feda
    
    goto label_140f4ff99

if (var_e0 s<= 1)
label_140f4feda:
    *arg2 = 0
    __builtin_memset(&arg2[8], 0, 0x30)
    *(arg2 + 0x38) = 1
else
    zmm1_1 = *(rsi + 8)
    void* rcx_2 = rsi + 8
    
    while (true)
        zmm0_1 = *(rcx_2 - 8) f* *(rcx_2 + 8) f+ zmm1_1.d
        
        if (not(zmm1_1.d f<= zmm0_1))
            zmm0_1 = zmm1_1.d
        
        zmm1_1 = *(rcx_2 + 0x14)
        rcx_2 += 0x14
        
        if (not(zmm9_1 f<= zmm0_1 - zmm2_1 + zmm3) && zmm9_1 f< zmm2_1 f+ zmm1_1.d - zmm3)
            break
        
        rax += 1
        
        if (rax s>= var_e0)
            goto label_140f4feda
    
label_140f4ff99:
    
    if (rax == 0)
        goto label_140f4feda
    
    char var_d8
    char var_98
    int128_t* rdx_2
    int128_t* r8_1
    int128_t* r9
    int32_t* r10_1
    int32_t r11_1
    
    if (r8 != 0)
        var_d8 = 1
        int128_t var_d0
        r9 = &var_d0
        __builtin_memset(&var_d0, 0, 0x30)
        int32_t var_a0 = 4
        int128_t var_c0
        rdx_2 = &var_c0
        int128_t var_b0
        r8_1 = &var_b0
        rbx_1 = 0
        r10_1 = &var_a0
        r11_1 = 2
    else
        var_98 = 1
        int128_t var_90
        r9 = &var_90
        __builtin_memset(&var_90, 0, 0x30)
        int32_t var_60 = 3
        int128_t var_80
        rdx_2 = &var_80
        int128_t var_70
        r8_1 = &var_70
        r11_1 = 0
        r10_1 = &var_60
    
    int64_t rax_2 = *(r9 + 8)
    *(r9 + 8) = 0
    *r9 = 0
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = rax_2
    *(arg2 + 0x18) = *rdx_2
    int64_t rax_4 = *(rdx_2 + 8)
    *(rdx_2 + 8) = 0
    *(arg2 + 0x20) = rax_4
    *rdx_2 = 0
    *(arg2 + 0x28) = *r8_1
    int64_t rax_6 = *(r8_1 + 8)
    *(r8_1 + 8) = 0
    *(arg2 + 0x30) = rax_6
    *r8_1 = 0
    *(arg2 + 0x38) = *r10_1
    
    if (r11_1 != 0)
        sub_140ddf250(&var_d8)
    
    if (rbx_1 != 0)
        sub_140ddf250(&var_98)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
