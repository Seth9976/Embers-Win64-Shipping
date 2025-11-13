// 函数: sub_14092ac10
// 地址: 0x14092ac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = -1
int64_t rax_1
int32_t r8
rax_1, r8 = (*(*arg1 + 0x20))(arg1, arg3)
int32_t result
int64_t r9_1

if (rax_1 != 0)
    r9_1 = *arg1
    (*(r9_1 + 0x228))(arg1, arg3, zx.q(sbb.d(r8, r8, result_1 != 0)) & 5, r9_1)
else
    void* rax_3 = (**arg1)(arg1, arg3, arg4)
    *(rax_3 + 0xb8) = arg2
    void*** rax_4 = j_sub_140a82f30(0x48)
    void*** rdi_1
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_140919570(rax_4)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    void*** rbx = rax_6
    
    if (rax_6 == 0)
        rbx = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx = &data_142d42e98
        rbx[2] = rdi_1
    
    void*** var_38 = rdi_1
    void*** var_30_1 = rbx
    
    if (rax_3 + 0x98 == &var_38)
    label_14092ad3b:
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx)[1](rbx, 1)
    else
        *(rax_3 + 0x98) = rdi_1
        int64_t* rdi_2 = *(rax_3 + 0xa0)
        var_38 = nullptr
        
        if (rbx == rdi_2)
            goto label_14092ad3b
        
        void*** var_30_2 = nullptr
        *(rax_3 + 0xa0) = rbx
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx = var_30_2
            goto label_14092ad3b
    
    int512_t zmm0_1
    result, zmm0_1 = sub_14092aac0(arg1, zx.q(arg2), rax_3, arg4)
    result_1 = result
    *(rax_3 + 0x38) = 0
    
    if (result != 0x3e5)
        if (result == 0)
            r8 = sub_14092e650(arg1, zmm0_1)
        else
            int64_t r8_3 = *arg1
            r8 = (*(r8_3 + 0x28))(arg1, arg3, r8_3)
        
        r9_1 = *arg1
        (*(r9_1 + 0x228))(arg1, arg3, zx.q(sbb.d(r8, r8, result_1 != 0)) & 5, r9_1)

if (result_1 != 0 && result_1 != 0x3e5)
    result.b = 0
    return result

result.b = 1
return result
