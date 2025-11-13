// 函数: sub_140f81300
// 地址: 0x140f81300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
void* rcx = *(arg1 + 0x3c0)
int128_t zmm7
int128_t var_38 = zmm7

if (rcx == 0)
label_140f81473:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    if (sub_140f4a5f0(rcx) == 0)
        goto label_140f81473
    
    zmm7 = *(arg4 + 0x64)
    int64_t r14_1 = data_143e24388
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    void* rbp_1 = *(arg1 + 0x2b0)
    zmm7.d = zmm7.d f* *(r14_1 + (rcx_1 << 2))
    int128_t zmm9 = *(rbp_1 + 0x76c)
    int128_t zmm8 = *(rbp_1 + 0x768)
    zmm6.d = zmm9.d f- zmm7.d
    float arg_8
    sub_140f030e0(*(rbp_1 + 0x48), &arg_8)
    int32_t zmm0_1
    
    if (zmm8.d f>= 0f)
        zmm0_1 = _mm_min_ss(arg_8 f- *arg3, zmm8.d)
    else
        zmm0_1 = (zx.o(0)).d
    
    *(rbp_1 + 0x768) = zmm0_1
    
    if (zmm6.d f>= 0f)
        zmm0_1 = _mm_min_ss(arg5 f- arg3[1], zmm6.d)
    else
        zmm0_1 = (zx.o(0)).d
    
    *(rbp_1 + 0x76c) = zmm0_1
    
    if (zmm9.d f== zmm6.d)
        goto label_140f81473
    
    sub_140f030e0(*(*(arg1 + 0x2b0) + 0x48), &arg_8)
    float zmm0_2 = arg5 - arg3[1]
    
    if (zmm0_2 == 0f)
        zmm6 = zx.o(0)
    else
        zmm6.d = zmm6.d f/ zmm0_2
    
    int512_t zmm1_1
    zmm1_1.o = zmm6
    sub_140f44620(arg1 + 0x3e0, zmm1_1)
    sub_140e194c0(arg2)

return arg2
