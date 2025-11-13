// 函数: sub_141bb99d0
// 地址: 0x141bb99d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t var_18
    sub_141bab3c0(arg3, &var_18)
    int64_t rax_1 = var_18
    int64_t* var_10
    
    if (rax_1 != 0)
        if (var_10 != 0)
            var_10[1].d += 1
        
        *(arg2 + 0x58) = rax_1
        int64_t* rcx_1 = *(arg2 + 0x60)
        
        if (var_10 != rcx_1)
            if (var_10 != 0)
                *(var_10 + 0xc) += 1
                rcx_1 = *(arg2 + 0x60)
            
            if (rcx_1 != 0)
                int32_t temp4_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            *(arg2 + 0x60) = var_10
        
        *(arg2 + 0xb4) &= 0xffffffef
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        sub_140e54f20(arg2, arg2)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

sub_140596b00(arg1, arg2)
return arg1
