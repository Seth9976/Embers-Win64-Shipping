// 函数: sub_141ee1b20
// 地址: 0x141ee1b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x29]

if (result != 0 && (*(result + 0x58) & 0x10) != 0 && *(result + 0xf0) == 2)
    void* result_1 = arg1[0x97]
    
    if (result_1 != 0)
    label_141ee1b81:
        
        if (*(result_1 + 0x38) != 0)
            *(result_1 + 8) = *(sub_1405be820(arg1) + 0x520)
            int64_t* rbx_1 = *(result_1 + 0x40)
            int64_t rbp_1 = *(result_1 + 0x38)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            void var_18
            
            if (result_1 + 0x38 != &var_18)
                *(result_1 + 0x38) = 0
                int64_t* rdi_1 = *(result_1 + 0x40)
                
                if (rdi_1 != 0)
                    *(result_1 + 0x40) = 0
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp3_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            result = (*(*arg1 + 0x970))(arg1, rbp_1, 0)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, 1)
    else
        result = (*(arg1[0x28] + 0x28))(&arg1[0x28])
        arg1[0x97] = result
        result_1 = result
        
        if (result != 0)
            goto label_141ee1b81

return result
