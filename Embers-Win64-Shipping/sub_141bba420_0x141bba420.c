// 函数: sub_141bba420
// 地址: 0x141bba420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1[0x1e]
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
    else
        result_1[1].d = rax + 1
    
    result = result_1

if (result != 0)
    int64_t rdi_1 = arg1[0x1d]
    
    if (rdi_1 != 0)
        if (result_1 != 0)
            result_1[1].d += 1
        
        int64_t var_28 = rdi_1
        int64_t* result_2 = result_1
        
        if (result_1 != 0)
            result_1[1].d += 1
        
        char rax_2 = sub_140d9c320(arg3, &var_28)
        
        if (result_1 != 0)
            result_1[1].d -= 1
            
            if (result_1[1].d == 1)
                int64_t rdx_1 = *result_1
                (*rdx_1)(result_1, rdx_1)
                int32_t temp3_1 = *(result_1 + 0xc)
                *(result_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*result_1 + 8))(result_1, 1)
        
        if (rax_2 == 0)
            result = (*(*arg1 + 0x378))(arg1, arg4)
        else
            if (result_1 != 0)
                result_1[1].d += 1
            
            var_28 = rdi_1
            
            if (result_1 != 0)
                result_1[1].d += 1
            
            result = sub_140d9c250(arg2, &var_28)
            char rbp_2 = result.b
            
            if (result_1 != 0)
                result_1[1].d -= 1
                
                if (result_1[1].d == 1)
                    int64_t rdx_3 = *result_1
                    result = (*rdx_3)(result_1, rdx_3)
                    int32_t temp6_1 = *(result_1 + 0xc)
                    *(result_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*result_1 + 8))(result_1, 1)
            
            if (result_1 != 0)
                result_1[1].d -= 1
                
                if (result_1[1].d == 1)
                    result = (**result_1)(result_1)
                    int32_t temp7_1 = *(result_1 + 0xc)
                    *(result_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*result_1 + 8))(result_1, 1)
            
            if (rbp_2 == 0)
                result = (*(*arg1 + 0x370))(arg1, arg4)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*result_1 + 8))

return result
