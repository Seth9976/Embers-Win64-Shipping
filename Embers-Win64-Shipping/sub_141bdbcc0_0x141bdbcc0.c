// 函数: sub_141bdbcc0
// 地址: 0x141bdbcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xa8)
*(arg1 + 0x510) = 0

if (result != 0)
label_141bdbcf2:
    result = sub_142436920(result)
    uint64_t result_1 = result
    
    if (result != 0)
        result = sub_141baf330(arg1)
        uint64_t result_2 = result
        
        if (result != 0)
            int64_t* rbx_1 = *(result_1 + 0xf0)
            int64_t* rcx_2 = rbx_1
            
            if (rbx_1 != 0)
                result = zx.q(rbx_1[1].d)
                
                if (result.d == 0)
                    rbx_1 = nullptr
                    rcx_2 = nullptr
                else
                    result = zx.q(result.d + 1)
                    rbx_1[1].d = result.d
            
            if (rcx_2 != 0)
                int64_t* rcx_3 = *(result_1 + 0xe8)
                
                if (rcx_3 != 0)
                    void* var_18
                    result = (*(*rcx_3 + 0x40))(rcx_3, &var_18, result_2, arg1 + 0x514)
                    void* rcx_4 = var_18
                    int64_t* var_10
                    
                    if (rcx_4 != 0)
                        if (var_10 != 0)
                            var_10[1].d += 1
                        
                        result = sub_141bdb410(rcx_4, arg1)
                        
                        if (var_10 != 0)
                            var_10[1].d -= 1
                            
                            if (var_10[1].d == 1)
                                result = (**var_10)(var_10)
                                int32_t temp5_1 = *(var_10 + 0xc)
                                *(var_10 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    result = (*(*var_10 + 8))(var_10, 1)
                    
                    if (var_10 != 0)
                        var_10[1].d -= 1
                        
                        if (var_10[1].d == 1)
                            result = (**var_10)(var_10)
                            int32_t temp3_1 = *(var_10 + 0xc)
                            *(var_10 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                result = (*(*var_10 + 8))(var_10, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, 1)
else
    result = sub_141ee69e0(arg1)
    
    if (result != 0)
        goto label_141bdbcf2

return result
