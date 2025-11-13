// 函数: sub_141bf4060
// 地址: 0x141bf4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x528)

if (result != 0)
    int64_t* result_1
    
    if ((*(arg1 + 0x46c) == 0 || *(arg1 + 0x520) != 0) && data_143e29f28 != 0)
        int64_t* rbx_1 = *(arg1 + 0x530)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result_1 = result
        int64_t* var_10_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        sub_140e8d290(data_143e29f28, &result_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = &result_1
    
    if (arg1 + 0x528 != &result_1)
        result = nullptr
        *(arg1 + 0x528) = 0
        int64_t* rbx_2 = *(arg1 + 0x530)
        
        if (rbx_2 != 0)
            *(arg1 + 0x530) = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rbx_2 + 8))(rbx_2, 1)

return result
