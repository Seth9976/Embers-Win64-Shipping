// 函数: sub_140f602e0
// 地址: 0x140f602e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x418) == arg2)
    return 

bool cond:0 = (*(arg1 + 0x4cc) & 4) != 0
*(arg1 + 0x418) = arg2

if (not(cond:0))
    int64_t* var_18
    int64_t** rax_1 = sub_140f42180(arg1, &var_18)
    
    if (arg1 + 0x3a8 != rax_1)
        *(arg1 + 0x3a8) = *rax_1
        *rax_1 = nullptr
        int64_t rcx_1 = rax_1[1]
        int64_t* rdi_1 = *(arg1 + 0x3b0)
        
        if (rcx_1 != rdi_1)
            rax_1[1] = 0
            *(arg1 + 0x3b0) = rcx_1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

*(*(arg1 + 0x398) + 0x2d8) = *(arg1 + 0x418)

if (*(arg1 + 0x418) != 1)
    return sub_140f3ec80(arg1) __tailcall

return sub_140f423a0(arg1) __tailcall
