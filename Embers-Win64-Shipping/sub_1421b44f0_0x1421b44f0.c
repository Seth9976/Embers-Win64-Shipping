// 函数: sub_1421b44f0
// 地址: 0x1421b44f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)

if (arg3 s> 0)
    zmm6 = arg2
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
    zmm6[0] = zmm6[0] f/ zmm0.d
label_1421b4544:
    int32_t rcx_2 = arg1[0x23].d + arg3 + arg4
    char rax
    
    if (rcx_2 s>= arg1[0x24].d)
        void* rax_1 = *arg1
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_2))
        int64_t r9 = *(rax_1 + 0x18)
        _mm_sqrt_ss(0, _mm_sqrt_ss(0, zmm0.d)[0])
        arg2[0]
        rax = r9()
    
    if (rcx_2 s< arg1[0x24].d || rax == 1)
        float arg_8 = zmm6[0]
        float arg_18 = arg2[0]
        int64_t var_90 = 0
        int64_t var_98 = arg1[5]
        int32_t rax_4 = arg1[0x24].d - arg1[0x23].d
        int64_t* var_88 = arg1
        int64_t var_68_1 = arg5
        
        if (arg3 s<= rax_4)
            rax_4 = arg3
        
        int32_t arg_20 = rax_4
        float* var_80_1 = &arg_18
        int32_t* var_78_1 = &arg_20
        float* var_70_1 = &arg_8
        int64_t* var_58_1 = &var_98
        int64_t* var_50_1 = &var_90
        int64_t var_60_1 = arg6
        arg_18 = sub_1421abbe0(&var_88, *(arg1[2] + 0x37) & 1)
        var_98 = 0
        arg_8 = 0f
        var_90 = arg1[5]
        int32_t rax_8 = arg1[0x24].d - arg1[0x23].d
        int64_t var_68_2 = arg5
        
        if (arg4 s<= rax_8)
            rax_8 = arg4
        
        var_88 = arg1
        arg_20 = rax_8
        float* var_80_2 = &arg_18
        int32_t* var_78_2 = &arg_20
        float* var_70_2 = &arg_8
        int64_t* var_58_2 = &var_90
        int64_t* var_50_2 = &var_98
        int64_t var_60_2 = arg6
        char rdx_2
        
        if ((*(arg1[2] + 0x37) & 1) == 0)
            rdx_2 = 0
        else
            rdx_2 = 1
        
        sub_1421abbe0(&var_88, rdx_2)
else if (arg4 s> 0)
    goto label_1421b4544
