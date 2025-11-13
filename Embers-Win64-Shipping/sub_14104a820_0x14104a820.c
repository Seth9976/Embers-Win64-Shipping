// 函数: sub_14104a820
// 地址: 0x14104a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i_1 = *(arg1 + 0x10)
void* result_1 = arg1

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        void* rbx_1 = *result_1
        
        if (rbx_1 != 0)
            result = zx.q(*(rbx_1 + 0x68))
            *(rbx_1 + 0x68) -= 1
            
            if (result.d == 1)
                char rax
                
                if (*(rbx_1 + 0x70) == 0 && data_143f0f1d0 == 0)
                    rax = sub_1405949a0()
                
                if (*(rbx_1 + 0x70) != 0 || (data_143f0f1d0 == 0 && rax != 0))
                    result = (**(rbx_1 + 0x60))(rbx_1 + 0x60, 1)
                else
                    result = nullptr
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0x6c))
                        *(rbx_1 + 0x6c) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rbx_1 + 0x6c))
                        z_1 = false
                    
                    if (z_1)
                        result = sub_1405dcc10(&data_143f02390, rbx_1 + 0x60)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) == arg2)
    return result

return sub_140809a30(arg1, arg2) __tailcall
