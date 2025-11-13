// 函数: sub_140f8a040
// 地址: 0x140f8a040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (not(arg2 f!= *(arg1 + 0x368)) && *(arg1 + 0x358) != 0)
    result = *(arg1 + 0x360)

if (arg2 f!= *(arg1 + 0x368) || *(arg1 + 0x358) == 0 || result == 0 || result[1].d s<= 0)
    int64_t* rbx_1 = *(arg1 + 0x360)
    *(arg1 + 0x368) = arg2
    int64_t* rax_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_2 + 1
        
        rax_1 = rbx_1
    
    if (rax_1 != 0)
        int64_t rax_4 = *(arg1 + 0x358)
        
        if (rax_4 != 0)
            int64_t var_18 = rax_4
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            sub_140e27040(arg1, &var_18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140f908f0(arg1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
