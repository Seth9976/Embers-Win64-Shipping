// 函数: sub_141d7fa80
// 地址: 0x141d7fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x140) = 0
*(arg1 + 0x1b0) = 1
int64_t* rcx = *(arg1 + 0x110)

if (rcx == 0)
    goto label_141d7facc

if (*(arg1 + 0x1b1) != 0)
    (*(*rcx + 0x10))(rcx)
label_141d7facc:
    void*** rax_2 = j_sub_140a82f30(0x18)
    void*** rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        int64_t rdx_1 = *(arg1 + 0xbc)
        *rdi_1 = &data_143232000
        rdi_1[1] = 0
        int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rdx_1.d))
        arg2 = _mm_cvtepi32_pd(zx.q((rdx_1 u>> 0x20).d)) f/ temp0_1
        rdi_1[2] = arg2
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rdi_1
    
    void*** var_18 = rdi_1
    void*** var_10_1 = rbx_1
    
    if (arg1 + 0x110 == &var_18)
    label_141d7fbba:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *(arg1 + 0x110) = rdi_1
        int64_t* rdi_2 = *(arg1 + 0x118)
        var_18 = nullptr
        
        if (rbx_1 == rdi_2)
            goto label_141d7fbba
        
        void*** var_10_2 = nullptr
        *(arg1 + 0x118) = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_1 = var_10_2
            goto label_141d7fbba

int64_t* rcx_7 = *(arg1 + 0x110)
(*(*rcx_7 + 8))(rcx_7, arg2)

if (*(arg1 + 0x1b1) == 0)
    int64_t* rbx_2 = *(arg1 + 0x68)
    
    if ((rbx_2[0xa].b & 0xfd) != 0)
        rbx_2[0xa].b = 2
        
        if ((*(*rbx_2 + 0x280))(rbx_2) == 0)
            rbx_2[0xa].b = 1
    
    data_14399f940 = 0
    return sub_140b01070(zx.o(0)) __tailcall

data_14399f940 = 0x3f800000
char result = sub_140b01070(0x3f800000)
int64_t* rbx_3 = *(arg1 + 0x70)

if ((rbx_3[0xa].b & 0xfd) != 0)
    rbx_3[0xa].b = 2
    result = (*(*rbx_3 + 0x280))(rbx_3)
    
    if (result == 0)
        rbx_3[0xa].b = 1

return result
