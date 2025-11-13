// 函数: sub_1404a41f0
// 地址: 0x1404a41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f19c == 0 || data_143f0f223 == 0)
    sub_141997e80(&data_1439b69a8)
else
    int64_t* rcx_1 = data_143f0f180
    int32_t var_1c_1 = 0x7f7fffff
    int32_t var_28 = 0x3030300
    int64_t var_24_1 = 0
    int64_t var_18_1 = 1
    char var_10_1 = 0
    int64_t* arg_10
    (*(*rcx_1 + 0x28))(rcx_1, &arg_10, &var_28)
    sub_1405d1600(&data_1439b69b8, &arg_10)
    int64_t* rbx_1 = arg_10
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_3
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_3 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)

return atexit(sub_142cdc2a0) __tailcall
