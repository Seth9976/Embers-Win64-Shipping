// 函数: sub_142404980
// 地址: 0x142404980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    data_143f5b828 = rax
    return rax

int64_t rax_1 = 0
*rax = 0
rax[1] = 0

if (data_143de5426 == 0)
    void* rdx_1 = *(data_143e29f28 + 0x20)
    int64_t* rbx_1 = *(rdx_1 + 0x10)
    rax_1 = *(rdx_1 + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
    
    void var_18
    int64_t rax_3
    int64_t* rcx_3
    
    if (rax != &var_18)
        *rax = rax_1
        int64_t* rdi_1 = rax[1]
        
        if (rbx_1 == rdi_1)
            goto label_142404a19
        
        rax[1] = rbx_1
        
        if (rdi_1 == 0)
            goto label_142404a40
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            goto label_142404a40
        
        rax_1 = (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 != 1)
            goto label_142404a40
        
        rax_3 = *rdi_1
        rcx_3 = rdi_1
        goto label_142404a3d
    
label_142404a19:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d != 1)
            goto label_142404a40
        
        rax_1 = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 != 1)
            goto label_142404a40
        
        rax_3 = *rbx_1
        rcx_3 = rbx_1
    label_142404a3d:
        rax_1 = (*(rax_3 + 8))(rcx_3, 1)
    label_142404a40:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                rax_1 = (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    rax_1 = (*(*rbx_1 + 8))(rbx_1, 1)

data_143f5b828 = rax
return rax_1
