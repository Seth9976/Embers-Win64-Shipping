// 函数: sub_1423e5c10
// 地址: 0x1423e5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_143341660

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_143343558
    rbx[2] = rdi

void*** var_18 = rdi
void*** var_10 = rbx
void**** result = &var_18

if (arg1 + 0xb80 == &var_18)
label_1423e5ced:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*rbx)[1](rbx, 1)
else
    *(arg1 + 0xb80) = rdi
    int64_t* rdi_1 = *(arg1 + 0xb88)
    var_18 = nullptr
    
    if (rbx == rdi_1)
        goto label_1423e5ced
    
    void*** var_10_1 = nullptr
    *(arg1 + 0xb88) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx = var_10_1
        goto label_1423e5ced

return result
