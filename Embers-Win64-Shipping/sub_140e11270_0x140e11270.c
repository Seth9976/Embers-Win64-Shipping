// 函数: sub_140e11270
// 地址: 0x140e11270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    int64_t* rcx = arg1[3].q
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x38) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[3].q
        
        int128_t var_38
        (*(*rcx_1 + 0x48))(rcx_1, &var_38)
        int64_t* var_18
        int64_t* rdi = var_18
        int64_t* rsi = rdi
        char var_28
        arg1[1].b = var_28
        int64_t var_20
        int64_t var_48 = var_20
        int64_t* var_40 = rdi
        *arg1 = var_38
        
        if (rdi != 0)
            rdi[1].d += 1
            rdi = var_18
        
        if (&var_48 != arg1 + 0x18)
            arg2 = var_48.o
            var_48.o = *(arg1 + 0x18)
            rsi = var_40
            *(arg1 + 0x18) = arg2
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp2_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
            
            rdi = var_18
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                int64_t r8_1 = *rdi
                (*r8_1)(rdi, arg2, r8_1)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_2 = *rdi
                    (*(r8_2 + 8))(rdi, 1, r8_2)

return arg1
