// 函数: sub_1410407f0
// 地址: 0x1410407f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
*arg1 = arg2

if (arg2 != 0)
    *(arg2 + 0x68) += 1

if (rdi != 0)
    int32_t rax_1 = *(rdi + 0x68)
    *(rdi + 0x68) -= 1
    
    if (rax_1 == 1)
        char rax_2
        
        if (*(rdi + 0x70) == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (*(rdi + 0x70) != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**(rdi + 0x60))(rdi + 0x60, 1)
        else
            bool z_1
            
            if (0 == *(rdi + 0x6c))
                *(rdi + 0x6c) = 1
                z_1 = true
            else
                *(rdi + 0x6c)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi + 0x60)

return arg1
