// 函数: sub_141882170
// 地址: 0x141882170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int32_t result

if (rbx == 0)
label_1418822e1:
    int64_t* rbx_3 = arg2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = arg3[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rdi_2 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_2))
    
    result.b = 0
else
    result = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        result = rbx[1].d
        z_1 = false
    
    if (z_1)
        goto label_1418822e1
    
    while (true)
        bool z_2
        
        if (result == rbx[1].d)
            rbx[1].d = result + 1
            z_2 = true
        else
            rbx[1].d
            z_2 = false
        
        if (z_2)
            break
        
        result = 0
        bool z_3
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_3 = true
        else
            result = rbx[1].d
            z_3 = false
        
        if (z_3)
            goto label_1418822e1
    
    if (rbx == 0)
        goto label_1418822e1
    
    if (*(arg1 + 8) == 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_15 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        goto label_1418822e1
    
    int64_t var_28 = *arg3
    void* rax_1 = arg3[1]
    void* var_20_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    int64_t var_18 = *arg2
    void* rax_3 = arg2[1]
    void* var_10_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    sub_141881af0(arg1, &var_18, &var_28, arg4)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp10_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = arg3[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
    
    result.b = 1

return result
