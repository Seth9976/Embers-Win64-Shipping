// 函数: sub_140eae460
// 地址: 0x140eae460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = *(arg1 + 0x3c8)
int64_t* result = result_2

if (result_2 != 0)
    int32_t rax = result_2[1].d
    
    if (rax == 0)
        result_2 = nullptr
    else
        result_2[1].d = rax + 1
    
    result = result_2

if (result != 0)
    result = *(arg1 + 0x3c0)
    
    if (result != 0)
        int64_t* result_1 = result
        
        if (result_2 != 0)
            result_2[1].d += 1
        
        result = sub_140e27040(arg1 + 8, &result_1)
        
        if (result_2 != 0)
            result_2[1].d -= 1
            
            if (result_2[1].d == 1)
                result = (**result_2)(result_2)
                int32_t temp3_1 = *(result_2 + 0xc)
                *(result_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*result_2 + 8))(result_2, 1)

if (result_2 != 0)
    result_2[1].d -= 1
    
    if (result_2[1].d == 1)
        result = (**result_2)(result_2)
        int32_t temp1_1 = *(result_2 + 0xc)
        *(result_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*result_2 + 8))

return result
