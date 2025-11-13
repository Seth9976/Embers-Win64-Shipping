// 函数: sub_141f19b80
// 地址: 0x141f19b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (*arg1 != 0)
    TEB* gsbase
    
    if (data_143f3b2a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3b2a0)
        
        if (data_143f3b2a0 == 0xffffffff)
            sub_140b58170(&data_143f3b298, "OnBeginCursorOver", 1)
            _Init_thread_footer(&data_143f3b2a0)
    
    void var_28
    int64_t* rax_3 = sub_140d22110(&var_28, &arg1[-0x3de], data_143f3b298)
    int64_t* rbx_1 = rax_3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    
    if (arg2 == &var_18)
    label_141f19c31:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        *arg2 = *rax_3
        int64_t* rsi_1 = arg2[1]
        
        if (rbx_1 == rsi_1)
            goto label_141f19c31
        
        arg2[1] = rbx_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp4_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

return arg2
