// 函数: sub_141b8f2d0
// 地址: 0x141b8f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result = sub_141ed55e0(arg1, arg2)
int64_t* rcx = data_143e29f28

if (rcx != 0 && arg1[0x40] == 0)
    void*** var_28
    result = sub_140e63b90(rcx, &var_28, arg1[0x42].d)
    int64_t* rbx_1 = result[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    
    if (&arg1[0x40] == &var_18)
    label_141b8f364:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
    else
        arg1[0x40] = *result
        int64_t* rdi_1 = arg1[0x41]
        
        if (rbx_1 == rdi_1)
            goto label_141b8f364
        
        arg1[0x41] = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp4_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*var_20 + 8))(var_20, 1)

return result
