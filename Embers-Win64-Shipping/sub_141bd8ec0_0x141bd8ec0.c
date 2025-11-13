// 函数: sub_141bd8ec0
// 地址: 0x141bd8ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x528)

if (result != 0)
    void* result_1
    
    if ((*(arg1 + 0x46c) == 0 || *(arg1 + 0x520) != 0) && data_143e29f28 != 0)
        int64_t* rbx_1 = *(arg1 + 0x530)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result_1 = result
        int64_t* var_20_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = sub_140e84360(data_143e29f28, &result_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (*(arg1 + 0x4a0) != 0)
        void* result_2 = *(arg1 + 0xa8)
        
        if (result_2 != 0)
        label_141bd8f84:
            result = sub_14243ade0(result_2)
            
            if (result.b != 0)
                result = sub_142029ab0(*(result_2 + 0x188))
                
                if (result != 0)
                    void var_18
                    int64_t* rax_2 = sub_142029ad0(result, &var_18)
                    result_1 = *rax_2
                    void* rcx_8 = rax_2[1]
                    void* var_20_2 = rcx_8
                    
                    if (rcx_8 != 0)
                        *(rcx_8 + 8) += 1
                    
                    result = sub_140de86e0(*(arg1 + 0x528), &result_1)
                    int64_t* var_10
                    
                    if (var_10 != 0)
                        var_10[1].d -= 1
                        
                        if (var_10[1].d == 1)
                            result = (**var_10)(var_10)
                            int32_t temp3_1 = *(var_10 + 0xc)
                            *(var_10 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                return (*(*var_10 + 8))(var_10, 1)
        else
            result = sub_141ee69e0(arg1)
            result_2 = result
            
            if (result != 0)
                goto label_141bd8f84

return result
