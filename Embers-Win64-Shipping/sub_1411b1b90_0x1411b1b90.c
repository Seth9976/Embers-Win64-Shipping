// 函数: sub_1411b1b90
// 地址: 0x1411b1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10
int32_t result = sub_1405d1600(arg1 + 0x10, sub_1411e01d0(&arg_10))
int64_t* rbx_1 = arg_10

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        if (rbx_1[2].b != 0)
            return (**rbx_1)(rbx_1, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx_1)(rbx_1, 1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_1 + 0xc))
            *(rbx_1 + 0xc) = 1
            z_1 = true
        else
            result = *(rbx_1 + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx_1)

return result
