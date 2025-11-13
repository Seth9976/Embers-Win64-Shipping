// 函数: sub_141906e30
// 地址: 0x141906e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
int32_t result = 0x42ff4a68
*arg1 = &data_142ff4a68
void* rsi = &arg1[3]

do
    int64_t* rbx_1 = *(rsi - 8)
    rsi -= 8
    i -= 1
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            char rax
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax != 0))
                result = (**rbx_1)(rbx_1, 1)
            else
                result = 0
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    result = *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    result = sub_1405dcc10(&data_143f02390, rbx_1)
while (i != 0)

return result
