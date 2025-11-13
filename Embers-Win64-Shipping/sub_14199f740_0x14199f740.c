// 函数: sub_14199f740
// 地址: 0x14199f740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x34) u<= 1)
    return 

int64_t* rcx = data_143f0f180

if ((*(*rcx + 0x6e8))(rcx) == 0)
    int32_t rbx_3 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_3)
    
    if (*(arg1 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg1, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_6
    rdx_6.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_3)
    int64_t* rcx_14 = data_143f0f180
    (*(*rcx_14 + 0x260))(rcx_14, arg2)
else
    int64_t var_18
    
    if (arg4 != 0)
        if (*arg4 == 0)
            int64_t* rax_4 = sub_1419aeb50(&var_18, arg2, arg3)
            
            if (arg4 != rax_4)
                *arg4 = *rax_4
                *rax_4 = 0
                int64_t rcx_5 = rax_4[1]
                int64_t* rbx_1 = arg4[1]
                
                if (rcx_5 != rbx_1)
                    rax_4[1] = 0
                    arg4[1] = rcx_5
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp3_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp1_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
        
        var_18 = *arg4
        void* rax_10 = arg4[1]
        void* var_10_1 = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        sub_141999830(arg1, arg2, &var_18)
    else
        sub_141999830(arg1, arg2, sub_1419aeb50(&var_18, arg2, arg3))
