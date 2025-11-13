// 函数: sub_140fc55b0
// 地址: 0x140fc55b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x18)
void*** result = result_1
int64_t* entry_rdx

if (result_1 == 0)
    result = nullptr
else
    int64_t* rcx_1 = *entry_rdx
    *result = &data_142ef1a90
    result[1] = 0
    result[2] = 0
    void var_28
    int64_t* rax_1 = (*(*rcx_1 + 0x98))(rcx_1, &var_28)
    int64_t* rbx_1 = rax_1[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    
    if (&result[1] == &var_18)
    label_140fc565b:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        result[1] = *rax_1
        int64_t* rdi_1 = result[2]
        
        if (rbx_1 == rdi_1)
            goto label_140fc565b
        
        result[2] = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp6_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

int64_t* rbx_3 = entry_rdx[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        int64_t r8_1 = *rbx_3
        int512_t entry_zmm1
        (*r8_1)(rbx_3, entry_zmm1, r8_1)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx_3
            (*(r8_2 + 8))(rbx_3, 1, r8_2)

return result
