// 函数: sub_140483460
// 地址: 0x140483460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f19c == 0 || data_143f0f223 == 0)
    sub_141997e80(&data_1439b6190)
else
    int64_t* arg_10
    sub_1405d1600(&data_1439b61a0, sub_1411e0070(&arg_10))
    int64_t* rbx_1 = arg_10
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            if (rbx_1[2].b != 0)
                (**rbx_1)(rbx_1, 1)
                return atexit(sub_142cd5270) __tailcall
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                (**rbx_1)(rbx_1, 1)
                return atexit(sub_142cd5270) __tailcall
            
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_1)
                return atexit(sub_142cd5270) __tailcall

return atexit(sub_142cd5270) __tailcall
