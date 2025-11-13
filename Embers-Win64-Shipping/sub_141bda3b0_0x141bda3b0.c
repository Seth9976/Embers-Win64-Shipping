// 函数: sub_141bda3b0
// 地址: 0x141bda3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
void* result = &var_18

if (arg1 + 0xc70 != &var_18)
    result = nullptr
    *(arg1 + 0xc70) = 0
    int64_t* rbx_1 = *(arg1 + 0xc78)
    
    if (rbx_1 != 0)
        *(arg1 + 0xc78) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
