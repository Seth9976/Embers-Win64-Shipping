// 函数: sub_141c844b0
// 地址: 0x141c844b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t* rax_1 = (*(*rcx + 8))(rcx)
int64_t* rax_3 = sub_141c80b30(*arg1 + 0x78, sub_140a6b260(rax_1, 0x10), rax_1)

if (*rax_3 == 0)
    int64_t rax_4 = j_sub_140a82f30(0x28)
    int64_t rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = 0
    else
        __builtin_memset(rax_4, 0, 0x28)
    
    void*** rax_5 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *rbx_1 = &data_14320fd50
        rbx_1[2] = rdi_1
    
    int64_t var_28 = rdi_1
    void*** var_20_1 = rbx_1
    
    if (rax_3 == &var_28)
    label_141c845c3:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *rax_3 = rdi_1
        int64_t* rdi_2 = rax_3[1]
        var_28 = 0
        
        if (rbx_1 == rdi_2)
            goto label_141c845c3
        
        void*** var_20_2 = nullptr
        rax_3[1] = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_1 = var_20_2
            goto label_141c845c3

int64_t* rcx_7 = arg1[1]
void arg_8
**rax_3 = *(**rcx_7)(rcx_7, &arg_8)
*(*rax_3 + 0x18) = arg1[3]
int64_t result = *rax_3
*(result + 0x20) = 0
return result
