// 函数: sub_14243c180
// 地址: 0x14243c180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg5 != 0)
    int128_t zmm6 = *(arg2 + 8)
    int128_t zmm7 = *(arg2 + 4)
    int128_t zmm8 = _mm_cvtps_pd((*arg2).q)
    _mm_cvtps_pd(zmm7.q)
    zmm6 = _mm_cvtps_pd(zmm6.q)
    int64_t var_c8_1 = zmm6.q
    int16_t* var_a8
    sub_140a2e390(&var_a8, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm8.q)
    int16_t* const rbx_1 = &data_142d40450
    int64_t var_c8_2 = zmm6.q
    int16_t* const rdi_1 = &data_142d40450
    int32_t var_a0
    
    if (var_a0 != 0)
        rdi_1 = var_a8
    
    int64_t var_b8
    sub_140a2e390(&var_b8, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm8.q)
    
    if (arg4[1].d != 0)
        rbx_1 = *arg4
    
    int16_t* const var_c8_3 = rdi_1
    int64_t var_98
    sub_140a2e390(&var_98, u"Log: '%s' - segment from (%s) to (%s)", rbx_1)
    void var_78
    int64_t* rax = sub_140aae2f0(&var_78, &var_98)
    void var_88
    void var_60
    void arg_38
    sub_140ad9270(sub_140accdf0(&var_60, &arg_38), &var_88, rax)
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp2_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    result = sub_140acd9c0(&var_60)
    int64_t* var_70
    
    if (var_70 != 0)
        result = var_70[1].d
        var_70[1].d -= 1
        
        if (result == 1)
            result = (**var_70)(var_70)
            int32_t rdi_2 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_70 + 8))(var_70, zx.q(rdi_2))
    
    int64_t rcx_11 = var_98
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_b8
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_a8
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)

int16_t* rcx_14 = *arg4

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
