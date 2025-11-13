// 函数: sub_140b75940
// 地址: 0x140b75940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg3
int64_t result
int64_t* rbx
uint128_t var_18

if (rsi == 0)
    int64_t* rax_6 = j_sub_140a82f30(0x20)
    int64_t* rdi_3 = rax_6
    
    if (rax_6 == 0)
        rdi_3 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rdi_3 = &data_142d85518
        rdi_3[2] = &data_142d84e10
        rdi_3[3].d = 1
    
    uint128_t zmm0_1 = (&rdi_3[2]).o
    var_18 = zmm0_1
    void* rax_7 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    result = sub_140b747b0(arg1, arg2, &var_18)
    int64_t* rbx_1 = var_18:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    rbx = rdi_3
else
    rbx = arg3[1]
    
    if (rbx != 0)
        rbx[1].d += 1
    
    void*** rax = j_sub_140a82f30(0x30)
    void*** rdi = rax
    
    if (rax == 0)
        rdi = nullptr
    else
        rax[1].d = 1
        *(rax + 0xc) = 1
        *rdi = &data_142d84f48
        var_18.q = rsi
        var_18:8.q = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        sub_140669820(&rdi[2], &var_18)
    
    uint128_t zmm0 = (&rdi[2]).o
    var_18 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    result = sub_140b747b0(arg1, arg2, &var_18)
    int64_t* rdi_1 = var_18:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            result = (**rdi)(rdi)
            int32_t temp7_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*rdi)[1](rdi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
