// 函数: sub_141bdb850
// 地址: 0x141bdb850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d u>> 0xf)

if ((result.b & 1) == 0)
    if (arg1[0x41] == 0)
    label_141bdb9e5:
        result = arg1[5]
        
        if (result != 0)
            int64_t* rcx_11 = *(result + 0x28)
            
            if (rcx_11 != 0)
                return sub_141bdb2d0(rcx_11, arg1) __tailcall
    else
        int64_t* rbx_1 = arg1[0x42]
        
        if (rbx_1 == 0)
            goto label_141bdb9e5
        
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            goto label_141bdb9e5
        
        int64_t rsi_1 = 0
        
        if (rbx_1 == 0)
            goto label_141bdb8b6
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_1 + 1
        label_141bdb8b6:
            
            if (rbx_1 != 0)
                rsi_1 = arg1[0x41]
        
        result = (*(*arg1 + 0x150))(arg1)
        uint64_t result_1 = result
        
        if (result == 0)
        label_141bdb99c:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*rbx_1 + 8))(rbx_1, 1)
        else
            result = sub_14243ade0(result)
            
            if (result.b == 0)
                goto label_141bdb99c
            
            result = sub_142436920(result_1)
            
            if (result == 0)
                goto label_141bdb99c
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t var_18 = rsi_1
            int64_t* var_10_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (*(*result + 0x290))(result, &var_18)
            int64_t rax_6 = (*(*arg1 + 0x290))(arg1)
            
            if (rax_6 != 0)
                var_18 = rsi_1
                int64_t* var_10_2 = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int64_t r9_1 = *result
                (*(r9_1 + 0x2a0))(result, rax_6, &var_18, r9_1)
            
            result = sub_1405a46b0(&data_143a30728, arg1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
                
                goto label_141bdb99c

return result
