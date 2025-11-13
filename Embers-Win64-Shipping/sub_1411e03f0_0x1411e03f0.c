// 函数: sub_1411e03f0
// 地址: 0x1411e03f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t* var_18
(*(*rcx + 0xf8))(rcx, &var_18, arg2, &data_143f55750, arg3, arg4)
int64_t* rax_1 = var_18
*arg1 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1
    int64_t* rbx_1 = var_18
    
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

return arg1
