// 函数: sub_141ccdc90
// 地址: 0x141ccdc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    void* rax_1 = *(arg1 + 0x50)
    void* rcx = arg1 + 0x60
    
    if (rax_1 != 0)
        rcx = rax_1
    
    void var_18
    int64_t* rax_4 = (*(arg1 + 0x40))(&var_18, (*(*rcx + 8))(rcx), arg3)
    int64_t rbp_1 = *rax_4
    int64_t* rbx_1 = rax_4[1]
    rax_4[1] = 0
    *rax_4 = 0
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    *arg2 = rbp_1
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
