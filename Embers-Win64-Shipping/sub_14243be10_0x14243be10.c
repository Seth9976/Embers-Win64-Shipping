// 函数: sub_14243be10
// 地址: 0x14243be10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg4 != 0)
    float zmm2[0x2] = (*arg2)[3]
    float zmm0[0x2] = (*arg2)[5]
    _mm_cvtps_pd(arg2[2][0])
    zmm2 = _mm_cvtps_pd(zmm2)
    float var_98_1[0x2] = _mm_cvtps_pd(zmm0)
    int16_t* var_78
    sub_140a2e390(&var_78, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    int16_t* const rdi_1 = &data_142d40450
    zmm2 = *arg2
    float zmm0_1[0x2] = arg2[1][0]
    int16_t* const rbp_1 = &data_142d40450
    _mm_cvtps_pd((*arg2)[1])
    int32_t var_70
    
    if (var_70 != 0)
        rbp_1 = var_78
    
    zmm2 = _mm_cvtps_pd(zmm2)
    float var_98_2[0x2] = _mm_cvtps_pd(zmm0_1)
    int64_t var_88
    sub_140a2e390(&var_88, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    
    if (arg3[1].d != 0)
        rdi_1 = *arg3
    
    int16_t* const var_98_3 = rbp_1
    int64_t var_68
    sub_140a2e390(&var_68, u"LogBox: '%s' - BoxMin: (%s) | BoxMax: (%s)", rdi_1)
    void var_48
    int64_t* rax = sub_140aae2f0(&var_48, &var_68)
    void var_58
    void var_30
    void arg_28
    sub_140ad9270(sub_140accdf0(&var_30, &arg_28), &var_58, rax)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    result = sub_140acd9c0(&var_30)
    int64_t* var_40
    
    if (var_40 != 0)
        result = var_40[1].d
        var_40[1].d -= 1
        
        if (result == 1)
            result = (**var_40)(var_40)
            int32_t rdi_2 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_40 + 8))(var_40, zx.q(rdi_2))
    
    int64_t rcx_11 = var_68
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_88
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_78
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)

int16_t* rcx_14 = *arg3

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
