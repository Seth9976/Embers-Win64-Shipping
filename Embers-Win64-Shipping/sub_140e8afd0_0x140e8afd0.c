// 函数: sub_140e8afd0
// 地址: 0x140e8afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_2 = arg1[0x68]
uint64_t result = result_2

if (result_2 != 0)
    int32_t rax = *(result_2 + 8)
    
    if (rax == 0)
        result_2 = 0
    else
        *(result_2 + 8) = rax + 1
    
    result = result_2

if (result == 0)
label_140e8b050:
    
    if (result_2 != 0)
        int32_t temp0_1 = *(result_2 + 8)
        *(result_2 + 8) -= 1
        
        if (temp0_1 == 1)
            result = (**result_2)(result_2)
            int32_t temp1_1 = *(result_2 + 0xc)
            *(result_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*result_2 + 8))
else
    result = arg1[0x67]
    
    if (result == 0)
        goto label_140e8b050
    
    uint64_t result_1 = result
    uint64_t result_3 = result_2
    
    if (result_2 != 0)
        *(result_2 + 8) += 1
    
    result = sub_140e8ab30(arg1, arg2, &result_1, arg3, arg4)
    
    if (result_2 != 0)
        int32_t temp2_1 = *(result_2 + 8)
        *(result_2 + 8) -= 1
        
        if (temp2_1 == 1)
            result = (**result_2)(result_2)
            int32_t temp3_1 = *(result_2 + 0xc)
            *(result_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*result_2 + 8))(result_2, 1)
        
        goto label_140e8b050

return result
