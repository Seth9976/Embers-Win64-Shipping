// 函数: sub_1426e0f70
// 地址: 0x1426e0f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rcx_1
int16_t* var_18

if (*(arg1 + 0x6c) == 0)
    int64_t* rax_3 = sub_1426b3560(arg1, &var_18)
    int16_t* const rdi_2
    
    if (rax_3[1].d == 0)
        rdi_2 = &data_142d40450
    else
        rdi_2 = *rax_3
    
    *(arg1 + 0x68)
    sub_140a2e390(arg2, u"%s: %d loops", rdi_2)
    rcx_1 = var_18
else
    float zmm1[0x2] = *(arg1 + 0x70)
    int16_t* var_28
    
    if (zmm1[0] >= 0f)
        int16_t** rax_1 = sub_140a31300(&var_18, _mm_cvtps_pd(zmm1), 1)
        int16_t* const rdi_1 = &data_142d40450
        
        if (rax_1[1].d != 0)
            *rax_1
        
        int64_t* rax_2 = sub_1426b3560(arg1, &var_28)
        
        if (rax_2[1].d != 0)
            rdi_1 = *rax_2
        
        sub_140a2e390(arg2, u"%s: loop for %s seconds", rdi_1)
        int16_t* rcx_5 = var_28
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rcx_1 = var_18
    else
        int64_t* rax = sub_1426b3560(arg1, &var_28)
        int16_t* const rdi
        
        if (rax[1].d == 0)
            rdi = &data_142d40450
        else
            rdi = *rax
        
        sub_140a2e390(arg2, u"%s: infinite", rdi)
        rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return arg2
