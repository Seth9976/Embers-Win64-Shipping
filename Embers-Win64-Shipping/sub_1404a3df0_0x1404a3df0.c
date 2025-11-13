// 函数: sub_1404a3df0
// 地址: 0x1404a3df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f19c == 0 || data_143f0f223 == 0)
    sub_141997e80(&data_1439b68a0)
else
    int64_t* rcx_1 = data_143f0f180
    int64_t var_18 = 0x6010700
    int32_t var_10_1 = 7
    int16_t var_c_1 = 0xffff
    int64_t* arg_10
    (*(*rcx_1 + 0x38))(rcx_1, &arg_10, &var_18)
    sub_1405d1600(&data_1439b68b0, &arg_10)
    int64_t* rbx_1 = arg_10
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            if (rbx_1[2].b != 0)
                (**rbx_1)(rbx_1, 1)
                return atexit(sub_142cdc1a0) __tailcall
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                (**rbx_1)(rbx_1, 1)
                return atexit(sub_142cdc1a0) __tailcall
            
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_1)
                return atexit(sub_142cdc1a0) __tailcall

return atexit(sub_142cdc1a0) __tailcall
