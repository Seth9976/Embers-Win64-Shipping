// 函数: sub_140ec6c90
// 地址: 0x140ec6c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x3f0)

if (result == 0 || result != *arg2)
    result = sub_140d3c6e0(*(arg1 + 0x3a0) + 0x38)
    
    if (result != 0)
        int64_t rdx = *result
        result = (*(rdx + 0x260))(result, rdx)
        
        if (result.b != 0)
            int64_t* rbx_1 = *(arg4 + 0x78)
            int64_t rsi_1 = *(arg4 + 0x70)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp4_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t var_38 = rsi_1
            int64_t* var_30_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t var_28 = *arg2
            void* rax_3 = arg2[1]
            void* var_20_1 = rax_3
            
            if (rax_3 != 0)
                *(rax_3 + 8) += 1
            
            result = sub_140eddb90(arg1, &var_28, &var_38, arg3, arg4 + 0x18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
