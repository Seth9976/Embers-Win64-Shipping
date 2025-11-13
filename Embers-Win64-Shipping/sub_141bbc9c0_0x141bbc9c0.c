// 函数: sub_141bbc9c0
// 地址: 0x141bbc9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
void* result = &var_18

if (arg1 + 0x18 != &var_18)
    result = nullptr
    *(arg1 + 0x18) = 0
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        *(arg1 + 0x20) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
