// 函数: sub_140e86930
// 地址: 0x140e86930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
void* result = &var_18

if (arg1 + 0x1d0 != &var_18)
    result = nullptr
    *(arg1 + 0x1d0) = 0
    int64_t* rbx_1 = *(arg1 + 0x1d8)
    
    if (rbx_1 != 0)
        *(arg1 + 0x1d8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
