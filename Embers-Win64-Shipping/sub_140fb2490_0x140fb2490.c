// 函数: sub_140fb2490
// 地址: 0x140fb2490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].d != 0)
    int64_t* rcx = arg1[3]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[4].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[3]
        
        int64_t var_18
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        int64_t* var_10
        int64_t* rdi_1
        
        if (arg1 == &var_18)
        label_140fb253e:
            rdi_1 = var_10
        label_140fb2543:
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp2_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else
            rdi_1 = var_10
            *arg1 = var_18
            int64_t* rsi_1 = arg1[1]
            var_18 = 0
            
            if (rdi_1 == rsi_1)
                goto label_140fb2543
            
            var_10 = nullptr
            arg1[1] = rdi_1
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp3_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
                
                goto label_140fb253e

return arg1
