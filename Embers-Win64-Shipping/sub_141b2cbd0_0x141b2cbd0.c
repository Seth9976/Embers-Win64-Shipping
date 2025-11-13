// 函数: sub_141b2cbd0
// 地址: 0x141b2cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_141af2be0(arg1 + 0xe8)

if (rax == -0x10)
label_141b2cc70:
    
    if (rax != 0)
        rax[1].d += 1
else
    void* rax_1
    
    if (rax[2] != 0)
        rax_1 = rax[3]
    
    if (rax[2] != 0 && rax_1 != 0 && *(rax_1 + 8) s> 0)
        goto label_141b2cc70
    
    if (rax != 0)
        rax[1].d += 1
    
    rax[2] = &rax[2]
    int64_t* rcx_1 = rax[3]
    
    if (rax != rcx_1)
        if (rax != 0)
            *(rax + 0xc) += 1
            rcx_1 = rax[3]
        
        if (rcx_1 != 0)
            int32_t temp7_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rax[3] = rax
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t temp6_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax)[1](rax, 1)
        
        goto label_141b2cc70

void** result = arg1 + 0xd0
void var_18
void** rax_6
void*** rcx_5

if (result != &var_18)
    *result = &rax[2]
    void*** rdi_1 = result[1]
    
    if (rax == rdi_1)
        goto label_141b2ccba
    
    result[1] = rax
    
    if (rdi_1 == 0)
        goto label_141b2cce1
    
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d != 1)
        goto label_141b2cce1
    
    result = (**rdi_1)(rdi_1)
    int32_t temp5_1 = *(rdi_1 + 0xc)
    *(rdi_1 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_141b2cce1
    
    rax_6 = *rdi_1
    rcx_5 = rdi_1
    goto label_141b2ccde

label_141b2ccba:

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d != 1)
        goto label_141b2cce1
    
    result = (**rax)(rax)
    int32_t temp1_1 = *(rax + 0xc)
    *(rax + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_141b2cce1
    
    rax_6 = *rax
    rcx_5 = rax
label_141b2ccde:
    result = rax_6[1](rcx_5, 1)
label_141b2cce1:
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            result = (**rax)(rax)
            int32_t temp8_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (temp8_1 == 1)
                return (*rax)[1](rax, 1)

return result
